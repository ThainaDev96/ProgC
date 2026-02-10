import networkx as nx
import matplotlib.pyplot as plt

# Criar um grafo vazio
G = nx.Graph()

G.add_node(1, nome="Faculdade Dom Bosco")
G.add_node(2, nome="SOGIPA")
G.add_node(3, nome="Casa do Marques")
G.add_node(4, nome="Consulado dos Estados Unidos")
G.add_node(5, nome="Shopping Bourbon Wallig")
G.add_node(6, nome="Carrefour Hipermercado")

G.add_edges_from([(1, 2), (1, 3), (1, 4), (1, 5), (1, 6)])
G.add_edges_from([(2, 3), (2, 4), (2, 5), (2, 6)])
G.add_edges_from([(3, 4), (3, 5), (3, 6)])
G.add_edges_from([(4, 5), (4, 6)])
G.add_edges_from([(5, 6)])

#Dom Bosco
G[1][2]['peso'] = "1,3 Km"
G[1][3]['peso'] = "14,4 Km"
G[1][4]['peso'] = "2,2 Km"
G[1][5]['peso'] = "1,8 Km"
G[1][6]['peso'] = "1,9 km"

#SOGIPA
G[2][3]['peso'] = "14,2 km"
G[2][4]['peso'] = "3,2 km"
G[2][5]['peso'] = "3,5 km"
G[2][6]['peso'] = "2,6 km"

#Casa do Marques
G[3][4]['peso'] = "13,1 km"
G[3][5]['peso'] = "12,8 km"
G[3][6]['peso'] = "13,1 km"

#Consulado Dos Estados
G[4][5]['peso'] = "750 m"
G[4][6]['peso'] = "200 m"

#Bourbon Wallig
G[5][6]['peso'] = "1,0 km"

subgrafos = [G.subgraph(s) for s in nx.connected_components(G)]

"""nx.draw(
    subgrafos[0],
    with_labels=True,
    node_size=800,
    node_color='red'
)"""

# Mostrar os nós atuais
print("Nós:", G.nodes())




# Mostrar as arestas atuais
print("Arestas:", G.edges())







# Visualizar o grafo
pos = nx.spring_layout(G)
nx.draw(G, pos, with_labels=True, node_color='lightblue', font_weight='bold')

# Desenhar os rótulos de peso nas arestas
edge_labels = {(u, v): f"{d['peso']}" for u, v, d in G.edges(data=True) if 'peso' in d}
nx.draw_networkx_edge_labels(G, pos, edge_labels=edge_labels)

plt.title("Grafo usando NetworkX")
plt.show()

# Salvar o grafo em um arquivo GEXF
nx.write_gexf(G, "meu_grafo.gexf")
print("Grafo salvo em 'meu_grafo.gexf'.")

# Carregar o grafo de arquivo GEXF
G_carregado = nx.read_gexf("meu_grafo.gexf")
print("Grafo carregado:", G_carregado.nodes())
#ifndef __DIRECTED_ALG_GRAPH_H__
#define __DIRECTED_ALG_GRAPH_H__

#include "size.h"


// 定义的初始化数据容器
typedef struct connection {
	char tail;
	char head;
}connection;

typedef struct d_graph {
	int vex_num, edge_num;
	char Vex[MAX];
	connection con[MAX];
}d_graph;

// 邻接矩阵定义
struct AMG_Graph
{
	int vex_num, edge_num;

	char Vex[MAX];
	int Edge[MAX][MAX];
};

// 邻接表定义
struct AdjNode
{
	int index;
	struct AdjNode* next;
};

struct VexNode
{
	char node;
	struct AdjNode* first;
};

struct ALG_Graph
{
	int vex_num, edge_num;
	struct VexNode Vex[MAX];
};

// 邻接矩阵相关函数
struct AMG_Graph* Create_AMG_Graph(d_graph* d_graph_data);
int search_AMG_vex(struct AMG_Graph* graph, char c);
void Show_AMG_Graph(struct AMG_Graph* graph);
void BFS_AMG(struct AMG_Graph* graph);
void DFS_AMG(struct AMG_Graph* graph);

// 邻接表相关函数
struct ALG_Graph* Create_ALG_Graph(d_graph* d_graph_data);
int search_ALG_vex(struct ALG_Graph* graph, char c);
void create_adj_node_list(struct ALG_Graph* graph, int i, int j);
void Show_ALG_Graph(struct ALG_Graph* graph);
void BFS_ALG(struct	ALG_Graph* graph);


d_graph* setData();
#endif 
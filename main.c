#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include "directed_graph.h"

#define VERTEX_NUM 4
#define EDGE_NUM 8
char* vertex = "abcd";
char* edge[EDGE_NUM] = { "ab", "ad", "bd", "bc", "cb", "ca", "cd", "dc"};

int main(void)
{
	d_graph* d_graph_data = setData();

	struct AMG_Graph* d_amg_graph = Create_AMG_Graph(d_graph_data);
	Show_AMG_Graph(d_amg_graph);
	printf("Traverse the graph through BFS:\n");
	BFS_AMG(d_amg_graph);
	printf("Traverse the graph through DFS:\n");
	DFS_AMG(d_amg_graph);

	printf("\n");

	struct ALG_Graph* d_alg_graph = Create_ALG_Graph(d_graph_data);
	Show_ALG_Graph(d_alg_graph);

	printf("Traverse the graph through BFS:\n");
	BFS_ALG(d_alg_graph);

	return 0;
}

d_graph* setData()
{
	int i;
	d_graph* data = (d_graph*)malloc(sizeof(d_graph));
	assert(data);
	data->vex_num = VERTEX_NUM;
	data->edge_num = EDGE_NUM;

	for (i = 0; i < data->vex_num; ++i)
		data->Vex[i] = *(vertex+i);
	
	for (i = 0; i < data->edge_num; ++i)
	{
		data->con[i].tail = *(edge[i]+0);
		data->con[i].head = *(edge[i]+1);
	}

	return data;
}
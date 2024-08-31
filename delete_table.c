#include "Version.h"
#if !defined(MYDELTTABLE)
#warning("using solution delete_table")
#else
#warning("using my delete_table.c")

#include <stdlib.h>
#include "node.h"

void delete_table(node **htable, unsigned long tabsz) {
	// TODO: walk through the chains in table
	//
	// TODO: free all the memory associated to each node in each chain
	//
	// TODO: free the entire table

	(void) htable; // suppress unused variable warnings
	(void) tabsz; // TODO: delete these once you start implementation
}
#endif

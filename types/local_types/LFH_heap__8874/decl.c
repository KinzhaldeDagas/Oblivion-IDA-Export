struct LFH_heap
{
LFH_slist_0 *list_defer;
LFH_arena_0 *cached_large_arena;
LFH_class_0 block_class[125];
LFH_class_0 large_class[32];
SLIST_ENTRY entry_orphan;
void *pad[194];
};

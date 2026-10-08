0x4BBAB1: push    0; a4
0x4BBAB3: push    0; Dst
0x4BBAB5: push    ebx; a2
0x4BBAB6: mov     ecx, esi; this
0x4BBAB8: call    TESForm_LoadGenericComponents; Generic fixed-prefix/component DATA overlay. Copies min(chunk_length,fixed_prefix_size), then updates later components only when their starting offset is below chunk_length; omitted suffix components retain prior in-memory values.
0x4BBABD: jmp     TESSigilStone_LoadForm___ChunkLoop_Next

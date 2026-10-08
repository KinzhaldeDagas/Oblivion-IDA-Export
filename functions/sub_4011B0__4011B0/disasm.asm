0x4011B0: mov     eax, [ecx+40h]; Checks whether an address lies in this pool's backing range: base at +0x40 through base + size at +0x110. Called by MemoryHeap_Free before dispatching to MemoryPool_Free.
0x4011B3: mov     edx, [esp+arg_0]
0x4011B7: cmp     edx, eax
0x4011B9: jb      short loc_4011CF
0x4011BB: mov     ecx, [ecx+110h]
0x4011C1: add     ecx, eax
0x4011C3: cmp     edx, ecx
0x4011C5: jnb     short loc_4011CF
0x4011C7: mov     eax, 1
0x4011CC: retn    4
0x4011CF: xor     eax, eax
0x4011D1: retn    4

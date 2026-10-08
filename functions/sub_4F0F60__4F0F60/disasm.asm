0x4F0F60: add     ecx, 0Ch
0x4F0F63: jmp     NiTListNodePool_Acquire; Acquire one zeroed 12-byte NiTList node from Oblivion's synchronized global node pool, replenishing the pool when empty. This allocates list-node storage only; it does not allocate or retain a list payload.

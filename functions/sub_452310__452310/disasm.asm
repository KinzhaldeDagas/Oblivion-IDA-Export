0x452310: push    esi
0x452311: mov     si, [esp+4+arg_0]
0x452316: movzx   eax, si
0x452319: push    1
0x45231B: add     eax, 2
0x45231E: push    eax
0x45231F: mov     ecx, offset FormHeap
0x452324: call    j_MemoryHeap_Alloc
0x452329: mov     [eax], si
0x45232C: pop     esi
0x45232D: retn    4

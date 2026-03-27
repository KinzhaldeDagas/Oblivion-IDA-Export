0xA24FC0: push    offset dword_B1482C
0xA24FC5: mov     ecx, offset dword_B07CFC
0xA24FCA: call    BSSimpleList_Remove
0xA24FCF: mov     eax, off_B14830; "fItemLODDefault:LOD"
0xA24FD4: test    eax, eax
0xA24FD6: jz      short locret_A24FE4
0xA24FD8: cmp     byte ptr [eax], 53h ; 'S'
0xA24FDB: jnz     short locret_A24FE4
0xA24FDD: push    eax
0xA24FDE: call    FormHeapFree
0xA24FE3: pop     ecx
0xA24FE4: retn

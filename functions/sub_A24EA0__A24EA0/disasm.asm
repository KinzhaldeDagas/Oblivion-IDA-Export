0xA24EA0: push    offset aSs?fJ
0xA24EA5: mov     ecx, offset dword_B07CFC
0xA24EAA: call    BSSimpleList_Remove
0xA24EAF: mov     eax, off_B14800; "fTreeLODDefault:LOD"
0xA24EB4: test    eax, eax
0xA24EB6: jz      short locret_A24EC4
0xA24EB8: cmp     byte ptr [eax], 53h ; 'S'
0xA24EBB: jnz     short locret_A24EC4
0xA24EBD: push    eax
0xA24EBE: call    FormHeapFree
0xA24EC3: pop     ecx
0xA24EC4: retn

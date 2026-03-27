0xA24F60: push    offset flt_B1481C
0xA24F65: mov     ecx, offset dword_B07CFC
0xA24F6A: call    BSSimpleList_Remove
0xA24F6F: mov     eax, off_B14820; "fActorLODMin:LOD"
0xA24F74: test    eax, eax
0xA24F76: jz      short locret_A24F84
0xA24F78: cmp     byte ptr [eax], 53h ; 'S'
0xA24F7B: jnz     short locret_A24F84
0xA24F7D: push    eax
0xA24F7E: call    FormHeapFree
0xA24F83: pop     ecx
0xA24F84: retn

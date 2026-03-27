0xA18FC0: push    offset byte_B06D1C
0xA18FC5: mov     ecx, offset dword_B07CFC
0xA18FCA: call    BSSimpleList_Remove
0xA18FCF: mov     eax, off_B06D20; "bLocalMapShader:Display"
0xA18FD4: test    eax, eax
0xA18FD6: jz      short locret_A18FE4
0xA18FD8: cmp     byte ptr [eax], 53h ; 'S'
0xA18FDB: jnz     short locret_A18FE4
0xA18FDD: push    eax
0xA18FDE: call    FormHeapFree
0xA18FE3: pop     ecx
0xA18FE4: retn

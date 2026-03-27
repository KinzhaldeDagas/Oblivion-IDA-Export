0xA18690: push    offset flt_B06704
0xA18695: mov     ecx, offset dword_B07CFC
0xA1869A: call    BSSimpleList_Remove
0xA1869F: mov     eax, off_B06708; "fGlobalTimeMultiplier:General"
0xA186A4: test    eax, eax
0xA186A6: jz      short locret_A186B4
0xA186A8: cmp     byte ptr [eax], 53h ; 'S'
0xA186AB: jnz     short locret_A186B4
0xA186AD: push    eax
0xA186AE: call    FormHeapFree
0xA186B3: pop     ecx
0xA186B4: retn

0xA24CB0: push    offset dword_B14160
0xA24CB5: mov     ecx, offset dword_B07CFC
0xA24CBA: call    BSSimpleList_Remove
0xA24CBF: mov     eax, off_B14164; "iMoveBarMaxMilliseconds:LoadingBar"
0xA24CC4: test    eax, eax
0xA24CC6: jz      short locret_A24CD4
0xA24CC8: cmp     byte ptr [eax], 53h ; 'S'
0xA24CCB: jnz     short locret_A24CD4
0xA24CCD: push    eax
0xA24CCE: call    FormHeapFree
0xA24CD3: pop     ecx
0xA24CD4: retn

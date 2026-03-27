0xA249E0: push    offset dword_B1399C
0xA249E5: mov     ecx, offset dword_B07CFC
0xA249EA: call    BSSimpleList_Remove
0xA249EF: mov     eax, off_B139A0; "iConsoleTextXPos:Menu"
0xA249F4: test    eax, eax
0xA249F6: jz      short locret_A24A04
0xA249F8: cmp     byte ptr [eax], 53h ; 'S'
0xA249FB: jnz     short locret_A24A04
0xA249FD: push    eax
0xA249FE: call    FormHeapFree
0xA24A03: pop     ecx
0xA24A04: retn

0xA24980: push    offset dword_B1398C
0xA24985: mov     ecx, offset dword_B07CFC
0xA2498A: call    BSSimpleList_Remove
0xA2498F: mov     eax, off_B13990; "iConsoleVisibleLines:Menu"
0xA24994: test    eax, eax
0xA24996: jz      short locret_A249A4
0xA24998: cmp     byte ptr [eax], 53h ; 'S'
0xA2499B: jnz     short locret_A249A4
0xA2499D: push    eax
0xA2499E: call    FormHeapFree
0xA249A3: pop     ecx
0xA249A4: retn

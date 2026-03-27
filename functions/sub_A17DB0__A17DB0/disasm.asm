0xA17DB0: push    offset off_B051F4; "255,255,255,255"
0xA17DB5: mov     ecx, offset dword_B07CFC
0xA17DBA: call    BSSimpleList_Remove
0xA17DBF: mov     eax, off_B051F8; "sBumpFadeColor:Weather"
0xA17DC4: test    eax, eax
0xA17DC6: jz      short locret_A17DD4
0xA17DC8: cmp     byte ptr [eax], 53h ; 'S'
0xA17DCB: jnz     short locret_A17DD4
0xA17DCD: push    eax
0xA17DCE: call    FormHeapFree
0xA17DD3: pop     ecx
0xA17DD4: retn

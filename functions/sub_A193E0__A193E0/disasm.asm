0xA193E0: push    offset unk_B06DCC
0xA193E5: mov     ecx, offset dword_B07CFC
0xA193EA: call    BSSimpleList_Remove
0xA193EF: mov     eax, off_B06DD0; "bReportBadTangentSpace:Display"
0xA193F4: test    eax, eax
0xA193F6: jz      short locret_A19404
0xA193F8: cmp     byte ptr [eax], 53h ; 'S'
0xA193FB: jnz     short locret_A19404
0xA193FD: push    eax
0xA193FE: call    FormHeapFree
0xA19403: pop     ecx
0xA19404: retn

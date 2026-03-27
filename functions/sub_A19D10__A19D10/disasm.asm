0xA19D10: push    offset unk_B06F54
0xA19D15: mov     ecx, offset dword_B07CFC
0xA19D1A: call    BSSimpleList_Remove
0xA19D1F: mov     eax, off_B06F58; "iLastHDRSetting"
0xA19D24: test    eax, eax
0xA19D26: jz      short locret_A19D34
0xA19D28: cmp     byte ptr [eax], 53h ; 'S'
0xA19D2B: jnz     short locret_A19D34
0xA19D2D: push    eax
0xA19D2E: call    FormHeapFree
0xA19D33: pop     ecx
0xA19D34: retn

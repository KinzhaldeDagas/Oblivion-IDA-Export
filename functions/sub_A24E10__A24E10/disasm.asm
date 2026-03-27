0xA24E10: push    offset unk_B14390
0xA24E15: mov     ecx, offset dword_B07CFC
0xA24E1A: call    BSSimpleList_Remove
0xA24E1F: mov     eax, off_B14394; "fXenonMenuStickMapCursorMinSpeed:Contro"...
0xA24E24: test    eax, eax
0xA24E26: jz      short locret_A24E34
0xA24E28: cmp     byte ptr [eax], 53h ; 'S'
0xA24E2B: jnz     short locret_A24E34
0xA24E2D: push    eax
0xA24E2E: call    FormHeapFree
0xA24E33: pop     ecx
0xA24E34: retn

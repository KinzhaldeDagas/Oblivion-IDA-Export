0xA24DB0: push    offset unk_B14380
0xA24DB5: mov     ecx, offset dword_B07CFC
0xA24DBA: call    BSSimpleList_Remove
0xA24DBF: mov     eax, off_B14384; "fXenonMenuStickMapCursorGamma:Controls"
0xA24DC4: test    eax, eax
0xA24DC6: jz      short locret_A24DD4
0xA24DC8: cmp     byte ptr [eax], 53h ; 'S'
0xA24DCB: jnz     short locret_A24DD4
0xA24DCD: push    eax
0xA24DCE: call    FormHeapFree
0xA24DD3: pop     ecx
0xA24DD4: retn

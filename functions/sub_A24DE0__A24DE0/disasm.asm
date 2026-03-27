0xA24DE0: push    offset unk_B14388
0xA24DE5: mov     ecx, offset dword_B07CFC
0xA24DEA: call    BSSimpleList_Remove
0xA24DEF: mov     eax, off_B1438C; "fXenonMenuStickMapCursorMaxSpeed:Contro"...
0xA24DF4: test    eax, eax
0xA24DF6: jz      short locret_A24E04
0xA24DF8: cmp     byte ptr [eax], 53h ; 'S'
0xA24DFB: jnz     short locret_A24E04
0xA24DFD: push    eax
0xA24DFE: call    FormHeapFree
0xA24E03: pop     ecx
0xA24E04: retn

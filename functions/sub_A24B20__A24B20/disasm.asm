0xA24B20: push    offset unk_B140B0
0xA24B25: mov     ecx, offset dword_B07CFC
0xA24B2A: call    BSSimpleList_Remove
0xA24B2F: mov     eax, off_B140B4; "fXenonMenuStickSpeedPlayerRotMod:Contro"...
0xA24B34: test    eax, eax
0xA24B36: jz      short locret_A24B44
0xA24B38: cmp     byte ptr [eax], 53h ; 'S'
0xA24B3B: jnz     short locret_A24B44
0xA24B3D: push    eax
0xA24B3E: call    FormHeapFree
0xA24B43: pop     ecx
0xA24B44: retn

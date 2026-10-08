0xA24DB0: push    offset fXenonMenuStickMapCursorGamma; [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
0xA24DB5: mov     ecx, offset dword_B07CFC
0xA24DBA: call    BSSimpleList_Remove
0xA24DBF: mov     eax, fXenonMenuStickMapCursorGammaSettingName
0xA24DC4: test    eax, eax
0xA24DC6: jz      short locret_A24DD4
0xA24DC8: cmp     byte ptr [eax], 53h ; 'S'
0xA24DCB: jnz     short locret_A24DD4
0xA24DCD: push    eax
0xA24DCE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24DD3: pop     ecx
0xA24DD4: retn

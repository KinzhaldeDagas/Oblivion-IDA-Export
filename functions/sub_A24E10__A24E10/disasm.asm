0xA24E10: push    offset fXenonMenuStickMapCursorMinSpeed; [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
0xA24E15: mov     ecx, offset dword_B07CFC
0xA24E1A: call    BSSimpleList_Remove
0xA24E1F: mov     eax, fXenonMenuStickMapCursorMinSpeedSettingName
0xA24E24: test    eax, eax
0xA24E26: jz      short locret_A24E34
0xA24E28: cmp     byte ptr [eax], 53h ; 'S'
0xA24E2B: jnz     short locret_A24E34
0xA24E2D: push    eax
0xA24E2E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24E33: pop     ecx
0xA24E34: retn

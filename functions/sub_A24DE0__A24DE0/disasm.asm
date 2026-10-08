0xA24DE0: push    offset fXenonMenuStickMapCursorMaxSpeed; [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
0xA24DE5: mov     ecx, offset dword_B07CFC
0xA24DEA: call    BSSimpleList_Remove
0xA24DEF: mov     eax, fXenonMenuStickMapCursorMaxSpeedSettingName
0xA24DF4: test    eax, eax
0xA24DF6: jz      short locret_A24E04
0xA24DF8: cmp     byte ptr [eax], 53h ; 'S'
0xA24DFB: jnz     short locret_A24E04
0xA24DFD: push    eax
0xA24DFE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24E03: pop     ecx
0xA24E04: retn

0xA24B20: push    offset fXenonMenuStickSpeedPlayerRotMod; [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
0xA24B25: mov     ecx, offset dword_B07CFC
0xA24B2A: call    BSSimpleList_Remove
0xA24B2F: mov     eax, fXenonMenuStickSpeedPlayerRotModSettingName
0xA24B34: test    eax, eax
0xA24B36: jz      short locret_A24B44
0xA24B38: cmp     byte ptr [eax], 53h ; 'S'
0xA24B3B: jnz     short locret_A24B44
0xA24B3D: push    eax
0xA24B3E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24B43: pop     ecx
0xA24B44: retn

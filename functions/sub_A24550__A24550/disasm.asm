0xA24550: push    offset fXenonMenuMouseXYMult; [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
0xA24555: mov     ecx, offset dword_B07CFC
0xA2455A: call    BSSimpleList_Remove
0xA2455F: mov     eax, fXenonMenuMouseXYMultSettingName
0xA24564: test    eax, eax
0xA24566: jz      short locret_A24574
0xA24568: cmp     byte ptr [eax], 53h ; 'S'
0xA2456B: jnz     short locret_A24574
0xA2456D: push    eax
0xA2456E: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24573: pop     ecx
0xA24574: retn

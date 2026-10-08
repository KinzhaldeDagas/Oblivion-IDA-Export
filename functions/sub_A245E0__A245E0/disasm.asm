0xA245E0: push    offset fXenonMenuDpadRepeatSpeed; [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
0xA245E5: mov     ecx, offset dword_B07CFC
0xA245EA: call    BSSimpleList_Remove
0xA245EF: mov     eax, fXenonMenuDpadRepeatSpeedSettingName
0xA245F4: test    eax, eax
0xA245F6: jz      short locret_A24604
0xA245F8: cmp     byte ptr [eax], 53h ; 'S'
0xA245FB: jnz     short locret_A24604
0xA245FD: push    eax
0xA245FE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24603: pop     ecx
0xA24604: retn

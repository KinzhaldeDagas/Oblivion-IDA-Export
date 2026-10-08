0xA248E0: push    offset fXenonMenuStickSpeedMaxMod; [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
0xA248E5: mov     ecx, offset dword_B07CFC
0xA248EA: call    BSSimpleList_Remove
0xA248EF: mov     eax, fXenonMenuStickSpeedMaxModSettingName
0xA248F4: test    eax, eax
0xA248F6: jz      short locret_A24904
0xA248F8: cmp     byte ptr [eax], 53h ; 'S'
0xA248FB: jnz     short locret_A24904
0xA248FD: push    eax
0xA248FE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA24903: pop     ecx
0xA24904: retn

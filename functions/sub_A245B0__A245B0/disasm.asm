0xA245B0: push    offset fXenonMenuStickSpeed; [Controller decode 2026-07-10] atexit cleanup for registered Xenon-era Controls INI setting.
0xA245B5: mov     ecx, offset dword_B07CFC
0xA245BA: call    BSSimpleList_Remove
0xA245BF: mov     eax, fXenonMenuStickSpeedSettingName
0xA245C4: test    eax, eax
0xA245C6: jz      short locret_A245D4
0xA245C8: cmp     byte ptr [eax], 53h ; 'S'
0xA245CB: jnz     short locret_A245D4
0xA245CD: push    eax
0xA245CE: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0xA245D3: pop     ecx
0xA245D4: retn

0x9E2650: push    0FFFFFFFFh
0x9E2652: push    offset SEH_9E2650
0x9E2657: mov     eax, large fs:0
0x9E265D: push    eax
0x9E265E: mov     eax, ___security_cookie
0x9E2663: xor     eax, esp
0x9E2665: push    eax
0x9E2666: lea     eax, [esp+10h+var_C]
0x9E266A: mov     large fs:0, eax
0x9E2670: push    offset flt_B08190
0x9E2675: mov     ecx, offset INISettingCollection
0x9E267A: mov     [esp+14h+var_4], 0
0x9E2682: call    SettingCollectionList_AddSetting
0x9E2687: push    offset sub_A1B5D0; void (__cdecl *)()
0x9E268C: call    _atexit
0x9E2691: add     esp, 4
0x9E2694: mov     ecx, [esp+10h+var_C]
0x9E2698: mov     large fs:0, ecx
0x9E269F: pop     ecx
0x9E26A0: add     esp, 0Ch
0x9E26A3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B32E0: mov     ecx, offset flt_B08190
0x9B32E5: jmp     loc_403BC0
0x9B32EA: mov     edx, [esp+arg_4]
0x9B32EE: lea     eax, [edx]
0x9B32F0: mov     ecx, [edx-4]
0x9B32F3: xor     ecx, eax
0x9B32F5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B32FA: mov     eax, offset stru_ADF028
0x9B32FF: jmp     ___CxxFrameHandler3

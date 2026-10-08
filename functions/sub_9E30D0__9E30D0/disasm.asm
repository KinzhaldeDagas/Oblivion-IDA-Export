0x9E30D0: push    0FFFFFFFFh
0x9E30D2: push    offset SEH_9E30D0
0x9E30D7: mov     eax, large fs:0
0x9E30DD: push    eax
0x9E30DE: mov     eax, ___security_cookie
0x9E30E3: xor     eax, esp
0x9E30E5: push    eax
0x9E30E6: lea     eax, [esp+10h+var_C]
0x9E30EA: mov     large fs:0, eax
0x9E30F0: push    offset g_fDecalLifetime_Display
0x9E30F5: mov     ecx, offset INISettingCollection
0x9E30FA: mov     [esp+14h+var_4], 0
0x9E3102: call    SettingCollectionList_AddSetting
0x9E3107: push    offset sub_A1BB60; void (__cdecl *)()
0x9E310C: call    _atexit
0x9E3111: add     esp, 4
0x9E3114: mov     ecx, [esp+10h+var_C]
0x9E3118: mov     large fs:0, ecx
0x9E311F: pop     ecx
0x9E3120: add     esp, 0Ch
0x9E3123: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B5980: mov     ecx, offset g_fDecalLifetime_Display
0x9B5985: jmp     loc_403BC0
0x9B598A: mov     edx, [esp+arg_4]
0x9B598E: lea     eax, [edx]
0x9B5990: mov     ecx, [edx-4]
0x9B5993: xor     ecx, eax
0x9B5995: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B599A: mov     eax, offset stru_AE09A0
0x9B599F: jmp     ___CxxFrameHandler3

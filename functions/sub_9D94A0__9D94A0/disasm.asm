0x9D94A0: push    0FFFFFFFFh
0x9D94A2: push    offset SEH_9D94A0
0x9D94A7: mov     eax, large fs:0
0x9D94AD: push    eax
0x9D94AE: mov     eax, ___security_cookie
0x9D94B3: xor     eax, esp
0x9D94B5: push    eax
0x9D94B6: lea     eax, [esp+10h+var_C]
0x9D94BA: mov     large fs:0, eax
0x9D94C0: push    offset iDebugTextTopBottomOffset
0x9D94C5: mov     ecx, offset INISettingCollection
0x9D94CA: mov     [esp+14h+var_4], 0
0x9D94D2: call    SettingCollectionList_AddSetting
0x9D94D7: push    offset sub_A17000; void (__cdecl *)()
0x9D94DC: call    _atexit
0x9D94E1: add     esp, 4
0x9D94E4: mov     ecx, [esp+10h+var_C]
0x9D94E8: mov     large fs:0, ecx
0x9D94EF: pop     ecx
0x9D94F0: add     esp, 0Ch
0x9D94F3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAA80: mov     ecx, offset iDebugTextTopBottomOffset
0x9AAA85: jmp     loc_403BC0
0x9AAA8A: mov     edx, [esp+arg_4]
0x9AAA8E: lea     eax, [edx]
0x9AAA90: mov     ecx, [edx-4]
0x9AAA93: xor     ecx, eax
0x9AAA95: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAA9A: mov     eax, offset stru_AD79E4
0x9AAA9F: jmp     ___CxxFrameHandler3

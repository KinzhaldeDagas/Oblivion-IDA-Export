0x9D9620: push    0FFFFFFFFh
0x9D9622: push    offset SEH_9D9620
0x9D9627: mov     eax, large fs:0
0x9D962D: push    eax
0x9D962E: mov     eax, ___security_cookie
0x9D9633: xor     eax, esp
0x9D9635: push    eax
0x9D9636: lea     eax, [esp+10h+var_C]
0x9D963A: mov     large fs:0, eax
0x9D9640: push    offset off_B03094; "Map loop.bik"
0x9D9645: mov     ecx, offset INISettingCollection
0x9D964A: mov     [esp+14h+var_4], 0
0x9D9652: call    SettingCollectionList_AddSetting
0x9D9657: push    offset sub_A170C0; void (__cdecl *)()
0x9D965C: call    _atexit
0x9D9661: add     esp, 4
0x9D9664: mov     ecx, [esp+10h+var_C]
0x9D9668: mov     large fs:0, ecx
0x9D966F: pop     ecx
0x9D9670: add     esp, 0Ch
0x9D9673: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAB40: mov     ecx, offset off_B03094; "Map loop.bik"
0x9AAB45: jmp     loc_403BC0
0x9AAB4A: mov     edx, [esp+arg_4]
0x9AAB4E: lea     eax, [edx]
0x9AAB50: mov     ecx, [edx-4]
0x9AAB53: xor     ecx, eax
0x9AAB55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAB5A: mov     eax, offset stru_AD7A94
0x9AAB5F: jmp     ___CxxFrameHandler3

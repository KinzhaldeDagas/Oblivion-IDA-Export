0x9DED40: push    0FFFFFFFFh
0x9DED42: push    offset SEH_9DED40
0x9DED47: mov     eax, large fs:0
0x9DED4D: push    eax
0x9DED4E: mov     eax, ___security_cookie
0x9DED53: xor     eax, esp
0x9DED55: push    eax
0x9DED56: lea     eax, [esp+10h+var_C]
0x9DED5A: mov     large fs:0, eax
0x9DED60: push    offset unk_B06F34
0x9DED65: mov     ecx, offset INISettingCollection
0x9DED6A: mov     [esp+14h+var_4], 0
0x9DED72: call    SettingCollectionList_AddSetting
0x9DED77: push    offset sub_A19C50; void (__cdecl *)()
0x9DED7C: call    _atexit
0x9DED81: add     esp, 4
0x9DED84: mov     ecx, [esp+10h+var_C]
0x9DED88: mov     large fs:0, ecx
0x9DED8F: pop     ecx
0x9DED90: add     esp, 0Ch
0x9DED93: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B15A0: mov     ecx, offset unk_B06F34
0x9B15A5: jmp     loc_403BC0
0x9B15AA: mov     edx, [esp+arg_4]
0x9B15AE: lea     eax, [edx]
0x9B15B0: mov     ecx, [edx-4]
0x9B15B3: xor     ecx, eax
0x9B15B5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B15BA: mov     eax, offset stru_ADD760
0x9B15BF: jmp     ___CxxFrameHandler3

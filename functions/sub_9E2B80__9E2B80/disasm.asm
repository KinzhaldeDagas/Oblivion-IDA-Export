0x9E2B80: push    0FFFFFFFFh
0x9E2B82: push    offset SEH_9E2B80
0x9E2B87: mov     eax, large fs:0
0x9E2B8D: push    eax
0x9E2B8E: mov     eax, ___security_cookie
0x9E2B93: xor     eax, esp
0x9E2B95: push    eax
0x9E2B96: lea     eax, [esp+10h+var_C]
0x9E2B9A: mov     large fs:0, eax
0x9E2BA0: push    offset unk_B08B54
0x9E2BA5: mov     ecx, offset INISettingCollection
0x9E2BAA: mov     [esp+14h+var_4], 0
0x9E2BB2: call    SettingCollectionList_AddSetting
0x9E2BB7: push    offset sub_A1B8A0; void (__cdecl *)()
0x9E2BBC: call    _atexit
0x9E2BC1: add     esp, 4
0x9E2BC4: mov     ecx, [esp+10h+var_C]
0x9E2BC8: mov     large fs:0, ecx
0x9E2BCF: pop     ecx
0x9E2BD0: add     esp, 0Ch
0x9E2BD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B4E40: mov     ecx, offset unk_B08B54
0x9B4E45: jmp     loc_403BC0
0x9B4E4A: mov     edx, [esp+arg_4]
0x9B4E4E: lea     eax, [edx]
0x9B4E50: mov     ecx, [edx-4]
0x9B4E53: xor     ecx, eax
0x9B4E55: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B4E5A: mov     eax, offset stru_AE0084
0x9B4E5F: jmp     ___CxxFrameHandler3

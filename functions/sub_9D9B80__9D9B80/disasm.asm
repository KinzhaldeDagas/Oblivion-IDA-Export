0x9D9B80: push    0FFFFFFFFh
0x9D9B82: push    offset SEH_9D9B80
0x9D9B87: mov     eax, large fs:0
0x9D9B8D: push    eax
0x9D9B8E: mov     eax, ___security_cookie
0x9D9B93: xor     eax, esp
0x9D9B95: push    eax
0x9D9B96: lea     eax, [esp+10h+var_C]
0x9D9B9A: mov     large fs:0, eax
0x9D9BA0: push    offset dword_B03154
0x9D9BA5: mov     ecx, offset INISettingCollection
0x9D9BAA: mov     [esp+14h+var_4], 0
0x9D9BB2: call    SettingCollectionList_AddSetting
0x9D9BB7: push    offset sub_A17360; void (__cdecl *)()
0x9D9BBC: call    _atexit
0x9D9BC1: add     esp, 4
0x9D9BC4: mov     ecx, [esp+10h+var_C]
0x9D9BC8: mov     large fs:0, ecx
0x9D9BCF: pop     ecx
0x9D9BD0: add     esp, 0Ch
0x9D9BD3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AAEB0: mov     ecx, offset dword_B03154
0x9AAEB5: jmp     loc_403BC0
0x9AAEBA: mov     edx, [esp+arg_4]
0x9AAEBE: lea     eax, [edx]
0x9AAEC0: mov     ecx, [edx-4]
0x9AAEC3: xor     ecx, eax
0x9AAEC5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AAECA: mov     eax, offset stru_AD7DA8
0x9AAECF: jmp     ___CxxFrameHandler3

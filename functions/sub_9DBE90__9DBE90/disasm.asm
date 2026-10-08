0x9DBE90: push    0FFFFFFFFh
0x9DBE92: push    offset SEH_9DBE90
0x9DBE97: mov     eax, large fs:0
0x9DBE9D: push    eax
0x9DBE9E: mov     eax, ___security_cookie
0x9DBEA3: xor     eax, esp
0x9DBEA5: push    eax
0x9DBEA6: lea     eax, [esp+10h+var_C]
0x9DBEAA: mov     large fs:0, eax
0x9DBEB0: push    offset bFixAIOnLoad
0x9DBEB5: mov     ecx, offset INISettingCollection
0x9DBEBA: mov     [esp+14h+var_4], 0
0x9DBEC2: call    SettingCollectionList_AddSetting
0x9DBEC7: push    offset sub_A184A0; void (__cdecl *)()
0x9DBECC: call    _atexit
0x9DBED1: add     esp, 4
0x9DBED4: mov     ecx, [esp+10h+var_C]
0x9DBED8: mov     large fs:0, ecx
0x9DBEDF: pop     ecx
0x9DBEE0: add     esp, 0Ch
0x9DBEE3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AE8F0: mov     ecx, offset bFixAIOnLoad
0x9AE8F5: jmp     loc_403BC0
0x9AE8FA: mov     edx, [esp+arg_4]
0x9AE8FE: lea     eax, [edx]
0x9AE900: mov     ecx, [edx-4]
0x9AE903: xor     ecx, eax
0x9AE905: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AE90A: mov     eax, offset stru_ADB07C
0x9AE90F: jmp     ___CxxFrameHandler3

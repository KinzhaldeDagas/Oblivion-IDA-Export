0x9DF040: push    0FFFFFFFFh
0x9DF042: push    offset SEH_9DF040
0x9DF047: mov     eax, large fs:0
0x9DF04D: push    eax
0x9DF04E: mov     eax, ___security_cookie
0x9DF053: xor     eax, esp
0x9DF055: push    eax
0x9DF056: lea     eax, [esp+10h+var_C]
0x9DF05A: mov     large fs:0, eax
0x9DF060: push    offset byte_B06F74
0x9DF065: mov     ecx, offset INISettingCollection
0x9DF06A: mov     [esp+14h+var_4], 0
0x9DF072: call    SettingCollectionList_AddSetting
0x9DF077: push    offset sub_A19DD0; void (__cdecl *)()
0x9DF07C: call    _atexit
0x9DF081: add     esp, 4
0x9DF084: mov     ecx, [esp+10h+var_C]
0x9DF088: mov     large fs:0, ecx
0x9DF08F: pop     ecx
0x9DF090: add     esp, 0Ch
0x9DF093: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9B1720: mov     ecx, offset byte_B06F74
0x9B1725: jmp     loc_403BC0
0x9B172A: mov     edx, [esp+arg_4]
0x9B172E: lea     eax, [edx]
0x9B1730: mov     ecx, [edx-4]
0x9B1733: xor     ecx, eax
0x9B1735: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9B173A: mov     eax, offset stru_ADD8C0
0x9B173F: jmp     ___CxxFrameHandler3

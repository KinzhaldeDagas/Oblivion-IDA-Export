0x9D9010: push    0FFFFFFFFh
0x9D9012: push    offset SEH_9D9010
0x9D9017: mov     eax, large fs:0
0x9D901D: push    eax
0x9D901E: mov     eax, ___security_cookie
0x9D9023: xor     eax, esp
0x9D9025: push    eax
0x9D9026: lea     eax, [esp+10h+var_C]
0x9D902A: mov     large fs:0, eax
0x9D9030: push    offset flt_B02DB0
0x9D9035: mov     ecx, offset INISettingCollection
0x9D903A: mov     [esp+14h+var_4], 0
0x9D9042: call    SettingCollectionList_AddSetting
0x9D9047: push    offset sub_A16DC0; void (__cdecl *)()
0x9D904C: call    _atexit
0x9D9051: add     esp, 4
0x9D9054: mov     ecx, [esp+10h+var_C]
0x9D9058: mov     large fs:0, ecx
0x9D905F: pop     ecx
0x9D9060: add     esp, 0Ch
0x9D9063: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AA840: mov     ecx, offset flt_B02DB0
0x9AA845: jmp     loc_403BC0
0x9AA84A: mov     edx, [esp+arg_4]
0x9AA84E: lea     eax, [edx]
0x9AA850: mov     ecx, [edx-4]
0x9AA853: xor     ecx, eax
0x9AA855: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AA85A: mov     eax, offset stru_AD77D4
0x9AA85F: jmp     ___CxxFrameHandler3

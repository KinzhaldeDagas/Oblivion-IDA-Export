0x9DC040: push    0FFFFFFFFh
0x9DC042: push    offset SEH_9DC040
0x9DC047: mov     eax, large fs:0
0x9DC04D: push    eax
0x9DC04E: mov     eax, ___security_cookie
0x9DC053: xor     eax, esp
0x9DC055: push    eax
0x9DC056: lea     eax, [esp+10h+var_C]
0x9DC05A: mov     large fs:0, eax
0x9DC060: push    offset flt_B06530
0x9DC065: mov     ecx, offset INISettingCollection
0x9DC06A: mov     [esp+14h+var_4], 0
0x9DC072: call    SettingCollectionList_AddSetting
0x9DC077: push    offset sub_A18580; void (__cdecl *)()
0x9DC07C: call    _atexit
0x9DC081: add     esp, 4
0x9DC084: mov     ecx, [esp+10h+var_C]
0x9DC088: mov     large fs:0, ecx
0x9DC08F: pop     ecx
0x9DC090: add     esp, 0Ch
0x9DC093: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9AEEE0: mov     ecx, offset flt_B06530
0x9AEEE5: jmp     loc_403BC0
0x9AEEEA: mov     edx, [esp+arg_4]
0x9AEEEE: lea     eax, [edx]
0x9AEEF0: mov     ecx, [edx-4]
0x9AEEF3: xor     ecx, eax
0x9AEEF5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9AEEFA: mov     eax, offset stru_ADB5A0
0x9AEEFF: jmp     ___CxxFrameHandler3

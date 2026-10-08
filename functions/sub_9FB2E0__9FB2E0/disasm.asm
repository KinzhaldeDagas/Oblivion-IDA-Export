0x9FB2E0: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FB2E2: push    offset SEH_9FB2E0
0x9FB2E7: mov     eax, large fs:0
0x9FB2ED: push    eax
0x9FB2EE: mov     eax, ___security_cookie
0x9FB2F3: xor     eax, esp
0x9FB2F5: push    eax
0x9FB2F6: lea     eax, [esp+10h+var_C]
0x9FB2FA: mov     large fs:0, eax
0x9FB300: push    offset fXenonMenuStickSpeed
0x9FB305: mov     ecx, offset INISettingCollection
0x9FB30A: mov     [esp+14h+var_4], 0
0x9FB312: call    SettingCollectionList_AddSetting
0x9FB317: push    offset INISetting_Destroy_fXenonMenuStickSpeed; void (__cdecl *)()
0x9FB31C: call    _atexit
0x9FB321: add     esp, 4
0x9FB324: mov     ecx, [esp+10h+var_C]
0x9FB328: mov     large fs:0, ecx
0x9FB32F: pop     ecx
0x9FB330: add     esp, 0Ch
0x9FB333: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEDC0: mov     ecx, offset fXenonMenuStickSpeed
0x9BEDC5: jmp     loc_403BC0
0x9BEDCA: mov     edx, [esp+arg_4]
0x9BEDCE: lea     eax, [edx]
0x9BEDD0: mov     ecx, [edx-4]
0x9BEDD3: xor     ecx, eax
0x9BEDD5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEDDA: mov     eax, offset stru_AE8430
0x9BEDDF: jmp     ___CxxFrameHandler3

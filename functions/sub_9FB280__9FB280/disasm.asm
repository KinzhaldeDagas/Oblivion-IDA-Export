0x9FB280: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FB282: push    offset SEH_9FB280
0x9FB287: mov     eax, large fs:0
0x9FB28D: push    eax
0x9FB28E: mov     eax, ___security_cookie
0x9FB293: xor     eax, esp
0x9FB295: push    eax
0x9FB296: lea     eax, [esp+10h+var_C]
0x9FB29A: mov     large fs:0, eax
0x9FB2A0: push    offset iXenonMenuStickDeadZone
0x9FB2A5: mov     ecx, offset INISettingCollection
0x9FB2AA: mov     [esp+14h+var_4], 0
0x9FB2B2: call    SettingCollectionList_AddSetting
0x9FB2B7: push    offset INISetting_Destroy_iXenonMenuStickDeadZone; void (__cdecl *)()
0x9FB2BC: call    _atexit
0x9FB2C1: add     esp, 4
0x9FB2C4: mov     ecx, [esp+10h+var_C]
0x9FB2C8: mov     large fs:0, ecx
0x9FB2CF: pop     ecx
0x9FB2D0: add     esp, 0Ch
0x9FB2D3: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BED90: mov     ecx, offset iXenonMenuStickDeadZone
0x9BED95: jmp     loc_403BC0
0x9BED9A: mov     edx, [esp+arg_4]
0x9BED9E: lea     eax, [edx]
0x9BEDA0: mov     ecx, [edx-4]
0x9BEDA3: xor     ecx, eax
0x9BEDA5: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEDAA: mov     eax, offset stru_AE8404
0x9BEDAF: jmp     ___CxxFrameHandler3

0x9FB340: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FB342: push    offset SEH_9FB340
0x9FB347: mov     eax, large fs:0
0x9FB34D: push    eax
0x9FB34E: mov     eax, ___security_cookie
0x9FB353: xor     eax, esp
0x9FB355: push    eax
0x9FB356: lea     eax, [esp+10h+var_C]
0x9FB35A: mov     large fs:0, eax
0x9FB360: push    offset fXenonMenuDpadRepeatSpeed
0x9FB365: mov     ecx, offset INISettingCollection
0x9FB36A: mov     [esp+14h+var_4], 0
0x9FB372: call    SettingCollectionList_AddSetting
0x9FB377: push    offset INISetting_Destroy_fXenonMenuDpadRepeatSpeed; void (__cdecl *)()
0x9FB37C: call    _atexit
0x9FB381: add     esp, 4
0x9FB384: mov     ecx, [esp+10h+var_C]
0x9FB388: mov     large fs:0, ecx
0x9FB38F: pop     ecx
0x9FB390: add     esp, 0Ch
0x9FB393: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BEDF0: mov     ecx, offset fXenonMenuDpadRepeatSpeed
0x9BEDF5: jmp     loc_403BC0
0x9BEDFA: mov     edx, [esp+arg_4]
0x9BEDFE: lea     eax, [edx]
0x9BEE00: mov     ecx, [edx-4]
0x9BEE03: xor     ecx, eax
0x9BEE05: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BEE0A: mov     eax, offset stru_AE845C
0x9BEE0F: jmp     ___CxxFrameHandler3

0x9FB940: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FB942: push    offset SEH_9FB940
0x9FB947: mov     eax, large fs:0
0x9FB94D: push    eax
0x9FB94E: mov     eax, ___security_cookie
0x9FB953: xor     eax, esp
0x9FB955: push    eax
0x9FB956: lea     eax, [esp+10h+var_C]
0x9FB95A: mov     large fs:0, eax
0x9FB960: push    offset fXenonMenuStickSpeedMaxMod
0x9FB965: mov     ecx, offset INISettingCollection
0x9FB96A: mov     [esp+14h+var_4], 0
0x9FB972: call    SettingCollectionList_AddSetting
0x9FB977: push    offset INISetting_Destroy_fXenonMenuStickSpeedMaxMod; void (__cdecl *)()
0x9FB97C: call    _atexit
0x9FB981: add     esp, 4
0x9FB984: mov     ecx, [esp+10h+var_C]
0x9FB988: mov     large fs:0, ecx
0x9FB98F: pop     ecx
0x9FB990: add     esp, 0Ch
0x9FB993: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BF0F0: mov     ecx, offset fXenonMenuStickSpeedMaxMod
0x9BF0F5: jmp     loc_403BC0
0x9BF0FA: mov     edx, [esp+arg_4]
0x9BF0FE: lea     eax, [edx]
0x9BF100: mov     ecx, [edx-4]
0x9BF103: xor     ecx, eax
0x9BF105: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BF10A: mov     eax, offset stru_AE871C
0x9BF10F: jmp     ___CxxFrameHandler3

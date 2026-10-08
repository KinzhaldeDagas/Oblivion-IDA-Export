0x9FB220: push    0FFFFFFFFh; [Controller decode 2026-07-10] Registers the paired Xenon-era Controls INI setting with INISettingCollection and installs its atexit cleanup.
0x9FB222: push    offset SEH_9FB220
0x9FB227: mov     eax, large fs:0
0x9FB22D: push    eax
0x9FB22E: mov     eax, ___security_cookie
0x9FB233: xor     eax, esp
0x9FB235: push    eax
0x9FB236: lea     eax, [esp+10h+var_C]
0x9FB23A: mov     large fs:0, eax
0x9FB240: push    offset fXenonMenuMouseXYMult
0x9FB245: mov     ecx, offset INISettingCollection
0x9FB24A: mov     [esp+14h+var_4], 0
0x9FB252: call    SettingCollectionList_AddSetting
0x9FB257: push    offset INISetting_Destroy_fXenonMenuMouseXYMult; void (__cdecl *)()
0x9FB25C: call    _atexit
0x9FB261: add     esp, 4
0x9FB264: mov     ecx, [esp+10h+var_C]
0x9FB268: mov     large fs:0, ecx
0x9FB26F: pop     ecx
0x9FB270: add     esp, 0Ch
0x9FB273: retn
0x403BC0: mov     eax, [ecx+4]
0x403BC3: test    eax, eax
0x403BC5: jz      short locret_403BD3
0x403BC7: cmp     byte ptr [eax], 53h ; 'S'
0x403BCA: jnz     short locret_403BD3
0x403BCC: push    eax
0x403BCD: call    FormHeapFree; Hot Reload OBSE decode: FormHeapFree(ptr) null-checks then frees through FormHeap. Safe for replacement script data cleanup.
0x403BD2: pop     ecx
0x403BD3: retn
0x9BED60: mov     ecx, offset fXenonMenuMouseXYMult
0x9BED65: jmp     loc_403BC0
0x9BED6A: mov     edx, [esp+arg_4]
0x9BED6E: lea     eax, [edx]
0x9BED70: mov     ecx, [edx-4]
0x9BED73: xor     ecx, eax
0x9BED75: call    @__security_check_cookie@4; __security_check_cookie(x)
0x9BED7A: mov     eax, offset stru_AE83D8
0x9BED7F: jmp     ___CxxFrameHandler3

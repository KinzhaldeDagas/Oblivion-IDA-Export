0x9DDD80: push    0FFFFFFFFh
0x9DDD82: push    offset SEH_9DDD80
0x9DDD87: mov     eax, large fs:0
0x9DDD8D: push    eax
0x9DDD8E: mov     eax, ___security_cookie
0x9DDD93: xor     eax, esp
0x9DDD95: push    eax
0x9DDD96: lea     eax, [esp+10h+var_C]
0x9DDD9A: mov     large fs:0, eax
0x9DDDA0: push    offset bIsHDR
0x9DDDA5: mov     ecx, offset INISettingCollection
0x9DDDAA: mov     [esp+14h+var_4], 0
0x9DDDB2: call    SettingCollectionList_AddSetting
0x9DDDB7: push    offset sub_A19470; void (__cdecl *)()
0x9DDDBC: call    _atexit
0x9DDDC1: add     esp, 4
0x9DDDC4: mov     ecx, [esp+10h+var_C]
0x9DDDC8: mov     large fs:0, ecx
0x9DDDCF: pop     ecx
0x9DDDD0: add     esp, 0Ch
0x9DDDD3: retn

0x9DC2D0: push    0FFFFFFFFh
0x9DC2D2: push    offset SEH_9DC2D0
0x9DC2D7: mov     eax, large fs:0
0x9DC2DD: push    eax
0x9DC2DE: mov     eax, ___security_cookie
0x9DC2E3: xor     eax, esp
0x9DC2E5: push    eax
0x9DC2E6: lea     eax, [esp+10h+var_C]
0x9DC2EA: mov     large fs:0, eax
0x9DC2F0: push    offset flt_B06704
0x9DC2F5: mov     ecx, offset INISettingCollection
0x9DC2FA: mov     [esp+14h+var_4], 0
0x9DC302: call    SettingCollectionList_AddSetting
0x9DC307: push    offset sub_A18690; void (__cdecl *)()
0x9DC30C: call    _atexit
0x9DC311: add     esp, 4
0x9DC314: mov     ecx, [esp+10h+var_C]
0x9DC318: mov     large fs:0, ecx
0x9DC31F: pop     ecx
0x9DC320: add     esp, 0Ch
0x9DC323: retn

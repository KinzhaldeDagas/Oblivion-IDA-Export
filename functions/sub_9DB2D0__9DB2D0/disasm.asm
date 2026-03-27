0x9DB2D0: push    0FFFFFFFFh
0x9DB2D2: push    offset SEH_9DB2D0
0x9DB2D7: mov     eax, large fs:0
0x9DB2DD: push    eax
0x9DB2DE: mov     eax, ___security_cookie
0x9DB2E3: xor     eax, esp
0x9DB2E5: push    eax
0x9DB2E6: lea     eax, [esp+10h+var_C]
0x9DB2EA: mov     large fs:0, eax
0x9DB2F0: push    offset iMaxPickHavok
0x9DB2F5: mov     ecx, offset INISettingCollection
0x9DB2FA: mov     [esp+14h+var_4], 0
0x9DB302: call    SettingCollectionList_AddSetting
0x9DB307: push    offset sub_A17ED0; void (__cdecl *)()
0x9DB30C: call    _atexit
0x9DB311: add     esp, 4
0x9DB314: mov     ecx, [esp+10h+var_C]
0x9DB318: mov     large fs:0, ecx
0x9DB31F: pop     ecx
0x9DB320: add     esp, 0Ch
0x9DB323: retn

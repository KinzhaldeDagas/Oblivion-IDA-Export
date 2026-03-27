0x9FCAC0: push    0FFFFFFFFh
0x9FCAC2: push    offset SEH_9FCAC0
0x9FCAC7: mov     eax, large fs:0
0x9FCACD: push    eax
0x9FCACE: mov     eax, ___security_cookie
0x9FCAD3: xor     eax, esp
0x9FCAD5: push    eax
0x9FCAD6: lea     eax, [esp+10h+var_C]
0x9FCADA: mov     large fs:0, eax
0x9FCAE0: push    offset flt_B1484C
0x9FCAE5: mov     ecx, offset INISettingCollection
0x9FCAEA: mov     [esp+14h+var_4], 0
0x9FCAF2: call    SettingCollectionList_AddSetting
0x9FCAF7: push    offset sub_A25080; void (__cdecl *)()
0x9FCAFC: call    _atexit
0x9FCB01: add     esp, 4
0x9FCB04: mov     ecx, [esp+10h+var_C]
0x9FCB08: mov     large fs:0, ecx
0x9FCB0F: pop     ecx
0x9FCB10: add     esp, 0Ch
0x9FCB13: retn

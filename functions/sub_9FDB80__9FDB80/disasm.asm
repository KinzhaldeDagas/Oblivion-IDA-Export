0x9FDB80: push    0FFFFFFFFh
0x9FDB82: push    offset SEH_9FDB80
0x9FDB87: mov     eax, large fs:0
0x9FDB8D: push    eax
0x9FDB8E: mov     eax, ___security_cookie
0x9FDB93: xor     eax, esp
0x9FDB95: push    eax
0x9FDB96: lea     eax, [esp+10h+var_C]
0x9FDB9A: mov     large fs:0, eax
0x9FDBA0: push    offset byte_B14E98
0x9FDBA5: mov     ecx, offset INISettingCollection
0x9FDBAA: mov     [esp+14h+var_4], 0
0x9FDBB2: call    SettingCollectionList_AddSetting
0x9FDBB7: push    offset sub_A258C0; void (__cdecl *)()
0x9FDBBC: call    _atexit
0x9FDBC1: add     esp, 4
0x9FDBC4: mov     ecx, [esp+10h+var_C]
0x9FDBC8: mov     large fs:0, ecx
0x9FDBCF: pop     ecx
0x9FDBD0: add     esp, 0Ch
0x9FDBD3: retn

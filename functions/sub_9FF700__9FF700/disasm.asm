0x9FF700: push    0FFFFFFFFh
0x9FF702: push    offset SEH_9FF700
0x9FF707: mov     eax, large fs:0
0x9FF70D: push    eax
0x9FF70E: mov     eax, ___security_cookie
0x9FF713: xor     eax, esp
0x9FF715: push    eax
0x9FF716: lea     eax, [esp+10h+var_C]
0x9FF71A: mov     large fs:0, eax
0x9FF720: push    offset unk_B16294
0x9FF725: mov     ecx, offset INISettingCollection
0x9FF72A: mov     [esp+14h+var_4], 0
0x9FF732: call    SettingCollectionList_AddSetting
0x9FF737: push    offset sub_A26460; void (__cdecl *)()
0x9FF73C: call    _atexit
0x9FF741: add     esp, 4
0x9FF744: mov     ecx, [esp+10h+var_C]
0x9FF748: mov     large fs:0, ecx
0x9FF74F: pop     ecx
0x9FF750: add     esp, 0Ch
0x9FF753: retn

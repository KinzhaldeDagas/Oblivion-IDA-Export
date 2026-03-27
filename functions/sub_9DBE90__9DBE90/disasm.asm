0x9DBE90: push    0FFFFFFFFh
0x9DBE92: push    offset SEH_9DBE90
0x9DBE97: mov     eax, large fs:0
0x9DBE9D: push    eax
0x9DBE9E: mov     eax, ___security_cookie
0x9DBEA3: xor     eax, esp
0x9DBEA5: push    eax
0x9DBEA6: lea     eax, [esp+10h+var_C]
0x9DBEAA: mov     large fs:0, eax
0x9DBEB0: push    offset bFixAIOnLoad
0x9DBEB5: mov     ecx, offset INISettingCollection
0x9DBEBA: mov     [esp+14h+var_4], 0
0x9DBEC2: call    SettingCollectionList_AddSetting
0x9DBEC7: push    offset sub_A184A0; void (__cdecl *)()
0x9DBECC: call    _atexit
0x9DBED1: add     esp, 4
0x9DBED4: mov     ecx, [esp+10h+var_C]
0x9DBED8: mov     large fs:0, ecx
0x9DBEDF: pop     ecx
0x9DBEE0: add     esp, 0Ch
0x9DBEE3: retn

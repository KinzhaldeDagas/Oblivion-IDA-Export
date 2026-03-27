0x9FD330: push    0FFFFFFFFh
0x9FD332: push    offset SEH_9FD330
0x9FD337: mov     eax, large fs:0
0x9FD33D: push    eax
0x9FD33E: mov     eax, ___security_cookie
0x9FD343: xor     eax, esp
0x9FD345: push    eax
0x9FD346: lea     eax, [esp+10h+var_C]
0x9FD34A: mov     large fs:0, eax
0x9FD350: push    offset unk_B14974
0x9FD355: mov     ecx, offset INISettingCollection
0x9FD35A: mov     [esp+14h+var_4], 0
0x9FD362: call    SettingCollectionList_AddSetting
0x9FD367: push    offset sub_A254B0; void (__cdecl *)()
0x9FD36C: call    _atexit
0x9FD371: add     esp, 4
0x9FD374: mov     ecx, [esp+10h+var_C]
0x9FD378: mov     large fs:0, ecx
0x9FD37F: pop     ecx
0x9FD380: add     esp, 0Ch
0x9FD383: retn

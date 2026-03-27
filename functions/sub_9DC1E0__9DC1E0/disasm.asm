0x9DC1E0: push    0FFFFFFFFh
0x9DC1E2: push    offset SEH_9DC1E0
0x9DC1E7: mov     eax, large fs:0
0x9DC1ED: push    eax
0x9DC1EE: mov     eax, ___security_cookie
0x9DC1F3: xor     eax, esp
0x9DC1F5: push    eax
0x9DC1F6: lea     eax, [esp+10h+var_C]
0x9DC1FA: mov     large fs:0, eax
0x9DC200: push    offset bLoadHelmentsBackground
0x9DC205: mov     ecx, offset INISettingCollection
0x9DC20A: mov     [esp+14h+var_4], 0
0x9DC212: call    SettingCollectionList_AddSetting
0x9DC217: push    offset sub_A18660; void (__cdecl *)()
0x9DC21C: call    _atexit
0x9DC221: add     esp, 4
0x9DC224: mov     ecx, [esp+10h+var_C]
0x9DC228: mov     large fs:0, ecx
0x9DC22F: pop     ecx
0x9DC230: add     esp, 0Ch
0x9DC233: retn

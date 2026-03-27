0x9FF400: push    0FFFFFFFFh
0x9FF402: push    offset SEH_9FF400
0x9FF407: mov     eax, large fs:0
0x9FF40D: push    eax
0x9FF40E: mov     eax, ___security_cookie
0x9FF413: xor     eax, esp
0x9FF415: push    eax
0x9FF416: lea     eax, [esp+10h+var_C]
0x9FF41A: mov     large fs:0, eax
0x9FF420: push    offset dword_B16254
0x9FF425: mov     ecx, offset INISettingCollection
0x9FF42A: mov     [esp+14h+var_4], 0
0x9FF432: call    SettingCollectionList_AddSetting
0x9FF437: push    offset sub_A262E0; void (__cdecl *)()
0x9FF43C: call    _atexit
0x9FF441: add     esp, 4
0x9FF444: mov     ecx, [esp+10h+var_C]
0x9FF448: mov     large fs:0, ecx
0x9FF44F: pop     ecx
0x9FF450: add     esp, 0Ch
0x9FF453: retn

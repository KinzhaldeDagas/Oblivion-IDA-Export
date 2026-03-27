0x9FB400: push    0FFFFFFFFh
0x9FB402: push    offset SEH_9FB400
0x9FB407: mov     eax, large fs:0
0x9FB40D: push    eax
0x9FB40E: mov     eax, ___security_cookie
0x9FB413: xor     eax, esp
0x9FB415: push    eax
0x9FB416: lea     eax, [esp+10h+var_C]
0x9FB41A: mov     large fs:0, eax
0x9FB420: push    offset bActivateGamebyroPicks
0x9FB425: mov     ecx, offset INISettingCollection
0x9FB42A: mov     [esp+14h+var_4], 0
0x9FB432: call    SettingCollectionList_AddSetting
0x9FB437: push    offset sub_A24640; void (__cdecl *)()
0x9FB43C: call    _atexit
0x9FB441: add     esp, 4
0x9FB444: mov     ecx, [esp+10h+var_C]
0x9FB448: mov     large fs:0, ecx
0x9FB44F: pop     ecx
0x9FB450: add     esp, 0Ch
0x9FB453: retn

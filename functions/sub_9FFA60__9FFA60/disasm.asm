0x9FFA60: push    0FFFFFFFFh
0x9FFA62: push    offset SEH_9FFA60
0x9FFA67: mov     eax, large fs:0
0x9FFA6D: push    eax
0x9FFA6E: mov     eax, ___security_cookie
0x9FFA73: xor     eax, esp
0x9FFA75: push    eax
0x9FFA76: lea     eax, [esp+10h+var_C]
0x9FFA7A: mov     large fs:0, eax
0x9FFA80: push    offset fMediumWeaponSpeedMax_Audio
0x9FFA85: mov     ecx, offset INISettingCollection
0x9FFA8A: mov     [esp+14h+var_4], 0
0x9FFA92: call    SettingCollectionList_AddSetting
0x9FFA97: push    offset sub_A26610; void (__cdecl *)()
0x9FFA9C: call    _atexit
0x9FFAA1: add     esp, 4
0x9FFAA4: mov     ecx, [esp+10h+var_C]
0x9FFAA8: mov     large fs:0, ecx
0x9FFAAF: pop     ecx
0x9FFAB0: add     esp, 0Ch
0x9FFAB3: retn

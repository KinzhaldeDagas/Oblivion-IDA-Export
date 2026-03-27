0x9E3700: push    0FFFFFFFFh
0x9E3702: push    offset SEH_9E3700
0x9E3707: mov     eax, large fs:0
0x9E370D: push    eax
0x9E370E: mov     eax, ___security_cookie
0x9E3713: xor     eax, esp
0x9E3715: push    eax
0x9E3716: lea     eax, [esp+10h+var_C]
0x9E371A: mov     large fs:0, eax
0x9E3720: push    offset SettingGrassWindMagnitudeMax
0x9E3725: mov     ecx, offset INISettingCollection
0x9E372A: mov     [esp+14h+var_4], 0
0x9E3732: call    SettingCollectionList_AddSetting
0x9E3737: push    offset sub_A1BF10; void (__cdecl *)()
0x9E373C: call    _atexit
0x9E3741: add     esp, 4
0x9E3744: mov     ecx, [esp+10h+var_C]
0x9E3748: mov     large fs:0, ecx
0x9E374F: pop     ecx
0x9E3750: add     esp, 0Ch
0x9E3753: retn

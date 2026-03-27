0x9FC880: push    0FFFFFFFFh
0x9FC882: push    offset SEH_9FC880
0x9FC887: mov     eax, large fs:0
0x9FC88D: push    eax
0x9FC88E: mov     eax, ___security_cookie
0x9FC893: xor     eax, esp
0x9FC895: push    eax
0x9FC896: lea     eax, [esp+10h+var_C]
0x9FC89A: mov     large fs:0, eax
0x9FC8A0: push    offset flt_B1481C
0x9FC8A5: mov     ecx, offset INISettingCollection
0x9FC8AA: mov     [esp+14h+var_4], 0
0x9FC8B2: call    SettingCollectionList_AddSetting
0x9FC8B7: push    offset sub_A24F60; void (__cdecl *)()
0x9FC8BC: call    _atexit
0x9FC8C1: add     esp, 4
0x9FC8C4: mov     ecx, [esp+10h+var_C]
0x9FC8C8: mov     large fs:0, ecx
0x9FC8CF: pop     ecx
0x9FC8D0: add     esp, 0Ch
0x9FC8D3: retn

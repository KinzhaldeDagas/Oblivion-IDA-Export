0x9E36A0: push    0FFFFFFFFh
0x9E36A2: push    offset SEH_9E36A0
0x9E36A7: mov     eax, large fs:0
0x9E36AD: push    eax
0x9E36AE: mov     eax, ___security_cookie
0x9E36B3: xor     eax, esp
0x9E36B5: push    eax
0x9E36B6: lea     eax, [esp+10h+var_C]
0x9E36BA: mov     large fs:0, eax
0x9E36C0: push    offset SettingGrassWindMagnitudeMin
0x9E36C5: mov     ecx, offset INISettingCollection
0x9E36CA: mov     [esp+14h+var_4], 0
0x9E36D2: call    SettingCollectionList_AddSetting
0x9E36D7: push    offset sub_A1BEE0; void (__cdecl *)()
0x9E36DC: call    _atexit
0x9E36E1: add     esp, 4
0x9E36E4: mov     ecx, [esp+10h+var_C]
0x9E36E8: mov     large fs:0, ecx
0x9E36EF: pop     ecx
0x9E36F0: add     esp, 0Ch
0x9E36F3: retn

0x9E42A0: push    0FFFFFFFFh
0x9E42A2: push    offset SEH_9E42A0
0x9E42A7: mov     eax, large fs:0
0x9E42AD: push    eax
0x9E42AE: mov     eax, ___security_cookie
0x9E42B3: xor     eax, esp
0x9E42B5: push    eax
0x9E42B6: lea     eax, [esp+10h+var_C]
0x9E42BA: mov     large fs:0, eax
0x9E42C0: push    offset iSimTypeHavok
0x9E42C5: mov     ecx, offset INISettingCollection
0x9E42CA: mov     [esp+14h+var_4], 0
0x9E42D2: call    SettingCollectionList_AddSetting
0x9E42D7: push    offset sub_A1C5B0; void (__cdecl *)()
0x9E42DC: call    _atexit
0x9E42E1: add     esp, 4
0x9E42E4: mov     ecx, [esp+10h+var_C]
0x9E42E8: mov     large fs:0, ecx
0x9E42EF: pop     ecx
0x9E42F0: add     esp, 0Ch
0x9E42F3: retn

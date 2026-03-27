0x9FFBE0: push    0FFFFFFFFh
0x9FFBE2: push    offset SEH_9FFBE0
0x9FFBE7: mov     eax, large fs:0
0x9FFBED: push    eax
0x9FFBEE: mov     eax, ___security_cookie
0x9FFBF3: xor     eax, esp
0x9FFBF5: push    eax
0x9FFBF6: lea     eax, [esp+10h+var_C]
0x9FFBFA: mov     large fs:0, eax
0x9FFC00: push    offset flt_B162FC
0x9FFC05: mov     ecx, offset INISettingCollection
0x9FFC0A: mov     [esp+14h+var_4], 0
0x9FFC12: call    SettingCollectionList_AddSetting
0x9FFC17: push    offset sub_A266D0; void (__cdecl *)()
0x9FFC1C: call    _atexit
0x9FFC21: add     esp, 4
0x9FFC24: mov     ecx, [esp+10h+var_C]
0x9FFC28: mov     large fs:0, ecx
0x9FFC2F: pop     ecx
0x9FFC30: add     esp, 0Ch
0x9FFC33: retn

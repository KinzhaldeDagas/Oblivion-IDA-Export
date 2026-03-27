0x9FF940: push    0FFFFFFFFh
0x9FF942: push    offset SEH_9FF940
0x9FF947: mov     eax, large fs:0
0x9FF94D: push    eax
0x9FF94E: mov     eax, ___security_cookie
0x9FF953: xor     eax, esp
0x9FF955: push    eax
0x9FF956: lea     eax, [esp+10h+var_C]
0x9FF95A: mov     large fs:0, eax
0x9FF960: push    offset unk_B162C4
0x9FF965: mov     ecx, offset INISettingCollection
0x9FF96A: mov     [esp+14h+var_4], 0
0x9FF972: call    SettingCollectionList_AddSetting
0x9FF977: push    offset sub_A26580; void (__cdecl *)()
0x9FF97C: call    _atexit
0x9FF981: add     esp, 4
0x9FF984: mov     ecx, [esp+10h+var_C]
0x9FF988: mov     large fs:0, ecx
0x9FF98F: pop     ecx
0x9FF990: add     esp, 0Ch
0x9FF993: retn

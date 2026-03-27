0x9E30D0: push    0FFFFFFFFh
0x9E30D2: push    offset SEH_9E30D0
0x9E30D7: mov     eax, large fs:0
0x9E30DD: push    eax
0x9E30DE: mov     eax, ___security_cookie
0x9E30E3: xor     eax, esp
0x9E30E5: push    eax
0x9E30E6: lea     eax, [esp+10h+var_C]
0x9E30EA: mov     large fs:0, eax
0x9E30F0: push    offset flt_B097C8
0x9E30F5: mov     ecx, offset INISettingCollection
0x9E30FA: mov     [esp+14h+var_4], 0
0x9E3102: call    SettingCollectionList_AddSetting
0x9E3107: push    offset sub_A1BB60; void (__cdecl *)()
0x9E310C: call    _atexit
0x9E3111: add     esp, 4
0x9E3114: mov     ecx, [esp+10h+var_C]
0x9E3118: mov     large fs:0, ecx
0x9E311F: pop     ecx
0x9E3120: add     esp, 0Ch
0x9E3123: retn

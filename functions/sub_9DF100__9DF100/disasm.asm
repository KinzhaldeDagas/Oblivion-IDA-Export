0x9DF100: push    0FFFFFFFFh
0x9DF102: push    offset SEH_9DF100
0x9DF107: mov     eax, large fs:0
0x9DF10D: push    eax
0x9DF10E: mov     eax, ___security_cookie
0x9DF113: xor     eax, esp
0x9DF115: push    eax
0x9DF116: lea     eax, [esp+10h+var_C]
0x9DF11A: mov     large fs:0, eax
0x9DF120: push    offset bDynamicWindowsReflection
0x9DF125: mov     ecx, offset INISettingCollection
0x9DF12A: mov     [esp+14h+var_4], 0
0x9DF132: call    SettingCollectionList_AddSetting
0x9DF137: push    offset sub_A19E30; void (__cdecl *)()
0x9DF13C: call    _atexit
0x9DF141: add     esp, 4
0x9DF144: mov     ecx, [esp+10h+var_C]
0x9DF148: mov     large fs:0, ecx
0x9DF14F: pop     ecx
0x9DF150: add     esp, 0Ch
0x9DF153: retn

0x9FB220: push    0FFFFFFFFh
0x9FB222: push    offset SEH_9FB220
0x9FB227: mov     eax, large fs:0
0x9FB22D: push    eax
0x9FB22E: mov     eax, ___security_cookie
0x9FB233: xor     eax, esp
0x9FB235: push    eax
0x9FB236: lea     eax, [esp+10h+var_C]
0x9FB23A: mov     large fs:0, eax
0x9FB240: push    offset aRia9Uj
0x9FB245: mov     ecx, offset INISettingCollection
0x9FB24A: mov     [esp+14h+var_4], 0
0x9FB252: call    SettingCollectionList_AddSetting
0x9FB257: push    offset sub_A24550; void (__cdecl *)()
0x9FB25C: call    _atexit
0x9FB261: add     esp, 4
0x9FB264: mov     ecx, [esp+10h+var_C]
0x9FB268: mov     large fs:0, ecx
0x9FB26F: pop     ecx
0x9FB270: add     esp, 0Ch
0x9FB273: retn

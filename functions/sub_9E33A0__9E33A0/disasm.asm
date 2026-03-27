0x9E33A0: push    0FFFFFFFFh
0x9E33A2: push    offset SEH_9E33A0
0x9E33A7: mov     eax, large fs:0
0x9E33AD: push    eax
0x9E33AE: mov     eax, ___security_cookie
0x9E33B3: xor     eax, esp
0x9E33B5: push    eax
0x9E33B6: lea     eax, [esp+10h+var_C]
0x9E33BA: mov     large fs:0, eax
0x9E33C0: push    offset byte_B09AE8
0x9E33C5: mov     ecx, offset INISettingCollection
0x9E33CA: mov     [esp+14h+var_4], 0
0x9E33D2: call    SettingCollectionList_AddSetting
0x9E33D7: push    offset sub_A1BD60; void (__cdecl *)()
0x9E33DC: call    _atexit
0x9E33E1: add     esp, 4
0x9E33E4: mov     ecx, [esp+10h+var_C]
0x9E33E8: mov     large fs:0, ecx
0x9E33EF: pop     ecx
0x9E33F0: add     esp, 0Ch
0x9E33F3: retn

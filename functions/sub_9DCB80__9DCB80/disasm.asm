0x9DCB80: push    0FFFFFFFFh
0x9DCB82: push    offset SEH_9DCB80
0x9DCB87: mov     eax, large fs:0
0x9DCB8D: push    eax
0x9DCB8E: mov     eax, ___security_cookie
0x9DCB93: xor     eax, esp
0x9DCB95: push    eax
0x9DCB96: lea     eax, [esp+10h+var_C]
0x9DCB9A: mov     large fs:0, eax
0x9DCBA0: push    offset dword_B06C64
0x9DCBA5: mov     ecx, offset INISettingCollection
0x9DCBAA: mov     [esp+14h+var_4], 0
0x9DCBB2: call    SettingCollectionList_AddSetting
0x9DCBB7: push    offset sub_A18B70; void (__cdecl *)()
0x9DCBBC: call    _atexit
0x9DCBC1: add     esp, 4
0x9DCBC4: mov     ecx, [esp+10h+var_C]
0x9DCBC8: mov     large fs:0, ecx
0x9DCBCF: pop     ecx
0x9DCBD0: add     esp, 0Ch
0x9DCBD3: retn

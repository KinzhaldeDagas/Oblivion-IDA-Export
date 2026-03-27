0x9FCB80: push    0FFFFFFFFh
0x9FCB82: push    offset SEH_9FCB80
0x9FCB87: mov     eax, large fs:0
0x9FCB8D: push    eax
0x9FCB8E: mov     eax, ___security_cookie
0x9FCB93: xor     eax, esp
0x9FCB95: push    eax
0x9FCB96: lea     eax, [esp+10h+var_C]
0x9FCB9A: mov     large fs:0, eax
0x9FCBA0: push    offset flt_B1485C
0x9FCBA5: mov     ecx, offset INISettingCollection
0x9FCBAA: mov     [esp+14h+var_4], 0
0x9FCBB2: call    SettingCollectionList_AddSetting
0x9FCBB7: push    offset sub_A250E0; void (__cdecl *)()
0x9FCBBC: call    _atexit
0x9FCBC1: add     esp, 4
0x9FCBC4: mov     ecx, [esp+10h+var_C]
0x9FCBC8: mov     large fs:0, ecx
0x9FCBCF: pop     ecx
0x9FCBD0: add     esp, 0Ch
0x9FCBD3: retn

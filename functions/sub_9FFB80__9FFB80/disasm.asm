0x9FFB80: push    0FFFFFFFFh
0x9FFB82: push    offset SEH_9FFB80
0x9FFB87: mov     eax, large fs:0
0x9FFB8D: push    eax
0x9FFB8E: mov     eax, ___security_cookie
0x9FFB93: xor     eax, esp
0x9FFB95: push    eax
0x9FFB96: lea     eax, [esp+10h+var_C]
0x9FFB9A: mov     large fs:0, eax
0x9FFBA0: push    offset dword_B162F4
0x9FFBA5: mov     ecx, offset INISettingCollection
0x9FFBAA: mov     [esp+14h+var_4], 0
0x9FFBB2: call    SettingCollectionList_AddSetting
0x9FFBB7: push    offset sub_A266A0; void (__cdecl *)()
0x9FFBBC: call    _atexit
0x9FFBC1: add     esp, 4
0x9FFBC4: mov     ecx, [esp+10h+var_C]
0x9FFBC8: mov     large fs:0, ecx
0x9FFBCF: pop     ecx
0x9FFBD0: add     esp, 0Ch
0x9FFBD3: retn

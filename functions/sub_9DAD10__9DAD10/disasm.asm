0x9DAD10: push    0FFFFFFFFh
0x9DAD12: push    offset SEH_9DAD10
0x9DAD17: mov     eax, large fs:0
0x9DAD1D: push    eax
0x9DAD1E: mov     eax, ___security_cookie
0x9DAD23: xor     eax, esp
0x9DAD25: push    eax
0x9DAD26: lea     eax, [esp+10h+var_C]
0x9DAD2A: mov     large fs:0, eax
0x9DAD30: push    offset dword_B048EC
0x9DAD35: mov     ecx, offset INISettingCollection
0x9DAD3A: mov     [esp+14h+var_4], 0
0x9DAD42: call    SettingCollectionList_AddSetting
0x9DAD47: push    offset sub_A17BD0; void (__cdecl *)()
0x9DAD4C: call    _atexit
0x9DAD51: add     esp, 4
0x9DAD54: mov     ecx, [esp+10h+var_C]
0x9DAD58: mov     large fs:0, ecx
0x9DAD5F: pop     ecx
0x9DAD60: add     esp, 0Ch
0x9DAD63: retn

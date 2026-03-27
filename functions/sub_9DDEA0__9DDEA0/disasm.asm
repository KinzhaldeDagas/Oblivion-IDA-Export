0x9DDEA0: push    0FFFFFFFFh
0x9DDEA2: push    offset SEH_9DDEA0
0x9DDEA7: mov     eax, large fs:0
0x9DDEAD: push    eax
0x9DDEAE: mov     eax, ___security_cookie
0x9DDEB3: xor     eax, esp
0x9DDEB5: push    eax
0x9DDEB6: lea     eax, [esp+10h+var_C]
0x9DDEBA: mov     large fs:0, eax
0x9DDEC0: push    offset flt_B06DFC
0x9DDEC5: mov     ecx, offset INISettingCollection
0x9DDECA: mov     [esp+14h+var_4], 0
0x9DDED2: call    SettingCollectionList_AddSetting
0x9DDED7: push    offset sub_A19500; void (__cdecl *)()
0x9DDEDC: call    _atexit
0x9DDEE1: add     esp, 4
0x9DDEE4: mov     ecx, [esp+10h+var_C]
0x9DDEE8: mov     large fs:0, ecx
0x9DDEEF: pop     ecx
0x9DDEF0: add     esp, 0Ch
0x9DDEF3: retn

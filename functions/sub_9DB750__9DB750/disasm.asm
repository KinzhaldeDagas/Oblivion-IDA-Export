0x9DB750: push    0FFFFFFFFh
0x9DB752: push    offset SEH_9DB750
0x9DB757: mov     eax, large fs:0
0x9DB75D: push    eax
0x9DB75E: mov     eax, ___security_cookie
0x9DB763: xor     eax, esp
0x9DB765: push    eax
0x9DB766: lea     eax, [esp+10h+var_C]
0x9DB76A: mov     large fs:0, eax
0x9DB770: push    offset lpString2
0x9DB775: mov     ecx, offset INISettingCollection
0x9DB77A: mov     [esp+14h+var_4], 0
0x9DB782: call    SettingCollectionList_AddSetting
0x9DB787: push    offset sub_A180F0; void (__cdecl *)()
0x9DB78C: call    _atexit
0x9DB791: add     esp, 4
0x9DB794: mov     ecx, [esp+10h+var_C]
0x9DB798: mov     large fs:0, ecx
0x9DB79F: pop     ecx
0x9DB7A0: add     esp, 0Ch
0x9DB7A3: retn

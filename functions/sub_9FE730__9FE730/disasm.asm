0x9FE730: push    0FFFFFFFFh
0x9FE732: push    offset SEH_9FE730
0x9FE737: mov     eax, large fs:0
0x9FE73D: push    eax
0x9FE73E: mov     eax, ___security_cookie
0x9FE743: xor     eax, esp
0x9FE745: push    eax
0x9FE746: lea     eax, [esp+10h+var_C]
0x9FE74A: mov     large fs:0, eax
0x9FE750: push    offset byte_B15750
0x9FE755: mov     ecx, offset INISettingCollection
0x9FE75A: mov     [esp+14h+var_4], 0
0x9FE762: call    SettingCollectionList_AddSetting
0x9FE767: push    offset sub_A25E00; void (__cdecl *)()
0x9FE76C: call    _atexit
0x9FE771: add     esp, 4
0x9FE774: mov     ecx, [esp+10h+var_C]
0x9FE778: mov     large fs:0, ecx
0x9FE77F: pop     ecx
0x9FE780: add     esp, 0Ch
0x9FE783: retn

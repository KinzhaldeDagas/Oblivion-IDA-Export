0x9DC730: push    0FFFFFFFFh
0x9DC732: push    offset SEH_9DC730
0x9DC737: mov     eax, large fs:0
0x9DC73D: push    eax
0x9DC73E: mov     eax, ___security_cookie
0x9DC743: xor     eax, esp
0x9DC745: push    eax
0x9DC746: lea     eax, [esp+10h+var_C]
0x9DC74A: mov     large fs:0, eax
0x9DC750: push    offset byte_B06AB8
0x9DC755: mov     ecx, offset INISettingCollection
0x9DC75A: mov     [esp+14h+var_4], 0
0x9DC762: call    SettingCollectionList_AddSetting
0x9DC767: push    offset sub_A188F0; void (__cdecl *)()
0x9DC76C: call    _atexit
0x9DC771: add     esp, 4
0x9DC774: mov     ecx, [esp+10h+var_C]
0x9DC778: mov     large fs:0, ecx
0x9DC77F: pop     ecx
0x9DC780: add     esp, 0Ch
0x9DC783: retn

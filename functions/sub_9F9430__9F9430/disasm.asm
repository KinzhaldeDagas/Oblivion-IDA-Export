0x9F9430: push    0FFFFFFFFh
0x9F9432: push    offset SEH_9F9430
0x9F9437: mov     eax, large fs:0
0x9F943D: push    eax
0x9F943E: mov     eax, ___security_cookie
0x9F9443: xor     eax, esp
0x9F9445: push    eax
0x9F9446: lea     eax, [esp+10h+var_C]
0x9F944A: mov     large fs:0, eax
0x9F9450: push    offset dword_B12630
0x9F9455: mov     ecx, offset INISettingCollection
0x9F945A: mov     [esp+14h+var_4], 0
0x9F9462: call    SettingCollectionList_AddSetting
0x9F9467: push    offset sub_A237B0; void (__cdecl *)()
0x9F946C: call    _atexit
0x9F9471: add     esp, 4
0x9F9474: mov     ecx, [esp+10h+var_C]
0x9F9478: mov     large fs:0, ecx
0x9F947F: pop     ecx
0x9F9480: add     esp, 0Ch
0x9F9483: retn

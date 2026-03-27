0x9DC550: push    0FFFFFFFFh
0x9DC552: push    offset SEH_9DC550
0x9DC557: mov     eax, large fs:0
0x9DC55D: push    eax
0x9DC55E: mov     eax, ___security_cookie
0x9DC563: xor     eax, esp
0x9DC565: push    eax
0x9DC566: lea     eax, [esp+10h+var_C]
0x9DC56A: mov     large fs:0, eax
0x9DC570: push    offset GridDistantCount
0x9DC575: mov     ecx, offset INISettingCollection
0x9DC57A: mov     [esp+14h+var_4], 0
0x9DC582: call    SettingCollectionList_AddSetting
0x9DC587: push    offset sub_A18800; void (__cdecl *)()
0x9DC58C: call    _atexit
0x9DC591: add     esp, 4
0x9DC594: mov     ecx, [esp+10h+var_C]
0x9DC598: mov     large fs:0, ecx
0x9DC59F: pop     ecx
0x9DC5A0: add     esp, 0Ch
0x9DC5A3: retn

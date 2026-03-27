0x9FC700: push    0FFFFFFFFh
0x9FC702: push    offset SEH_9FC700
0x9FC707: mov     eax, large fs:0
0x9FC70D: push    eax
0x9FC70E: mov     eax, ___security_cookie
0x9FC713: xor     eax, esp
0x9FC715: push    eax
0x9FC716: lea     eax, [esp+10h+var_C]
0x9FC71A: mov     large fs:0, eax
0x9FC720: push    offset aSs?fJ
0x9FC725: mov     ecx, offset INISettingCollection
0x9FC72A: mov     [esp+14h+var_4], 0
0x9FC732: call    SettingCollectionList_AddSetting
0x9FC737: push    offset sub_A24EA0; void (__cdecl *)()
0x9FC73C: call    _atexit
0x9FC741: add     esp, 4
0x9FC744: mov     ecx, [esp+10h+var_C]
0x9FC748: mov     large fs:0, ecx
0x9FC74F: pop     ecx
0x9FC750: add     esp, 0Ch
0x9FC753: retn

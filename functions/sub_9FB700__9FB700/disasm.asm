0x9FB700: push    0FFFFFFFFh
0x9FB702: push    offset SEH_9FB700
0x9FB707: mov     eax, large fs:0
0x9FB70D: push    eax
0x9FB70E: mov     eax, ___security_cookie
0x9FB713: xor     eax, esp
0x9FB715: push    eax
0x9FB716: lea     eax, [esp+10h+var_C]
0x9FB71A: mov     large fs:0, eax
0x9FB720: push    offset flt_B135E8
0x9FB725: mov     ecx, offset INISettingCollection
0x9FB72A: mov     [esp+14h+var_4], 0
0x9FB732: call    SettingCollectionList_AddSetting
0x9FB737: push    offset sub_A247C0; void (__cdecl *)()
0x9FB73C: call    _atexit
0x9FB741: add     esp, 4
0x9FB744: mov     ecx, [esp+10h+var_C]
0x9FB748: mov     large fs:0, ecx
0x9FB74F: pop     ecx
0x9FB750: add     esp, 0Ch
0x9FB753: retn

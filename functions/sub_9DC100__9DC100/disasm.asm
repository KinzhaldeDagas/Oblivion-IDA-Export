0x9DC100: push    0FFFFFFFFh
0x9DC102: push    offset SEH_9DC100
0x9DC107: mov     eax, large fs:0
0x9DC10D: push    eax
0x9DC10E: mov     eax, ___security_cookie
0x9DC113: xor     eax, esp
0x9DC115: push    eax
0x9DC116: lea     eax, [esp+10h+var_C]
0x9DC11A: mov     large fs:0, eax
0x9DC120: push    offset flt_B06540
0x9DC125: mov     ecx, offset INISettingCollection
0x9DC12A: mov     [esp+14h+var_4], 0
0x9DC132: call    SettingCollectionList_AddSetting
0x9DC137: push    offset sub_A185E0; void (__cdecl *)()
0x9DC13C: call    _atexit
0x9DC141: add     esp, 4
0x9DC144: mov     ecx, [esp+10h+var_C]
0x9DC148: mov     large fs:0, ecx
0x9DC14F: pop     ecx
0x9DC150: add     esp, 0Ch
0x9DC153: retn

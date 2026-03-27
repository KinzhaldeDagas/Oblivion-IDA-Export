0x9FE930: push    0FFFFFFFFh
0x9FE932: push    offset SEH_9FE930
0x9FE937: mov     eax, large fs:0
0x9FE93D: push    eax
0x9FE93E: mov     eax, ___security_cookie
0x9FE943: xor     eax, esp
0x9FE945: push    eax
0x9FE946: lea     eax, [esp+10h+var_C]
0x9FE94A: mov     large fs:0, eax
0x9FE950: push    offset byte_B1582C
0x9FE955: mov     ecx, offset INISettingCollection
0x9FE95A: mov     [esp+14h+var_4], 0
0x9FE962: call    SettingCollectionList_AddSetting
0x9FE967: push    offset sub_A25F00; void (__cdecl *)()
0x9FE96C: call    _atexit
0x9FE971: add     esp, 4
0x9FE974: mov     ecx, [esp+10h+var_C]
0x9FE978: mov     large fs:0, ecx
0x9FE97F: pop     ecx
0x9FE980: add     esp, 0Ch
0x9FE983: retn

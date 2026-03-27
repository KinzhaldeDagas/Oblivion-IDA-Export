0x9FE360: push    0FFFFFFFFh
0x9FE362: push    offset SEH_9FE360
0x9FE367: mov     eax, large fs:0
0x9FE36D: push    eax
0x9FE36E: mov     eax, ___security_cookie
0x9FE373: xor     eax, esp
0x9FE375: push    eax
0x9FE376: lea     eax, [esp+10h+var_C]
0x9FE37A: mov     large fs:0, eax
0x9FE380: push    offset byte_B14F40
0x9FE385: mov     ecx, offset INISettingCollection
0x9FE38A: mov     [esp+14h+var_4], 0
0x9FE392: call    SettingCollectionList_AddSetting
0x9FE397: push    offset sub_A25CB0; void (__cdecl *)()
0x9FE39C: call    _atexit
0x9FE3A1: add     esp, 4
0x9FE3A4: mov     ecx, [esp+10h+var_C]
0x9FE3A8: mov     large fs:0, ecx
0x9FE3AF: pop     ecx
0x9FE3B0: add     esp, 0Ch
0x9FE3B3: retn

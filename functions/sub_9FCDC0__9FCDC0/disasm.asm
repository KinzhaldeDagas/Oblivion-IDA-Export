0x9FCDC0: push    0FFFFFFFFh
0x9FCDC2: push    offset SEH_9FCDC0
0x9FCDC7: mov     eax, large fs:0
0x9FCDCD: push    eax
0x9FCDCE: mov     eax, ___security_cookie
0x9FCDD3: xor     eax, esp
0x9FCDD5: push    eax
0x9FCDD6: lea     eax, [esp+10h+var_C]
0x9FCDDA: mov     large fs:0, eax
0x9FCDE0: push    offset flt_B1488C
0x9FCDE5: mov     ecx, offset INISettingCollection
0x9FCDEA: mov     [esp+14h+var_4], 0
0x9FCDF2: call    SettingCollectionList_AddSetting
0x9FCDF7: push    offset sub_A25200; void (__cdecl *)()
0x9FCDFC: call    _atexit
0x9FCE01: add     esp, 4
0x9FCE04: mov     ecx, [esp+10h+var_C]
0x9FCE08: mov     large fs:0, ecx
0x9FCE0F: pop     ecx
0x9FCE10: add     esp, 0Ch
0x9FCE13: retn

0x9FD000: push    0FFFFFFFFh
0x9FD002: push    offset SEH_9FD000
0x9FD007: mov     eax, large fs:0
0x9FD00D: push    eax
0x9FD00E: mov     eax, ___security_cookie
0x9FD013: xor     eax, esp
0x9FD015: push    eax
0x9FD016: lea     eax, [esp+10h+var_C]
0x9FD01A: mov     large fs:0, eax
0x9FD020: push    offset flt_B148D4
0x9FD025: mov     ecx, offset INISettingCollection
0x9FD02A: mov     [esp+14h+var_4], 0
0x9FD032: call    SettingCollectionList_AddSetting
0x9FD037: push    offset sub_A25320; void (__cdecl *)()
0x9FD03C: call    _atexit
0x9FD041: add     esp, 4
0x9FD044: mov     ecx, [esp+10h+var_C]
0x9FD048: mov     large fs:0, ecx
0x9FD04F: pop     ecx
0x9FD050: add     esp, 0Ch
0x9FD053: retn

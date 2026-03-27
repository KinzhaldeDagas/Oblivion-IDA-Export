0x9FE060: push    0FFFFFFFFh
0x9FE062: push    offset SEH_9FE060
0x9FE067: mov     eax, large fs:0
0x9FE06D: push    eax
0x9FE06E: mov     eax, ___security_cookie
0x9FE073: xor     eax, esp
0x9FE075: push    eax
0x9FE076: lea     eax, [esp+10h+var_C]
0x9FE07A: mov     large fs:0, eax
0x9FE080: push    offset flt_B14F00
0x9FE085: mov     ecx, offset INISettingCollection
0x9FE08A: mov     [esp+14h+var_4], 0
0x9FE092: call    SettingCollectionList_AddSetting
0x9FE097: push    offset sub_A25B30; void (__cdecl *)()
0x9FE09C: call    _atexit
0x9FE0A1: add     esp, 4
0x9FE0A4: mov     ecx, [esp+10h+var_C]
0x9FE0A8: mov     large fs:0, ecx
0x9FE0AF: pop     ecx
0x9FE0B0: add     esp, 0Ch
0x9FE0B3: retn

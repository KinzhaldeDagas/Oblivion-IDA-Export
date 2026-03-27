0x9D8A10: push    0FFFFFFFFh
0x9D8A12: push    offset SEH_9D8A10
0x9D8A17: mov     eax, large fs:0
0x9D8A1D: push    eax
0x9D8A1E: mov     eax, ___security_cookie
0x9D8A23: xor     eax, esp
0x9D8A25: push    eax
0x9D8A26: lea     eax, [esp+10h+var_C]
0x9D8A2A: mov     large fs:0, eax
0x9D8A30: push    offset byte_B02D30
0x9D8A35: mov     ecx, offset INISettingCollection
0x9D8A3A: mov     [esp+14h+var_4], 0
0x9D8A42: call    SettingCollectionList_AddSetting
0x9D8A47: push    offset sub_A16AC0; void (__cdecl *)()
0x9D8A4C: call    _atexit
0x9D8A51: add     esp, 4
0x9D8A54: mov     ecx, [esp+10h+var_C]
0x9D8A58: mov     large fs:0, ecx
0x9D8A5F: pop     ecx
0x9D8A60: add     esp, 0Ch
0x9D8A63: retn

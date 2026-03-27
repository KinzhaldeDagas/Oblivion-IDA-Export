0x9F8A10: push    0FFFFFFFFh
0x9F8A12: push    offset SEH_9F8A10
0x9F8A17: mov     eax, large fs:0
0x9F8A1D: push    eax
0x9F8A1E: mov     eax, ___security_cookie
0x9F8A23: xor     eax, esp
0x9F8A25: push    eax
0x9F8A26: lea     eax, [esp+10h+var_C]
0x9F8A2A: mov     large fs:0, eax
0x9F8A30: push    offset useFaceGenLODF
0x9F8A35: mov     ecx, offset INISettingCollection
0x9F8A3A: mov     [esp+14h+var_4], 0
0x9F8A42: call    SettingCollectionList_AddSetting
0x9F8A47: push    offset sub_A23370; void (__cdecl *)()
0x9F8A4C: call    _atexit
0x9F8A51: add     esp, 4
0x9F8A54: mov     ecx, [esp+10h+var_C]
0x9F8A58: mov     large fs:0, ecx
0x9F8A5F: pop     ecx
0x9F8A60: add     esp, 0Ch
0x9F8A63: retn

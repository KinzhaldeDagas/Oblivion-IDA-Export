0x9E5A10: push    0FFFFFFFFh
0x9E5A12: push    offset SEH_9E5A10
0x9E5A17: mov     eax, large fs:0
0x9E5A1D: push    eax
0x9E5A1E: mov     eax, ___security_cookie
0x9E5A23: xor     eax, esp
0x9E5A25: push    eax
0x9E5A26: lea     eax, [esp+10h+var_C]
0x9E5A2A: mov     large fs:0, eax
0x9E5A30: push    offset flt_B11BEC
0x9E5A35: mov     ecx, offset BlendSettingCollection
0x9E5A3A: mov     [esp+14h+var_4], 0
0x9E5A42: call    SettingCollectionList_AddSetting
0x9E5A47: push    offset sub_A1D150; void (__cdecl *)()
0x9E5A4C: call    _atexit
0x9E5A51: add     esp, 4
0x9E5A54: mov     ecx, [esp+10h+var_C]
0x9E5A58: mov     large fs:0, ecx
0x9E5A5F: pop     ecx
0x9E5A60: add     esp, 0Ch
0x9E5A63: retn

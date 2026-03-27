0x9DBD10: push    0FFFFFFFFh
0x9DBD12: push    offset SEH_9DBD10
0x9DBD17: mov     eax, large fs:0
0x9DBD1D: push    eax
0x9DBD1E: mov     eax, ___security_cookie
0x9DBD23: xor     eax, esp
0x9DBD25: push    eax
0x9DBD26: lea     eax, [esp+10h+var_C]
0x9DBD2A: mov     large fs:0, eax
0x9DBD30: push    offset Global_DebugSaveBuffer
0x9DBD35: mov     ecx, offset INISettingCollection
0x9DBD3A: mov     [esp+14h+var_4], 0
0x9DBD42: call    SettingCollectionList_AddSetting
0x9DBD47: push    offset sub_A183E0; void (__cdecl *)()
0x9DBD4C: call    _atexit
0x9DBD51: add     esp, 4
0x9DBD54: mov     ecx, [esp+10h+var_C]
0x9DBD58: mov     large fs:0, ecx
0x9DBD5F: pop     ecx
0x9DBD60: add     esp, 0Ch
0x9DBD63: retn

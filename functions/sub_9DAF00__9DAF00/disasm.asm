0x9DAF00: push    0FFFFFFFFh
0x9DAF02: push    offset SEH_9DAF00
0x9DAF07: mov     eax, large fs:0
0x9DAF0D: push    eax
0x9DAF0E: mov     eax, ___security_cookie
0x9DAF13: xor     eax, esp
0x9DAF15: push    eax
0x9DAF16: lea     eax, [esp+10h+var_C]
0x9DAF1A: mov     large fs:0, eax
0x9DAF20: push    offset uInteriorCellBuffer
0x9DAF25: mov     ecx, offset INISettingCollection
0x9DAF2A: mov     [esp+14h+var_4], 0
0x9DAF32: call    SettingCollectionList_AddSetting
0x9DAF37: push    offset sub_A17CF0; void (__cdecl *)()
0x9DAF3C: call    _atexit
0x9DAF41: add     esp, 4
0x9DAF44: mov     ecx, [esp+10h+var_C]
0x9DAF48: mov     large fs:0, ecx
0x9DAF4F: pop     ecx
0x9DAF50: add     esp, 0Ch
0x9DAF53: retn

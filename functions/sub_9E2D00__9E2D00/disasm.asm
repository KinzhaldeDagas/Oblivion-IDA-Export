0x9E2D00: push    0FFFFFFFFh
0x9E2D02: push    offset SEH_9E2D00
0x9E2D07: mov     eax, large fs:0
0x9E2D0D: push    eax
0x9E2D0E: mov     eax, ___security_cookie
0x9E2D13: xor     eax, esp
0x9E2D15: push    eax
0x9E2D16: lea     eax, [esp+10h+var_C]
0x9E2D1A: mov     large fs:0, eax
0x9E2D20: push    offset dword_B08B74
0x9E2D25: mov     ecx, offset INISettingCollection
0x9E2D2A: mov     [esp+14h+var_4], 0
0x9E2D32: call    SettingCollectionList_AddSetting
0x9E2D37: push    offset sub_A1B960; void (__cdecl *)()
0x9E2D3C: call    _atexit
0x9E2D41: add     esp, 4
0x9E2D44: mov     ecx, [esp+10h+var_C]
0x9E2D48: mov     large fs:0, ecx
0x9E2D4F: pop     ecx
0x9E2D50: add     esp, 0Ch
0x9E2D53: retn

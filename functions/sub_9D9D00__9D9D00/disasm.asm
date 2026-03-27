0x9D9D00: push    0FFFFFFFFh
0x9D9D02: push    offset SEH_9D9D00
0x9D9D07: mov     eax, large fs:0
0x9D9D0D: push    eax
0x9D9D0E: mov     eax, ___security_cookie
0x9D9D13: xor     eax, esp
0x9D9D15: push    eax
0x9D9D16: lea     eax, [esp+10h+var_C]
0x9D9D1A: mov     large fs:0, eax
0x9D9D20: push    offset dword_B0317C
0x9D9D25: mov     ecx, offset INISettingCollection
0x9D9D2A: mov     [esp+14h+var_4], 0
0x9D9D32: call    SettingCollectionList_AddSetting
0x9D9D37: push    offset sub_A17420; void (__cdecl *)()
0x9D9D3C: call    _atexit
0x9D9D41: add     esp, 4
0x9D9D44: mov     ecx, [esp+10h+var_C]
0x9D9D48: mov     large fs:0, ecx
0x9D9D4F: pop     ecx
0x9D9D50: add     esp, 0Ch
0x9D9D53: retn

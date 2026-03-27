0x9FDD00: push    0FFFFFFFFh
0x9FDD02: push    offset SEH_9FDD00
0x9FDD07: mov     eax, large fs:0
0x9FDD0D: push    eax
0x9FDD0E: mov     eax, ___security_cookie
0x9FDD13: xor     eax, esp
0x9FDD15: push    eax
0x9FDD16: lea     eax, [esp+10h+var_C]
0x9FDD1A: mov     large fs:0, eax
0x9FDD20: push    offset off_B14EB8; "\\\\vault\\TES4\\LevelData\\"
0x9FDD25: mov     ecx, offset INISettingCollection
0x9FDD2A: mov     [esp+14h+var_4], 0
0x9FDD32: call    SettingCollectionList_AddSetting
0x9FDD37: push    offset sub_A25980; void (__cdecl *)()
0x9FDD3C: call    _atexit
0x9FDD41: add     esp, 4
0x9FDD44: mov     ecx, [esp+10h+var_C]
0x9FDD48: mov     large fs:0, ecx
0x9FDD4F: pop     ecx
0x9FDD50: add     esp, 0Ch
0x9FDD53: retn

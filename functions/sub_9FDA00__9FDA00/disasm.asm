0x9FDA00: push    0FFFFFFFFh
0x9FDA02: push    offset SEH_9FDA00
0x9FDA07: mov     eax, large fs:0
0x9FDA0D: push    eax
0x9FDA0E: mov     eax, ___security_cookie
0x9FDA13: xor     eax, esp
0x9FDA15: push    eax
0x9FDA16: lea     eax, [esp+10h+var_C]
0x9FDA1A: mov     large fs:0, eax
0x9FDA20: push    offset dword_B14E3C
0x9FDA25: mov     ecx, offset INISettingCollection
0x9FDA2A: mov     [esp+14h+var_4], 0
0x9FDA32: call    SettingCollectionList_AddSetting
0x9FDA37: push    offset sub_A257E0; void (__cdecl *)()
0x9FDA3C: call    _atexit
0x9FDA41: add     esp, 4
0x9FDA44: mov     ecx, [esp+10h+var_C]
0x9FDA48: mov     large fs:0, ecx
0x9FDA4F: pop     ecx
0x9FDA50: add     esp, 0Ch
0x9FDA53: retn

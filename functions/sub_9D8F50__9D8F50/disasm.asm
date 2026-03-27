0x9D8F50: push    0FFFFFFFFh
0x9D8F52: push    offset SEH_9D8F50
0x9D8F57: mov     eax, large fs:0
0x9D8F5D: push    eax
0x9D8F5E: mov     eax, ___security_cookie
0x9D8F63: xor     eax, esp
0x9D8F65: push    eax
0x9D8F66: lea     eax, [esp+10h+var_C]
0x9D8F6A: mov     large fs:0, eax
0x9D8F70: push    offset flt_B02DA0
0x9D8F75: mov     ecx, offset INISettingCollection
0x9D8F7A: mov     [esp+14h+var_4], 0
0x9D8F82: call    SettingCollectionList_AddSetting
0x9D8F87: push    offset sub_A16D60; void (__cdecl *)()
0x9D8F8C: call    _atexit
0x9D8F91: add     esp, 4
0x9D8F94: mov     ecx, [esp+10h+var_C]
0x9D8F98: mov     large fs:0, ecx
0x9D8F9F: pop     ecx
0x9D8FA0: add     esp, 0Ch
0x9D8FA3: retn

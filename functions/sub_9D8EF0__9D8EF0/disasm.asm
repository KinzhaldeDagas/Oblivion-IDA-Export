0x9D8EF0: push    0FFFFFFFFh
0x9D8EF2: push    offset SEH_9D8EF0
0x9D8EF7: mov     eax, large fs:0
0x9D8EFD: push    eax
0x9D8EFE: mov     eax, ___security_cookie
0x9D8F03: xor     eax, esp
0x9D8F05: push    eax
0x9D8F06: lea     eax, [esp+10h+var_C]
0x9D8F0A: mov     large fs:0, eax
0x9D8F10: push    offset flt_B02D98
0x9D8F15: mov     ecx, offset INISettingCollection
0x9D8F1A: mov     [esp+14h+var_4], 0
0x9D8F22: call    SettingCollectionList_AddSetting
0x9D8F27: push    offset sub_A16D30; void (__cdecl *)()
0x9D8F2C: call    _atexit
0x9D8F31: add     esp, 4
0x9D8F34: mov     ecx, [esp+10h+var_C]
0x9D8F38: mov     large fs:0, ecx
0x9D8F3F: pop     ecx
0x9D8F40: add     esp, 0Ch
0x9D8F43: retn

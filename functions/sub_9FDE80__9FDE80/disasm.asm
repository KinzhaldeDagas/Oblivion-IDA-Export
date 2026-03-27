0x9FDE80: push    0FFFFFFFFh
0x9FDE82: push    offset SEH_9FDE80
0x9FDE87: mov     eax, large fs:0
0x9FDE8D: push    eax
0x9FDE8E: mov     eax, ___security_cookie
0x9FDE93: xor     eax, esp
0x9FDE95: push    eax
0x9FDE96: lea     eax, [esp+10h+var_C]
0x9FDE9A: mov     large fs:0, eax
0x9FDEA0: push    offset dword_B14ED8
0x9FDEA5: mov     ecx, offset INISettingCollection
0x9FDEAA: mov     [esp+14h+var_4], 0
0x9FDEB2: call    SettingCollectionList_AddSetting
0x9FDEB7: push    offset sub_A25A40; void (__cdecl *)()
0x9FDEBC: call    _atexit
0x9FDEC1: add     esp, 4
0x9FDEC4: mov     ecx, [esp+10h+var_C]
0x9FDEC8: mov     large fs:0, ecx
0x9FDECF: pop     ecx
0x9FDED0: add     esp, 0Ch
0x9FDED3: retn

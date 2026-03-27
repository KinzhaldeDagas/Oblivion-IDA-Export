0x9FDDC0: push    0FFFFFFFFh
0x9FDDC2: push    offset SEH_9FDDC0
0x9FDDC7: mov     eax, large fs:0
0x9FDDCD: push    eax
0x9FDDCE: mov     eax, ___security_cookie
0x9FDDD3: xor     eax, esp
0x9FDDD5: push    eax
0x9FDDD6: lea     eax, [esp+10h+var_C]
0x9FDDDA: mov     large fs:0, eax
0x9FDDE0: push    offset dword_B14EC8
0x9FDDE5: mov     ecx, offset INISettingCollection
0x9FDDEA: mov     [esp+14h+var_4], 0
0x9FDDF2: call    SettingCollectionList_AddSetting
0x9FDDF7: push    offset sub_A259E0; void (__cdecl *)()
0x9FDDFC: call    _atexit
0x9FDE01: add     esp, 4
0x9FDE04: mov     ecx, [esp+10h+var_C]
0x9FDE08: mov     large fs:0, ecx
0x9FDE0F: pop     ecx
0x9FDE10: add     esp, 0Ch
0x9FDE13: retn

0x9FD750: push    0FFFFFFFFh
0x9FD752: push    offset SEH_9FD750
0x9FD757: mov     eax, large fs:0
0x9FD75D: push    eax
0x9FD75E: mov     eax, ___security_cookie
0x9FD763: xor     eax, esp
0x9FD765: push    eax
0x9FD766: lea     eax, [esp+10h+var_C]
0x9FD76A: mov     large fs:0, eax
0x9FD770: push    offset flt_B14CBC
0x9FD775: mov     ecx, offset INISettingCollection
0x9FD77A: mov     [esp+14h+var_4], 0
0x9FD782: call    SettingCollectionList_AddSetting
0x9FD787: push    offset sub_A256A0; void (__cdecl *)()
0x9FD78C: call    _atexit
0x9FD791: add     esp, 4
0x9FD794: mov     ecx, [esp+10h+var_C]
0x9FD798: mov     large fs:0, ecx
0x9FD79F: pop     ecx
0x9FD7A0: add     esp, 0Ch
0x9FD7A3: retn

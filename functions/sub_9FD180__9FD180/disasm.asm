0x9FD180: push    0FFFFFFFFh
0x9FD182: push    offset SEH_9FD180
0x9FD187: mov     eax, large fs:0
0x9FD18D: push    eax
0x9FD18E: mov     eax, ___security_cookie
0x9FD193: xor     eax, esp
0x9FD195: push    eax
0x9FD196: lea     eax, [esp+10h+var_C]
0x9FD19A: mov     large fs:0, eax
0x9FD1A0: push    offset byte_B148F4
0x9FD1A5: mov     ecx, offset INISettingCollection
0x9FD1AA: mov     [esp+14h+var_4], 0
0x9FD1B2: call    SettingCollectionList_AddSetting
0x9FD1B7: push    offset sub_A253E0; void (__cdecl *)()
0x9FD1BC: call    _atexit
0x9FD1C1: add     esp, 4
0x9FD1C4: mov     ecx, [esp+10h+var_C]
0x9FD1C8: mov     large fs:0, ecx
0x9FD1CF: pop     ecx
0x9FD1D0: add     esp, 0Ch
0x9FD1D3: retn

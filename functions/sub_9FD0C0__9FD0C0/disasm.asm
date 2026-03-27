0x9FD0C0: push    0FFFFFFFFh
0x9FD0C2: push    offset SEH_9FD0C0
0x9FD0C7: mov     eax, large fs:0
0x9FD0CD: push    eax
0x9FD0CE: mov     eax, ___security_cookie
0x9FD0D3: xor     eax, esp
0x9FD0D5: push    eax
0x9FD0D6: lea     eax, [esp+10h+var_C]
0x9FD0DA: mov     large fs:0, eax
0x9FD0E0: push    offset dword_B148E4
0x9FD0E5: mov     ecx, offset INISettingCollection
0x9FD0EA: mov     [esp+14h+var_4], 0
0x9FD0F2: call    SettingCollectionList_AddSetting
0x9FD0F7: push    offset sub_A25380; void (__cdecl *)()
0x9FD0FC: call    _atexit
0x9FD101: add     esp, 4
0x9FD104: mov     ecx, [esp+10h+var_C]
0x9FD108: mov     large fs:0, ecx
0x9FD10F: pop     ecx
0x9FD110: add     esp, 0Ch
0x9FD113: retn

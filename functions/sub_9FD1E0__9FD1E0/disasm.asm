0x9FD1E0: push    0FFFFFFFFh
0x9FD1E2: push    offset SEH_9FD1E0
0x9FD1E7: mov     eax, large fs:0
0x9FD1ED: push    eax
0x9FD1EE: mov     eax, ___security_cookie
0x9FD1F3: xor     eax, esp
0x9FD1F5: push    eax
0x9FD1F6: lea     eax, [esp+10h+var_C]
0x9FD1FA: mov     large fs:0, eax
0x9FD200: push    offset dword_B148FC
0x9FD205: mov     ecx, offset INISettingCollection
0x9FD20A: mov     [esp+14h+var_4], 0
0x9FD212: call    SettingCollectionList_AddSetting
0x9FD217: push    offset sub_A25410; void (__cdecl *)()
0x9FD21C: call    _atexit
0x9FD221: add     esp, 4
0x9FD224: mov     ecx, [esp+10h+var_C]
0x9FD228: mov     large fs:0, ecx
0x9FD22F: pop     ecx
0x9FD230: add     esp, 0Ch
0x9FD233: retn

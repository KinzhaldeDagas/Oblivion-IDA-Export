0x9FE1E0: push    0FFFFFFFFh
0x9FE1E2: push    offset SEH_9FE1E0
0x9FE1E7: mov     eax, large fs:0
0x9FE1ED: push    eax
0x9FE1EE: mov     eax, ___security_cookie
0x9FE1F3: xor     eax, esp
0x9FE1F5: push    eax
0x9FE1F6: lea     eax, [esp+10h+var_C]
0x9FE1FA: mov     large fs:0, eax
0x9FE200: push    offset dword_B14F20
0x9FE205: mov     ecx, offset INISettingCollection
0x9FE20A: mov     [esp+14h+var_4], 0
0x9FE212: call    SettingCollectionList_AddSetting
0x9FE217: push    offset sub_A25BF0; void (__cdecl *)()
0x9FE21C: call    _atexit
0x9FE221: add     esp, 4
0x9FE224: mov     ecx, [esp+10h+var_C]
0x9FE228: mov     large fs:0, ecx
0x9FE22F: pop     ecx
0x9FE230: add     esp, 0Ch
0x9FE233: retn

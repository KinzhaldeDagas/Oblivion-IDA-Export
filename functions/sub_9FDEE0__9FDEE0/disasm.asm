0x9FDEE0: push    0FFFFFFFFh
0x9FDEE2: push    offset SEH_9FDEE0
0x9FDEE7: mov     eax, large fs:0
0x9FDEED: push    eax
0x9FDEEE: mov     eax, ___security_cookie
0x9FDEF3: xor     eax, esp
0x9FDEF5: push    eax
0x9FDEF6: lea     eax, [esp+10h+var_C]
0x9FDEFA: mov     large fs:0, eax
0x9FDF00: push    offset dword_B14EE0
0x9FDF05: mov     ecx, offset INISettingCollection
0x9FDF0A: mov     [esp+14h+var_4], 0
0x9FDF12: call    SettingCollectionList_AddSetting
0x9FDF17: push    offset sub_A25A70; void (__cdecl *)()
0x9FDF1C: call    _atexit
0x9FDF21: add     esp, 4
0x9FDF24: mov     ecx, [esp+10h+var_C]
0x9FDF28: mov     large fs:0, ecx
0x9FDF2F: pop     ecx
0x9FDF30: add     esp, 0Ch
0x9FDF33: retn

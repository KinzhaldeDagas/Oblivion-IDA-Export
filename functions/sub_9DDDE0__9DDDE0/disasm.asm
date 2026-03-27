0x9DDDE0: push    0FFFFFFFFh
0x9DDDE2: push    offset SEH_9DDDE0
0x9DDDE7: mov     eax, large fs:0
0x9DDDED: push    eax
0x9DDDEE: mov     eax, ___security_cookie
0x9DDDF3: xor     eax, esp
0x9DDDF5: push    eax
0x9DDDF6: lea     eax, [esp+10h+var_C]
0x9DDDFA: mov     large fs:0, eax
0x9DDE00: push    offset dword_B06DEC
0x9DDE05: mov     ecx, offset INISettingCollection
0x9DDE0A: mov     [esp+14h+var_4], 0
0x9DDE12: call    SettingCollectionList_AddSetting
0x9DDE17: push    offset sub_A194A0; void (__cdecl *)()
0x9DDE1C: call    _atexit
0x9DDE21: add     esp, 4
0x9DDE24: mov     ecx, [esp+10h+var_C]
0x9DDE28: mov     large fs:0, ecx
0x9DDE2F: pop     ecx
0x9DDE30: add     esp, 0Ch
0x9DDE33: retn

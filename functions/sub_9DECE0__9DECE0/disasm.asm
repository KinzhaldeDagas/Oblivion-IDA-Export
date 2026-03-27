0x9DECE0: push    0FFFFFFFFh
0x9DECE2: push    offset SEH_9DECE0
0x9DECE7: mov     eax, large fs:0
0x9DECED: push    eax
0x9DECEE: mov     eax, ___security_cookie
0x9DECF3: xor     eax, esp
0x9DECF5: push    eax
0x9DECF6: lea     eax, [esp+10h+var_C]
0x9DECFA: mov     large fs:0, eax
0x9DED00: push    offset dword_B06F2C
0x9DED05: mov     ecx, offset INISettingCollection
0x9DED0A: mov     [esp+14h+var_4], 0
0x9DED12: call    SettingCollectionList_AddSetting
0x9DED17: push    offset sub_A19C20; void (__cdecl *)()
0x9DED1C: call    _atexit
0x9DED21: add     esp, 4
0x9DED24: mov     ecx, [esp+10h+var_C]
0x9DED28: mov     large fs:0, ecx
0x9DED2F: pop     ecx
0x9DED30: add     esp, 0Ch
0x9DED33: retn

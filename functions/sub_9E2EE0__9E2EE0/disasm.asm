0x9E2EE0: push    0FFFFFFFFh
0x9E2EE2: push    offset SEH_9E2EE0
0x9E2EE7: mov     eax, large fs:0
0x9E2EED: push    eax
0x9E2EEE: mov     eax, ___security_cookie
0x9E2EF3: xor     eax, esp
0x9E2EF5: push    eax
0x9E2EF6: lea     eax, [esp+10h+var_C]
0x9E2EFA: mov     large fs:0, eax
0x9E2F00: push    offset dword_B08B9C
0x9E2F05: mov     ecx, offset INISettingCollection
0x9E2F0A: mov     [esp+14h+var_4], 0
0x9E2F12: call    SettingCollectionList_AddSetting
0x9E2F17: push    offset sub_A1BA50; void (__cdecl *)()
0x9E2F1C: call    _atexit
0x9E2F21: add     esp, 4
0x9E2F24: mov     ecx, [esp+10h+var_C]
0x9E2F28: mov     large fs:0, ecx
0x9E2F2F: pop     ecx
0x9E2F30: add     esp, 0Ch
0x9E2F33: retn

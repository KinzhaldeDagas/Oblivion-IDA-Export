0x9DEAA0: push    0FFFFFFFFh
0x9DEAA2: push    offset SEH_9DEAA0
0x9DEAA7: mov     eax, large fs:0
0x9DEAAD: push    eax
0x9DEAAE: mov     eax, ___security_cookie
0x9DEAB3: xor     eax, esp
0x9DEAB5: push    eax
0x9DEAB6: lea     eax, [esp+10h+var_C]
0x9DEABA: mov     large fs:0, eax
0x9DEAC0: push    offset dword_B06EFC
0x9DEAC5: mov     ecx, offset INISettingCollection
0x9DEACA: mov     [esp+14h+var_4], 0
0x9DEAD2: call    SettingCollectionList_AddSetting
0x9DEAD7: push    offset sub_A19B00; void (__cdecl *)()
0x9DEADC: call    _atexit
0x9DEAE1: add     esp, 4
0x9DEAE4: mov     ecx, [esp+10h+var_C]
0x9DEAE8: mov     large fs:0, ecx
0x9DEAEF: pop     ecx
0x9DEAF0: add     esp, 0Ch
0x9DEAF3: retn

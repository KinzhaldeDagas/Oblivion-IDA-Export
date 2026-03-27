0x9DF9C0: push    0FFFFFFFFh
0x9DF9C2: push    offset SEH_9DF9C0
0x9DF9C7: mov     eax, large fs:0
0x9DF9CD: push    eax
0x9DF9CE: mov     eax, ___security_cookie
0x9DF9D3: xor     eax, esp
0x9DF9D5: push    eax
0x9DF9D6: lea     eax, [esp+10h+var_C]
0x9DF9DA: mov     large fs:0, eax
0x9DF9E0: push    offset byte_B07070
0x9DF9E5: mov     ecx, offset INISettingCollection
0x9DF9EA: mov     [esp+14h+var_4], 0
0x9DF9F2: call    SettingCollectionList_AddSetting
0x9DF9F7: push    offset sub_A1A300; void (__cdecl *)()
0x9DF9FC: call    _atexit
0x9DFA01: add     esp, 4
0x9DFA04: mov     ecx, [esp+10h+var_C]
0x9DFA08: mov     large fs:0, ecx
0x9DFA0F: pop     ecx
0x9DFA10: add     esp, 0Ch
0x9DFA13: retn

0x9FF580: push    0FFFFFFFFh
0x9FF582: push    offset SEH_9FF580
0x9FF587: mov     eax, large fs:0
0x9FF58D: push    eax
0x9FF58E: mov     eax, ___security_cookie
0x9FF593: xor     eax, esp
0x9FF595: push    eax
0x9FF596: lea     eax, [esp+10h+var_C]
0x9FF59A: mov     large fs:0, eax
0x9FF5A0: push    offset dword_B16274
0x9FF5A5: mov     ecx, offset INISettingCollection
0x9FF5AA: mov     [esp+14h+var_4], 0
0x9FF5B2: call    SettingCollectionList_AddSetting
0x9FF5B7: push    offset sub_A263A0; void (__cdecl *)()
0x9FF5BC: call    _atexit
0x9FF5C1: add     esp, 4
0x9FF5C4: mov     ecx, [esp+10h+var_C]
0x9FF5C8: mov     large fs:0, ecx
0x9FF5CF: pop     ecx
0x9FF5D0: add     esp, 0Ch
0x9FF5D3: retn

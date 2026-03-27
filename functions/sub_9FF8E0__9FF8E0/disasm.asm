0x9FF8E0: push    0FFFFFFFFh
0x9FF8E2: push    offset SEH_9FF8E0
0x9FF8E7: mov     eax, large fs:0
0x9FF8ED: push    eax
0x9FF8EE: mov     eax, ___security_cookie
0x9FF8F3: xor     eax, esp
0x9FF8F5: push    eax
0x9FF8F6: lea     eax, [esp+10h+var_C]
0x9FF8FA: mov     large fs:0, eax
0x9FF900: push    offset unk_B162BC
0x9FF905: mov     ecx, offset INISettingCollection
0x9FF90A: mov     [esp+14h+var_4], 0
0x9FF912: call    SettingCollectionList_AddSetting
0x9FF917: push    offset sub_A26550; void (__cdecl *)()
0x9FF91C: call    _atexit
0x9FF921: add     esp, 4
0x9FF924: mov     ecx, [esp+10h+var_C]
0x9FF928: mov     large fs:0, ecx
0x9FF92F: pop     ecx
0x9FF930: add     esp, 0Ch
0x9FF933: retn

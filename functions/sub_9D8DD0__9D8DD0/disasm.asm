0x9D8DD0: push    0FFFFFFFFh
0x9D8DD2: push    offset SEH_9D8DD0
0x9D8DD7: mov     eax, large fs:0
0x9D8DDD: push    eax
0x9D8DDE: mov     eax, ___security_cookie
0x9D8DE3: xor     eax, esp
0x9D8DE5: push    eax
0x9D8DE6: lea     eax, [esp+10h+var_C]
0x9D8DEA: mov     large fs:0, eax
0x9D8DF0: push    offset flt_B02D80
0x9D8DF5: mov     ecx, offset INISettingCollection
0x9D8DFA: mov     [esp+14h+var_4], 0
0x9D8E02: call    SettingCollectionList_AddSetting
0x9D8E07: push    offset sub_A16CA0; void (__cdecl *)()
0x9D8E0C: call    _atexit
0x9D8E11: add     esp, 4
0x9D8E14: mov     ecx, [esp+10h+var_C]
0x9D8E18: mov     large fs:0, ecx
0x9D8E1F: pop     ecx
0x9D8E20: add     esp, 0Ch
0x9D8E23: retn

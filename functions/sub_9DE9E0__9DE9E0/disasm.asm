0x9DE9E0: push    0FFFFFFFFh
0x9DE9E2: push    offset SEH_9DE9E0
0x9DE9E7: mov     eax, large fs:0
0x9DE9ED: push    eax
0x9DE9EE: mov     eax, ___security_cookie
0x9DE9F3: xor     eax, esp
0x9DE9F5: push    eax
0x9DE9F6: lea     eax, [esp+10h+var_C]
0x9DE9FA: mov     large fs:0, eax
0x9DEA00: push    offset flt_B06EEC
0x9DEA05: mov     ecx, offset INISettingCollection
0x9DEA0A: mov     [esp+14h+var_4], 0
0x9DEA12: call    SettingCollectionList_AddSetting
0x9DEA17: push    offset sub_A19AA0; void (__cdecl *)()
0x9DEA1C: call    _atexit
0x9DEA21: add     esp, 4
0x9DEA24: mov     ecx, [esp+10h+var_C]
0x9DEA28: mov     large fs:0, ecx
0x9DEA2F: pop     ecx
0x9DEA30: add     esp, 0Ch
0x9DEA33: retn

0x9FC8E0: push    0FFFFFFFFh
0x9FC8E2: push    offset SEH_9FC8E0
0x9FC8E7: mov     eax, large fs:0
0x9FC8ED: push    eax
0x9FC8EE: mov     eax, ___security_cookie
0x9FC8F3: xor     eax, esp
0x9FC8F5: push    eax
0x9FC8F6: lea     eax, [esp+10h+var_C]
0x9FC8FA: mov     large fs:0, eax
0x9FC900: push    offset flt_B14824
0x9FC905: mov     ecx, offset INISettingCollection
0x9FC90A: mov     [esp+14h+var_4], 0
0x9FC912: call    SettingCollectionList_AddSetting
0x9FC917: push    offset sub_A24F90; void (__cdecl *)()
0x9FC91C: call    _atexit
0x9FC921: add     esp, 4
0x9FC924: mov     ecx, [esp+10h+var_C]
0x9FC928: mov     large fs:0, ecx
0x9FC92F: pop     ecx
0x9FC930: add     esp, 0Ch
0x9FC933: retn

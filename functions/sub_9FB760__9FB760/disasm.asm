0x9FB760: push    0FFFFFFFFh
0x9FB762: push    offset SEH_9FB760
0x9FB767: mov     eax, large fs:0
0x9FB76D: push    eax
0x9FB76E: mov     eax, ___security_cookie
0x9FB773: xor     eax, esp
0x9FB775: push    eax
0x9FB776: lea     eax, [esp+10h+var_C]
0x9FB77A: mov     large fs:0, eax
0x9FB780: push    offset flt_B135F0
0x9FB785: mov     ecx, offset INISettingCollection
0x9FB78A: mov     [esp+14h+var_4], 0
0x9FB792: call    SettingCollectionList_AddSetting
0x9FB797: push    offset sub_A247F0; void (__cdecl *)()
0x9FB79C: call    _atexit
0x9FB7A1: add     esp, 4
0x9FB7A4: mov     ecx, [esp+10h+var_C]
0x9FB7A8: mov     large fs:0, ecx
0x9FB7AF: pop     ecx
0x9FB7B0: add     esp, 0Ch
0x9FB7B3: retn

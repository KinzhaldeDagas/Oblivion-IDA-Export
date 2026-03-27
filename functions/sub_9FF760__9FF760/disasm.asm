0x9FF760: push    0FFFFFFFFh
0x9FF762: push    offset SEH_9FF760
0x9FF767: mov     eax, large fs:0
0x9FF76D: push    eax
0x9FF76E: mov     eax, ___security_cookie
0x9FF773: xor     eax, esp
0x9FF775: push    eax
0x9FF776: lea     eax, [esp+10h+var_C]
0x9FF77A: mov     large fs:0, eax
0x9FF780: push    offset dword_B1629C
0x9FF785: mov     ecx, offset INISettingCollection
0x9FF78A: mov     [esp+14h+var_4], 0
0x9FF792: call    SettingCollectionList_AddSetting
0x9FF797: push    offset sub_A26490; void (__cdecl *)()
0x9FF79C: call    _atexit
0x9FF7A1: add     esp, 4
0x9FF7A4: mov     ecx, [esp+10h+var_C]
0x9FF7A8: mov     large fs:0, ecx
0x9FF7AF: pop     ecx
0x9FF7B0: add     esp, 0Ch
0x9FF7B3: retn

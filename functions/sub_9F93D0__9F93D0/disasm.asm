0x9F93D0: push    0FFFFFFFFh
0x9F93D2: push    offset SEH_9F93D0
0x9F93D7: mov     eax, large fs:0
0x9F93DD: push    eax
0x9F93DE: mov     eax, ___security_cookie
0x9F93E3: xor     eax, esp
0x9F93E5: push    eax
0x9F93E6: lea     eax, [esp+10h+var_C]
0x9F93EA: mov     large fs:0, eax
0x9F93F0: push    offset flt_B12628
0x9F93F5: mov     ecx, offset INISettingCollection
0x9F93FA: mov     [esp+14h+var_4], 0
0x9F9402: call    SettingCollectionList_AddSetting
0x9F9407: push    offset sub_A23780; void (__cdecl *)()
0x9F940C: call    _atexit
0x9F9411: add     esp, 4
0x9F9414: mov     ecx, [esp+10h+var_C]
0x9F9418: mov     large fs:0, ecx
0x9F941F: pop     ecx
0x9F9420: add     esp, 0Ch
0x9F9423: retn

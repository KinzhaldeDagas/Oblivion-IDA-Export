0x9FB7C0: push    0FFFFFFFFh
0x9FB7C2: push    offset SEH_9FB7C0
0x9FB7C7: mov     eax, large fs:0
0x9FB7CD: push    eax
0x9FB7CE: mov     eax, ___security_cookie
0x9FB7D3: xor     eax, esp
0x9FB7D5: push    eax
0x9FB7D6: lea     eax, [esp+10h+var_C]
0x9FB7DA: mov     large fs:0, eax
0x9FB7E0: push    offset dword_B135F8
0x9FB7E5: mov     ecx, offset INISettingCollection
0x9FB7EA: mov     [esp+14h+var_4], 0
0x9FB7F2: call    SettingCollectionList_AddSetting
0x9FB7F7: push    offset sub_A24820; void (__cdecl *)()
0x9FB7FC: call    _atexit
0x9FB801: add     esp, 4
0x9FB804: mov     ecx, [esp+10h+var_C]
0x9FB808: mov     large fs:0, ecx
0x9FB80F: pop     ecx
0x9FB810: add     esp, 0Ch
0x9FB813: retn

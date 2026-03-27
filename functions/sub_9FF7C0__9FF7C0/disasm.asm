0x9FF7C0: push    0FFFFFFFFh
0x9FF7C2: push    offset SEH_9FF7C0
0x9FF7C7: mov     eax, large fs:0
0x9FF7CD: push    eax
0x9FF7CE: mov     eax, ___security_cookie
0x9FF7D3: xor     eax, esp
0x9FF7D5: push    eax
0x9FF7D6: lea     eax, [esp+10h+var_C]
0x9FF7DA: mov     large fs:0, eax
0x9FF7E0: push    offset dword_B162A4
0x9FF7E5: mov     ecx, offset INISettingCollection
0x9FF7EA: mov     [esp+14h+var_4], 0
0x9FF7F2: call    SettingCollectionList_AddSetting
0x9FF7F7: push    offset sub_A264C0; void (__cdecl *)()
0x9FF7FC: call    _atexit
0x9FF801: add     esp, 4
0x9FF804: mov     ecx, [esp+10h+var_C]
0x9FF808: mov     large fs:0, ecx
0x9FF80F: pop     ecx
0x9FF810: add     esp, 0Ch
0x9FF813: retn

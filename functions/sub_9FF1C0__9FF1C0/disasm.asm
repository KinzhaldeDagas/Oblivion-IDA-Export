0x9FF1C0: push    0FFFFFFFFh
0x9FF1C2: push    offset SEH_9FF1C0
0x9FF1C7: mov     eax, large fs:0
0x9FF1CD: push    eax
0x9FF1CE: mov     eax, ___security_cookie
0x9FF1D3: xor     eax, esp
0x9FF1D5: push    eax
0x9FF1D6: lea     eax, [esp+10h+var_C]
0x9FF1DA: mov     large fs:0, eax
0x9FF1E0: push    offset flt_B161C8
0x9FF1E5: mov     ecx, offset INISettingCollection
0x9FF1EA: mov     [esp+14h+var_4], 0
0x9FF1F2: call    SettingCollectionList_AddSetting
0x9FF1F7: push    offset sub_A261B0; void (__cdecl *)()
0x9FF1FC: call    _atexit
0x9FF201: add     esp, 4
0x9FF204: mov     ecx, [esp+10h+var_C]
0x9FF208: mov     large fs:0, ecx
0x9FF20F: pop     ecx
0x9FF210: add     esp, 0Ch
0x9FF213: retn

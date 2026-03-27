0x9D94A0: push    0FFFFFFFFh
0x9D94A2: push    offset SEH_9D94A0
0x9D94A7: mov     eax, large fs:0
0x9D94AD: push    eax
0x9D94AE: mov     eax, ___security_cookie
0x9D94B3: xor     eax, esp
0x9D94B5: push    eax
0x9D94B6: lea     eax, [esp+10h+var_C]
0x9D94BA: mov     large fs:0, eax
0x9D94C0: push    offset iDebugTextTopBottomOffset
0x9D94C5: mov     ecx, offset INISettingCollection
0x9D94CA: mov     [esp+14h+var_4], 0
0x9D94D2: call    SettingCollectionList_AddSetting
0x9D94D7: push    offset sub_A17000; void (__cdecl *)()
0x9D94DC: call    _atexit
0x9D94E1: add     esp, 4
0x9D94E4: mov     ecx, [esp+10h+var_C]
0x9D94E8: mov     large fs:0, ecx
0x9D94EF: pop     ecx
0x9D94F0: add     esp, 0Ch
0x9D94F3: retn

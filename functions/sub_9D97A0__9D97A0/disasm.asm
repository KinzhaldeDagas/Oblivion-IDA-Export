0x9D97A0: push    0FFFFFFFFh
0x9D97A2: push    offset SEH_9D97A0
0x9D97A7: mov     eax, large fs:0
0x9D97AD: push    eax
0x9D97AE: mov     eax, ___security_cookie
0x9D97B3: xor     eax, esp
0x9D97B5: push    eax
0x9D97B6: lea     eax, [esp+10h+var_C]
0x9D97BA: mov     large fs:0, eax
0x9D97C0: push    offset byte_B030B4
0x9D97C5: mov     ecx, offset INISettingCollection
0x9D97CA: mov     [esp+14h+var_4], 0
0x9D97D2: call    SettingCollectionList_AddSetting
0x9D97D7: push    offset sub_A17180; void (__cdecl *)()
0x9D97DC: call    _atexit
0x9D97E1: add     esp, 4
0x9D97E4: mov     ecx, [esp+10h+var_C]
0x9D97E8: mov     large fs:0, ecx
0x9D97EF: pop     ecx
0x9D97F0: add     esp, 0Ch
0x9D97F3: retn

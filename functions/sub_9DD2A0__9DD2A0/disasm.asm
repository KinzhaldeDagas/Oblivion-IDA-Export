0x9DD2A0: push    0FFFFFFFFh
0x9DD2A2: push    offset SEH_9DD2A0
0x9DD2A7: mov     eax, large fs:0
0x9DD2AD: push    eax
0x9DD2AE: mov     eax, ___security_cookie
0x9DD2B3: xor     eax, esp
0x9DD2B5: push    eax
0x9DD2B6: lea     eax, [esp+10h+var_C]
0x9DD2BA: mov     large fs:0, eax
0x9DD2C0: push    offset unk_B06CFC
0x9DD2C5: mov     ecx, offset INISettingCollection
0x9DD2CA: mov     [esp+14h+var_4], 0
0x9DD2D2: call    SettingCollectionList_AddSetting
0x9DD2D7: push    offset sub_A18F00; void (__cdecl *)()
0x9DD2DC: call    _atexit
0x9DD2E1: add     esp, 4
0x9DD2E4: mov     ecx, [esp+10h+var_C]
0x9DD2E8: mov     large fs:0, ecx
0x9DD2EF: pop     ecx
0x9DD2F0: add     esp, 0Ch
0x9DD2F3: retn

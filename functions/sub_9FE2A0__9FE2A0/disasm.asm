0x9FE2A0: push    0FFFFFFFFh
0x9FE2A2: push    offset SEH_9FE2A0
0x9FE2A7: mov     eax, large fs:0
0x9FE2AD: push    eax
0x9FE2AE: mov     eax, ___security_cookie
0x9FE2B3: xor     eax, esp
0x9FE2B5: push    eax
0x9FE2B6: lea     eax, [esp+10h+var_C]
0x9FE2BA: mov     large fs:0, eax
0x9FE2C0: push    offset dword_B14F30
0x9FE2C5: mov     ecx, offset INISettingCollection
0x9FE2CA: mov     [esp+14h+var_4], 0
0x9FE2D2: call    SettingCollectionList_AddSetting
0x9FE2D7: push    offset sub_A25C50; void (__cdecl *)()
0x9FE2DC: call    _atexit
0x9FE2E1: add     esp, 4
0x9FE2E4: mov     ecx, [esp+10h+var_C]
0x9FE2E8: mov     large fs:0, ecx
0x9FE2EF: pop     ecx
0x9FE2F0: add     esp, 0Ch
0x9FE2F3: retn

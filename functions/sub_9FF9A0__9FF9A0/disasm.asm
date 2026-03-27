0x9FF9A0: push    0FFFFFFFFh
0x9FF9A2: push    offset SEH_9FF9A0
0x9FF9A7: mov     eax, large fs:0
0x9FF9AD: push    eax
0x9FF9AE: mov     eax, ___security_cookie
0x9FF9B3: xor     eax, esp
0x9FF9B5: push    eax
0x9FF9B6: lea     eax, [esp+10h+var_C]
0x9FF9BA: mov     large fs:0, eax
0x9FF9C0: push    offset dword_B162CC
0x9FF9C5: mov     ecx, offset INISettingCollection
0x9FF9CA: mov     [esp+14h+var_4], 0
0x9FF9D2: call    SettingCollectionList_AddSetting
0x9FF9D7: push    offset sub_A265B0; void (__cdecl *)()
0x9FF9DC: call    _atexit
0x9FF9E1: add     esp, 4
0x9FF9E4: mov     ecx, [esp+10h+var_C]
0x9FF9E8: mov     large fs:0, ecx
0x9FF9EF: pop     ecx
0x9FF9F0: add     esp, 0Ch
0x9FF9F3: retn

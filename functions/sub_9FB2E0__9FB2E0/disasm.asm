0x9FB2E0: push    0FFFFFFFFh
0x9FB2E2: push    offset SEH_9FB2E0
0x9FB2E7: mov     eax, large fs:0
0x9FB2ED: push    eax
0x9FB2EE: mov     eax, ___security_cookie
0x9FB2F3: xor     eax, esp
0x9FB2F5: push    eax
0x9FB2F6: lea     eax, [esp+10h+var_C]
0x9FB2FA: mov     large fs:0, eax
0x9FB300: push    offset unk_B13590
0x9FB305: mov     ecx, offset INISettingCollection
0x9FB30A: mov     [esp+14h+var_4], 0
0x9FB312: call    SettingCollectionList_AddSetting
0x9FB317: push    offset sub_A245B0; void (__cdecl *)()
0x9FB31C: call    _atexit
0x9FB321: add     esp, 4
0x9FB324: mov     ecx, [esp+10h+var_C]
0x9FB328: mov     large fs:0, ecx
0x9FB32F: pop     ecx
0x9FB330: add     esp, 0Ch
0x9FB333: retn

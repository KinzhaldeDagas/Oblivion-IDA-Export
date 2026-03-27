0x9FF2E0: push    0FFFFFFFFh
0x9FF2E2: push    offset SEH_9FF2E0
0x9FF2E7: mov     eax, large fs:0
0x9FF2ED: push    eax
0x9FF2EE: mov     eax, ___security_cookie
0x9FF2F3: xor     eax, esp
0x9FF2F5: push    eax
0x9FF2F6: lea     eax, [esp+10h+var_C]
0x9FF2FA: mov     large fs:0, eax
0x9FF300: push    offset dword_B161E0
0x9FF305: mov     ecx, offset INISettingCollection
0x9FF30A: mov     [esp+14h+var_4], 0
0x9FF312: call    SettingCollectionList_AddSetting
0x9FF317: push    offset sub_A26240; void (__cdecl *)()
0x9FF31C: call    _atexit
0x9FF321: add     esp, 4
0x9FF324: mov     ecx, [esp+10h+var_C]
0x9FF328: mov     large fs:0, ecx
0x9FF32F: pop     ecx
0x9FF330: add     esp, 0Ch
0x9FF333: retn

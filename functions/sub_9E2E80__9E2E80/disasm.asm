0x9E2E80: push    0FFFFFFFFh
0x9E2E82: push    offset SEH_9E2E80
0x9E2E87: mov     eax, large fs:0
0x9E2E8D: push    eax
0x9E2E8E: mov     eax, ___security_cookie
0x9E2E93: xor     eax, esp
0x9E2E95: push    eax
0x9E2E96: lea     eax, [esp+10h+var_C]
0x9E2E9A: mov     large fs:0, eax
0x9E2EA0: push    offset dword_B08B94
0x9E2EA5: mov     ecx, offset INISettingCollection
0x9E2EAA: mov     [esp+14h+var_4], 0
0x9E2EB2: call    SettingCollectionList_AddSetting
0x9E2EB7: push    offset sub_A1BA20; void (__cdecl *)()
0x9E2EBC: call    _atexit
0x9E2EC1: add     esp, 4
0x9E2EC4: mov     ecx, [esp+10h+var_C]
0x9E2EC8: mov     large fs:0, ecx
0x9E2ECF: pop     ecx
0x9E2ED0: add     esp, 0Ch
0x9E2ED3: retn

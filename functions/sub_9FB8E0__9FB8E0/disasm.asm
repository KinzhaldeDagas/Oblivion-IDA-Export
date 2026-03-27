0x9FB8E0: push    0FFFFFFFFh
0x9FB8E2: push    offset SEH_9FB8E0
0x9FB8E7: mov     eax, large fs:0
0x9FB8ED: push    eax
0x9FB8EE: mov     eax, ___security_cookie
0x9FB8F3: xor     eax, esp
0x9FB8F5: push    eax
0x9FB8F6: lea     eax, [esp+10h+var_C]
0x9FB8FA: mov     large fs:0, eax
0x9FB900: push    offset dword_B13610
0x9FB905: mov     ecx, offset INISettingCollection
0x9FB90A: mov     [esp+14h+var_4], 0
0x9FB912: call    SettingCollectionList_AddSetting
0x9FB917: push    offset sub_A248B0; void (__cdecl *)()
0x9FB91C: call    _atexit
0x9FB921: add     esp, 4
0x9FB924: mov     ecx, [esp+10h+var_C]
0x9FB928: mov     large fs:0, ecx
0x9FB92F: pop     ecx
0x9FB930: add     esp, 0Ch
0x9FB933: retn

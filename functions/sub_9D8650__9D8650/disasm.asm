0x9D8650: push    0FFFFFFFFh
0x9D8652: push    offset SEH_9D8650
0x9D8657: mov     eax, large fs:0
0x9D865D: push    eax
0x9D865E: mov     eax, ___security_cookie
0x9D8663: xor     eax, esp
0x9D8665: push    eax
0x9D8666: lea     eax, [esp+10h+var_C]
0x9D866A: mov     large fs:0, eax
0x9D8670: push    offset off_B02CE0
0x9D8675: mov     ecx, offset INISettingCollection
0x9D867A: mov     [esp+14h+var_4], 0
0x9D8682: call    SettingCollectionList_AddSetting
0x9D8687: push    offset sub_A168E0; void (__cdecl *)()
0x9D868C: call    _atexit
0x9D8691: add     esp, 4
0x9D8694: mov     ecx, [esp+10h+var_C]
0x9D8698: mov     large fs:0, ecx
0x9D869F: pop     ecx
0x9D86A0: add     esp, 0Ch
0x9D86A3: retn

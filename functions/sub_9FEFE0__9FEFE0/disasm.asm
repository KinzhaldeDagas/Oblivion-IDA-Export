0x9FEFE0: push    0FFFFFFFFh
0x9FEFE2: push    offset SEH_9FEFE0
0x9FEFE7: mov     eax, large fs:0
0x9FEFED: push    eax
0x9FEFEE: mov     eax, ___security_cookie
0x9FEFF3: xor     eax, esp
0x9FEFF5: push    eax
0x9FEFF6: lea     eax, [esp+10h+var_C]
0x9FEFFA: mov     large fs:0, eax
0x9FF000: push    offset flt_B161A0
0x9FF005: mov     ecx, offset INISettingCollection
0x9FF00A: mov     [esp+14h+var_4], 0
0x9FF012: call    SettingCollectionList_AddSetting
0x9FF017: push    offset sub_A260C0; void (__cdecl *)()
0x9FF01C: call    _atexit
0x9FF021: add     esp, 4
0x9FF024: mov     ecx, [esp+10h+var_C]
0x9FF028: mov     large fs:0, ecx
0x9FF02F: pop     ecx
0x9FF030: add     esp, 0Ch
0x9FF033: retn

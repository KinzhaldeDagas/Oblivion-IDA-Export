0x9FAFE0: push    0FFFFFFFFh
0x9FAFE2: push    offset SEH_9FAFE0
0x9FAFE7: mov     eax, large fs:0
0x9FAFED: push    eax
0x9FAFEE: mov     eax, ___security_cookie
0x9FAFF3: xor     eax, esp
0x9FAFF5: push    eax
0x9FAFF6: lea     eax, [esp+10h+var_C]
0x9FAFFA: mov     large fs:0, eax
0x9FB000: push    offset byte_B13210
0x9FB005: mov     ecx, offset INISettingCollection
0x9FB00A: mov     [esp+14h+var_4], 0
0x9FB012: call    SettingCollectionList_AddSetting
0x9FB017: push    offset sub_A24430; void (__cdecl *)()
0x9FB01C: call    _atexit
0x9FB021: add     esp, 4
0x9FB024: mov     ecx, [esp+10h+var_C]
0x9FB028: mov     large fs:0, ecx
0x9FB02F: pop     ecx
0x9FB030: add     esp, 0Ch
0x9FB033: retn

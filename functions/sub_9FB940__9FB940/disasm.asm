0x9FB940: push    0FFFFFFFFh
0x9FB942: push    offset SEH_9FB940
0x9FB947: mov     eax, large fs:0
0x9FB94D: push    eax
0x9FB94E: mov     eax, ___security_cookie
0x9FB953: xor     eax, esp
0x9FB955: push    eax
0x9FB956: lea     eax, [esp+10h+var_C]
0x9FB95A: mov     large fs:0, eax
0x9FB960: push    offset unk_B13618
0x9FB965: mov     ecx, offset INISettingCollection
0x9FB96A: mov     [esp+14h+var_4], 0
0x9FB972: call    SettingCollectionList_AddSetting
0x9FB977: push    offset sub_A248E0; void (__cdecl *)()
0x9FB97C: call    _atexit
0x9FB981: add     esp, 4
0x9FB984: mov     ecx, [esp+10h+var_C]
0x9FB988: mov     large fs:0, ecx
0x9FB98F: pop     ecx
0x9FB990: add     esp, 0Ch
0x9FB993: retn

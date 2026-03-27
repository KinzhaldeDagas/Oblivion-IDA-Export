0x9FB580: push    0FFFFFFFFh
0x9FB582: push    offset SEH_9FB580
0x9FB587: mov     eax, large fs:0
0x9FB58D: push    eax
0x9FB58E: mov     eax, ___security_cookie
0x9FB593: xor     eax, esp
0x9FB595: push    eax
0x9FB596: lea     eax, [esp+10h+var_C]
0x9FB59A: mov     large fs:0, eax
0x9FB5A0: push    offset flt_B135C8
0x9FB5A5: mov     ecx, offset INISettingCollection
0x9FB5AA: mov     [esp+14h+var_4], 0
0x9FB5B2: call    SettingCollectionList_AddSetting
0x9FB5B7: push    offset sub_A24700; void (__cdecl *)()
0x9FB5BC: call    _atexit
0x9FB5C1: add     esp, 4
0x9FB5C4: mov     ecx, [esp+10h+var_C]
0x9FB5C8: mov     large fs:0, ecx
0x9FB5CF: pop     ecx
0x9FB5D0: add     esp, 0Ch
0x9FB5D3: retn

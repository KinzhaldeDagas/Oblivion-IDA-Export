0x9F9490: push    0FFFFFFFFh
0x9F9492: push    offset SEH_9F9490
0x9F9497: mov     eax, large fs:0
0x9F949D: push    eax
0x9F949E: mov     eax, ___security_cookie
0x9F94A3: xor     eax, esp
0x9F94A5: push    eax
0x9F94A6: lea     eax, [esp+10h+var_C]
0x9F94AA: mov     large fs:0, eax
0x9F94B0: push    offset flt_B12638
0x9F94B5: mov     ecx, offset INISettingCollection
0x9F94BA: mov     [esp+14h+var_4], 0
0x9F94C2: call    SettingCollectionList_AddSetting
0x9F94C7: push    offset sub_A237E0; void (__cdecl *)()
0x9F94CC: call    _atexit
0x9F94D1: add     esp, 4
0x9F94D4: mov     ecx, [esp+10h+var_C]
0x9F94D8: mov     large fs:0, ecx
0x9F94DF: pop     ecx
0x9F94E0: add     esp, 0Ch
0x9F94E3: retn

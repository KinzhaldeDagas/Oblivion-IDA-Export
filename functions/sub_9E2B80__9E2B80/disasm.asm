0x9E2B80: push    0FFFFFFFFh
0x9E2B82: push    offset SEH_9E2B80
0x9E2B87: mov     eax, large fs:0
0x9E2B8D: push    eax
0x9E2B8E: mov     eax, ___security_cookie
0x9E2B93: xor     eax, esp
0x9E2B95: push    eax
0x9E2B96: lea     eax, [esp+10h+var_C]
0x9E2B9A: mov     large fs:0, eax
0x9E2BA0: push    offset unk_B08B54
0x9E2BA5: mov     ecx, offset INISettingCollection
0x9E2BAA: mov     [esp+14h+var_4], 0
0x9E2BB2: call    SettingCollectionList_AddSetting
0x9E2BB7: push    offset sub_A1B8A0; void (__cdecl *)()
0x9E2BBC: call    _atexit
0x9E2BC1: add     esp, 4
0x9E2BC4: mov     ecx, [esp+10h+var_C]
0x9E2BC8: mov     large fs:0, ecx
0x9E2BCF: pop     ecx
0x9E2BD0: add     esp, 0Ch
0x9E2BD3: retn

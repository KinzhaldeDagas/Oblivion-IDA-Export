0x9E51D0: push    0FFFFFFFFh
0x9E51D2: push    offset SEH_9E51D0
0x9E51D7: mov     eax, large fs:0
0x9E51DD: push    eax
0x9E51DE: mov     eax, ___security_cookie
0x9E51E3: xor     eax, esp
0x9E51E5: push    eax
0x9E51E6: lea     eax, [esp+10h+var_C]
0x9E51EA: mov     large fs:0, eax
0x9E51F0: push    offset off_B11B3C; "1.0, 1.0"
0x9E51F5: mov     ecx, offset BlendSettingCollection
0x9E51FA: mov     [esp+14h+var_4], 0
0x9E5202: call    SettingCollectionList_AddSetting
0x9E5207: push    offset sub_A1CD30; void (__cdecl *)()
0x9E520C: call    _atexit
0x9E5211: add     esp, 4
0x9E5214: mov     ecx, [esp+10h+var_C]
0x9E5218: mov     large fs:0, ecx
0x9E521F: pop     ecx
0x9E5220: add     esp, 0Ch
0x9E5223: retn

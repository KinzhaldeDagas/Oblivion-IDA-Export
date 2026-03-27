0x9FAD40: push    0FFFFFFFFh
0x9FAD42: push    offset SEH_9FAD40
0x9FAD47: mov     eax, large fs:0
0x9FAD4D: push    eax
0x9FAD4E: mov     eax, ___security_cookie
0x9FAD53: xor     eax, esp
0x9FAD55: push    eax
0x9FAD56: lea     eax, [esp+10h+var_C]
0x9FAD5A: mov     large fs:0, eax
0x9FAD60: push    offset off_B12E1C; "Data\\Fonts\\Kingthings_Regular.fnt"
0x9FAD65: mov     ecx, offset INISettingCollection
0x9FAD6A: mov     [esp+14h+var_4], 0
0x9FAD72: call    SettingCollectionList_AddSetting
0x9FAD77: push    offset sub_A242E0; void (__cdecl *)()
0x9FAD7C: call    _atexit
0x9FAD81: add     esp, 4
0x9FAD84: mov     ecx, [esp+10h+var_C]
0x9FAD88: mov     large fs:0, ecx
0x9FAD8F: pop     ecx
0x9FAD90: add     esp, 0Ch
0x9FAD93: retn

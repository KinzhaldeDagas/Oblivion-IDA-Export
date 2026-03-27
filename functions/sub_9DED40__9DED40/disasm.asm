0x9DED40: push    0FFFFFFFFh
0x9DED42: push    offset SEH_9DED40
0x9DED47: mov     eax, large fs:0
0x9DED4D: push    eax
0x9DED4E: mov     eax, ___security_cookie
0x9DED53: xor     eax, esp
0x9DED55: push    eax
0x9DED56: lea     eax, [esp+10h+var_C]
0x9DED5A: mov     large fs:0, eax
0x9DED60: push    offset unk_B06F34
0x9DED65: mov     ecx, offset INISettingCollection
0x9DED6A: mov     [esp+14h+var_4], 0
0x9DED72: call    SettingCollectionList_AddSetting
0x9DED77: push    offset sub_A19C50; void (__cdecl *)()
0x9DED7C: call    _atexit
0x9DED81: add     esp, 4
0x9DED84: mov     ecx, [esp+10h+var_C]
0x9DED88: mov     large fs:0, ecx
0x9DED8F: pop     ecx
0x9DED90: add     esp, 0Ch
0x9DED93: retn

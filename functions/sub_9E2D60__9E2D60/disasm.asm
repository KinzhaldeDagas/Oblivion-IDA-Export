0x9E2D60: push    0FFFFFFFFh
0x9E2D62: push    offset SEH_9E2D60
0x9E2D67: mov     eax, large fs:0
0x9E2D6D: push    eax
0x9E2D6E: mov     eax, ___security_cookie
0x9E2D73: xor     eax, esp
0x9E2D75: push    eax
0x9E2D76: lea     eax, [esp+10h+var_C]
0x9E2D7A: mov     large fs:0, eax
0x9E2D80: push    offset dword_B08B7C
0x9E2D85: mov     ecx, offset INISettingCollection
0x9E2D8A: mov     [esp+14h+var_4], 0
0x9E2D92: call    SettingCollectionList_AddSetting
0x9E2D97: push    offset sub_A1B990; void (__cdecl *)()
0x9E2D9C: call    _atexit
0x9E2DA1: add     esp, 4
0x9E2DA4: mov     ecx, [esp+10h+var_C]
0x9E2DA8: mov     large fs:0, ecx
0x9E2DAF: pop     ecx
0x9E2DB0: add     esp, 0Ch
0x9E2DB3: retn

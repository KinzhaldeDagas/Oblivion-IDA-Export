0x9DFF80: push    0FFFFFFFFh
0x9DFF82: push    offset SEH_9DFF80
0x9DFF87: mov     eax, large fs:0
0x9DFF8D: push    eax
0x9DFF8E: mov     eax, ___security_cookie
0x9DFF93: xor     eax, esp
0x9DFF95: push    eax
0x9DFF96: lea     eax, [esp+10h+var_C]
0x9DFF9A: mov     large fs:0, eax
0x9DFFA0: push    offset dword_B070E8
0x9DFFA5: mov     ecx, offset INISettingCollection
0x9DFFAA: mov     [esp+14h+var_4], 0
0x9DFFB2: call    SettingCollectionList_AddSetting
0x9DFFB7: push    offset sub_A1A5D0; void (__cdecl *)()
0x9DFFBC: call    _atexit
0x9DFFC1: add     esp, 4
0x9DFFC4: mov     ecx, [esp+10h+var_C]
0x9DFFC8: mov     large fs:0, ecx
0x9DFFCF: pop     ecx
0x9DFFD0: add     esp, 0Ch
0x9DFFD3: retn

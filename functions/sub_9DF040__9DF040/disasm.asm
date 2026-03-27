0x9DF040: push    0FFFFFFFFh
0x9DF042: push    offset SEH_9DF040
0x9DF047: mov     eax, large fs:0
0x9DF04D: push    eax
0x9DF04E: mov     eax, ___security_cookie
0x9DF053: xor     eax, esp
0x9DF055: push    eax
0x9DF056: lea     eax, [esp+10h+var_C]
0x9DF05A: mov     large fs:0, eax
0x9DF060: push    offset byte_B06F74
0x9DF065: mov     ecx, offset INISettingCollection
0x9DF06A: mov     [esp+14h+var_4], 0
0x9DF072: call    SettingCollectionList_AddSetting
0x9DF077: push    offset sub_A19DD0; void (__cdecl *)()
0x9DF07C: call    _atexit
0x9DF081: add     esp, 4
0x9DF084: mov     ecx, [esp+10h+var_C]
0x9DF088: mov     large fs:0, ecx
0x9DF08F: pop     ecx
0x9DF090: add     esp, 0Ch
0x9DF093: retn

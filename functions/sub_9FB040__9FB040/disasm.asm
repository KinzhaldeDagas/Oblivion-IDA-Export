0x9FB040: push    0FFFFFFFFh
0x9FB042: push    offset SEH_9FB040
0x9FB047: mov     eax, large fs:0
0x9FB04D: push    eax
0x9FB04E: mov     eax, ___security_cookie
0x9FB053: xor     eax, esp
0x9FB055: push    eax
0x9FB056: lea     eax, [esp+10h+var_C]
0x9FB05A: mov     large fs:0, eax
0x9FB060: push    offset byte_B13218
0x9FB065: mov     ecx, offset INISettingCollection
0x9FB06A: mov     [esp+14h+var_4], 0
0x9FB072: call    SettingCollectionList_AddSetting
0x9FB077: push    offset sub_A24460; void (__cdecl *)()
0x9FB07C: call    _atexit
0x9FB081: add     esp, 4
0x9FB084: mov     ecx, [esp+10h+var_C]
0x9FB088: mov     large fs:0, ecx
0x9FB08F: pop     ecx
0x9FB090: add     esp, 0Ch
0x9FB093: retn

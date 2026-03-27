0x9DCE80: push    0FFFFFFFFh
0x9DCE82: push    offset SEH_9DCE80
0x9DCE87: mov     eax, large fs:0
0x9DCE8D: push    eax
0x9DCE8E: mov     eax, ___security_cookie
0x9DCE93: xor     eax, esp
0x9DCE95: push    eax
0x9DCE96: lea     eax, [esp+10h+var_C]
0x9DCE9A: mov     large fs:0, eax
0x9DCEA0: push    offset byte_B06CA4
0x9DCEA5: mov     ecx, offset INISettingCollection
0x9DCEAA: mov     [esp+14h+var_4], 0
0x9DCEB2: call    SettingCollectionList_AddSetting
0x9DCEB7: push    offset sub_A18CF0; void (__cdecl *)()
0x9DCEBC: call    _atexit
0x9DCEC1: add     esp, 4
0x9DCEC4: mov     ecx, [esp+10h+var_C]
0x9DCEC8: mov     large fs:0, ecx
0x9DCECF: pop     ecx
0x9DCED0: add     esp, 0Ch
0x9DCED3: retn

0x9E3C80: push    0FFFFFFFFh
0x9E3C82: push    offset SEH_9E3C80
0x9E3C87: mov     eax, large fs:0
0x9E3C8D: push    eax
0x9E3C8E: mov     eax, ___security_cookie
0x9E3C93: xor     eax, esp
0x9E3C95: push    eax
0x9E3C96: lea     eax, [esp+10h+var_C]
0x9E3C9A: mov     large fs:0, eax
0x9E3CA0: push    offset byte_B10CA0
0x9E3CA5: mov     ecx, offset INISettingCollection
0x9E3CAA: mov     [esp+14h+var_4], 0
0x9E3CB2: call    SettingCollectionList_AddSetting
0x9E3CB7: push    offset sub_A1C200; void (__cdecl *)()
0x9E3CBC: call    _atexit
0x9E3CC1: add     esp, 4
0x9E3CC4: mov     ecx, [esp+10h+var_C]
0x9E3CC8: mov     large fs:0, ecx
0x9E3CCF: pop     ecx
0x9E3CD0: add     esp, 0Ch
0x9E3CD3: retn

0x9FF040: push    0FFFFFFFFh
0x9FF042: push    offset SEH_9FF040
0x9FF047: mov     eax, large fs:0
0x9FF04D: push    eax
0x9FF04E: mov     eax, ___security_cookie
0x9FF053: xor     eax, esp
0x9FF055: push    eax
0x9FF056: lea     eax, [esp+10h+var_C]
0x9FF05A: mov     large fs:0, eax
0x9FF060: push    offset flt_B161A8
0x9FF065: mov     ecx, offset INISettingCollection
0x9FF06A: mov     [esp+14h+var_4], 0
0x9FF072: call    SettingCollectionList_AddSetting
0x9FF077: push    offset sub_A260F0; void (__cdecl *)()
0x9FF07C: call    _atexit
0x9FF081: add     esp, 4
0x9FF084: mov     ecx, [esp+10h+var_C]
0x9FF088: mov     large fs:0, ecx
0x9FF08F: pop     ecx
0x9FF090: add     esp, 0Ch
0x9FF093: retn

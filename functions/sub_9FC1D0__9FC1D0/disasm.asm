0x9FC1D0: push    0FFFFFFFFh
0x9FC1D2: push    offset SEH_9FC1D0
0x9FC1D7: mov     eax, large fs:0
0x9FC1DD: push    eax
0x9FC1DE: mov     eax, ___security_cookie
0x9FC1E3: xor     eax, esp
0x9FC1E5: push    eax
0x9FC1E6: lea     eax, [esp+10h+var_C]
0x9FC1EA: mov     large fs:0, eax
0x9FC1F0: push    offset aPURJ
0x9FC1F5: mov     ecx, offset INISettingCollection
0x9FC1FA: mov     [esp+14h+var_4], 0
0x9FC202: call    SettingCollectionList_AddSetting
0x9FC207: push    offset sub_A24BC0; void (__cdecl *)()
0x9FC20C: call    _atexit
0x9FC211: add     esp, 4
0x9FC214: mov     ecx, [esp+10h+var_C]
0x9FC218: mov     large fs:0, ecx
0x9FC21F: pop     ecx
0x9FC220: add     esp, 0Ch
0x9FC223: retn

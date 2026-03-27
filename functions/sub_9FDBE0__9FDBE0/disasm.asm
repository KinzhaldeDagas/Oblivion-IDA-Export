0x9FDBE0: push    0FFFFFFFFh
0x9FDBE2: push    offset SEH_9FDBE0
0x9FDBE7: mov     eax, large fs:0
0x9FDBED: push    eax
0x9FDBEE: mov     eax, ___security_cookie
0x9FDBF3: xor     eax, esp
0x9FDBF5: push    eax
0x9FDBF6: lea     eax, [esp+10h+var_C]
0x9FDBFA: mov     large fs:0, eax
0x9FDC00: push    offset bAllowHavokGrabTheLiving
0x9FDC05: mov     ecx, offset INISettingCollection
0x9FDC0A: mov     [esp+14h+var_4], 0
0x9FDC12: call    SettingCollectionList_AddSetting
0x9FDC17: push    offset sub_A258F0; void (__cdecl *)()
0x9FDC1C: call    _atexit
0x9FDC21: add     esp, 4
0x9FDC24: mov     ecx, [esp+10h+var_C]
0x9FDC28: mov     large fs:0, ecx
0x9FDC2F: pop     ecx
0x9FDC30: add     esp, 0Ch
0x9FDC33: retn

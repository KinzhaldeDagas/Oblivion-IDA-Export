0x9FB280: push    0FFFFFFFFh
0x9FB282: push    offset SEH_9FB280
0x9FB287: mov     eax, large fs:0
0x9FB28D: push    eax
0x9FB28E: mov     eax, ___security_cookie
0x9FB293: xor     eax, esp
0x9FB295: push    eax
0x9FB296: lea     eax, [esp+10h+var_C]
0x9FB29A: mov     large fs:0, eax
0x9FB2A0: push    offset aS_7
0x9FB2A5: mov     ecx, offset INISettingCollection
0x9FB2AA: mov     [esp+14h+var_4], 0
0x9FB2B2: call    SettingCollectionList_AddSetting
0x9FB2B7: push    offset sub_A24580; void (__cdecl *)()
0x9FB2BC: call    _atexit
0x9FB2C1: add     esp, 4
0x9FB2C4: mov     ecx, [esp+10h+var_C]
0x9FB2C8: mov     large fs:0, ecx
0x9FB2CF: pop     ecx
0x9FB2D0: add     esp, 0Ch
0x9FB2D3: retn

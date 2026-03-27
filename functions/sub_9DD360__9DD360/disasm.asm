0x9DD360: push    0FFFFFFFFh
0x9DD362: push    offset SEH_9DD360
0x9DD367: mov     eax, large fs:0
0x9DD36D: push    eax
0x9DD36E: mov     eax, ___security_cookie
0x9DD373: xor     eax, esp
0x9DD375: push    eax
0x9DD376: lea     eax, [esp+10h+var_C]
0x9DD37A: mov     large fs:0, eax
0x9DD380: push    offset iMultiSample
0x9DD385: mov     ecx, offset INISettingCollection
0x9DD38A: mov     [esp+14h+var_4], 0
0x9DD392: call    SettingCollectionList_AddSetting
0x9DD397: push    offset sub_A18F60; void (__cdecl *)()
0x9DD39C: call    _atexit
0x9DD3A1: add     esp, 4
0x9DD3A4: mov     ecx, [esp+10h+var_C]
0x9DD3A8: mov     large fs:0, ecx
0x9DD3AF: pop     ecx
0x9DD3B0: add     esp, 0Ch
0x9DD3B3: retn

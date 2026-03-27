0x9DB330: push    0FFFFFFFFh
0x9DB332: push    offset SEH_9DB330
0x9DB337: mov     eax, large fs:0
0x9DB33D: push    eax
0x9DB33E: mov     eax, ___security_cookie
0x9DB343: xor     eax, esp
0x9DB345: push    eax
0x9DB346: lea     eax, [esp+10h+var_C]
0x9DB34A: mov     large fs:0, eax
0x9DB350: push    offset iIdentityBatchRemove
0x9DB355: mov     ecx, offset INISettingCollection
0x9DB35A: mov     [esp+14h+var_4], 0
0x9DB362: call    SettingCollectionList_AddSetting
0x9DB367: push    offset sub_A17F00; void (__cdecl *)()
0x9DB36C: call    _atexit
0x9DB371: add     esp, 4
0x9DB374: mov     ecx, [esp+10h+var_C]
0x9DB378: mov     large fs:0, ecx
0x9DB37F: pop     ecx
0x9DB380: add     esp, 0Ch
0x9DB383: retn

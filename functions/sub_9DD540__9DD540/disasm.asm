0x9DD540: push    0FFFFFFFFh
0x9DD542: push    offset SEH_9DD540
0x9DD547: mov     eax, large fs:0
0x9DD54D: push    eax
0x9DD54E: mov     eax, ___security_cookie
0x9DD553: xor     eax, esp
0x9DD555: push    eax
0x9DD556: lea     eax, [esp+10h+var_C]
0x9DD55A: mov     large fs:0, eax
0x9DD560: push    offset byte_B06D34
0x9DD565: mov     ecx, offset INISettingCollection
0x9DD56A: mov     [esp+14h+var_4], 0
0x9DD572: call    SettingCollectionList_AddSetting
0x9DD577: push    offset sub_A19050; void (__cdecl *)()
0x9DD57C: call    _atexit
0x9DD581: add     esp, 4
0x9DD584: mov     ecx, [esp+10h+var_C]
0x9DD588: mov     large fs:0, ecx
0x9DD58F: pop     ecx
0x9DD590: add     esp, 0Ch
0x9DD593: retn

0x9DD840: push    0FFFFFFFFh
0x9DD842: push    offset SEH_9DD840
0x9DD847: mov     eax, large fs:0
0x9DD84D: push    eax
0x9DD84E: mov     eax, ___security_cookie
0x9DD853: xor     eax, esp
0x9DD855: push    eax
0x9DD856: lea     eax, [esp+10h+var_C]
0x9DD85A: mov     large fs:0, eax
0x9DD860: push    offset flt_B06D74
0x9DD865: mov     ecx, offset INISettingCollection
0x9DD86A: mov     [esp+14h+var_4], 0
0x9DD872: call    SettingCollectionList_AddSetting
0x9DD877: push    offset sub_A191D0; void (__cdecl *)()
0x9DD87C: call    _atexit
0x9DD881: add     esp, 4
0x9DD884: mov     ecx, [esp+10h+var_C]
0x9DD888: mov     large fs:0, ecx
0x9DD88F: pop     ecx
0x9DD890: add     esp, 0Ch
0x9DD893: retn

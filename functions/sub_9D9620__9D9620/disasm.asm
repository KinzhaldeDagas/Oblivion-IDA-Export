0x9D9620: push    0FFFFFFFFh
0x9D9622: push    offset SEH_9D9620
0x9D9627: mov     eax, large fs:0
0x9D962D: push    eax
0x9D962E: mov     eax, ___security_cookie
0x9D9633: xor     eax, esp
0x9D9635: push    eax
0x9D9636: lea     eax, [esp+10h+var_C]
0x9D963A: mov     large fs:0, eax
0x9D9640: push    offset off_B03094; "Map loop.bik"
0x9D9645: mov     ecx, offset INISettingCollection
0x9D964A: mov     [esp+14h+var_4], 0
0x9D9652: call    SettingCollectionList_AddSetting
0x9D9657: push    offset sub_A170C0; void (__cdecl *)()
0x9D965C: call    _atexit
0x9D9661: add     esp, 4
0x9D9664: mov     ecx, [esp+10h+var_C]
0x9D9668: mov     large fs:0, ecx
0x9D966F: pop     ecx
0x9D9670: add     esp, 0Ch
0x9D9673: retn

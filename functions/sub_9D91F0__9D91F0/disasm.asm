0x9D91F0: push    0FFFFFFFFh
0x9D91F2: push    offset SEH_9D91F0
0x9D91F7: mov     eax, large fs:0
0x9D91FD: push    eax
0x9D91FE: mov     eax, ___security_cookie
0x9D9203: xor     eax, esp
0x9D9205: push    eax
0x9D9206: lea     eax, [esp+10h+var_C]
0x9D920A: mov     large fs:0, eax
0x9D9210: push    offset lpCaption
0x9D9215: mov     ecx, offset INISettingCollection
0x9D921A: mov     [esp+14h+var_4], 0
0x9D9222: call    SettingCollectionList_AddSetting
0x9D9227: push    offset sub_A16EB0; void (__cdecl *)()
0x9D922C: call    _atexit
0x9D9231: add     esp, 4
0x9D9234: mov     ecx, [esp+10h+var_C]
0x9D9238: mov     large fs:0, ecx
0x9D923F: pop     ecx
0x9D9240: add     esp, 0Ch
0x9D9243: retn

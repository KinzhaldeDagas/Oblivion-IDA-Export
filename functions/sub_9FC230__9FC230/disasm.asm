0x9FC230: push    0FFFFFFFFh
0x9FC232: push    offset SEH_9FC230
0x9FC237: mov     eax, large fs:0
0x9FC23D: push    eax
0x9FC23E: mov     eax, ___security_cookie
0x9FC243: xor     eax, esp
0x9FC245: push    eax
0x9FC246: lea     eax, [esp+10h+var_C]
0x9FC24A: mov     large fs:0, eax
0x9FC250: push    offset a33J
0x9FC255: mov     ecx, offset INISettingCollection
0x9FC25A: mov     [esp+14h+var_4], 0
0x9FC262: call    SettingCollectionList_AddSetting
0x9FC267: push    offset sub_A24BF0; void (__cdecl *)()
0x9FC26C: call    _atexit
0x9FC271: add     esp, 4
0x9FC274: mov     ecx, [esp+10h+var_C]
0x9FC278: mov     large fs:0, ecx
0x9FC27F: pop     ecx
0x9FC280: add     esp, 0Ch
0x9FC283: retn

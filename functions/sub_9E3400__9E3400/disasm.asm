0x9E3400: push    0FFFFFFFFh
0x9E3402: push    offset SEH_9E3400
0x9E3407: mov     eax, large fs:0
0x9E340D: push    eax
0x9E340E: mov     eax, ___security_cookie
0x9E3413: xor     eax, esp
0x9E3415: push    eax
0x9E3416: lea     eax, [esp+10h+var_C]
0x9E341A: mov     large fs:0, eax
0x9E3420: push    offset byte_B09AF0
0x9E3425: mov     ecx, offset INISettingCollection
0x9E342A: mov     [esp+14h+var_4], 0
0x9E3432: call    SettingCollectionList_AddSetting
0x9E3437: push    offset sub_A1BD90; void (__cdecl *)()
0x9E343C: call    _atexit
0x9E3441: add     esp, 4
0x9E3444: mov     ecx, [esp+10h+var_C]
0x9E3448: mov     large fs:0, ecx
0x9E344F: pop     ecx
0x9E3450: add     esp, 0Ch
0x9E3453: retn

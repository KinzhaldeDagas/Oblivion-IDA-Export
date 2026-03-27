0x9DEC80: push    0FFFFFFFFh
0x9DEC82: push    offset SEH_9DEC80
0x9DEC87: mov     eax, large fs:0
0x9DEC8D: push    eax
0x9DEC8E: mov     eax, ___security_cookie
0x9DEC93: xor     eax, esp
0x9DEC95: push    eax
0x9DEC96: lea     eax, [esp+10h+var_C]
0x9DEC9A: mov     large fs:0, eax
0x9DECA0: push    offset unk_B06F24
0x9DECA5: mov     ecx, offset INISettingCollection
0x9DECAA: mov     [esp+14h+var_4], 0
0x9DECB2: call    SettingCollectionList_AddSetting
0x9DECB7: push    offset sub_A19BF0; void (__cdecl *)()
0x9DECBC: call    _atexit
0x9DECC1: add     esp, 4
0x9DECC4: mov     ecx, [esp+10h+var_C]
0x9DECC8: mov     large fs:0, ecx
0x9DECCF: pop     ecx
0x9DECD0: add     esp, 0Ch
0x9DECD3: retn

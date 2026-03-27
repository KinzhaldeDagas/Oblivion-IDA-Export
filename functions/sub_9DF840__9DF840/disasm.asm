0x9DF840: push    0FFFFFFFFh
0x9DF842: push    offset SEH_9DF840
0x9DF847: mov     eax, large fs:0
0x9DF84D: push    eax
0x9DF84E: mov     eax, ___security_cookie
0x9DF853: xor     eax, esp
0x9DF855: push    eax
0x9DF856: lea     eax, [esp+10h+var_C]
0x9DF85A: mov     large fs:0, eax
0x9DF860: push    offset byte_B07050
0x9DF865: mov     ecx, offset INISettingCollection
0x9DF86A: mov     [esp+14h+var_4], 0
0x9DF872: call    SettingCollectionList_AddSetting
0x9DF877: push    offset sub_A1A240; void (__cdecl *)()
0x9DF87C: call    _atexit
0x9DF881: add     esp, 4
0x9DF884: mov     ecx, [esp+10h+var_C]
0x9DF888: mov     large fs:0, ecx
0x9DF88F: pop     ecx
0x9DF890: add     esp, 0Ch
0x9DF893: retn

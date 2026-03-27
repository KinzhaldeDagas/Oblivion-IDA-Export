0x9DDA80: push    0FFFFFFFFh
0x9DDA82: push    offset SEH_9DDA80
0x9DDA87: mov     eax, large fs:0
0x9DDA8D: push    eax
0x9DDA8E: mov     eax, ___security_cookie
0x9DDA93: xor     eax, esp
0x9DDA95: push    eax
0x9DDA96: lea     eax, [esp+10h+var_C]
0x9DDA9A: mov     large fs:0, eax
0x9DDAA0: push    offset bAllowSM20Hair
0x9DDAA5: mov     ecx, offset INISettingCollection
0x9DDAAA: mov     [esp+14h+var_4], 0
0x9DDAB2: call    SettingCollectionList_AddSetting
0x9DDAB7: push    offset sub_A192F0; void (__cdecl *)()
0x9DDABC: call    _atexit
0x9DDAC1: add     esp, 4
0x9DDAC4: mov     ecx, [esp+10h+var_C]
0x9DDAC8: mov     large fs:0, ecx
0x9DDACF: pop     ecx
0x9DDAD0: add     esp, 0Ch
0x9DDAD3: retn

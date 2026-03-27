0x9DB210: push    0FFFFFFFFh
0x9DB212: push    offset SEH_9DB210
0x9DB217: mov     eax, large fs:0
0x9DB21D: push    eax
0x9DB21E: mov     eax, ___security_cookie
0x9DB223: xor     eax, esp
0x9DB225: push    eax
0x9DB226: lea     eax, [esp+10h+var_C]
0x9DB22A: mov     large fs:0, eax
0x9DB230: push    offset fMoveMassLimit
0x9DB235: mov     ecx, offset INISettingCollection
0x9DB23A: mov     [esp+14h+var_4], 0
0x9DB242: call    SettingCollectionList_AddSetting
0x9DB247: push    offset sub_A17E70; void (__cdecl *)()
0x9DB24C: call    _atexit
0x9DB251: add     esp, 4
0x9DB254: mov     ecx, [esp+10h+var_C]
0x9DB258: mov     large fs:0, ecx
0x9DB25F: pop     ecx
0x9DB260: add     esp, 0Ch
0x9DB263: retn

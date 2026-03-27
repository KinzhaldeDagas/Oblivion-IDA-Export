0x9D8D70: push    0FFFFFFFFh
0x9D8D72: push    offset SEH_9D8D70
0x9D8D77: mov     eax, large fs:0
0x9D8D7D: push    eax
0x9D8D7E: mov     eax, ___security_cookie
0x9D8D83: xor     eax, esp
0x9D8D85: push    eax
0x9D8D86: lea     eax, [esp+10h+var_C]
0x9D8D8A: mov     large fs:0, eax
0x9D8D90: push    offset flt_B02D78
0x9D8D95: mov     ecx, offset INISettingCollection
0x9D8D9A: mov     [esp+14h+var_4], 0
0x9D8DA2: call    SettingCollectionList_AddSetting
0x9D8DA7: push    offset sub_A16C70; void (__cdecl *)()
0x9D8DAC: call    _atexit
0x9D8DB1: add     esp, 4
0x9D8DB4: mov     ecx, [esp+10h+var_C]
0x9D8DB8: mov     large fs:0, ecx
0x9D8DBF: pop     ecx
0x9D8DC0: add     esp, 0Ch
0x9D8DC3: retn

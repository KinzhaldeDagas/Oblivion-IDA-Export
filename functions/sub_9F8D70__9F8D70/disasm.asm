0x9F8D70: push    0FFFFFFFFh
0x9F8D72: push    offset SEH_9F8D70
0x9F8D77: mov     eax, large fs:0
0x9F8D7D: push    eax
0x9F8D7E: mov     eax, ___security_cookie
0x9F8D83: xor     eax, esp
0x9F8D85: push    eax
0x9F8D86: lea     eax, [esp+10h+var_C]
0x9F8D8A: mov     large fs:0, eax
0x9F8D90: push    offset unk_B1210C
0x9F8D95: mov     ecx, offset INISettingCollection
0x9F8D9A: mov     [esp+14h+var_4], 0
0x9F8DA2: call    SettingCollectionList_AddSetting
0x9F8DA7: push    offset sub_A23520; void (__cdecl *)()
0x9F8DAC: call    _atexit
0x9F8DB1: add     esp, 4
0x9F8DB4: mov     ecx, [esp+10h+var_C]
0x9F8DB8: mov     large fs:0, ecx
0x9F8DBF: pop     ecx
0x9F8DC0: add     esp, 0Ch
0x9F8DC3: retn

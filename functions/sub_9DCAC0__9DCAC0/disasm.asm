0x9DCAC0: push    0FFFFFFFFh
0x9DCAC2: push    offset SEH_9DCAC0
0x9DCAC7: mov     eax, large fs:0
0x9DCACD: push    eax
0x9DCACE: mov     eax, ___security_cookie
0x9DCAD3: xor     eax, esp
0x9DCAD5: push    eax
0x9DCAD6: lea     eax, [esp+10h+var_C]
0x9DCADA: mov     large fs:0, eax
0x9DCAE0: push    offset dword_B06C54
0x9DCAE5: mov     ecx, offset INISettingCollection
0x9DCAEA: mov     [esp+14h+var_4], 0
0x9DCAF2: call    SettingCollectionList_AddSetting
0x9DCAF7: push    offset sub_A18B10; void (__cdecl *)()
0x9DCAFC: call    _atexit
0x9DCB01: add     esp, 4
0x9DCB04: mov     ecx, [esp+10h+var_C]
0x9DCB08: mov     large fs:0, ecx
0x9DCB0F: pop     ecx
0x9DCB10: add     esp, 0Ch
0x9DCB13: retn

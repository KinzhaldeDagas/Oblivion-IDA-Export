0x9DD180: push    0FFFFFFFFh
0x9DD182: push    offset SEH_9DD180
0x9DD187: mov     eax, large fs:0
0x9DD18D: push    eax
0x9DD18E: mov     eax, ___security_cookie
0x9DD193: xor     eax, esp
0x9DD195: push    eax
0x9DD196: lea     eax, [esp+10h+var_C]
0x9DD19A: mov     large fs:0, eax
0x9DD1A0: push    offset byte_B06CE4
0x9DD1A5: mov     ecx, offset INISettingCollection
0x9DD1AA: mov     [esp+14h+var_4], 0
0x9DD1B2: call    SettingCollectionList_AddSetting
0x9DD1B7: push    offset sub_A18E70; void (__cdecl *)()
0x9DD1BC: call    _atexit
0x9DD1C1: add     esp, 4
0x9DD1C4: mov     ecx, [esp+10h+var_C]
0x9DD1C8: mov     large fs:0, ecx
0x9DD1CF: pop     ecx
0x9DD1D0: add     esp, 0Ch
0x9DD1D3: retn

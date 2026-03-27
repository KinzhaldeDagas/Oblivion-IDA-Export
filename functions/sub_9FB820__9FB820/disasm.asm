0x9FB820: push    0FFFFFFFFh
0x9FB822: push    offset SEH_9FB820
0x9FB827: mov     eax, large fs:0
0x9FB82D: push    eax
0x9FB82E: mov     eax, ___security_cookie
0x9FB833: xor     eax, esp
0x9FB835: push    eax
0x9FB836: lea     eax, [esp+10h+var_C]
0x9FB83A: mov     large fs:0, eax
0x9FB840: push    offset dword_B13600
0x9FB845: mov     ecx, offset INISettingCollection
0x9FB84A: mov     [esp+14h+var_4], 0
0x9FB852: call    SettingCollectionList_AddSetting
0x9FB857: push    offset sub_A24850; void (__cdecl *)()
0x9FB85C: call    _atexit
0x9FB861: add     esp, 4
0x9FB864: mov     ecx, [esp+10h+var_C]
0x9FB868: mov     large fs:0, ecx
0x9FB86F: pop     ecx
0x9FB870: add     esp, 0Ch
0x9FB873: retn

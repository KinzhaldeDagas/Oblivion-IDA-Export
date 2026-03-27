0x9D9CA0: push    0FFFFFFFFh
0x9D9CA2: push    offset SEH_9D9CA0
0x9D9CA7: mov     eax, large fs:0
0x9D9CAD: push    eax
0x9D9CAE: mov     eax, ___security_cookie
0x9D9CB3: xor     eax, esp
0x9D9CB5: push    eax
0x9D9CB6: lea     eax, [esp+10h+var_C]
0x9D9CBA: mov     large fs:0, eax
0x9D9CC0: push    offset dword_B0316C
0x9D9CC5: mov     ecx, offset INISettingCollection
0x9D9CCA: mov     [esp+14h+var_4], 0
0x9D9CD2: call    SettingCollectionList_AddSetting
0x9D9CD7: push    offset sub_A173F0; void (__cdecl *)()
0x9D9CDC: call    _atexit
0x9D9CE1: add     esp, 4
0x9D9CE4: mov     ecx, [esp+10h+var_C]
0x9D9CE8: mov     large fs:0, ecx
0x9D9CEF: pop     ecx
0x9D9CF0: add     esp, 0Ch
0x9D9CF3: retn

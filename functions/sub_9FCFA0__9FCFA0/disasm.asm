0x9FCFA0: push    0FFFFFFFFh
0x9FCFA2: push    offset SEH_9FCFA0
0x9FCFA7: mov     eax, large fs:0
0x9FCFAD: push    eax
0x9FCFAE: mov     eax, ___security_cookie
0x9FCFB3: xor     eax, esp
0x9FCFB5: push    eax
0x9FCFB6: lea     eax, [esp+10h+var_C]
0x9FCFBA: mov     large fs:0, eax
0x9FCFC0: push    offset dword_B148CC
0x9FCFC5: mov     ecx, offset INISettingCollection
0x9FCFCA: mov     [esp+14h+var_4], 0
0x9FCFD2: call    SettingCollectionList_AddSetting
0x9FCFD7: push    offset sub_A252F0; void (__cdecl *)()
0x9FCFDC: call    _atexit
0x9FCFE1: add     esp, 4
0x9FCFE4: mov     ecx, [esp+10h+var_C]
0x9FCFE8: mov     large fs:0, ecx
0x9FCFEF: pop     ecx
0x9FCFF0: add     esp, 0Ch
0x9FCFF3: retn

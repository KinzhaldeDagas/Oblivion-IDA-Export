0x9DFA80: push    0FFFFFFFFh
0x9DFA82: push    offset SEH_9DFA80
0x9DFA87: mov     eax, large fs:0
0x9DFA8D: push    eax
0x9DFA8E: mov     eax, ___security_cookie
0x9DFA93: xor     eax, esp
0x9DFA95: push    eax
0x9DFA96: lea     eax, [esp+10h+var_C]
0x9DFA9A: mov     large fs:0, eax
0x9DFAA0: push    offset UseWaterReflectionMisc
0x9DFAA5: mov     ecx, offset INISettingCollection
0x9DFAAA: mov     [esp+14h+var_4], 0
0x9DFAB2: call    SettingCollectionList_AddSetting
0x9DFAB7: push    offset sub_A1A360; void (__cdecl *)()
0x9DFABC: call    _atexit
0x9DFAC1: add     esp, 4
0x9DFAC4: mov     ecx, [esp+10h+var_C]
0x9DFAC8: mov     large fs:0, ecx
0x9DFACF: pop     ecx
0x9DFAD0: add     esp, 0Ch
0x9DFAD3: retn

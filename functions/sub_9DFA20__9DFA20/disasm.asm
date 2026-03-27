0x9DFA20: push    0FFFFFFFFh
0x9DFA22: push    offset SEH_9DFA20
0x9DFA27: mov     eax, large fs:0
0x9DFA2D: push    eax
0x9DFA2E: mov     eax, ___security_cookie
0x9DFA33: xor     eax, esp
0x9DFA35: push    eax
0x9DFA36: lea     eax, [esp+10h+var_C]
0x9DFA3A: mov     large fs:0, eax
0x9DFA40: push    offset UseWaterReflectionStatics
0x9DFA45: mov     ecx, offset INISettingCollection
0x9DFA4A: mov     [esp+14h+var_4], 0
0x9DFA52: call    SettingCollectionList_AddSetting
0x9DFA57: push    offset sub_A1A330; void (__cdecl *)()
0x9DFA5C: call    _atexit
0x9DFA61: add     esp, 4
0x9DFA64: mov     ecx, [esp+10h+var_C]
0x9DFA68: mov     large fs:0, ecx
0x9DFA6F: pop     ecx
0x9DFA70: add     esp, 0Ch
0x9DFA73: retn

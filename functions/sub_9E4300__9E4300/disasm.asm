0x9E4300: push    0FFFFFFFFh
0x9E4302: push    offset SEH_9E4300
0x9E4307: mov     eax, large fs:0
0x9E430D: push    eax
0x9E430E: mov     eax, ___security_cookie
0x9E4313: xor     eax, esp
0x9E4315: push    eax
0x9E4316: lea     eax, [esp+10h+var_C]
0x9E431A: mov     large fs:0, eax
0x9E4320: push    offset useFuzzyPicking
0x9E4325: mov     ecx, offset INISettingCollection
0x9E432A: mov     [esp+14h+var_4], 0
0x9E4332: call    SettingCollectionList_AddSetting
0x9E4337: push    offset sub_A1C5E0; void (__cdecl *)()
0x9E433C: call    _atexit
0x9E4341: add     esp, 4
0x9E4344: mov     ecx, [esp+10h+var_C]
0x9E4348: mov     large fs:0, ecx
0x9E434F: pop     ecx
0x9E4350: add     esp, 0Ch
0x9E4353: retn

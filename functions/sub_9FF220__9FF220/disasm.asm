0x9FF220: push    0FFFFFFFFh
0x9FF222: push    offset SEH_9FF220
0x9FF227: mov     eax, large fs:0
0x9FF22D: push    eax
0x9FF22E: mov     eax, ___security_cookie
0x9FF233: xor     eax, esp
0x9FF235: push    eax
0x9FF236: lea     eax, [esp+10h+var_C]
0x9FF23A: mov     large fs:0, eax
0x9FF240: push    offset flt_B161D0
0x9FF245: mov     ecx, offset INISettingCollection
0x9FF24A: mov     [esp+14h+var_4], 0
0x9FF252: call    SettingCollectionList_AddSetting
0x9FF257: push    offset sub_A261E0; void (__cdecl *)()
0x9FF25C: call    _atexit
0x9FF261: add     esp, 4
0x9FF264: mov     ecx, [esp+10h+var_C]
0x9FF268: mov     large fs:0, ecx
0x9FF26F: pop     ecx
0x9FF270: add     esp, 0Ch
0x9FF273: retn

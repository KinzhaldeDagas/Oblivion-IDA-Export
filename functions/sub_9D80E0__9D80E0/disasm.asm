0x9D80E0: push    0FFFFFFFFh
0x9D80E2: push    offset SEH_9D80E0
0x9D80E7: mov     eax, large fs:0
0x9D80ED: push    eax
0x9D80EE: mov     eax, ___security_cookie
0x9D80F3: xor     eax, esp
0x9D80F5: push    eax
0x9D80F6: lea     eax, [esp+10h+var_C]
0x9D80FA: mov     large fs:0, eax
0x9D8100: push    offset bBackgroundMouse
0x9D8105: mov     ecx, offset INISettingCollection
0x9D810A: mov     [esp+14h+var_4], 0
0x9D8112: call    SettingCollectionList_AddSetting
0x9D8117: push    offset sub_A16490; void (__cdecl *)()
0x9D811C: call    _atexit
0x9D8121: add     esp, 4
0x9D8124: mov     ecx, [esp+10h+var_C]
0x9D8128: mov     large fs:0, ecx
0x9D812F: pop     ecx
0x9D8130: add     esp, 0Ch
0x9D8133: retn

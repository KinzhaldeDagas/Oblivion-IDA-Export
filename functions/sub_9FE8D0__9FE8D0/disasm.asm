0x9FE8D0: push    0FFFFFFFFh
0x9FE8D2: push    offset SEH_9FE8D0
0x9FE8D7: mov     eax, large fs:0
0x9FE8DD: push    eax
0x9FE8DE: mov     eax, ___security_cookie
0x9FE8E3: xor     eax, esp
0x9FE8E5: push    eax
0x9FE8E6: lea     eax, [esp+10h+var_C]
0x9FE8EA: mov     large fs:0, eax
0x9FE8F0: push    offset byte_B15824
0x9FE8F5: mov     ecx, offset INISettingCollection
0x9FE8FA: mov     [esp+14h+var_4], 0
0x9FE902: call    SettingCollectionList_AddSetting
0x9FE907: push    offset sub_A25ED0; void (__cdecl *)()
0x9FE90C: call    _atexit
0x9FE911: add     esp, 4
0x9FE914: mov     ecx, [esp+10h+var_C]
0x9FE918: mov     large fs:0, ecx
0x9FE91F: pop     ecx
0x9FE920: add     esp, 0Ch
0x9FE923: retn

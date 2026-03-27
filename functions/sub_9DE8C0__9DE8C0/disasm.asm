0x9DE8C0: push    0FFFFFFFFh
0x9DE8C2: push    offset SEH_9DE8C0
0x9DE8C7: mov     eax, large fs:0
0x9DE8CD: push    eax
0x9DE8CE: mov     eax, ___security_cookie
0x9DE8D3: xor     eax, esp
0x9DE8D5: push    eax
0x9DE8D6: lea     eax, [esp+10h+var_C]
0x9DE8DA: mov     large fs:0, eax
0x9DE8E0: push    offset flt_B06ED4
0x9DE8E5: mov     ecx, offset INISettingCollection
0x9DE8EA: mov     [esp+14h+var_4], 0
0x9DE8F2: call    SettingCollectionList_AddSetting
0x9DE8F7: push    offset sub_A19A10; void (__cdecl *)()
0x9DE8FC: call    _atexit
0x9DE901: add     esp, 4
0x9DE904: mov     ecx, [esp+10h+var_C]
0x9DE908: mov     large fs:0, ecx
0x9DE90F: pop     ecx
0x9DE910: add     esp, 0Ch
0x9DE913: retn

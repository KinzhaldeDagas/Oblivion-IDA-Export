0x9DAC50: push    0FFFFFFFFh
0x9DAC52: push    offset SEH_9DAC50
0x9DAC57: mov     eax, large fs:0
0x9DAC5D: push    eax
0x9DAC5E: mov     eax, ___security_cookie
0x9DAC63: xor     eax, esp
0x9DAC65: push    eax
0x9DAC66: lea     eax, [esp+10h+var_C]
0x9DAC6A: mov     large fs:0, eax
0x9DAC70: push    offset off_B0472C; ".\\"
0x9DAC75: mov     ecx, offset RegSettingCollection
0x9DAC7A: mov     [esp+14h+var_4], 0
0x9DAC82: call    SettingCollectionList_AddSetting
0x9DAC87: push    offset sub_A17B70; void (__cdecl *)()
0x9DAC8C: call    _atexit
0x9DAC91: add     esp, 4
0x9DAC94: mov     ecx, [esp+10h+var_C]
0x9DAC98: mov     large fs:0, ecx
0x9DAC9F: pop     ecx
0x9DACA0: add     esp, 0Ch
0x9DACA3: retn

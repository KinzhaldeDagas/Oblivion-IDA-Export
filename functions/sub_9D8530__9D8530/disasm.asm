0x9D8530: push    0FFFFFFFFh
0x9D8532: push    offset SEH_9D8530
0x9D8537: mov     eax, large fs:0
0x9D853D: push    eax
0x9D853E: mov     eax, ___security_cookie
0x9D8543: xor     eax, esp
0x9D8545: push    eax
0x9D8546: lea     eax, [esp+10h+var_C]
0x9D854A: mov     large fs:0, eax
0x9D8550: push    offset off_B02CC8
0x9D8555: mov     ecx, offset INISettingCollection
0x9D855A: mov     [esp+14h+var_4], 0
0x9D8562: call    SettingCollectionList_AddSetting
0x9D8567: push    offset sub_A16850; void (__cdecl *)()
0x9D856C: call    _atexit
0x9D8571: add     esp, 4
0x9D8574: mov     ecx, [esp+10h+var_C]
0x9D8578: mov     large fs:0, ecx
0x9D857F: pop     ecx
0x9D8580: add     esp, 0Ch
0x9D8583: retn

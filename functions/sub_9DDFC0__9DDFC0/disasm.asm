0x9DDFC0: push    0FFFFFFFFh
0x9DDFC2: push    offset SEH_9DDFC0
0x9DDFC7: mov     eax, large fs:0
0x9DDFCD: push    eax
0x9DDFCE: mov     eax, ___security_cookie
0x9DDFD3: xor     eax, esp
0x9DDFD5: push    eax
0x9DDFD6: lea     eax, [esp+10h+var_C]
0x9DDFDA: mov     large fs:0, eax
0x9DDFE0: push    offset flt_B06E14
0x9DDFE5: mov     ecx, offset INISettingCollection
0x9DDFEA: mov     [esp+14h+var_4], 0
0x9DDFF2: call    SettingCollectionList_AddSetting
0x9DDFF7: push    offset sub_A19590; void (__cdecl *)()
0x9DDFFC: call    _atexit
0x9DE001: add     esp, 4
0x9DE004: mov     ecx, [esp+10h+var_C]
0x9DE008: mov     large fs:0, ecx
0x9DE00F: pop     ecx
0x9DE010: add     esp, 0Ch
0x9DE013: retn

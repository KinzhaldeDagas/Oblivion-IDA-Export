0x9FCB20: push    0FFFFFFFFh
0x9FCB22: push    offset SEH_9FCB20
0x9FCB27: mov     eax, large fs:0
0x9FCB2D: push    eax
0x9FCB2E: mov     eax, ___security_cookie
0x9FCB33: xor     eax, esp
0x9FCB35: push    eax
0x9FCB36: lea     eax, [esp+10h+var_C]
0x9FCB3A: mov     large fs:0, eax
0x9FCB40: push    offset flt_B14854
0x9FCB45: mov     ecx, offset INISettingCollection
0x9FCB4A: mov     [esp+14h+var_4], 0
0x9FCB52: call    SettingCollectionList_AddSetting
0x9FCB57: push    offset sub_A250B0; void (__cdecl *)()
0x9FCB5C: call    _atexit
0x9FCB61: add     esp, 4
0x9FCB64: mov     ecx, [esp+10h+var_C]
0x9FCB68: mov     large fs:0, ecx
0x9FCB6F: pop     ecx
0x9FCB70: add     esp, 0Ch
0x9FCB73: retn

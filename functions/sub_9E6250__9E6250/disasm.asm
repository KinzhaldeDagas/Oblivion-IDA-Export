0x9E6250: push    0FFFFFFFFh
0x9E6252: push    offset SEH_9E6250
0x9E6257: mov     eax, large fs:0
0x9E625D: push    eax
0x9E625E: mov     eax, ___security_cookie
0x9E6263: xor     eax, esp
0x9E6265: push    eax
0x9E6266: lea     eax, [esp+10h+var_C]
0x9E626A: mov     large fs:0, eax
0x9E6270: push    offset flt_B11E2C
0x9E6275: mov     ecx, offset INISettingCollection
0x9E627A: mov     [esp+14h+var_4], 0
0x9E6282: call    SettingCollectionList_AddSetting
0x9E6287: push    offset sub_A1D480; void (__cdecl *)()
0x9E628C: call    _atexit
0x9E6291: add     esp, 4
0x9E6294: mov     ecx, [esp+10h+var_C]
0x9E6298: mov     large fs:0, ecx
0x9E629F: pop     ecx
0x9E62A0: add     esp, 0Ch
0x9E62A3: retn

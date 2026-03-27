0x9E62B0: push    0FFFFFFFFh
0x9E62B2: push    offset SEH_9E62B0
0x9E62B7: mov     eax, large fs:0
0x9E62BD: push    eax
0x9E62BE: mov     eax, ___security_cookie
0x9E62C3: xor     eax, esp
0x9E62C5: push    eax
0x9E62C6: lea     eax, [esp+10h+var_C]
0x9E62CA: mov     large fs:0, eax
0x9E62D0: push    offset flt_B11E34
0x9E62D5: mov     ecx, offset INISettingCollection
0x9E62DA: mov     [esp+14h+var_4], 0
0x9E62E2: call    SettingCollectionList_AddSetting
0x9E62E7: push    offset sub_A1D4B0; void (__cdecl *)()
0x9E62EC: call    _atexit
0x9E62F1: add     esp, 4
0x9E62F4: mov     ecx, [esp+10h+var_C]
0x9E62F8: mov     large fs:0, ecx
0x9E62FF: pop     ecx
0x9E6300: add     esp, 0Ch
0x9E6303: retn

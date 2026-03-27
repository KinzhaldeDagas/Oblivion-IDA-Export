0x9FFA00: push    0FFFFFFFFh
0x9FFA02: push    offset SEH_9FFA00
0x9FFA07: mov     eax, large fs:0
0x9FFA0D: push    eax
0x9FFA0E: mov     eax, ___security_cookie
0x9FFA13: xor     eax, esp
0x9FFA15: push    eax
0x9FFA16: lea     eax, [esp+10h+var_C]
0x9FFA1A: mov     large fs:0, eax
0x9FFA20: push    offset fLargeWeaponWeightMin_Audio
0x9FFA25: mov     ecx, offset INISettingCollection
0x9FFA2A: mov     [esp+14h+var_4], 0
0x9FFA32: call    SettingCollectionList_AddSetting
0x9FFA37: push    offset sub_A265E0; void (__cdecl *)()
0x9FFA3C: call    _atexit
0x9FFA41: add     esp, 4
0x9FFA44: mov     ecx, [esp+10h+var_C]
0x9FFA48: mov     large fs:0, ecx
0x9FFA4F: pop     ecx
0x9FFA50: add     esp, 0Ch
0x9FFA53: retn

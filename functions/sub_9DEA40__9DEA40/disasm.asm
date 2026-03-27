0x9DEA40: push    0FFFFFFFFh
0x9DEA42: push    offset SEH_9DEA40
0x9DEA47: mov     eax, large fs:0
0x9DEA4D: push    eax
0x9DEA4E: mov     eax, ___security_cookie
0x9DEA53: xor     eax, esp
0x9DEA55: push    eax
0x9DEA56: lea     eax, [esp+10h+var_C]
0x9DEA5A: mov     large fs:0, eax
0x9DEA60: push    offset flt_B06EF4
0x9DEA65: mov     ecx, offset INISettingCollection
0x9DEA6A: mov     [esp+14h+var_4], 0
0x9DEA72: call    SettingCollectionList_AddSetting
0x9DEA77: push    offset sub_A19AD0; void (__cdecl *)()
0x9DEA7C: call    _atexit
0x9DEA81: add     esp, 4
0x9DEA84: mov     ecx, [esp+10h+var_C]
0x9DEA88: mov     large fs:0, ecx
0x9DEA8F: pop     ecx
0x9DEA90: add     esp, 0Ch
0x9DEA93: retn

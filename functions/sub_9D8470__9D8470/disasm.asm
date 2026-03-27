0x9D8470: push    0FFFFFFFFh
0x9D8472: push    offset SEH_9D8470
0x9D8477: mov     eax, large fs:0
0x9D847D: push    eax
0x9D847E: mov     eax, ___security_cookie
0x9D8483: xor     eax, esp
0x9D8485: push    eax
0x9D8486: lea     eax, [esp+10h+var_C]
0x9D848A: mov     large fs:0, eax
0x9D8490: push    offset off_B02CB8
0x9D8495: mov     ecx, offset INISettingCollection
0x9D849A: mov     [esp+14h+var_4], 0
0x9D84A2: call    SettingCollectionList_AddSetting
0x9D84A7: push    offset sub_A167F0; void (__cdecl *)()
0x9D84AC: call    _atexit
0x9D84B1: add     esp, 4
0x9D84B4: mov     ecx, [esp+10h+var_C]
0x9D84B8: mov     large fs:0, ecx
0x9D84BF: pop     ecx
0x9D84C0: add     esp, 0Ch
0x9D84C3: retn

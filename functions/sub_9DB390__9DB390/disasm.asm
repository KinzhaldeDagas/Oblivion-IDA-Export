0x9DB390: push    0FFFFFFFFh
0x9DB392: push    offset SEH_9DB390
0x9DB397: mov     eax, large fs:0
0x9DB39D: push    eax
0x9DB39E: mov     eax, ___security_cookie
0x9DB3A3: xor     eax, esp
0x9DB3A5: push    eax
0x9DB3A6: lea     eax, [esp+10h+var_C]
0x9DB3AA: mov     large fs:0, eax
0x9DB3B0: push    offset flt_B05234
0x9DB3B5: mov     ecx, offset INISettingCollection
0x9DB3BA: mov     [esp+14h+var_4], 0
0x9DB3C2: call    SettingCollectionList_AddSetting
0x9DB3C7: push    offset sub_A17F30; void (__cdecl *)()
0x9DB3CC: call    _atexit
0x9DB3D1: add     esp, 4
0x9DB3D4: mov     ecx, [esp+10h+var_C]
0x9DB3D8: mov     large fs:0, ecx
0x9DB3DF: pop     ecx
0x9DB3E0: add     esp, 0Ch
0x9DB3E3: retn

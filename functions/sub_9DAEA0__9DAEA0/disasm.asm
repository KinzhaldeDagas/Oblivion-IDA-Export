0x9DAEA0: push    0FFFFFFFFh
0x9DAEA2: push    offset SEH_9DAEA0
0x9DAEA7: mov     eax, large fs:0
0x9DAEAD: push    eax
0x9DAEAE: mov     eax, ___security_cookie
0x9DAEB3: xor     eax, esp
0x9DAEB5: push    eax
0x9DAEB6: lea     eax, [esp+10h+var_C]
0x9DAEBA: mov     large fs:0, eax
0x9DAEC0: push    offset bPreemptivelyUnloadCells
0x9DAEC5: mov     ecx, offset INISettingCollection
0x9DAECA: mov     [esp+14h+var_4], 0
0x9DAED2: call    SettingCollectionList_AddSetting
0x9DAED7: push    offset sub_A17CC0; void (__cdecl *)()
0x9DAEDC: call    _atexit
0x9DAEE1: add     esp, 4
0x9DAEE4: mov     ecx, [esp+10h+var_C]
0x9DAEE8: mov     large fs:0, ecx
0x9DAEEF: pop     ecx
0x9DAEF0: add     esp, 0Ch
0x9DAEF3: retn

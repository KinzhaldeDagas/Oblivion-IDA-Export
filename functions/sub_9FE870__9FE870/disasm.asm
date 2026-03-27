0x9FE870: push    0FFFFFFFFh
0x9FE872: push    offset SEH_9FE870
0x9FE877: mov     eax, large fs:0
0x9FE87D: push    eax
0x9FE87E: mov     eax, ___security_cookie
0x9FE883: xor     eax, esp
0x9FE885: push    eax
0x9FE886: lea     eax, [esp+10h+var_C]
0x9FE88A: mov     large fs:0, eax
0x9FE890: push    offset bDebugSmoothing
0x9FE895: mov     ecx, offset INISettingCollection
0x9FE89A: mov     [esp+14h+var_4], 0
0x9FE8A2: call    SettingCollectionList_AddSetting
0x9FE8A7: push    offset sub_A25EA0; void (__cdecl *)()
0x9FE8AC: call    _atexit
0x9FE8B1: add     esp, 4
0x9FE8B4: mov     ecx, [esp+10h+var_C]
0x9FE8B8: mov     large fs:0, ecx
0x9FE8BF: pop     ecx
0x9FE8C0: add     esp, 0Ch
0x9FE8C3: retn

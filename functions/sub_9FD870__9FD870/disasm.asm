0x9FD870: push    0FFFFFFFFh
0x9FD872: push    offset SEH_9FD870
0x9FD877: mov     eax, large fs:0
0x9FD87D: push    eax
0x9FD87E: mov     eax, ___security_cookie
0x9FD883: xor     eax, esp
0x9FD885: push    eax
0x9FD886: lea     eax, [esp+10h+var_C]
0x9FD88A: mov     large fs:0, eax
0x9FD890: push    offset flt_B14CD4
0x9FD895: mov     ecx, offset INISettingCollection
0x9FD89A: mov     [esp+14h+var_4], 0
0x9FD8A2: call    SettingCollectionList_AddSetting
0x9FD8A7: push    offset sub_A25730; void (__cdecl *)()
0x9FD8AC: call    _atexit
0x9FD8B1: add     esp, 4
0x9FD8B4: mov     ecx, [esp+10h+var_C]
0x9FD8B8: mov     large fs:0, ecx
0x9FD8BF: pop     ecx
0x9FD8C0: add     esp, 0Ch
0x9FD8C3: retn

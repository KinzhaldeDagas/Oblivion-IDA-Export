0x9FD6F0: push    0FFFFFFFFh
0x9FD6F2: push    offset SEH_9FD6F0
0x9FD6F7: mov     eax, large fs:0
0x9FD6FD: push    eax
0x9FD6FE: mov     eax, ___security_cookie
0x9FD703: xor     eax, esp
0x9FD705: push    eax
0x9FD706: lea     eax, [esp+10h+var_C]
0x9FD70A: mov     large fs:0, eax
0x9FD710: push    offset flt_B14CB4
0x9FD715: mov     ecx, offset INISettingCollection
0x9FD71A: mov     [esp+14h+var_4], 0
0x9FD722: call    SettingCollectionList_AddSetting
0x9FD727: push    offset sub_A25670; void (__cdecl *)()
0x9FD72C: call    _atexit
0x9FD731: add     esp, 4
0x9FD734: mov     ecx, [esp+10h+var_C]
0x9FD738: mov     large fs:0, ecx
0x9FD73F: pop     ecx
0x9FD740: add     esp, 0Ch
0x9FD743: retn

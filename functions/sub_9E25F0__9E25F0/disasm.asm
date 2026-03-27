0x9E25F0: push    0FFFFFFFFh
0x9E25F2: push    offset SEH_9E25F0
0x9E25F7: mov     eax, large fs:0
0x9E25FD: push    eax
0x9E25FE: mov     eax, ___security_cookie
0x9E2603: xor     eax, esp
0x9E2605: push    eax
0x9E2606: lea     eax, [esp+10h+var_C]
0x9E260A: mov     large fs:0, eax
0x9E2610: push    offset flt_B08188
0x9E2615: mov     ecx, offset INISettingCollection
0x9E261A: mov     [esp+14h+var_4], 0
0x9E2622: call    SettingCollectionList_AddSetting
0x9E2627: push    offset sub_A1B5A0; void (__cdecl *)()
0x9E262C: call    _atexit
0x9E2631: add     esp, 4
0x9E2634: mov     ecx, [esp+10h+var_C]
0x9E2638: mov     large fs:0, ecx
0x9E263F: pop     ecx
0x9E2640: add     esp, 0Ch
0x9E2643: retn

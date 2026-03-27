0x9E2650: push    0FFFFFFFFh
0x9E2652: push    offset SEH_9E2650
0x9E2657: mov     eax, large fs:0
0x9E265D: push    eax
0x9E265E: mov     eax, ___security_cookie
0x9E2663: xor     eax, esp
0x9E2665: push    eax
0x9E2666: lea     eax, [esp+10h+var_C]
0x9E266A: mov     large fs:0, eax
0x9E2670: push    offset flt_B08190
0x9E2675: mov     ecx, offset INISettingCollection
0x9E267A: mov     [esp+14h+var_4], 0
0x9E2682: call    SettingCollectionList_AddSetting
0x9E2687: push    offset sub_A1B5D0; void (__cdecl *)()
0x9E268C: call    _atexit
0x9E2691: add     esp, 4
0x9E2694: mov     ecx, [esp+10h+var_C]
0x9E2698: mov     large fs:0, ecx
0x9E269F: pop     ecx
0x9E26A0: add     esp, 0Ch
0x9E26A3: retn

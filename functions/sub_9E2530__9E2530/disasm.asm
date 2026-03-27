0x9E2530: push    0FFFFFFFFh
0x9E2532: push    offset SEH_9E2530
0x9E2537: mov     eax, large fs:0
0x9E253D: push    eax
0x9E253E: mov     eax, ___security_cookie
0x9E2543: xor     eax, esp
0x9E2545: push    eax
0x9E2546: lea     eax, [esp+10h+var_C]
0x9E254A: mov     large fs:0, eax
0x9E2550: push    offset flt_B08178
0x9E2555: mov     ecx, offset INISettingCollection
0x9E255A: mov     [esp+14h+var_4], 0
0x9E2562: call    SettingCollectionList_AddSetting
0x9E2567: push    offset sub_A1B540; void (__cdecl *)()
0x9E256C: call    _atexit
0x9E2571: add     esp, 4
0x9E2574: mov     ecx, [esp+10h+var_C]
0x9E2578: mov     large fs:0, ecx
0x9E257F: pop     ecx
0x9E2580: add     esp, 0Ch
0x9E2583: retn

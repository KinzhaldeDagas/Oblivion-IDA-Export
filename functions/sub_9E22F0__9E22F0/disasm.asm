0x9E22F0: push    0FFFFFFFFh
0x9E22F2: push    offset SEH_9E22F0
0x9E22F7: mov     eax, large fs:0
0x9E22FD: push    eax
0x9E22FE: mov     eax, ___security_cookie
0x9E2303: xor     eax, esp
0x9E2305: push    eax
0x9E2306: lea     eax, [esp+10h+var_C]
0x9E230A: mov     large fs:0, eax
0x9E2310: push    offset useQuadratic
0x9E2315: mov     ecx, offset INISettingCollection
0x9E231A: mov     [esp+14h+var_4], 0
0x9E2322: call    SettingCollectionList_AddSetting
0x9E2327: push    offset sub_A1B420; void (__cdecl *)()
0x9E232C: call    _atexit
0x9E2331: add     esp, 4
0x9E2334: mov     ecx, [esp+10h+var_C]
0x9E2338: mov     large fs:0, ecx
0x9E233F: pop     ecx
0x9E2340: add     esp, 0Ch
0x9E2343: retn

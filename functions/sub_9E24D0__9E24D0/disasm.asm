0x9E24D0: push    0FFFFFFFFh
0x9E24D2: push    offset SEH_9E24D0
0x9E24D7: mov     eax, large fs:0
0x9E24DD: push    eax
0x9E24DE: mov     eax, ___security_cookie
0x9E24E3: xor     eax, esp
0x9E24E5: push    eax
0x9E24E6: lea     eax, [esp+10h+var_C]
0x9E24EA: mov     large fs:0, eax
0x9E24F0: push    offset flt_B08170
0x9E24F5: mov     ecx, offset INISettingCollection
0x9E24FA: mov     [esp+14h+var_4], 0
0x9E2502: call    SettingCollectionList_AddSetting
0x9E2507: push    offset sub_A1B510; void (__cdecl *)()
0x9E250C: call    _atexit
0x9E2511: add     esp, 4
0x9E2514: mov     ecx, [esp+10h+var_C]
0x9E2518: mov     large fs:0, ecx
0x9E251F: pop     ecx
0x9E2520: add     esp, 0Ch
0x9E2523: retn

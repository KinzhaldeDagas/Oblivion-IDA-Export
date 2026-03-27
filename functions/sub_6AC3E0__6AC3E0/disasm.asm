0x6AC3E0: mov     eax, [esp+arg_4]
0x6AC3E4: test    eax, eax
0x6AC3E6: push    esi
0x6AC3E7: mov     esi, ecx
0x6AC3E9: jz      short loc_6AC415
0x6AC3EB: mov     eax, [eax+3Ch]
0x6AC3EE: test    eax, eax
0x6AC3F0: jz      short loc_6AC415
0x6AC3F2: push    ecx
0x6AC3F3: mov     ecx, esp
0x6AC3F5: mov     [ecx], eax
0x6AC3F7: add     eax, 4
0x6AC3FA: mov     [esp+8+arg_4], esp
0x6AC3FE: push    eax; lpAddend
0x6AC3FF: call    dword ptr ds:0A28078h
0x6AC405: mov     eax, [esp+8+arg_0]
0x6AC409: mov     ecx, [esi+304h]
0x6AC40F: push    eax
0x6AC410: call    sub_6AA3B0
0x6AC415: pop     esi
0x6AC416: retn    8

0x60E430: push    esi
0x60E431: mov     esi, ecx
0x60E433: mov     eax, [esi]
0x60E435: mov     edx, [eax+154h]
0x60E43B: call    edx
0x60E43D: test    eax, eax
0x60E43F: jz      short loc_60E458
0x60E441: mov     eax, [esi]
0x60E443: mov     edx, [eax+380h]
0x60E449: mov     ecx, esi
0x60E44B: call    edx
0x60E44D: test    eax, eax
0x60E44F: jz      short loc_60E458
0x60E451: mov     ecx, esi
0x60E453: call    sub_5F0410
0x60E458: mov     eax, [esp+4+a2]
0x60E45C: push    eax; a2
0x60E45D: mov     ecx, esi; this
0x60E45F: call    TESObjectREFR_Set3D
0x60E464: pop     esi
0x60E465: retn    4

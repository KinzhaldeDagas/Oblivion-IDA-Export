0x468440: test    [esp+arg_0], 100h
0x468448: push    esi
0x468449: mov     esi, ecx
0x46844B: jz      short loc_468491
0x46844D: mov     ecx, ds:0B33B00h
0x468453: push    1; Size
0x468455: lea     eax, [esi+4]
0x468458: push    eax; Dst
0x468459: call    SaveLoad_LoadData
0x46845E: push    1; Size
0x468460: lea     ecx, [esi+5]
0x468463: push    ecx; Dst
0x468464: mov     ecx, ds:0B33B00h
0x46846A: call    SaveLoad_LoadData
0x46846F: mov     ecx, ds:0B33B00h
0x468475: push    1; Size
0x468477: lea     edx, [esi+6]
0x46847A: push    edx; Dst
0x46847B: call    SaveLoad_LoadData
0x468480: mov     ecx, ds:0B33B00h
0x468486: push    1; Size
0x468488: add     esi, 7
0x46848B: push    esi; Dst
0x46848C: call    SaveLoad_LoadData
0x468491: pop     esi
0x468492: retn    8

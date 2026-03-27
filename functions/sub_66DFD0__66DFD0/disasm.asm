0x66DFD0: push    ecx
0x66DFD1: push    esi
0x66DFD2: mov     esi, ecx
0x66DFD4: cmp     dword ptr [esi+57Ch], 2
0x66DFDB: jnz     loc_66E07D
0x66DFE1: cmp     dword ptr [esi+574h], 0
0x66DFE8: mov     eax, ds:0B33398h
0x66DFED: push    edi
0x66DFEE: mov     edi, [eax+20h]
0x66DFF1: jnz     short loc_66E028
0x66DFF3: mov     edx, [esi]
0x66DFF5: mov     eax, [edx+0ECh]
0x66DFFB: call    eax
0x66DFFD: fmul    dword ptr ds:0B37D28h
0x66E003: push    ecx
0x66E004: mov     ecx, [esi+578h]
0x66E00A: fstp    [esp+10h+var_4]
0x66E00E: fld     [esp+10h+var_4]
0x66E012: fstp    [esp+10h+var_10]; float
0x66E015: push    2; int
0x66E017: push    ecx; int
0x66E018: mov     ecx, esi
0x66E01A: call    sub_66D120
0x66E01F: cmp     dword ptr [esi+574h], 0
0x66E026: jz      short loc_66E07C
0x66E028: push    2; a3
0x66E02A: push    4; a2
0x66E02C: mov     ecx, edi; this
0x66E02E: call    InputGlobals__QueryControlState
0x66E033: test    eax, eax
0x66E035: jnz     short loc_66E075
0x66E037: push    1; a3
0x66E039: push    4; a2
0x66E03B: mov     ecx, edi; this
0x66E03D: call    InputGlobals__QueryControlState
0x66E042: test    eax, eax
0x66E044: jnz     short loc_66E054
0x66E046: push    eax; a3
0x66E047: push    4; a2
0x66E049: mov     ecx, edi; this
0x66E04B: call    InputGlobals__QueryControlState
0x66E050: test    eax, eax
0x66E052: jz      short loc_66E075
0x66E054: fld     [esp+0Ch+arg_0]
0x66E058: push    ecx
0x66E059: mov     ecx, esi
0x66E05B: fstp    [esp+10h+var_10]
0x66E05E: call    sub_66D930
0x66E063: xor     eax, eax
0x66E065: cmp     dword ptr [esi+57Ch], 2
0x66E06C: pop     edi
0x66E06D: setz    al
0x66E070: pop     esi
0x66E071: pop     ecx
0x66E072: retn    4
0x66E075: mov     ecx, esi
0x66E077: call    sub_66A670
0x66E07C: pop     edi
0x66E07D: xor     eax, eax
0x66E07F: cmp     dword ptr [esi+57Ch], 2
0x66E086: pop     esi
0x66E087: setz    al
0x66E08A: pop     ecx
0x66E08B: retn    4

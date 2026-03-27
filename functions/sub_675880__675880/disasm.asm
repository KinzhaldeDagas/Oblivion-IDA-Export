0x675880: push    esi
0x675881: add     ecx, 68h ; 'h'; this
0x675884: call    sub_7616D0
0x675889: mov     esi, eax
0x67588B: test    esi, esi
0x67588D: jz      short loc_6758D3
0x67588F: push    edi
0x675890: mov     ecx, [esi]
0x675892: test    ecx, ecx
0x675894: jz      short loc_6758D2
0x675896: mov     eax, [ecx]
0x675898: mov     edx, [eax+190h]
0x67589E: call    edx
0x6758A0: test    al, al
0x6758A2: jz      short loc_6758CB
0x6758A4: mov     edi, [esi]
0x6758A6: test    edi, edi
0x6758A8: jz      short loc_6758CB
0x6758AA: mov     eax, [edi]
0x6758AC: mov     edx, [eax+180h]
0x6758B2: push    1
0x6758B4: mov     ecx, edi
0x6758B6: call    edx
0x6758B8: fld1
0x6758BA: sub     esp, 8
0x6758BD: fst     [esp+10h+var_C]; int
0x6758C1: mov     ecx, edi
0x6758C3: fstp    [esp+10h+var_10]; float
0x6758C6: call    Actor_ProcessAction
0x6758CB: mov     esi, [esi+4]
0x6758CE: test    esi, esi
0x6758D0: jnz     short loc_675890
0x6758D2: pop     edi
0x6758D3: pop     esi
0x6758D4: retn

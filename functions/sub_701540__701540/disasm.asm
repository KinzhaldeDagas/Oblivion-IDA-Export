0x701540: cmp     byte ptr [ecx+20Ch], 0
0x701547: mov     eax, [ecx]
0x701549: push    esi
0x70154A: push    edi
0x70154B: jz      short loc_701555
0x70154D: mov     edx, [eax+80h]
0x701553: jmp     short loc_701558
0x701555: mov     edx, [eax+7Ch]
0x701558: call    edx
0x70155A: mov     esi, eax
0x70155C: mov     eax, [esi]
0x70155E: mov     edx, [eax+4Ch]
0x701561: push    0
0x701563: mov     ecx, esi
0x701565: call    edx
0x701567: mov     edi, eax
0x701569: mov     eax, [esi]
0x70156B: mov     edx, [eax+50h]
0x70156E: push    0
0x701570: mov     ecx, esi
0x701572: call    edx
0x701574: test    edi, edi
0x701576: jz      short loc_7015DF
0x701578: test    eax, eax
0x70157A: jz      short loc_7015DF
0x70157C: mov     ecx, [esp+8+arg_0]
0x701580: fild    [esp+8+arg_0]
0x701584: test    ecx, ecx
0x701586: jge     short loc_70158E
0x701588: fadd    dword ptr ds:0A2FC78h
0x70158E: test    edi, edi
0x701590: mov     [esp+8+arg_0], edi
0x701594: fild    [esp+8+arg_0]
0x701598: jge     short loc_7015A0
0x70159A: fadd    dword ptr ds:0A2FC78h
0x7015A0: fdivp   st(1), st
0x7015A2: mov     edx, [esp+8+arg_8]
0x7015A6: mov     ecx, [esp+8+arg_4]
0x7015AA: test    ecx, ecx
0x7015AC: fstp    dword ptr [edx]
0x7015AE: fild    [esp+8+arg_4]
0x7015B2: jge     short loc_7015BA
0x7015B4: fadd    dword ptr ds:0A2FC78h
0x7015BA: test    eax, eax
0x7015BC: mov     [esp+8+arg_0], eax
0x7015C0: fild    [esp+8+arg_0]
0x7015C4: jge     short loc_7015CC
0x7015C6: fadd    dword ptr ds:0A2FC78h
0x7015CC: fdivp   st(1), st
0x7015CE: mov     edx, [esp+8+arg_C]
0x7015D2: pop     edi
0x7015D3: mov     al, 1
0x7015D5: pop     esi
0x7015D6: fld1
0x7015D8: fsubrp  st(1), st
0x7015DA: fstp    dword ptr [edx]
0x7015DC: retn    10h
0x7015DF: pop     edi
0x7015E0: xor     al, al
0x7015E2: pop     esi
0x7015E3: retn    10h

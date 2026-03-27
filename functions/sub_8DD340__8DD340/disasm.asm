0x8DD340: push    ebp
0x8DD341: mov     ebp, esp
0x8DD343: and     esp, 0FFFFFFF0h
0x8DD346: sub     esp, 18h
0x8DD349: fld     [ebp+arg_4]
0x8DD34C: push    esi
0x8DD34D: push    edi
0x8DD34E: mov     edi, [ebp+arg_0]
0x8DD351: fsub    dword ptr [edi+0Ch]
0x8DD354: movaps  xmm3, xmmword ptr [edi+20h]
0x8DD358: movaps  xmm4, xmmword ptr [edi+30h]
0x8DD35C: movaps  xmm1, xmm3
0x8DD35F: addps   xmm1, xmm4
0x8DD362: fadd    [ebp+arg_8]
0x8DD365: movaps  xmm2, xmm1
0x8DD368: mulps   xmm2, xmm1
0x8DD36B: movaps  xmm0, xmm2
0x8DD36E: shufps  xmm0, xmm2, 4Eh ; 'N'
0x8DD372: addps   xmm0, xmm2
0x8DD375: movaps  xmm2, xmm0
0x8DD378: shufps  xmm2, xmm0, 0B1h ; '±'
0x8DD37C: addps   xmm0, xmm2
0x8DD37F: fmul    dword ptr [edi+1Ch]
0x8DD382: lea     eax, [esp+20h+var_14]
0x8DD386: movss   dword ptr [eax], xmm0
0x8DD38A: fstp    [esp+20h+var_18]
0x8DD38E: fld     [esp+20h+var_14]
0x8DD392: fmul    dword ptr ds:0A9A480h
0x8DD398: fsubr   dword ptr ds:0A41328h
0x8DD39E: fld     [esp+20h+var_14]
0x8DD3A2: fmul    st, st(1)
0x8DD3A4: fmul    st, st(1)
0x8DD3A6: fmul    dword ptr ds:0A3D65Ch
0x8DD3AC: fsubr   dword ptr ds:0A35AA4h
0x8DD3B2: fmul    st, st(1)
0x8DD3B4: fstp    [esp+20h+var_14]
0x8DD3B8: movss   xmm0, [esp+20h+var_14]
0x8DD3BE: movaps  xmm2, xmm0
0x8DD3C1: fstp    st
0x8DD3C3: shufps  xmm2, xmm0, 0
0x8DD3C7: fld     [esp+20h+var_18]
0x8DD3CB: movaps  xmm0, xmm2
0x8DD3CE: fcomp   dword ptr ds:0A3D65Ch
0x8DD3D4: mulps   xmm0, xmm1
0x8DD3D7: fld     [esp+20h+var_18]
0x8DD3DB: fadd    st, st
0x8DD3DD: fnstsw  ax
0x8DD3DF: test    ah, 5
0x8DD3E2: jp      short loc_8DD40A
0x8DD3E4: fstp    [esp+20h+var_14]
0x8DD3E8: movss   xmm1, [esp+20h+var_14]
0x8DD3EE: shufps  xmm1, xmm1, 0
0x8DD3F2: movaps  xmm2, xmm1
0x8DD3F5: mulps   xmm2, xmm0
0x8DD3F8: movaps  xmm0, xmmword ptr ds:0A6DFE0h
0x8DD3FF: subps   xmm0, xmm1
0x8DD402: movaps  xmm1, xmm0
0x8DD405: mulps   xmm1, xmm3
0x8DD408: jmp     short loc_8DD434
0x8DD40A: fsub    dword ptr ds:0A2F948h
0x8DD410: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8DD417: fstp    [esp+20h+var_14]
0x8DD41B: movss   xmm1, [esp+20h+var_14]
0x8DD421: shufps  xmm1, xmm1, 0
0x8DD425: movaps  xmm2, xmm1
0x8DD428: subps   xmm3, xmm1
0x8DD42B: movaps  xmm1, xmm3
0x8DD42E: mulps   xmm2, xmm4
0x8DD431: mulps   xmm1, xmm0
0x8DD434: mov     esi, [ebp+arg_C]
0x8DD437: addps   xmm1, xmm2
0x8DD43A: movaps  xmm2, xmm1
0x8DD43D: mulps   xmm2, xmm1
0x8DD440: movaps  xmm0, xmm2
0x8DD443: shufps  xmm0, xmm2, 4Eh ; 'N'
0x8DD447: addps   xmm0, xmm2
0x8DD44A: movaps  xmm2, xmm0
0x8DD44D: shufps  xmm2, xmm0, 0B1h ; '±'
0x8DD451: addps   xmm0, xmm2
0x8DD454: movaps  [esp+20h+var_10], xmm0
0x8DD459: rsqrtss xmm2, xmm0
0x8DD45D: movss   dword ptr [esp+20h+var_10], xmm2
0x8DD463: movaps  xmm2, [esp+20h+var_10]
0x8DD468: mulss   xmm0, xmm2
0x8DD46C: mulss   xmm0, xmm2
0x8DD470: mov     [esp+20h+var_14], 40400000h
0x8DD478: movss   xmm3, [esp+20h+var_14]
0x8DD47E: subss   xmm3, xmm0
0x8DD482: mov     [esp+20h+var_14], 3F000000h
0x8DD48A: movss   xmm0, [esp+20h+var_14]
0x8DD490: mulss   xmm0, xmm2
0x8DD494: mulss   xmm0, xmm3
0x8DD498: lea     ecx, [esp+20h+var_10]
0x8DD49C: movaps  xmm2, xmm0
0x8DD49F: shufps  xmm2, xmm0, 0
0x8DD4A3: push    ecx
0x8DD4A4: mulps   xmm2, xmm1
0x8DD4A7: mov     ecx, esi
0x8DD4A9: movaps  [esp+24h+var_10], xmm2
0x8DD4AE: call    sub_8B1DD0
0x8DD4B3: mov     edx, [esp+20h+var_18]
0x8DD4B7: movaps  xmm1, xmmword ptr [edi+10h]
0x8DD4BB: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8DD4C2: mov     [esp+20h+var_14], edx
0x8DD4C6: movss   xmm0, [esp+20h+var_14]
0x8DD4CC: shufps  xmm0, xmm0, 0
0x8DD4D0: subps   xmm3, xmm0
0x8DD4D3: movaps  xmm2, xmm0
0x8DD4D6: mulps   xmm2, xmm1
0x8DD4D9: movaps  xmm1, xmmword ptr [edi]
0x8DD4DC: mulps   xmm3, xmm1
0x8DD4DF: addps   xmm3, xmm2
0x8DD4E2: movaps  xmmword ptr [esi+30h], xmm3
0x8DD4E6: movaps  xmm0, xmmword ptr [edi+40h]
0x8DD4EA: movaps  xmm2, xmmword ptr [esi+20h]
0x8DD4EE: movaps  xmm3, xmmword ptr [esi+10h]
0x8DD4F2: movaps  xmm1, xmm0
0x8DD4F5: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8DD4F9: mulps   xmm2, xmm1
0x8DD4FC: movaps  xmm1, xmm0
0x8DD4FF: shufps  xmm1, xmm0, 55h ; 'U'
0x8DD503: mulps   xmm3, xmm1
0x8DD506: movaps  xmm1, xmm0
0x8DD509: shufps  xmm1, xmm0, 0
0x8DD50D: movaps  xmm0, xmmword ptr [esi]
0x8DD510: mulps   xmm0, xmm1
0x8DD513: movaps  xmm1, xmmword ptr [esi+30h]
0x8DD517: addps   xmm0, xmm3
0x8DD51A: addps   xmm0, xmm2
0x8DD51D: subps   xmm1, xmm0
0x8DD520: pop     edi
0x8DD521: movaps  xmmword ptr [esi+30h], xmm1
0x8DD525: pop     esi
0x8DD526: mov     esp, ebp
0x8DD528: pop     ebp
0x8DD529: retn

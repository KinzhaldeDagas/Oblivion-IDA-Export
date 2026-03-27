0x944790: push    ebp
0x944791: mov     ebp, esp
0x944793: and     esp, 0FFFFFFF0h
0x944796: sub     esp, 70h
0x944799: mov     eax, [ebp+arg_10]
0x94479C: mov     edx, [ebp+arg_0]
0x94479F: mov     [ecx], eax
0x9447A1: mov     eax, [ebp+arg_8]
0x9447A4: mov     [ecx+30h], edx
0x9447A7: movaps  xmm0, xmmword ptr [eax]
0x9447AA: mov     eax, [ebp+arg_C]
0x9447AD: movaps  xmm2, xmmword ptr ds:0A372D0h
0x9447B4: mov     [esp+70h+var_68], eax
0x9447B8: mov     eax, [ebp+arg_4]
0x9447BB: movaps  xmm3, xmmword ptr [eax+20h]
0x9447BF: movss   xmm1, [esp+70h+var_68]
0x9447C5: movaps  xmm4, xmm0
0x9447C8: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x9447CC: movaps  xmm5, xmm0
0x9447CF: shufps  xmm5, xmm0, 55h ; 'U'
0x9447D3: mulps   xmm4, xmm3
0x9447D6: movaps  xmm3, xmmword ptr [eax+10h]
0x9447DA: movaps  xmm6, xmm0
0x9447DD: shufps  xmm6, xmm0, 0
0x9447E1: mulps   xmm5, xmm3
0x9447E4: movaps  xmm3, xmmword ptr [eax]
0x9447E7: andps   xmm5, xmm2
0x9447EA: mulps   xmm6, xmm3
0x9447ED: andps   xmm6, xmm2
0x9447F0: shufps  xmm1, xmm1, 0
0x9447F4: andps   xmm4, xmm2
0x9447F7: movaps  xmm2, xmmword ptr ds:0A965C0h
0x9447FE: addps   xmm6, xmm5
0x944801: movaps  xmm0, xmm6
0x944804: addps   xmm0, xmm4
0x944807: addps   xmm0, xmm1
0x94480A: movaps  xmm1, xmm0
0x94480D: xorps   xmm1, xmm2
0x944810: movaps  xmm2, xmmword ptr [eax+30h]
0x944814: addps   xmm1, xmm2
0x944817: movaps  [esp+70h+var_60], xmm1
0x94481C: fld     dword ptr [esp+70h+var_60]
0x944820: fsub    dword ptr [edx+10h]
0x944823: addps   xmm0, xmm2
0x944826: movaps  [esp+70h+var_50], xmm0
0x94482B: fmul    dword ptr [edx+1Ch]
0x94482E: fstp    [esp+70h+var_68]
0x944832: fld     [esp+70h+var_68]
0x944836: fistp   [esp+70h+var_64]
0x94483A: mov     edx, [esp+70h+var_64]
0x94483E: fld     dword ptr [esp+70h+var_50]
0x944842: mov     eax, [ecx+30h]
0x944845: dec     edx
0x944846: mov     [ecx+20h], edx
0x944849: fsub    dword ptr [eax+10h]
0x94484C: fmul    dword ptr [eax+1Ch]
0x94484F: fstp    [esp+70h+var_64]
0x944853: fld     [esp+70h+var_64]
0x944857: fistp   [esp+70h+var_68]
0x94485B: mov     eax, [esp+70h+var_68]
0x94485F: fld     dword ptr [esp+70h+var_60+4]
0x944863: inc     eax
0x944864: mov     [ecx+10h], eax
0x944867: mov     eax, [ecx+30h]
0x94486A: fsub    dword ptr [eax+14h]
0x94486D: fmul    dword ptr [eax+1Ch]
0x944870: fstp    [esp+70h+var_64]
0x944874: fld     [esp+70h+var_64]
0x944878: fistp   [esp+70h+var_68]
0x94487C: mov     edx, [esp+70h+var_68]
0x944880: fld     dword ptr [esp+70h+var_50+4]
0x944884: mov     eax, [ecx+30h]
0x944887: dec     edx
0x944888: mov     [ecx+24h], edx
0x94488B: fsub    dword ptr [eax+14h]
0x94488E: fmul    dword ptr [eax+1Ch]
0x944891: fstp    [esp+70h+var_64]
0x944895: fld     [esp+70h+var_64]
0x944899: fistp   [esp+70h+var_68]
0x94489D: mov     eax, [esp+70h+var_68]
0x9448A1: fld     dword ptr [esp+70h+var_60+8]
0x9448A5: inc     eax
0x9448A6: mov     [ecx+14h], eax
0x9448A9: mov     eax, [ecx+30h]
0x9448AC: fsub    dword ptr [eax+18h]
0x9448AF: fmul    dword ptr [eax+1Ch]
0x9448B2: fstp    [esp+70h+var_64]
0x9448B6: fld     [esp+70h+var_64]
0x9448BA: fistp   [esp+70h+var_68]
0x9448BE: mov     edx, [esp+70h+var_68]
0x9448C2: fld     dword ptr [esp+70h+var_50+8]
0x9448C6: mov     eax, [ecx+30h]
0x9448C9: dec     edx
0x9448CA: mov     [ecx+28h], edx
0x9448CD: fsub    dword ptr [eax+18h]
0x9448D0: fmul    dword ptr [eax+1Ch]
0x9448D3: fstp    [esp+70h+var_64]
0x9448D7: fld     [esp+70h+var_64]
0x9448DB: fistp   [esp+70h+var_68]
0x9448DF: movsx   edx, word ptr [ecx+22h]
0x9448E3: mov     eax, [esp+70h+var_68]
0x9448E7: mov     [esp+70h+var_30], edx
0x9448EB: movsx   edx, word ptr [ecx+12h]
0x9448EF: inc     eax
0x9448F0: inc     edx
0x9448F1: mov     [esp+70h+var_40], edx
0x9448F5: movsx   edx, word ptr [ecx+26h]
0x9448F9: mov     [esp+70h+var_2C], edx
0x9448FD: movsx   edx, word ptr [ecx+16h]
0x944901: mov     [ecx+18h], eax
0x944904: sar     eax, 10h
0x944907: inc     edx
0x944908: inc     eax
0x944909: mov     [esp+70h+var_38], eax
0x94490D: xor     eax, eax
0x94490F: mov     [esp+70h+var_3C], edx
0x944913: movsx   edx, word ptr [ecx+2Ah]
0x944917: mov     [esp+70h+var_20], eax
0x94491B: mov     [esp+70h+var_1C], eax
0x94491F: mov     [esp+70h+var_18], eax
0x944923: mov     [esp+70h+var_14], eax
0x944927: mov     [esp+70h+var_10], eax
0x94492B: mov     [esp+70h+var_C], eax
0x94492F: mov     eax, [ecx+30h]
0x944932: mov     [esp+70h+var_28], edx
0x944936: mov     edx, [eax+20h]
0x944939: push    edx
0x94493A: lea     eax, [esp+74h+var_40]
0x94493E: push    eax
0x94493F: call    sub_944060
0x944944: mov     esp, ebp
0x944946: pop     ebp
0x944947: retn    14h

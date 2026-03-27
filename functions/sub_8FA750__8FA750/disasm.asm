0x8FA750: push    ebp
0x8FA751: mov     ebp, esp
0x8FA753: and     esp, 0FFFFFFF0h
0x8FA756: sub     esp, 94h
0x8FA75C: mov     ecx, large fs:2Ch
0x8FA763: mov     edx, ds:0BA9DE4h
0x8FA769: mov     eax, [ecx+edx*4]
0x8FA76C: push    ebx
0x8FA76D: push    esi
0x8FA76E: mov     esi, [eax+1A4h]
0x8FA774: push    edi
0x8FA775: cmp     esi, [eax+1A8h]
0x8FA77B: jnb     short loc_8FA7A1
0x8FA77D: mov     esi, eax
0x8FA77F: mov     ecx, [esi+1A4h]
0x8FA785: mov     dword ptr [ecx], offset aTtcapscaps; "TtCapsCaps"
0x8FA78B: rdtsc
0x8FA78D: mov     [esp+0A0h+var_94], eax
0x8FA791: mov     eax, [esp+0A0h+var_94]
0x8FA795: mov     [ecx+4], eax
0x8FA798: add     ecx, 0Ch
0x8FA79B: mov     [esi+1A4h], ecx
0x8FA7A1: mov     ebx, [ebp+arg_0]
0x8FA7A4: mov     eax, [ebx+8]
0x8FA7A7: mov     ecx, [ebx]
0x8FA7A9: movaps  xmm1, xmmword ptr [eax]
0x8FA7AC: movaps  xmm2, xmmword ptr [eax+10h]
0x8FA7B0: movaps  xmm3, xmmword ptr [eax+20h]
0x8FA7B4: movaps  xmm4, xmmword ptr [eax+30h]
0x8FA7B8: mov     esi, [ebp+arg_4]
0x8FA7BB: mov     edi, [esi]
0x8FA7BD: mov     [esp+0A0h+var_94], ecx
0x8FA7C1: add     ecx, 10h
0x8FA7C4: lea     eax, [esp+0A0h+var_50]
0x8FA7C8: sub     eax, ecx
0x8FA7CA: mov     edx, 2
0x8FA7CF: nop
0x8FA7D0: movaps  xmm0, xmmword ptr [ecx]
0x8FA7D3: movaps  xmm5, xmm0
0x8FA7D6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FA7DA: movaps  xmm6, xmm3
0x8FA7DD: mulps   xmm6, xmm5
0x8FA7E0: movaps  xmm5, xmm0
0x8FA7E3: shufps  xmm5, xmm0, 55h ; 'U'
0x8FA7E7: movaps  xmm7, xmm2
0x8FA7EA: mulps   xmm7, xmm5
0x8FA7ED: movaps  xmm5, xmm0
0x8FA7F0: shufps  xmm5, xmm0, 0
0x8FA7F4: movaps  xmm0, xmm1
0x8FA7F7: mulps   xmm0, xmm5
0x8FA7FA: addps   xmm6, xmm4
0x8FA7FD: addps   xmm0, xmm7
0x8FA800: addps   xmm0, xmm6
0x8FA803: movaps  xmmword ptr [eax+ecx], xmm0
0x8FA807: add     ecx, 10h
0x8FA80A: dec     edx
0x8FA80B: jnz     short loc_8FA7D0
0x8FA80D: mov     ecx, [esi+8]
0x8FA810: movaps  xmm1, xmmword ptr [ecx]
0x8FA813: movaps  xmm2, xmmword ptr [ecx+10h]
0x8FA817: movaps  xmm3, xmmword ptr [ecx+20h]
0x8FA81B: movaps  xmm4, xmmword ptr [ecx+30h]
0x8FA81F: lea     eax, [edi+10h]
0x8FA822: lea     ecx, [esp+0A0h+var_70]
0x8FA826: sub     ecx, eax
0x8FA828: mov     edx, 2
0x8FA82D: lea     ecx, [ecx+0]
0x8FA830: movaps  xmm0, xmmword ptr [eax]
0x8FA833: movaps  xmm5, xmm0
0x8FA836: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FA83A: movaps  xmm6, xmm3
0x8FA83D: mulps   xmm6, xmm5
0x8FA840: movaps  xmm5, xmm0
0x8FA843: shufps  xmm5, xmm0, 55h ; 'U'
0x8FA847: movaps  xmm7, xmm2
0x8FA84A: mulps   xmm7, xmm5
0x8FA84D: movaps  xmm5, xmm0
0x8FA850: shufps  xmm5, xmm0, 0
0x8FA854: movaps  xmm0, xmm1
0x8FA857: mulps   xmm0, xmm5
0x8FA85A: addps   xmm6, xmm4
0x8FA85D: addps   xmm0, xmm7
0x8FA860: addps   xmm0, xmm6
0x8FA863: movaps  xmmword ptr [ecx+eax], xmm0
0x8FA867: add     eax, 10h
0x8FA86A: dec     edx
0x8FA86B: jnz     short loc_8FA830
0x8FA86D: movaps  xmm0, [esp+0A0h+var_50]
0x8FA872: movaps  xmm1, [esp+0A0h+var_40]
0x8FA877: lea     ecx, [esp+0A0h+var_30]
0x8FA87B: push    ecx
0x8FA87C: lea     edx, [esp+0A4h+var_90]
0x8FA880: push    edx
0x8FA881: subps   xmm1, xmm0
0x8FA884: movaps  xmm0, [esp+0A8h+var_70]
0x8FA889: lea     eax, [esp+0A8h+var_70]
0x8FA88D: push    eax
0x8FA88E: lea     ecx, [esp+0ACh+var_80]
0x8FA892: movaps  [esp+0ACh+var_80], xmm1
0x8FA897: movaps  xmm1, [esp+0ACh+var_60]
0x8FA89C: push    ecx
0x8FA89D: lea     edx, [esp+0B0h+var_50]
0x8FA8A1: subps   xmm1, xmm0
0x8FA8A4: push    edx
0x8FA8A5: movaps  [esp+0B4h+var_90], xmm1
0x8FA8AA: call    sub_8D1A30
0x8FA8AF: fld     dword ptr [edi+0Ch]
0x8FA8B2: mov     eax, [esp+0B4h+var_94]
0x8FA8B6: fadd    dword ptr [eax+0Ch]
0x8FA8B9: add     esp, 14h
0x8FA8BC: fld     st
0x8FA8BE: fmul    st, st(1)
0x8FA8C0: fld     [esp+0A0h+var_10]
0x8FA8C7: fcompp
0x8FA8C9: fnstsw  ax
0x8FA8CB: fstp    st
0x8FA8CD: test    ah, 5
0x8FA8D0: jp      short loc_8FA8DC
0x8FA8D2: mov     ecx, [ebp+arg_C]
0x8FA8D5: mov     edx, [ecx]
0x8FA8D7: push    esi
0x8FA8D8: push    ebx
0x8FA8D9: call    dword ptr [edx+4]
0x8FA8DC: mov     ecx, large fs:2Ch
0x8FA8E3: mov     edx, ds:0BA9DE4h
0x8FA8E9: mov     eax, [ecx+edx*4]
0x8FA8EC: mov     esi, [eax+1A4h]
0x8FA8F2: cmp     esi, [eax+1A8h]
0x8FA8F8: jnb     short loc_8FA91E
0x8FA8FA: mov     esi, eax
0x8FA8FC: mov     ecx, [esi+1A4h]
0x8FA902: mov     dword ptr [ecx], offset aEt; "Et"
0x8FA908: rdtsc
0x8FA90A: mov     [esp+0A0h+var_94], eax
0x8FA90E: mov     eax, [esp+0A0h+var_94]
0x8FA912: mov     [ecx+4], eax
0x8FA915: add     ecx, 0Ch
0x8FA918: mov     [esi+1A4h], ecx
0x8FA91E: pop     edi
0x8FA91F: pop     esi
0x8FA920: pop     ebx
0x8FA921: mov     esp, ebp
0x8FA923: pop     ebp
0x8FA924: retn

0x94E5C0: push    ebp
0x94E5C1: mov     ebp, esp
0x94E5C3: and     esp, 0FFFFFFF0h
0x94E5C6: sub     esp, 174h
0x94E5CC: mov     eax, [ebp+arg_4]
0x94E5CF: push    ebx
0x94E5D0: mov     ebx, [ebp+arg_0]
0x94E5D3: push    esi
0x94E5D4: mov     esi, [ebx+0Ch]
0x94E5D7: push    edi
0x94E5D8: mov     edi, ecx
0x94E5DA: push    eax
0x94E5DB: lea     ecx, [edi+0C0h]
0x94E5E1: call    sub_958600
0x94E5E6: lea     ecx, [esp+180h+var_100]
0x94E5ED: push    ecx
0x94E5EE: lea     edx, [esp+184h+var_140]
0x94E5F2: push    edx
0x94E5F3: push    ebx
0x94E5F4: mov     ecx, edi
0x94E5F6: call    sub_94D100
0x94E5FB: lea     eax, [esi+20h]
0x94E5FE: push    eax
0x94E5FF: lea     edx, [esp+184h+var_140]
0x94E603: lea     ecx, [edi+50h]
0x94E606: push    edx
0x94E607: mov     [esp+188h+var_164], ecx
0x94E60B: call    sub_88FCC0
0x94E610: lea     eax, [esi+10h]
0x94E613: push    eax
0x94E614: lea     ecx, [esp+184h+var_100]
0x94E61B: lea     ebx, [edi+40h]
0x94E61E: push    ecx
0x94E61F: mov     ecx, ebx
0x94E621: call    sub_88FCC0
0x94E626: mov     edx, [ebp+arg_8]
0x94E629: push    edx
0x94E62A: mov     ecx, edi
0x94E62C: call    sub_94CF30
0x94E631: mov     eax, [ebp+arg_8]
0x94E634: push    eax
0x94E635: mov     ecx, edi
0x94E637: call    sub_94CF80
0x94E63C: fld     dword ptr [esi+30h]
0x94E63F: fabs
0x94E641: xor     ecx, ecx
0x94E643: fld     dword ptr [esi+34h]
0x94E646: fabs
0x94E648: mov     edx, 1
0x94E64D: fst     [esp+180h+var_16C]
0x94E651: fld     dword ptr [esi+38h]
0x94E654: mov     [esp+180h+var_170], 2
0x94E65C: fabs
0x94E65E: fstp    [esp+180h+var_168]
0x94E662: fcomp   st(1)
0x94E664: fnstsw  ax
0x94E666: test    ah, 5
0x94E669: jp      short loc_94E678
0x94E66B: fstp    st
0x94E66D: xor     edx, edx
0x94E66F: fld     [esp+180h+var_16C]
0x94E673: mov     ecx, 1
0x94E678: fld     [esp+180h+var_168]
0x94E67C: fcomp   st(1)
0x94E67E: fnstsw  ax
0x94E680: fstp    st
0x94E682: test    ah, 5
0x94E685: jp      short loc_94E690
0x94E687: mov     eax, ecx
0x94E689: mov     ecx, 2
0x94E68E: jmp     short loc_94E694
0x94E690: mov     eax, [esp+180h+var_170]
0x94E694: movaps  xmm0, xmmword ptr [esi+30h]
0x94E698: mov     dword ptr [esp+ecx*4+180h+var_160], 0
0x94E6A0: lea     ecx, ds:0[edx*4]
0x94E6A7: fld     dword ptr [ecx+esi+30h]
0x94E6AB: shl     eax, 2
0x94E6AE: mov     edx, [eax+esi+30h]
0x94E6B2: fchs
0x94E6B4: mov     dword ptr [esp+180h+var_160+0Ch], 0
0x94E6BC: mov     dword ptr [esp+ecx+180h+var_160], edx
0x94E6C0: fstp    dword ptr [esp+eax+180h+var_160]
0x94E6C4: movaps  xmm1, [esp+180h+var_160]
0x94E6C9: movaps  xmm2, xmm1
0x94E6CC: shufps  xmm2, xmm1, 0C9h ; 'É'
0x94E6D0: movaps  xmm3, xmm0
0x94E6D3: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x94E6D7: mulps   xmm3, xmm2
0x94E6DA: movaps  xmm2, xmm1
0x94E6DD: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x94E6E1: movaps  xmm1, xmm0
0x94E6E4: shufps  xmm1, xmm0, 0C9h ; 'É'
0x94E6E8: mulps   xmm1, xmm2
0x94E6EB: movaps  xmm2, xmmword ptr [ebx]
0x94E6EE: subps   xmm1, xmm3
0x94E6F1: mov     [esp+180h+var_170], 40000000h
0x94E6F9: movss   xmm3, [esp+180h+var_170]
0x94E6FF: mov     [esp+180h+var_170], 0C0000000h
0x94E707: movss   xmm4, [esp+180h+var_170]
0x94E70D: movaps  [esp+180h+var_150], xmm1
0x94E712: xor     ecx, ecx
0x94E714: shufps  xmm3, xmm3, 0
0x94E718: shufps  xmm4, xmm4, 0
0x94E71C: lea     esp, [esp+0]
0x94E720: or      edx, 0FFFFFFFFh
0x94E723: lea     eax, [ecx+ecx*2]
0x94E726: shl     eax, 5
0x94E729: mov     [esp+180h+var_16C], edx
0x94E72D: lea     eax, [esp+eax+180h+var_B0]
0x94E734: test    ecx, ecx
0x94E736: lea     esi, [esp+180h+var_160]
0x94E73A: jnz     short loc_94E740
0x94E73C: lea     esi, [esp+180h+var_150]
0x94E740: test    ecx, ecx
0x94E742: movaps  xmm0, xmmword ptr [esi]
0x94E745: lea     esi, [esp+180h+var_150]
0x94E749: jnz     short loc_94E74F
0x94E74B: lea     esi, [esp+180h+var_160]
0x94E74F: fild    [esp+180h+var_16C]
0x94E753: movaps  xmm1, xmmword ptr [esi]
0x94E756: movaps  xmmword ptr [eax-10h], xmm2
0x94E75A: movaps  xmmword ptr [eax], xmm2
0x94E75D: movaps  xmm6, xmmword ptr [eax-10h]
0x94E761: fmul    dword ptr ds:0AA2C4Ch
0x94E767: movaps  xmm5, xmm3
0x94E76A: mulps   xmm5, xmm0
0x94E76D: addps   xmm6, xmm5
0x94E770: fstp    [esp+180h+var_170]
0x94E774: movaps  xmmword ptr [eax-10h], xmm6
0x94E778: movaps  xmm5, xmm4
0x94E77B: mulps   xmm5, xmm0
0x94E77E: movaps  xmm0, xmmword ptr [eax]
0x94E781: addps   xmm0, xmm5
0x94E784: movaps  xmmword ptr [eax], xmm0
0x94E787: movss   xmm0, [esp+180h+var_170]
0x94E78D: movaps  xmm6, xmmword ptr [eax-10h]
0x94E791: movaps  xmm5, xmm0
0x94E794: shufps  xmm5, xmm0, 0
0x94E798: mulps   xmm5, xmm1
0x94E79B: addps   xmm6, xmm5
0x94E79E: movaps  xmm5, xmm0
0x94E7A1: movaps  xmmword ptr [eax-10h], xmm6
0x94E7A5: shufps  xmm5, xmm0, 0
0x94E7A9: movaps  xmm0, xmmword ptr [eax]
0x94E7AC: mulps   xmm5, xmm1
0x94E7AF: addps   xmm0, xmm5
0x94E7B2: inc     edx
0x94E7B3: movaps  xmmword ptr [eax], xmm0
0x94E7B6: add     eax, 20h ; ' '
0x94E7B9: cmp     edx, 1
0x94E7BC: mov     [esp+180h+var_16C], edx
0x94E7C0: jle     loc_94E734
0x94E7C6: inc     ecx
0x94E7C7: cmp     ecx, 2
0x94E7CA: jl      loc_94E720
0x94E7D0: lea     esi, [esp+180h+var_C0]
0x94E7D7: mov     [esp+180h+var_16C], 6
0x94E7DF: nop
0x94E7E0: mov     ecx, [ebp+arg_8]
0x94E7E3: mov     eax, [ebp+arg_4]
0x94E7E6: mov     ebx, [eax]
0x94E7E8: push    ecx
0x94E7E9: push    3F800000h; float
0x94E7EE: push    3F4CCCCDh; float
0x94E7F3: push    3F4CCCCDh; float
0x94E7F8: push    3F4CCCCDh; float
0x94E7FD: call    sub_8AEBB0
0x94E802: mov     ecx, [ebp+arg_4]
0x94E805: add     esp, 10h
0x94E808: push    eax
0x94E809: lea     edx, [esi+10h]
0x94E80C: push    edx
0x94E80D: push    esi
0x94E80E: call    dword ptr [ebx+1Ch]
0x94E811: mov     eax, [esp+180h+var_16C]
0x94E815: add     esi, 20h ; ' '
0x94E818: dec     eax
0x94E819: mov     [esp+180h+var_16C], eax
0x94E81D: jnz     short loc_94E7E0
0x94E81F: mov     eax, [ebp+arg_8]
0x94E822: mov     esi, [ebp+arg_4]
0x94E825: mov     ebx, [esi]
0x94E827: push    eax
0x94E828: push    3F800000h; float
0x94E82D: push    3F4CCCCDh; float
0x94E832: push    3E99999Ah; float
0x94E837: push    3E99999Ah; float
0x94E83C: call    sub_8AEBB0
0x94E841: mov     ecx, [esp+194h+var_164]
0x94E845: add     esp, 10h
0x94E848: push    eax
0x94E849: add     edi, 30h ; '0'
0x94E84C: push    edi
0x94E84D: push    ecx
0x94E84E: mov     ecx, esi
0x94E850: call    dword ptr [ebx+1Ch]
0x94E853: pop     edi
0x94E854: pop     esi
0x94E855: pop     ebx
0x94E856: mov     esp, ebp
0x94E858: pop     ebp
0x94E859: retn    0Ch

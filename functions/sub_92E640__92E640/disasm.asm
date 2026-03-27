0x92E640: push    ebp
0x92E641: mov     ebp, esp
0x92E643: and     esp, 0FFFFFFF0h
0x92E646: sub     esp, 14h
0x92E649: push    ebx
0x92E64A: push    esi
0x92E64B: push    edi
0x92E64C: mov     edi, [ebp+arg_10]
0x92E64F: mov     esi, [edi+4]
0x92E652: mov     eax, [edi+8]
0x92E655: lea     ebx, [esi+1]
0x92E658: and     eax, 3FFFFFFFh
0x92E65D: cmp     eax, ebx
0x92E65F: jge     short loc_92E675
0x92E661: add     eax, eax
0x92E663: cmp     ebx, eax
0x92E665: jl      short loc_92E669
0x92E667: mov     eax, ebx
0x92E669: push    10h
0x92E66B: push    eax
0x92E66C: push    edi
0x92E66D: call    sub_8A6E40
0x92E672: add     esp, 0Ch
0x92E675: mov     eax, [edi]
0x92E677: mov     ecx, [ebp+arg_4]
0x92E67A: mov     [edi+4], ebx
0x92E67D: fld     dword ptr [ecx]
0x92E67F: mov     edx, [ebp+arg_0]
0x92E682: movaps  xmm0, xmmword ptr [edx]
0x92E685: shl     esi, 4
0x92E688: add     esi, eax
0x92E68A: mov     eax, [ebp+arg_8]
0x92E68D: fsub    dword ptr [eax]
0x92E68F: mov     edx, [ebp+arg_C]
0x92E692: movaps  xmm3, xmm0
0x92E695: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x92E699: fstp    dword ptr [esp+20h+var_10]
0x92E69D: fld     dword ptr [ecx+4]
0x92E6A0: fsub    dword ptr [eax+4]
0x92E6A3: fstp    dword ptr [esp+20h+var_10+4]
0x92E6A7: fld     dword ptr [ecx+8]
0x92E6AA: fsub    dword ptr [eax+8]
0x92E6AD: fstp    dword ptr [esp+20h+var_10+8]
0x92E6B1: fld     dword ptr [ecx+0Ch]
0x92E6B4: fsub    dword ptr [eax+0Ch]
0x92E6B7: fstp    dword ptr [esp+20h+var_10+0Ch]
0x92E6BB: movaps  xmm1, [esp+20h+var_10]
0x92E6C0: movaps  xmm2, xmm1
0x92E6C3: shufps  xmm2, xmm1, 0C9h ; 'É'
0x92E6C7: mulps   xmm3, xmm2
0x92E6CA: movaps  xmm2, xmm1
0x92E6CD: shufps  xmm2, xmm1, 0D2h ; 'Ò'
0x92E6D1: movaps  xmm1, xmm0
0x92E6D4: shufps  xmm1, xmm0, 0C9h ; 'É'
0x92E6D8: mulps   xmm1, xmm2
0x92E6DB: subps   xmm1, xmm3
0x92E6DE: movaps  xmmword ptr [esi], xmm1
0x92E6E1: fld     dword ptr [edx]
0x92E6E3: fsub    dword ptr [eax]
0x92E6E5: movaps  xmm0, xmm1
0x92E6E8: fstp    dword ptr [esp+20h+var_10]
0x92E6EC: fld     dword ptr [edx+4]
0x92E6EF: fsub    dword ptr [eax+4]
0x92E6F2: fstp    dword ptr [esp+20h+var_10+4]
0x92E6F6: fld     dword ptr [edx+8]
0x92E6F9: fsub    dword ptr [eax+8]
0x92E6FC: fstp    dword ptr [esp+20h+var_10+8]
0x92E700: fld     dword ptr [edx+0Ch]
0x92E703: fsub    dword ptr [eax+0Ch]
0x92E706: lea     eax, [esp+20h+var_14]
0x92E70A: fstp    dword ptr [esp+20h+var_10+0Ch]
0x92E70E: movaps  xmm2, [esp+20h+var_10]
0x92E713: mulps   xmm0, xmm2
0x92E716: movaps  xmm2, xmm0
0x92E719: shufps  xmm2, xmm0, 55h ; 'U'
0x92E71D: movaps  xmm3, xmm0
0x92E720: addss   xmm2, xmm0
0x92E724: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92E728: addss   xmm3, xmm2
0x92E72C: movss   dword ptr [eax], xmm3
0x92E730: fld     [esp+20h+var_14]
0x92E734: fcomp   dword ptr ds:0A372CCh
0x92E73A: fnstsw  ax
0x92E73C: test    ah, 41h
0x92E73F: jnz     short loc_92E74E
0x92E741: movaps  xmm0, xmmword ptr ds:0A965C0h
0x92E748: xorps   xmm1, xmm0
0x92E74B: movaps  xmmword ptr [esi], xmm1
0x92E74E: movaps  xmm0, xmmword ptr [esi]
0x92E751: mulps   xmm0, xmm0
0x92E754: movaps  xmm1, xmm0
0x92E757: shufps  xmm1, xmm0, 55h ; 'U'
0x92E75B: movaps  xmm2, xmm0
0x92E75E: addss   xmm1, xmm0
0x92E762: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92E766: lea     edx, [esp+20h+var_14]
0x92E76A: addss   xmm2, xmm1
0x92E76E: movss   dword ptr [edx], xmm2
0x92E772: fld     [esp+20h+var_14]
0x92E776: fcomp   dword ptr ds:0A79DB4h
0x92E77C: fnstsw  ax
0x92E77E: test    ah, 41h
0x92E781: jnz     loc_92E82B
0x92E787: movaps  xmm1, xmm0
0x92E78A: shufps  xmm1, xmm0, 55h ; 'U'
0x92E78E: addss   xmm1, xmm0
0x92E792: movaps  xmm2, xmm0
0x92E795: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92E799: movaps  xmm0, xmm2
0x92E79C: addss   xmm0, xmm1
0x92E7A0: movaps  [esp+20h+var_10], xmm0
0x92E7A5: rsqrtss xmm1, xmm0
0x92E7A9: movss   dword ptr [esp+20h+var_10], xmm1
0x92E7AF: movaps  xmm1, [esp+20h+var_10]
0x92E7B4: mulss   xmm0, xmm1
0x92E7B8: mulss   xmm0, xmm1
0x92E7BC: mov     [esp+20h+var_14], 40400000h
0x92E7C4: movss   xmm2, [esp+20h+var_14]
0x92E7CA: subss   xmm2, xmm0
0x92E7CE: mov     [esp+20h+var_14], 3F000000h
0x92E7D6: movss   xmm0, [esp+20h+var_14]
0x92E7DC: mulss   xmm0, xmm1
0x92E7E0: movaps  xmm1, xmmword ptr [esi]
0x92E7E3: mulss   xmm0, xmm2
0x92E7E7: movaps  xmm2, xmm0
0x92E7EA: shufps  xmm2, xmm0, 0
0x92E7EE: movaps  xmm0, xmm2
0x92E7F1: mulps   xmm0, xmm1
0x92E7F4: movaps  xmmword ptr [esi], xmm0
0x92E7F7: movaps  xmm1, xmmword ptr [ecx]
0x92E7FA: mulps   xmm0, xmm1
0x92E7FD: movaps  xmm1, xmm0
0x92E800: shufps  xmm1, xmm0, 55h ; 'U'
0x92E804: movaps  xmm2, xmm0
0x92E807: addss   xmm1, xmm0
0x92E80B: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92E80F: lea     eax, [esp+20h+var_14]
0x92E813: addss   xmm2, xmm1
0x92E817: movss   dword ptr [eax], xmm2
0x92E81B: fld     [esp+20h+var_14]
0x92E81F: fchs
0x92E821: fstp    dword ptr [esi+0Ch]
0x92E824: pop     edi
0x92E825: pop     esi
0x92E826: pop     ebx
0x92E827: mov     esp, ebp
0x92E829: pop     ebp
0x92E82A: retn
0x92E82B: mov     esi, [edi+4]
0x92E82E: mov     eax, [edi+8]
0x92E831: dec     esi
0x92E832: and     eax, 3FFFFFFFh
0x92E837: cmp     eax, esi
0x92E839: jge     short loc_92E84F
0x92E83B: add     eax, eax
0x92E83D: cmp     esi, eax
0x92E83F: jl      short loc_92E843
0x92E841: mov     eax, esi
0x92E843: push    10h
0x92E845: push    eax
0x92E846: push    edi
0x92E847: call    sub_8A6E40
0x92E84C: add     esp, 0Ch
0x92E84F: mov     [edi+4], esi
0x92E852: pop     edi
0x92E853: pop     esi
0x92E854: pop     ebx
0x92E855: mov     esp, ebp
0x92E857: pop     ebp
0x92E858: retn

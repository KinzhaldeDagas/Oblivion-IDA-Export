0x93D820: push    ebp
0x93D821: mov     ebp, esp
0x93D823: and     esp, 0FFFFFFF0h
0x93D826: sub     esp, 0Ch
0x93D829: fld     [ebp+arg_C]
0x93D82C: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93D833: fsub    dword ptr [eax+4Ch]
0x93D836: movaps  xmm5, xmmword ptr [eax+40h]
0x93D83A: push    esi
0x93D83B: mov     esi, [ebp+arg_4]
0x93D83E: movaps  xmm3, xmmword ptr [esi]
0x93D841: mov     esi, [ebp+arg_8]
0x93D844: movaps  xmm1, xmmword ptr [esi]
0x93D847: xorps   xmm1, xmm0
0x93D84A: movaps  xmm0, xmm1
0x93D84D: mulps   xmm0, xmm3
0x93D850: movaps  xmm1, xmm0
0x93D853: shufps  xmm1, xmm0, 55h ; 'U'
0x93D857: addss   xmm1, xmm0
0x93D85B: movaps  xmm2, xmm0
0x93D85E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93D862: addss   xmm2, xmm1
0x93D866: movaps  xmm1, xmmword ptr [eax+50h]
0x93D86A: fmul    dword ptr [eax+5Ch]
0x93D86D: lea     esi, [esp+10h+var_4]
0x93D871: movss   dword ptr [esi], xmm2
0x93D875: mov     esi, [ebp+arg_0]
0x93D878: fstp    [esp+10h+var_8]
0x93D87C: movss   xmm0, [esp+10h+var_8]
0x93D882: movaps  xmm2, xmmword ptr [esi]
0x93D885: shufps  xmm0, xmm0, 0
0x93D889: movaps  xmm4, xmm0
0x93D88C: mulps   xmm4, xmm1
0x93D88F: movaps  xmm1, xmm4
0x93D892: movaps  xmm4, xmmword ptr ds:0A6DFE0h
0x93D899: movaps  xmm6, xmm4
0x93D89C: subps   xmm6, xmm0
0x93D89F: mulps   xmm6, xmm5
0x93D8A2: addps   xmm6, xmm1
0x93D8A5: movaps  xmm1, xmmword ptr [ecx]
0x93D8A8: movaps  xmm0, xmm2
0x93D8AB: subps   xmm0, xmm6
0x93D8AE: movaps  xmm5, xmm0
0x93D8B1: shufps  xmm5, xmm0, 0C9h ; 'É'
0x93D8B5: movaps  xmm6, xmm1
0x93D8B8: shufps  xmm6, xmm1, 0D2h ; 'Ò'
0x93D8BC: mulps   xmm6, xmm5
0x93D8BF: movaps  xmm5, xmm0
0x93D8C2: shufps  xmm5, xmm0, 0D2h ; 'Ò'
0x93D8C6: movaps  xmm0, xmm1
0x93D8C9: shufps  xmm0, xmm1, 0C9h ; 'É'
0x93D8CD: mulps   xmm0, xmm5
0x93D8D0: subps   xmm0, xmm6
0x93D8D3: mulps   xmm0, xmm3
0x93D8D6: movaps  xmm1, xmm0
0x93D8D9: shufps  xmm1, xmm0, 55h ; 'U'
0x93D8DD: movaps  xmm5, xmm0
0x93D8E0: lea     eax, [esp+10h+var_8]
0x93D8E4: addss   xmm1, xmm0
0x93D8E8: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x93D8EC: addss   xmm5, xmm1
0x93D8F0: movss   dword ptr [eax], xmm5
0x93D8F4: fld     [esp+10h+var_8]
0x93D8F8: fcomp   dword ptr ds:0A2FAA8h
0x93D8FE: fld     [esp+10h+var_8]
0x93D902: fnstsw  ax
0x93D904: test    ah, 41h
0x93D907: jp      short loc_93D911
0x93D909: fmul    dword ptr ds:0A57414h
0x93D90F: jmp     short loc_93D917
0x93D911: fmul    dword ptr ds:0AA1DD4h
0x93D917: fadd    [esp+10h+var_4]
0x93D91B: movaps  xmm1, xmmword ptr [edx+50h]
0x93D91F: fld     [ebp+arg_C]
0x93D922: fsub    dword ptr [edx+4Ch]
0x93D925: fmul    dword ptr [edx+5Ch]
0x93D928: fstp    [esp+10h+var_4]
0x93D92C: movss   xmm0, [esp+10h+var_4]
0x93D932: shufps  xmm0, xmm0, 0
0x93D936: subps   xmm4, xmm0
0x93D939: movaps  xmm5, xmm0
0x93D93C: movaps  xmm0, xmmword ptr [ecx+10h]
0x93D940: mulps   xmm5, xmm1
0x93D943: movaps  xmm1, xmmword ptr [edx+40h]
0x93D947: mulps   xmm4, xmm1
0x93D94A: addps   xmm4, xmm5
0x93D94D: subps   xmm2, xmm4
0x93D950: movaps  xmm1, xmm2
0x93D953: shufps  xmm1, xmm2, 0C9h ; 'É'
0x93D957: movaps  xmm4, xmm0
0x93D95A: shufps  xmm4, xmm0, 0D2h ; 'Ò'
0x93D95E: mulps   xmm4, xmm1
0x93D961: movaps  xmm1, xmm2
0x93D964: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x93D968: movaps  xmm2, xmm0
0x93D96B: shufps  xmm2, xmm0, 0C9h ; 'É'
0x93D96F: mulps   xmm2, xmm1
0x93D972: movaps  xmm0, xmm2
0x93D975: subps   xmm0, xmm4
0x93D978: mulps   xmm0, xmm3
0x93D97B: movaps  xmm1, xmm0
0x93D97E: shufps  xmm1, xmm0, 55h ; 'U'
0x93D982: movaps  xmm2, xmm0
0x93D985: addss   xmm1, xmm0
0x93D989: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93D98D: lea     ecx, [esp+10h+var_8]
0x93D991: addss   xmm2, xmm1
0x93D995: movss   dword ptr [ecx], xmm2
0x93D999: fld     [esp+10h+var_8]
0x93D99D: fcomp   dword ptr ds:0A2FAA8h
0x93D9A3: fld     [esp+10h+var_8]
0x93D9A7: fnstsw  ax
0x93D9A9: test    ah, 1
0x93D9AC: jnz     short loc_93D9BB
0x93D9AE: fmul    dword ptr ds:0A57414h
0x93D9B4: fsubp   st(1), st
0x93D9B6: pop     esi
0x93D9B7: mov     esp, ebp
0x93D9B9: pop     ebp
0x93D9BA: retn
0x93D9BB: fmul    dword ptr ds:0AA1DD4h
0x93D9C1: pop     esi
0x93D9C2: fsubp   st(1), st
0x93D9C4: mov     esp, ebp
0x93D9C6: pop     ebp
0x93D9C7: retn

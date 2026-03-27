0x911880: push    ebp
0x911881: mov     ebp, esp
0x911883: and     esp, 0FFFFFFF0h
0x911886: sub     esp, 10h
0x911889: movaps  xmm1, xmmword ptr [ecx+80h]
0x911890: movaps  xmm0, xmmword ptr [ecx+70h]
0x911894: mulps   xmm0, xmm1
0x911897: movaps  xmm1, xmm0
0x91189A: shufps  xmm1, xmm0, 55h ; 'U'
0x91189E: movaps  xmm2, xmm0
0x9118A1: lea     eax, [esp+10h+var_4]
0x9118A5: addss   xmm1, xmm0
0x9118A9: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9118AD: addss   xmm2, xmm1
0x9118B1: movss   dword ptr [eax], xmm2
0x9118B5: fld     [esp+10h+var_4]
0x9118B9: fabs
0x9118BB: fabs
0x9118BD: fcomp   dword ptr ds:0A3C778h
0x9118C3: fnstsw  ax
0x9118C5: test    ah, 5
0x9118C8: jp      short loc_911949
0x9118CA: movaps  xmm0, xmmword ptr [ecx+80h]
0x9118D1: mulps   xmm0, xmm0
0x9118D4: movaps  xmm1, xmm0
0x9118D7: shufps  xmm1, xmm0, 55h ; 'U'
0x9118DB: movaps  xmm2, xmm0
0x9118DE: addss   xmm1, xmm0
0x9118E2: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9118E6: lea     edx, [esp+10h+var_4]
0x9118EA: addss   xmm2, xmm1
0x9118EE: movss   dword ptr [edx], xmm2
0x9118F2: fld     [esp+10h+var_4]
0x9118F6: fsub    dword ptr ds:0A2F948h
0x9118FC: fabs
0x9118FE: fcomp   dword ptr ds:0A3C778h
0x911904: fnstsw  ax
0x911906: test    ah, 5
0x911909: jp      short loc_911949
0x91190B: movaps  xmm0, xmmword ptr [ecx+70h]
0x91190F: mulps   xmm0, xmm0
0x911912: movaps  xmm1, xmm0
0x911915: shufps  xmm1, xmm0, 55h ; 'U'
0x911919: movaps  xmm2, xmm0
0x91191C: lea     eax, [esp+10h+var_4]
0x911920: addss   xmm1, xmm0
0x911924: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x911928: addss   xmm2, xmm1
0x91192C: movss   dword ptr [eax], xmm2
0x911930: fld     [esp+10h+var_4]
0x911934: fsub    dword ptr ds:0A2F948h
0x91193A: fabs
0x91193C: fcomp   dword ptr ds:0A3C778h
0x911942: fnstsw  ax
0x911944: test    ah, 5
0x911947: jnp     short loc_911955
0x911949: mov     eax, [ebp+arg_0]
0x91194C: mov     byte ptr [eax], 0
0x91194F: mov     esp, ebp
0x911951: pop     ebp
0x911952: retn    4
0x911955: fld     dword ptr [ecx+90h]
0x91195B: fcomp   dword ptr [ecx+94h]
0x911961: fnstsw  ax
0x911963: test    ah, 41h
0x911966: mov     eax, [ebp+arg_0]
0x911969: jz      short loc_91194C
0x91196B: mov     byte ptr [eax], 1
0x91196E: mov     esp, ebp
0x911970: pop     ebp
0x911971: retn    4

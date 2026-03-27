0x92B580: push    ebp
0x92B581: mov     ebp, esp
0x92B583: and     esp, 0FFFFFFF0h
0x92B586: sub     esp, 0Ch
0x92B589: mov     eax, [ebp+arg_8]
0x92B58C: mov     ecx, [ebp+arg_4]
0x92B58F: shl     eax, 4
0x92B592: push    esi
0x92B593: mov     esi, [ebp+arg_0]
0x92B596: mov     edx, [esi]
0x92B598: movaps  xmm0, xmmword ptr [eax+edx]
0x92B59C: add     eax, edx
0x92B59E: mov     eax, [ebp+arg_C]
0x92B5A1: shl     ecx, 4
0x92B5A4: movaps  xmm1, xmmword ptr [ecx+edx]
0x92B5A8: add     ecx, edx
0x92B5AA: mov     ecx, [ebp+arg_10]
0x92B5AD: movaps  xmm2, xmm0
0x92B5B0: shufps  xmm2, xmm0, 0C9h ; 'É'
0x92B5B4: movaps  xmm3, xmm1
0x92B5B7: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x92B5BB: mulps   xmm3, xmm2
0x92B5BE: movaps  xmm2, xmm0
0x92B5C1: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92B5C5: movaps  xmm0, xmm1
0x92B5C8: shufps  xmm0, xmm1, 0C9h ; 'É'
0x92B5CC: movaps  xmm1, xmm0
0x92B5CF: mulps   xmm1, xmm2
0x92B5D2: subps   xmm1, xmm3
0x92B5D5: movaps  xmmword ptr [ecx], xmm1
0x92B5D8: mov     edx, [esi]
0x92B5DA: shl     eax, 4
0x92B5DD: movaps  xmm2, xmmword ptr [eax+edx]
0x92B5E1: add     eax, edx
0x92B5E3: movaps  xmm0, xmm1
0x92B5E6: mulps   xmm0, xmm2
0x92B5E9: movaps  xmm2, xmm1
0x92B5EC: shufps  xmm2, xmm1, 0FFh
0x92B5F0: movaps  xmm3, xmm0
0x92B5F3: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92B5F7: addss   xmm3, xmm2
0x92B5FB: movaps  xmm2, xmm0
0x92B5FE: shufps  xmm2, xmm0, 55h ; 'U'
0x92B602: addss   xmm2, xmm0
0x92B606: lea     edx, [esp+10h+var_4]
0x92B60A: addps   xmm2, xmm3
0x92B60D: movss   dword ptr [edx], xmm2
0x92B611: fld     [esp+10h+var_4]
0x92B615: fcomp   dword ptr ds:0A2FAA8h
0x92B61B: fnstsw  ax
0x92B61D: test    ah, 41h
0x92B620: jnz     short loc_92B62F
0x92B622: movaps  xmm0, xmmword ptr ds:0A965C0h
0x92B629: xorps   xmm1, xmm0
0x92B62C: movaps  xmmword ptr [ecx], xmm1
0x92B62F: pop     esi
0x92B630: mov     esp, ebp
0x92B632: pop     ebp
0x92B633: retn

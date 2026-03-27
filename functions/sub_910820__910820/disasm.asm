0x910820: push    ebp
0x910821: mov     ebp, esp
0x910823: and     esp, 0FFFFFFF0h
0x910826: sub     esp, 0Ch
0x910829: push    esi
0x91082A: mov     esi, ecx
0x91082C: movaps  xmm1, xmmword ptr [esi+70h]
0x910830: movaps  xmm0, xmmword ptr [esi+60h]
0x910834: mulps   xmm0, xmm1
0x910837: movaps  xmm1, xmm0
0x91083A: shufps  xmm1, xmm0, 55h ; 'U'
0x91083E: movaps  xmm2, xmm0
0x910841: lea     eax, [esp+10h+var_5+1]
0x910845: addss   xmm1, xmm0
0x910849: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91084D: addss   xmm2, xmm1
0x910851: movss   dword ptr [eax], xmm2
0x910855: fld     dword ptr [esp+10h+var_5+1]
0x910859: fabs
0x91085B: fabs
0x91085D: fcomp   dword ptr ds:0A3C778h
0x910863: fnstsw  ax
0x910865: test    ah, 5
0x910868: jp      loc_910A07
0x91086E: movaps  xmm1, xmmword ptr [esi+50h]
0x910872: movaps  xmm0, xmmword ptr [esi+40h]
0x910876: mulps   xmm0, xmm1
0x910879: movaps  xmm1, xmm0
0x91087C: shufps  xmm1, xmm0, 55h ; 'U'
0x910880: movaps  xmm2, xmm0
0x910883: addss   xmm1, xmm0
0x910887: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91088B: lea     ecx, [esp+10h+var_5+1]
0x91088F: addss   xmm2, xmm1
0x910893: movss   dword ptr [ecx], xmm2
0x910897: fld     dword ptr [esp+10h+var_5+1]
0x91089B: fabs
0x91089D: fabs
0x91089F: fcomp   dword ptr ds:0A3C778h
0x9108A5: fnstsw  ax
0x9108A7: test    ah, 5
0x9108AA: jp      loc_910A07
0x9108B0: movaps  xmm0, xmmword ptr [esi+70h]
0x9108B4: mulps   xmm0, xmm0
0x9108B7: movaps  xmm1, xmm0
0x9108BA: shufps  xmm1, xmm0, 55h ; 'U'
0x9108BE: movaps  xmm2, xmm0
0x9108C1: addss   xmm1, xmm0
0x9108C5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9108C9: lea     edx, [esp+10h+var_5+1]
0x9108CD: addss   xmm2, xmm1
0x9108D1: movss   dword ptr [edx], xmm2
0x9108D5: fld     dword ptr [esp+10h+var_5+1]
0x9108D9: fsub    dword ptr ds:0A2F948h
0x9108DF: fabs
0x9108E1: fcomp   dword ptr ds:0A3C778h
0x9108E7: fnstsw  ax
0x9108E9: test    ah, 5
0x9108EC: jp      loc_910A07
0x9108F2: movaps  xmm0, xmmword ptr [esi+40h]
0x9108F6: mulps   xmm0, xmm0
0x9108F9: movaps  xmm1, xmm0
0x9108FC: shufps  xmm1, xmm0, 55h ; 'U'
0x910900: movaps  xmm2, xmm0
0x910903: lea     eax, [esp+10h+var_5+1]
0x910907: addss   xmm1, xmm0
0x91090B: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91090F: addss   xmm2, xmm1
0x910913: movss   dword ptr [eax], xmm2
0x910917: fld     dword ptr [esp+10h+var_5+1]
0x91091B: fsub    dword ptr ds:0A2F948h
0x910921: fabs
0x910923: fcomp   dword ptr ds:0A3C778h
0x910929: fnstsw  ax
0x91092B: test    ah, 5
0x91092E: jp      loc_910A07
0x910934: movaps  xmm0, xmmword ptr [esi+60h]
0x910938: mulps   xmm0, xmm0
0x91093B: movaps  xmm1, xmm0
0x91093E: shufps  xmm1, xmm0, 55h ; 'U'
0x910942: movaps  xmm2, xmm0
0x910945: addss   xmm1, xmm0
0x910949: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91094D: lea     ecx, [esp+10h+var_5+1]
0x910951: addss   xmm2, xmm1
0x910955: movss   dword ptr [ecx], xmm2
0x910959: fld     dword ptr [esp+10h+var_5+1]
0x91095D: fsub    dword ptr ds:0A2F948h
0x910963: fabs
0x910965: fcomp   dword ptr ds:0A3C778h
0x91096B: fnstsw  ax
0x91096D: test    ah, 5
0x910970: jp      loc_910A07
0x910976: movaps  xmm0, xmmword ptr [esi+20h]
0x91097A: mulps   xmm0, xmm0
0x91097D: movaps  xmm1, xmm0
0x910980: shufps  xmm1, xmm0, 55h ; 'U'
0x910984: movaps  xmm2, xmm0
0x910987: addss   xmm1, xmm0
0x91098B: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91098F: lea     edx, [esp+10h+var_5+1]
0x910993: push    3727C5ACh; float
0x910998: addss   xmm2, xmm1
0x91099C: movss   dword ptr [edx], xmm2
0x9109A0: mov     eax, dword ptr [esp+14h+var_5+1]
0x9109A4: push    3F800000h; float
0x9109A9: push    eax; float
0x9109AA: lea     ecx, [esp+1Ch+var_5]
0x9109AE: push    ecx; int
0x9109AF: call    sub_8B1EE0
0x9109B4: mov     cl, [eax]
0x9109B6: add     esp, 10h
0x9109B9: test    cl, cl
0x9109BB: jz      short loc_910A07
0x9109BD: movaps  xmm0, xmmword ptr [esi+80h]
0x9109C4: mulps   xmm0, xmm0
0x9109C7: movaps  xmm1, xmm0
0x9109CA: shufps  xmm1, xmm0, 55h ; 'U'
0x9109CE: movaps  xmm2, xmm0
0x9109D1: addss   xmm1, xmm0
0x9109D5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9109D9: lea     edx, [esp+10h+var_5+1]
0x9109DD: push    3727C5ACh; float
0x9109E2: addss   xmm2, xmm1
0x9109E6: movss   dword ptr [edx], xmm2
0x9109EA: mov     eax, dword ptr [esp+14h+var_5+1]
0x9109EE: push    3F800000h; float
0x9109F3: push    eax; float
0x9109F4: lea     ecx, [esp+1Ch+var_5]
0x9109F8: push    ecx; int
0x9109F9: call    sub_8B1EE0
0x9109FE: mov     cl, [eax]
0x910A00: add     esp, 10h
0x910A03: test    cl, cl
0x910A05: jnz     short loc_910A14
0x910A07: mov     eax, [ebp+arg_0]
0x910A0A: mov     byte ptr [eax], 0
0x910A0D: pop     esi
0x910A0E: mov     esp, ebp
0x910A10: pop     ebp
0x910A11: retn    4
0x910A14: fld     dword ptr [esi+90h]
0x910A1A: fcomp   dword ptr [esi+94h]
0x910A20: fnstsw  ax
0x910A22: test    ah, 41h
0x910A25: mov     eax, [ebp+arg_0]
0x910A28: jz      short loc_910A0A
0x910A2A: mov     byte ptr [eax], 1
0x910A2D: pop     esi
0x910A2E: mov     esp, ebp
0x910A30: pop     ebp
0x910A31: retn    4

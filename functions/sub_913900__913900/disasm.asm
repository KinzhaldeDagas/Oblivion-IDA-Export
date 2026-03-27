0x913900: push    ebp
0x913901: mov     ebp, esp
0x913903: and     esp, 0FFFFFFF0h
0x913906: sub     esp, 10h
0x913909: movaps  xmm1, xmmword ptr [ecx+30h]
0x91390D: movaps  xmm0, xmmword ptr [ecx+20h]
0x913911: mulps   xmm0, xmm1
0x913914: movaps  xmm1, xmm0
0x913917: shufps  xmm1, xmm0, 55h ; 'U'
0x91391B: movaps  xmm2, xmm0
0x91391E: lea     eax, [esp+10h+var_4]
0x913922: addss   xmm1, xmm0
0x913926: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91392A: addss   xmm2, xmm1
0x91392E: movss   dword ptr [eax], xmm2
0x913932: fld     [esp+10h+var_4]
0x913936: fabs
0x913938: fabs
0x91393A: fcomp   dword ptr ds:0A3C778h
0x913940: fnstsw  ax
0x913942: test    ah, 5
0x913945: jp      short loc_9139C3
0x913947: movaps  xmm0, xmmword ptr [ecx+20h]
0x91394B: mulps   xmm0, xmm0
0x91394E: movaps  xmm1, xmm0
0x913951: shufps  xmm1, xmm0, 55h ; 'U'
0x913955: movaps  xmm2, xmm0
0x913958: addss   xmm1, xmm0
0x91395C: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x913960: lea     edx, [esp+10h+var_4]
0x913964: addss   xmm2, xmm1
0x913968: movss   dword ptr [edx], xmm2
0x91396C: fld     [esp+10h+var_4]
0x913970: fsub    dword ptr ds:0A2F948h
0x913976: fabs
0x913978: fcomp   dword ptr ds:0A3C778h
0x91397E: fnstsw  ax
0x913980: test    ah, 5
0x913983: jp      short loc_9139C3
0x913985: movaps  xmm0, xmmword ptr [ecx+30h]
0x913989: mulps   xmm0, xmm0
0x91398C: movaps  xmm1, xmm0
0x91398F: shufps  xmm1, xmm0, 55h ; 'U'
0x913993: movaps  xmm2, xmm0
0x913996: lea     eax, [esp+10h+var_4]
0x91399A: addss   xmm1, xmm0
0x91399E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9139A2: addss   xmm2, xmm1
0x9139A6: movss   dword ptr [eax], xmm2
0x9139AA: fld     [esp+10h+var_4]
0x9139AE: fsub    dword ptr ds:0A2F948h
0x9139B4: fabs
0x9139B6: fcomp   dword ptr ds:0A3C778h
0x9139BC: fnstsw  ax
0x9139BE: test    ah, 5
0x9139C1: jnp     short loc_9139CF
0x9139C3: mov     eax, [ebp+arg_0]
0x9139C6: mov     byte ptr [eax], 0
0x9139C9: mov     esp, ebp
0x9139CB: pop     ebp
0x9139CC: retn    4
0x9139CF: movaps  xmm0, xmmword ptr [ecx+50h]
0x9139D3: mulps   xmm0, xmm0
0x9139D6: movaps  xmm1, xmm0
0x9139D9: shufps  xmm1, xmm0, 55h ; 'U'
0x9139DD: movaps  xmm2, xmm0
0x9139E0: addss   xmm1, xmm0
0x9139E4: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9139E8: lea     ecx, [esp+10h+var_4]
0x9139EC: addss   xmm2, xmm1
0x9139F0: movss   dword ptr [ecx], xmm2
0x9139F4: fld     [esp+10h+var_4]
0x9139F8: fsub    dword ptr ds:0A2F948h
0x9139FE: fabs
0x913A00: fcomp   dword ptr ds:0A3C778h
0x913A06: fnstsw  ax
0x913A08: test    ah, 5
0x913A0B: mov     eax, [ebp+arg_0]
0x913A0E: jp      short loc_9139C6
0x913A10: mov     byte ptr [eax], 1
0x913A13: mov     esp, ebp
0x913A15: pop     ebp
0x913A16: retn    4

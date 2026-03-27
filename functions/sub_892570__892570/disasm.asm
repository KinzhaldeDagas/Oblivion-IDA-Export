0x892570: push    ebp
0x892571: mov     ebp, esp
0x892573: and     esp, 0FFFFFFF0h
0x892576: sub     esp, 34h
0x892579: mov     eax, ds:0B30AACh
0x89257E: xor     eax, esp
0x892580: mov     [esp+34h+var_4], eax
0x892584: push    ebx
0x892585: mov     ebx, [ebp+arg_8]
0x892588: push    esi
0x892589: mov     esi, [ebp+arg_4]
0x89258C: mov     eax, [esi+30h]
0x89258F: push    edi
0x892590: mov     edi, ecx
0x892592: mov     ecx, [eax+50h]
0x892595: call    sub_89DA90
0x89259A: fstp    [esp+40h+var_28]
0x89259E: fldz
0x8925A0: mov     ecx, [esi+30h]
0x8925A3: fld     [esp+40h+var_28]
0x8925A7: mov     ecx, [ecx+30h]
0x8925AA: fcom    st(1)
0x8925AC: fnstsw  ax
0x8925AE: fstp    st(1)
0x8925B0: test    ah, 41h
0x8925B3: jnz     loc_8927B7
0x8925B9: fld     dword ptr ds:0B2E764h
0x8925BF: fcomp   st(1)
0x8925C1: fnstsw  ax
0x8925C3: test    ah, 41h
0x8925C6: jnz     loc_8927B7
0x8925CC: movaps  xmm1, xmmword ptr [ebx]
0x8925CF: fld     dword ptr ds:0A379B4h
0x8925D5: movaps  xmm0, xmm1
0x8925D8: fstp    [esp+40h+var_28]
0x8925DC: mulps   xmm0, xmm1
0x8925DF: movaps  xmm2, xmm0
0x8925E2: shufps  xmm2, xmm0, 55h ; 'U'
0x8925E6: movaps  xmm3, xmm0
0x8925E9: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8925ED: addss   xmm2, xmm0
0x8925F1: addss   xmm3, xmm2
0x8925F5: sqrtss  xmm3, xmm3
0x8925F9: movss   dword ptr [esp+40h+var_20], xmm3
0x8925FF: fld     dword ptr [esp+40h+var_20]
0x892603: fdiv    st, st(1)
0x892605: fstp    [esp+40h+var_24]
0x892609: fld     [esp+40h+var_24]
0x89260D: fld     qword ptr ds:0A2FC70h
0x892613: fcom    st(1)
0x892615: fnstsw  ax
0x892617: test    ah, 5
0x89261A: jp      short loc_89263E
0x89261C: fdivrp  st(1), st
0x89261E: xorps   xmm0, xmm0
0x892621: fstp    [esp+40h+var_24]
0x892625: movss   xmm2, [esp+40h+var_24]
0x89262B: movss   xmm0, xmm2
0x89262F: movaps  xmm2, xmm0
0x892632: shufps  xmm2, xmm0, 0
0x892636: mulps   xmm2, xmm1
0x892639: movaps  xmmword ptr [ebx], xmm2
0x89263C: jmp     short loc_892642
0x89263E: fstp    st(1)
0x892640: fstp    st
0x892642: fld     dword ptr ds:0A2FAACh
0x892648: and     ecx, 3Fh
0x89264B: cmp     ecx, 0Ah
0x89264E: jnz     short loc_892679
0x892650: fld     dword ptr ds:0B2E764h
0x892656: fmul    qword ptr ds:0A2FAA0h
0x89265C: fcomp   st(2)
0x89265E: fnstsw  ax
0x892660: fstp    st(1)
0x892662: test    ah, 5
0x892665: jp      short loc_89266D
0x892667: fst     [esp+40h+var_28]
0x89266B: jmp     short loc_89267B
0x89266D: fld     dword ptr ds:0A46C30h
0x892673: fstp    [esp+40h+var_28]
0x892677: jmp     short loc_89267B
0x892679: fstp    st(1)
0x89267B: cmp     ecx, 0Eh
0x89267E: jnz     short loc_892686
0x892680: fstp    [esp+40h+var_28]
0x892684: jmp     short loc_892688
0x892686: fstp    st
0x892688: test    byte ptr [edi+4], 1
0x89268C: jnz     loc_892786
0x892692: mov     edx, [edi+4]
0x892695: shr     edx, 3
0x892698: test    dl, 1
0x89269B: jz      loc_892786
0x8926A1: lea     eax, [esp+40h+var_20]
0x8926A5: push    eax
0x8926A6: lea     ecx, [edi-1F0h]
0x8926AC: call    sub_8914C0
0x8926B1: movaps  xmm1, [esp+40h+var_20]
0x8926B6: movaps  xmm0, xmmword ptr [esi]
0x8926B9: subps   xmm0, xmm1
0x8926BC: movaps  [esp+40h+var_20], xmm0
0x8926C1: fld     dword ptr [esp+40h+var_20+8]
0x8926C5: fld     dword ptr [edi+1B4h]
0x8926CB: fmul    qword ptr ds:0A6E700h
0x8926D1: fcompp
0x8926D3: fnstsw  ax
0x8926D5: test    ah, 5
0x8926D8: jp      loc_892786
0x8926DE: movaps  xmm2, xmmword ptr [edi+0F0h]
0x8926E5: movss   xmm4, dword ptr ds:0A46C30h
0x8926ED: movaps  xmm0, xmm2
0x8926F0: mulps   xmm0, xmm2
0x8926F3: movaps  xmm1, xmm0
0x8926F6: shufps  xmm1, xmm0, 55h ; 'U'
0x8926FA: addss   xmm1, xmm0
0x8926FE: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x892702: addss   xmm0, xmm1
0x892706: xorps   xmm3, xmm3
0x892709: movss   xmm3, xmm4
0x89270D: movss   xmm4, dword ptr ds:0A3D65Ch
0x892715: movaps  xmm1, xmm0
0x892718: rsqrtss xmm1, xmm1
0x89271C: mulss   xmm0, xmm1
0x892720: mulss   xmm0, xmm1
0x892724: subss   xmm3, xmm0
0x892728: xorps   xmm0, xmm0
0x89272B: movss   xmm0, xmm4
0x89272F: mulss   xmm0, xmm1
0x892733: movaps  xmm1, xmmword ptr [ebx]
0x892736: mulss   xmm0, xmm3
0x89273A: mulps   xmm1, xmm1
0x89273D: movaps  xmm3, xmm1
0x892740: shufps  xmm3, xmm1, 55h ; 'U'
0x892744: addss   xmm3, xmm1
0x892748: movaps  xmm4, xmm1
0x89274B: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x89274F: addss   xmm4, xmm3
0x892753: sqrtss  xmm4, xmm4
0x892757: movss   dword ptr [esp+40h+var_20], xmm4
0x89275D: fld     dword ptr [esp+40h+var_20]
0x892761: fstp    [esp+40h+var_24]
0x892765: xorps   xmm1, xmm1
0x892768: movss   xmm3, [esp+40h+var_24]
0x89276E: movss   xmm1, xmm3
0x892772: movaps  xmm3, xmm0
0x892775: shufps  xmm3, xmm0, 0
0x892779: mulps   xmm3, xmm2
0x89277C: shufps  xmm1, xmm1, 0
0x892780: mulps   xmm3, xmm1
0x892783: movaps  xmmword ptr [ebx], xmm3
0x892786: movss   xmm1, [esp+40h+var_28]
0x89278C: xorps   xmm0, xmm0
0x89278F: movss   xmm0, xmm1
0x892793: movaps  xmm1, xmm0
0x892796: shufps  xmm1, xmm0, 0
0x89279A: movaps  xmm0, xmmword ptr [ebx]
0x89279D: mulps   xmm1, xmm0
0x8927A0: movaps  xmmword ptr [ebx], xmm1
0x8927A3: pop     edi
0x8927A4: pop     esi
0x8927A5: pop     ebx
0x8927A6: mov     ecx, [esp+34h+var_4]
0x8927AA: xor     ecx, esp
0x8927AC: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8927B1: mov     esp, ebp
0x8927B3: pop     ebp
0x8927B4: retn    0Ch
0x8927B7: mov     ecx, [esp+40h+var_4]
0x8927BB: fstp    st
0x8927BD: pop     edi
0x8927BE: xorps   xmm0, xmm0
0x8927C1: pop     esi
0x8927C2: movaps  xmmword ptr [ebx], xmm0
0x8927C5: pop     ebx
0x8927C6: xor     ecx, esp
0x8927C8: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8927CD: mov     esp, ebp
0x8927CF: pop     ebp
0x8927D0: retn    0Ch

0x911280: push    ebp
0x911281: mov     ebp, esp
0x911283: and     esp, 0FFFFFFF0h
0x911286: sub     esp, 10h
0x911289: movaps  xmm0, xmmword ptr [ecx+20h]
0x91128D: mulps   xmm0, xmm0
0x911290: movaps  xmm1, xmm0
0x911293: shufps  xmm1, xmm0, 55h ; 'U'
0x911297: movaps  xmm2, xmm0
0x91129A: lea     eax, [esp+10h+var_4]
0x91129E: addss   xmm1, xmm0
0x9112A2: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9112A6: addss   xmm2, xmm1
0x9112AA: movss   dword ptr [eax], xmm2
0x9112AE: fld     [esp+10h+var_4]
0x9112B2: fsub    dword ptr ds:0A2F948h
0x9112B8: fabs
0x9112BA: fcomp   dword ptr ds:0A3C778h
0x9112C0: fnstsw  ax
0x9112C2: test    ah, 5
0x9112C5: jp      loc_9113A8
0x9112CB: movaps  xmm0, xmmword ptr [ecx+50h]
0x9112CF: mulps   xmm0, xmm0
0x9112D2: movaps  xmm1, xmm0
0x9112D5: shufps  xmm1, xmm0, 55h ; 'U'
0x9112D9: movaps  xmm2, xmm0
0x9112DC: addss   xmm1, xmm0
0x9112E0: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9112E4: lea     edx, [esp+10h+var_4]
0x9112E8: addss   xmm2, xmm1
0x9112EC: movss   dword ptr [edx], xmm2
0x9112F0: fld     [esp+10h+var_4]
0x9112F4: fsub    dword ptr ds:0A2F948h
0x9112FA: fabs
0x9112FC: fcomp   dword ptr ds:0A3C778h
0x911302: fnstsw  ax
0x911304: test    ah, 5
0x911307: jp      loc_9113A8
0x91130D: movaps  xmm0, xmmword ptr [ecx+30h]
0x911311: mulps   xmm0, xmm0
0x911314: movaps  xmm1, xmm0
0x911317: shufps  xmm1, xmm0, 55h ; 'U'
0x91131B: movaps  xmm2, xmm0
0x91131E: lea     eax, [esp+10h+var_4]
0x911322: addss   xmm1, xmm0
0x911326: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x91132A: addss   xmm2, xmm1
0x91132E: movss   dword ptr [eax], xmm2
0x911332: fld     [esp+10h+var_4]
0x911336: fsub    dword ptr ds:0A2F948h
0x91133C: fabs
0x91133E: fcomp   dword ptr ds:0A3C778h
0x911344: fnstsw  ax
0x911346: test    ah, 5
0x911349: jp      short loc_9113A8
0x91134B: movaps  xmm0, xmmword ptr [ecx+60h]
0x91134F: mulps   xmm0, xmm0
0x911352: movaps  xmm1, xmm0
0x911355: shufps  xmm1, xmm0, 55h ; 'U'
0x911359: movaps  xmm2, xmm0
0x91135C: addss   xmm1, xmm0
0x911360: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x911364: lea     edx, [esp+10h+var_4]
0x911368: addss   xmm2, xmm1
0x91136C: movss   dword ptr [edx], xmm2
0x911370: fld     [esp+10h+var_4]
0x911374: fsub    dword ptr ds:0A2F948h
0x91137A: fabs
0x91137C: fcomp   dword ptr ds:0A3C778h
0x911382: fnstsw  ax
0x911384: test    ah, 5
0x911387: jp      short loc_9113A8
0x911389: fld     dword ptr [ecx+70h]
0x91138C: fabs
0x91138E: fcomp   dword ptr ds:0A2F948h
0x911394: fnstsw  ax
0x911396: test    ah, 41h
0x911399: jz      short loc_9113A8
0x91139B: fld     dword ptr [ecx+74h]
0x91139E: fcomp   dword ptr [ecx+78h]
0x9113A1: fnstsw  ax
0x9113A3: test    ah, 41h
0x9113A6: jnz     short loc_9113B4
0x9113A8: mov     eax, [ebp+arg_0]
0x9113AB: mov     byte ptr [eax], 0
0x9113AE: mov     esp, ebp
0x9113B0: pop     ebp
0x9113B1: retn    4
0x9113B4: fld     dword ptr [ecx+7Ch]
0x9113B7: fcomp   dword ptr [ecx+80h]
0x9113BD: fnstsw  ax
0x9113BF: test    ah, 41h
0x9113C2: mov     eax, [ebp+arg_0]
0x9113C5: jz      short loc_9113AB
0x9113C7: mov     byte ptr [eax], 1
0x9113CA: mov     esp, ebp
0x9113CC: pop     ebp
0x9113CD: retn    4

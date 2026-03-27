0x8B51C0: push    ebp
0x8B51C1: mov     ebp, esp
0x8B51C3: and     esp, 0FFFFFFF0h
0x8B51C6: sub     esp, 128h
0x8B51CC: fld     [ebp+arg_C]
0x8B51CF: push    esi
0x8B51D0: fcomp   dword ptr ds:0A2FAA8h
0x8B51D6: push    edi
0x8B51D7: fnstsw  ax
0x8B51D9: test    ah, 41h
0x8B51DC: jnp     loc_8B55C5
0x8B51E2: fld     [ebp+arg_8]
0x8B51E5: fcomp   dword ptr ds:0A2FAA8h
0x8B51EB: fnstsw  ax
0x8B51ED: test    ah, 41h
0x8B51F0: jnp     loc_8B55C5
0x8B51F6: mov     esi, [ebp+arg_0]
0x8B51F9: mov     edi, [ebp+arg_4]
0x8B51FC: movaps  xmm0, xmmword ptr [esi]
0x8B51FF: movaps  xmm2, xmmword ptr [edi]
0x8B5202: subps   xmm2, xmm0
0x8B5205: movaps  xmm0, xmm2
0x8B5208: mulps   xmm0, xmm2
0x8B520B: movaps  xmm1, xmm0
0x8B520E: shufps  xmm1, xmm0, 55h ; 'U'
0x8B5212: addss   xmm1, xmm0
0x8B5216: movaps  xmm3, xmm1
0x8B5219: movaps  xmm1, xmm0
0x8B521C: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8B5220: addss   xmm1, xmm3
0x8B5224: movaps  [esp+130h+var_120], xmm1
0x8B5229: sqrtss  xmm1, xmm1
0x8B522D: lea     eax, [esp+130h+var_124]
0x8B5231: movss   dword ptr [esp+130h+var_120], xmm1
0x8B5237: movaps  xmm1, [esp+130h+var_120]
0x8B523C: movss   dword ptr [eax], xmm1
0x8B5240: fld     [esp+130h+var_124]
0x8B5244: fcomp   dword ptr ds:0A2FAA8h
0x8B524A: fnstsw  ax
0x8B524C: test    ah, 41h
0x8B524F: jnz     loc_8B55C5
0x8B5255: movaps  xmm1, xmm0
0x8B5258: shufps  xmm1, xmm0, 55h ; 'U'
0x8B525C: addss   xmm1, xmm0
0x8B5260: movaps  xmm3, xmm0
0x8B5263: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8B5267: movaps  xmm0, xmm3
0x8B526A: addss   xmm0, xmm1
0x8B526E: movaps  [esp+130h+var_120], xmm0
0x8B5273: rsqrtss xmm1, xmm0
0x8B5277: movss   dword ptr [esp+130h+var_120], xmm1
0x8B527D: movaps  xmm1, [esp+130h+var_120]
0x8B5282: mulss   xmm0, xmm1
0x8B5286: mulss   xmm0, xmm1
0x8B528A: mov     [esp+130h+var_128], 40400000h
0x8B5292: movss   xmm3, [esp+130h+var_128]
0x8B5298: mov     [esp+130h+var_128], 3F000000h
0x8B52A0: movss   xmm5, [esp+130h+var_128]
0x8B52A6: movaps  xmm4, xmm3
0x8B52A9: subss   xmm4, xmm0
0x8B52AD: movaps  xmm0, xmm5
0x8B52B0: mulss   xmm0, xmm1
0x8B52B4: mulss   xmm0, xmm4
0x8B52B8: movaps  xmm1, xmm0
0x8B52BB: shufps  xmm1, xmm0, 0
0x8B52BF: mulps   xmm1, xmm2
0x8B52C2: movaps  xmm2, xmmword ptr ds:0B2F0B0h
0x8B52C9: movaps  xmm0, xmm1
0x8B52CC: mulps   xmm0, xmm2
0x8B52CF: movaps  xmm4, xmm0
0x8B52D2: shufps  xmm4, xmm0, 55h ; 'U'
0x8B52D6: movaps  xmm6, xmm0
0x8B52D9: addss   xmm4, xmm0
0x8B52DD: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8B52E1: lea     ecx, [esp+130h+var_128]
0x8B52E5: addss   xmm6, xmm4
0x8B52E9: movss   dword ptr [ecx], xmm6
0x8B52ED: fld     [esp+130h+var_128]
0x8B52F1: fabs
0x8B52F3: movaps  [esp+130h+var_100], xmm5
0x8B52F8: fcomp   dword ptr ds:0A97F54h
0x8B52FE: fnstsw  ax
0x8B5300: test    ah, 5
0x8B5303: jp      loc_8B53DB
0x8B5309: movaps  xmm4, xmm1
0x8B530C: shufps  xmm4, xmm1, 0C9h ; 'É'
0x8B5310: movaps  xmm6, xmm2
0x8B5313: shufps  xmm6, xmm2, 0D2h ; 'Ò'
0x8B5317: mulps   xmm6, xmm4
0x8B531A: movaps  xmm4, xmm1
0x8B531D: shufps  xmm4, xmm1, 0D2h ; 'Ò'
0x8B5321: movaps  xmm1, xmm2
0x8B5324: shufps  xmm1, xmm2, 0C9h ; 'É'
0x8B5328: movaps  xmm2, xmm1
0x8B532B: mulps   xmm2, xmm4
0x8B532E: subps   xmm2, xmm6
0x8B5331: movaps  xmm1, xmm2
0x8B5334: mulps   xmm1, xmm2
0x8B5337: movaps  xmm4, xmm1
0x8B533A: shufps  xmm4, xmm1, 55h ; 'U'
0x8B533E: addss   xmm4, xmm1
0x8B5342: movaps  xmm6, xmm1
0x8B5345: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8B5349: movaps  xmm1, xmm6
0x8B534C: addss   xmm1, xmm4
0x8B5350: movaps  [esp+130h+var_120], xmm1
0x8B5355: rsqrtss xmm4, xmm1
0x8B5359: movss   dword ptr [esp+130h+var_120], xmm4
0x8B535F: movaps  xmm4, [esp+130h+var_120]
0x8B5364: mulss   xmm1, xmm4
0x8B5368: mulss   xmm1, xmm4
0x8B536C: subss   xmm3, xmm1
0x8B5370: mulss   xmm5, xmm4
0x8B5374: movaps  xmm1, xmm5
0x8B5377: mulss   xmm1, xmm3
0x8B537B: movaps  xmm3, xmm1
0x8B537E: shufps  xmm3, xmm1, 0
0x8B5382: mulps   xmm3, xmm2
0x8B5385: movaps  xmm1, xmm0
0x8B5388: shufps  xmm1, xmm0, 55h ; 'U'
0x8B538C: movaps  xmm2, xmm0
0x8B538F: addss   xmm1, xmm0
0x8B5393: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8B5397: lea     edx, [esp+130h+var_128]
0x8B539B: addss   xmm2, xmm1
0x8B539F: movss   dword ptr [edx], xmm2
0x8B53A3: mov     eax, [esp+130h+var_128]
0x8B53A7: push    eax; float
0x8B53A8: movaps  [esp+134h+var_120], xmm3
0x8B53AD: call    sub_8A2AF0
0x8B53B2: fstp    [esp+134h+var_134]; float
0x8B53B5: lea     ecx, [esp+134h+var_120]
0x8B53B9: push    ecx; int
0x8B53BA: lea     ecx, [esp+138h+var_F0]
0x8B53BE: call    sub_8B1B00
0x8B53C3: lea     edx, [esp+130h+var_F0]
0x8B53C7: push    edx
0x8B53C8: lea     ecx, [esp+134h+var_40]
0x8B53CF: call    sub_8B1DD0
0x8B53D4: movaps  xmm5, [esp+130h+var_100]
0x8B53D9: jmp     short loc_8B5417
0x8B53DB: xorps   xmm0, xmm0
0x8B53DE: movaps  [esp+130h+var_40], xmm0
0x8B53E6: movaps  [esp+130h+var_30], xmm0
0x8B53EE: movaps  [esp+130h+var_20], xmm0
0x8B53F6: mov     dword ptr [esp+130h+var_40], 3F800000h
0x8B5401: mov     dword ptr [esp+130h+var_30+4], 3F800000h
0x8B540C: mov     dword ptr [esp+130h+var_20+8], 3F800000h
0x8B5417: fld     [esp+130h+var_124]
0x8B541B: movaps  xmm0, xmmword ptr [edi]
0x8B541E: fmul    [ebp+arg_8]
0x8B5421: movaps  xmm1, xmmword ptr [esi]
0x8B5424: movaps  xmm2, [esp+130h+var_40]
0x8B542C: mov     ecx, [ebp+arg_C]
0x8B542F: fmul    [ebp+arg_8]
0x8B5432: addps   xmm1, xmm0
0x8B5435: movaps  xmm0, xmm1
0x8B5438: movaps  xmm1, xmm5
0x8B543B: fmul    dword ptr ds:0A97F28h
0x8B5441: shufps  xmm1, xmm5, 0
0x8B5445: mulps   xmm1, xmm0
0x8B5448: xorps   xmm0, xmm0
0x8B544B: fstp    [esp+130h+var_104]
0x8B544F: movaps  [esp+130h+var_B0], xmm0
0x8B5457: fld     [ebp+arg_8]
0x8B545A: movaps  [esp+130h+var_A0], xmm0
0x8B5462: fmul    [ebp+arg_8]
0x8B5465: movaps  [esp+130h+var_C0], xmm0
0x8B546A: fld     [esp+130h+var_124]
0x8B546E: movaps  [esp+130h+var_80], xmm2
0x8B5476: fmul    [esp+130h+var_124]
0x8B547A: movaps  xmm2, [esp+130h+var_30]
0x8B5482: movaps  [esp+130h+var_90], xmm0
0x8B548A: mov     [esp+130h+var_128], ecx
0x8B548E: fmul    dword ptr ds:0A41304h
0x8B5494: lea     edx, [esp+130h+var_100]
0x8B5498: lea     eax, [esp+130h+var_D0]
0x8B549C: movaps  [esp+130h+var_F0], xmm0
0x8B54A1: movss   xmm0, [esp+130h+var_128]
0x8B54A7: fmul    dword ptr ds:0A7C038h
0x8B54AD: fld     st(1)
0x8B54AF: movaps  [esp+130h+var_70], xmm2
0x8B54B7: fmul    dword ptr ds:0A41304h
0x8B54BD: movaps  xmm2, [esp+130h+var_20]
0x8B54C5: push    edx
0x8B54C6: lea     ecx, [esp+134h+var_B0]
0x8B54CD: faddp   st(1), st
0x8B54CF: movaps  [esp+134h+var_10], xmm1
0x8B54D7: mov     [esp+134h+var_E0], eax
0x8B54DB: mov     [esp+134h+var_D8], 80000001h
0x8B54E3: fst     dword ptr [esp+134h+var_B0]
0x8B54EA: mov     [esp+134h+var_D0], 0
0x8B54F2: fstp    dword ptr [esp+134h+var_A0+4]
0x8B54F9: mov     [esp+134h+var_CC], 0
0x8B5501: mov     [esp+134h+var_DC], 1
0x8B5509: fmul    dword ptr ds:0A3D65Ch
0x8B550F: movaps  [esp+134h+var_60], xmm2
0x8B5517: movaps  [esp+134h+var_50], xmm1
0x8B551F: mov     dword ptr [esp+134h+var_C0], 0
0x8B5527: fstp    dword ptr [esp+134h+var_90+8]
0x8B552E: mov     dword ptr [esp+134h+var_C0+4], 0
0x8B5536: mov     dword ptr [esp+134h+var_C0+8], 0
0x8B553E: mov     dword ptr [esp+134h+var_C0+0Ch], 0
0x8B5549: movaps  [esp+134h+var_100], xmm0
0x8B554E: call    sub_8D2A60
0x8B5553: mov     eax, [esp+130h+var_104]
0x8B5557: mov     edx, [ebp+arg_10]
0x8B555A: mov     ecx, [ebp+arg_C]
0x8B555D: movaps  xmm0, [esp+130h+var_F0]
0x8B5562: mov     [esp+130h+var_D0], eax
0x8B5566: push    edx
0x8B5567: lea     eax, [esp+134h+var_E0]
0x8B556B: push    eax
0x8B556C: movaps  [esp+138h+var_C0], xmm0
0x8B5571: mov     [esp+138h+var_CC], ecx
0x8B5575: call    sub_8B3E60
0x8B557A: mov     eax, [esp+138h+var_D8]
0x8B557E: add     esp, 8
0x8B5581: test    eax, eax
0x8B5583: js      short loc_8B55BD
0x8B5585: mov     ecx, ds:0BA9DE4h
0x8B558B: mov     edx, large fs:2Ch
0x8B5592: mov     ecx, [edx+ecx*4]
0x8B5595: mov     ecx, [ecx+19Ch]
0x8B559B: test    ecx, ecx
0x8B559D: jnz     short loc_8B55A5
0x8B559F: mov     ecx, ds:0BA7D9Ch
0x8B55A5: and     eax, 3FFFFFFFh
0x8B55AA: lea     edx, [eax+eax*8]
0x8B55AD: mov     eax, [esp+130h+var_E0]
0x8B55B1: push    14h
0x8B55B3: shl     edx, 4
0x8B55B6: push    edx
0x8B55B7: push    eax
0x8B55B8: call    sub_8A75D0
0x8B55BD: xor     eax, eax
0x8B55BF: pop     edi
0x8B55C0: pop     esi
0x8B55C1: mov     esp, ebp
0x8B55C3: pop     ebp
0x8B55C4: retn
0x8B55C5: pop     edi
0x8B55C6: mov     eax, 1
0x8B55CB: pop     esi
0x8B55CC: mov     esp, ebp
0x8B55CE: pop     ebp
0x8B55CF: retn

0x929310: push    ebp
0x929311: mov     ebp, esp
0x929313: and     esp, 0FFFFFFF0h
0x929316: sub     esp, 1Ch
0x929319: mov     edx, [ebp+arg_0]
0x92931C: push    esi
0x92931D: mov     esi, ecx
0x92931F: mov     eax, [esi]
0x929321: lea     ecx, [esp+20h+var_18+8]
0x929325: push    ecx
0x929326: push    edx
0x929327: mov     ecx, esi
0x929329: call    dword ptr [eax+10h]
0x92932C: movaps  xmm2, xmmword ptr ds:0B2F0A0h
0x929333: movaps  xmm1, [esp+20h+var_18+8]
0x929338: movaps  xmm0, xmm1
0x92933B: mulps   xmm0, xmm2
0x92933E: movaps  xmm2, xmm0
0x929341: shufps  xmm2, xmm0, 55h ; 'U'
0x929345: movaps  xmm3, xmm0
0x929348: lea     eax, [esp+20h+var_18]
0x92934C: addss   xmm2, xmm0
0x929350: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x929354: addss   xmm3, xmm2
0x929358: movss   dword ptr [eax], xmm3
0x92935C: fld     dword ptr [esp+20h+var_18]
0x929360: fcomp   dword ptr ds:0A52A74h
0x929366: fnstsw  ax
0x929368: test    ah, 5
0x92936B: jp      short loc_92939E
0x92936D: movaps  xmm0, xmmword ptr [esi+10h]
0x929371: mov     eax, [ebp+arg_4]
0x929374: movaps  xmm2, xmm0
0x929377: shufps  xmm2, xmm0, 0C9h ; 'É'
0x92937B: movaps  xmm3, xmm1
0x92937E: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x929382: mulps   xmm3, xmm2
0x929385: movaps  xmm2, xmm0
0x929388: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x92938C: movaps  xmm0, xmm1
0x92938F: shufps  xmm0, xmm1, 0C9h ; 'É'
0x929393: mulps   xmm0, xmm2
0x929396: subps   xmm0, xmm3
0x929399: movaps  xmmword ptr [eax], xmm0
0x92939C: jmp     short loc_929411
0x92939E: fld     dword ptr [esp+20h+var_18+8]
0x9293A2: xor     ecx, ecx
0x9293A4: fabs
0x9293A6: mov     edx, 1
0x9293AB: fld     dword ptr [esp+20h+var_18+0Ch]
0x9293AF: fabs
0x9293B1: mov     esi, 2
0x9293B6: fst     dword ptr [esp+20h+var_18]
0x9293BA: fld     [esp+20h+var_8]
0x9293BE: fabs
0x9293C0: fstp    dword ptr [esp+20h+var_18+4]
0x9293C4: fcomp   st(1)
0x9293C6: fnstsw  ax
0x9293C8: test    ah, 5
0x9293CB: jp      short loc_9293DA
0x9293CD: fstp    st
0x9293CF: xor     edx, edx
0x9293D1: fld     dword ptr [esp+20h+var_18]
0x9293D5: mov     ecx, 1
0x9293DA: fld     dword ptr [esp+20h+var_18+4]
0x9293DE: fcomp   st(1)
0x9293E0: fnstsw  ax
0x9293E2: fstp    st
0x9293E4: test    ah, 5
0x9293E7: jp      short loc_9293F0
0x9293E9: mov     esi, ecx
0x9293EB: mov     ecx, 2
0x9293F0: mov     eax, [ebp+arg_4]
0x9293F3: mov     dword ptr [eax+ecx*4], 0
0x9293FA: mov     ecx, dword ptr [esp+esi*4+20h+var_18+8]
0x9293FE: mov     dword ptr [eax+0Ch], 0
0x929405: mov     [eax+edx*4], ecx
0x929408: fld     dword ptr [esp+edx*4+20h+var_18+8]
0x92940C: fchs
0x92940E: fstp    dword ptr [eax+esi*4]
0x929411: movaps  xmm1, xmmword ptr [eax]
0x929414: movaps  xmm0, xmm1
0x929417: mulps   xmm0, xmm1
0x92941A: movaps  xmm2, xmm0
0x92941D: shufps  xmm2, xmm0, 55h ; 'U'
0x929421: addss   xmm2, xmm0
0x929425: movaps  xmm3, xmm0
0x929428: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92942C: movaps  xmm0, xmm3
0x92942F: addss   xmm0, xmm2
0x929433: movaps  [esp+20h+var_18+8], xmm0
0x929438: rsqrtss xmm2, xmm0
0x92943C: movss   dword ptr [esp+20h+var_18+8], xmm2
0x929442: movaps  xmm2, [esp+20h+var_18+8]
0x929447: mulss   xmm0, xmm2
0x92944B: mulss   xmm0, xmm2
0x92944F: mov     dword ptr [esp+20h+var_18+4], 40400000h
0x929457: movss   xmm3, dword ptr [esp+20h+var_18+4]
0x92945D: subss   xmm3, xmm0
0x929461: mov     dword ptr [esp+20h+var_18+4], 3F000000h
0x929469: movss   xmm0, dword ptr [esp+20h+var_18+4]
0x92946F: mulss   xmm0, xmm2
0x929473: mulss   xmm0, xmm3
0x929477: movaps  xmm2, xmm0
0x92947A: shufps  xmm2, xmm0, 0
0x92947E: mulps   xmm2, xmm1
0x929481: movaps  xmmword ptr [eax], xmm2
0x929484: pop     esi
0x929485: mov     esp, ebp
0x929487: pop     ebp
0x929488: retn    8

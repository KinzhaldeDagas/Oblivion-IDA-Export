0x916F60: push    ebp
0x916F61: mov     ebp, esp
0x916F63: and     esp, 0FFFFFFF0h
0x916F66: sub     esp, 24h
0x916F69: push    ebx
0x916F6A: push    esi
0x916F6B: mov     esi, large fs:2Ch
0x916F72: push    edi
0x916F73: mov     edi, ds:0BA9DE4h
0x916F79: mov     eax, [esi+edi*4]
0x916F7C: mov     edx, [eax+1A4h]
0x916F82: cmp     edx, [eax+1A8h]
0x916F88: mov     [esp+30h+var_18], ecx
0x916F8C: jnb     short loc_916FB6
0x916F8E: mov     ecx, eax
0x916F90: mov     ebx, [ecx+1A4h]
0x916F96: mov     dword ptr [ebx], offset aTtrcconvexvert; "TtrcConvexVert"
0x916F9C: rdtsc
0x916F9E: mov     [esp+30h+var_14], eax
0x916FA2: mov     eax, [esp+30h+var_14]
0x916FA6: mov     [ebx+4], eax
0x916FA9: add     ebx, 0Ch
0x916FAC: mov     [ecx+1A4h], ebx
0x916FB2: mov     ecx, [esp+30h+var_18]
0x916FB6: mov     edx, [ebp+arg_8]
0x916FB9: mov     eax, [edx+14h]
0x916FBC: mov     edx, [ecx+44h]
0x916FBF: dec     edx
0x916FC0: mov     [esp+30h+var_1C], 0BF800000h
0x916FC8: mov     [esp+30h+var_14], eax
0x916FCC: js      loc_9170EA
0x916FD2: mov     eax, [ebp+arg_4]
0x916FD5: movaps  xmm3, xmmword ptr [eax]
0x916FD8: movaps  xmm4, xmmword ptr [eax+10h]
0x916FDC: mov     eax, [ecx+40h]
0x916FDF: movaps  xmm5, [esp+30h+var_10]
0x916FE4: mov     ebx, edx
0x916FE6: shl     ebx, 4
0x916FE9: add     ebx, eax
0x916FEB: jmp     short loc_916FF0
0x916FED: align 10h
0x916FF0: movaps  xmm1, xmmword ptr [ebx]
0x916FF3: movaps  xmm0, xmm1
0x916FF6: mulps   xmm0, xmm3
0x916FF9: movaps  xmm7, xmm0
0x916FFC: shufps  xmm7, xmm0, 55h ; 'U'
0x917000: movaps  xmm6, xmm0
0x917003: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x917007: addss   xmm7, xmm0
0x91700B: movaps  xmm2, xmm1
0x91700E: shufps  xmm2, xmm1, 0FFh
0x917012: addss   xmm6, xmm2
0x917016: addps   xmm7, xmm6
0x917019: movaps  xmm0, xmm1
0x91701C: mulps   xmm0, xmm4
0x91701F: lea     ecx, [esp+30h+var_20]
0x917023: movaps  xmm6, xmm0
0x917026: movss   dword ptr [ecx], xmm7
0x91702A: fld     [esp+30h+var_20]
0x91702E: fcomp   dword ptr ds:0A2FAA8h
0x917034: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x917038: addss   xmm6, xmm2
0x91703C: movaps  xmm2, xmm0
0x91703F: shufps  xmm2, xmm0, 55h ; 'U'
0x917043: lea     eax, [esp+30h+var_18]
0x917047: addss   xmm2, xmm0
0x91704B: addps   xmm2, xmm6
0x91704E: movss   dword ptr [eax], xmm2
0x917052: fld     [esp+30h+var_18]
0x917056: fnstsw  ax
0x917058: fcomp   dword ptr ds:0A2FAA8h
0x91705E: test    ah, 1
0x917061: fnstsw  ax
0x917063: jnz     short loc_917090
0x917065: test    ah, 1
0x917068: jz      loc_91712E
0x91706E: fld     [esp+30h+var_20]
0x917072: fsub    [esp+30h+var_18]
0x917076: fdivr   [esp+30h+var_20]
0x91707A: fld     [esp+30h+var_1C]
0x91707E: fcomp   st(1)
0x917080: fnstsw  ax
0x917082: test    ah, 41h
0x917085: jp      short loc_9170B4
0x917087: fstp    [esp+30h+var_1C]
0x91708B: movaps  xmm5, xmm1
0x91708E: jmp     short loc_9170B6
0x917090: test    ah, 1
0x917093: jnz     short loc_9170C9
0x917095: fld     [esp+30h+var_20]
0x917099: fsub    [esp+30h+var_18]
0x91709D: fdivr   [esp+30h+var_20]
0x9170A1: fld     [esp+30h+var_14]
0x9170A5: fcomp   st(1)
0x9170A7: fnstsw  ax
0x9170A9: test    ah, 5
0x9170AC: jnp     short loc_9170B4
0x9170AE: fstp    [esp+30h+var_14]
0x9170B2: jmp     short loc_9170B6
0x9170B4: fstp    st
0x9170B6: fld     [esp+30h+var_14]
0x9170BA: fcomp   [esp+30h+var_1C]
0x9170BE: fnstsw  ax
0x9170C0: test    ah, 5
0x9170C3: jnp     loc_917155
0x9170C9: dec     edx
0x9170CA: sub     ebx, 10h
0x9170CD: test    edx, edx
0x9170CF: jge     loc_916FF0
0x9170D5: fld     [esp+30h+var_1C]
0x9170D9: fcomp   dword ptr ds:0A2FAA8h
0x9170DF: fnstsw  ax
0x9170E1: test    ah, 5
0x9170E4: jp      loc_91717C
0x9170EA: mov     eax, [esi+edi*4]
0x9170ED: mov     ecx, [eax+1A4h]
0x9170F3: cmp     ecx, [eax+1A8h]
0x9170F9: jnb     short loc_91711F
0x9170FB: mov     esi, eax
0x9170FD: mov     ecx, [esi+1A4h]
0x917103: mov     dword ptr [ecx], offset aEt; "Et"
0x917109: rdtsc
0x91710B: mov     [esp+30h+var_14], eax
0x91710F: mov     edx, [esp+30h+var_14]
0x917113: mov     [ecx+4], edx
0x917116: add     ecx, 0Ch
0x917119: mov     [esi+1A4h], ecx
0x91711F: mov     eax, [ebp+arg_0]
0x917122: mov     byte ptr [eax], 0
0x917125: pop     edi
0x917126: pop     esi
0x917127: pop     ebx
0x917128: mov     esp, ebp
0x91712A: pop     ebp
0x91712B: retn    0Ch
0x91712E: mov     eax, [esi+edi*4]
0x917131: mov     ecx, [eax+1A4h]
0x917137: cmp     ecx, [eax+1A8h]
0x91713D: jnb     short loc_91711F
0x91713F: mov     esi, eax
0x917141: mov     ecx, [esi+1A4h]
0x917147: mov     dword ptr [ecx], offset aEt; "Et"
0x91714D: rdtsc
0x91714F: mov     [esp+30h+var_14], eax
0x917153: jmp     short loc_91710F
0x917155: mov     eax, [esi+edi*4]
0x917158: mov     ecx, [eax+1A4h]
0x91715E: cmp     ecx, [eax+1A8h]
0x917164: jnb     short loc_91711F
0x917166: mov     esi, eax
0x917168: mov     ecx, [esi+1A4h]
0x91716E: mov     dword ptr [ecx], offset aEt; "Et"
0x917174: rdtsc
0x917176: mov     [esp+30h+var_14], eax
0x91717A: jmp     short loc_91710F
0x91717C: mov     eax, [ebp+arg_8]
0x91717F: mov     ecx, [esp+30h+var_1C]
0x917183: movaps  xmmword ptr [eax], xmm5
0x917186: mov     [eax+14h], ecx
0x917189: mov     dword ptr [eax+10h], 0FFFFFFFFh
0x917190: mov     eax, [esi+edi*4]
0x917193: mov     edx, [eax+1A4h]
0x917199: cmp     edx, [eax+1A8h]
0x91719F: jnb     short loc_9171C5
0x9171A1: mov     esi, eax
0x9171A3: mov     ecx, [esi+1A4h]
0x9171A9: mov     dword ptr [ecx], offset aEt; "Et"
0x9171AF: rdtsc
0x9171B1: mov     [esp+30h+var_14], eax
0x9171B5: mov     eax, [esp+30h+var_14]
0x9171B9: mov     [ecx+4], eax
0x9171BC: add     ecx, 0Ch
0x9171BF: mov     [esi+1A4h], ecx
0x9171C5: mov     eax, [ebp+arg_0]
0x9171C8: pop     edi
0x9171C9: pop     esi
0x9171CA: mov     byte ptr [eax], 1
0x9171CD: pop     ebx
0x9171CE: mov     esp, ebp
0x9171D0: pop     ebp
0x9171D1: retn    0Ch

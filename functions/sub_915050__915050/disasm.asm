0x915050: push    ebp
0x915051: mov     ebp, esp
0x915053: and     esp, 0FFFFFFF0h
0x915056: sub     esp, 14h
0x915059: push    ebx
0x91505A: push    esi
0x91505B: mov     esi, large fs:2Ch
0x915062: push    edi
0x915063: mov     edi, ds:0BA9DE4h
0x915069: mov     eax, [esi+edi*4]
0x91506C: mov     edx, [eax+1A4h]
0x915072: cmp     edx, [eax+1A8h]
0x915078: jnb     short loc_91509F
0x91507A: mov     ebx, [eax+1A4h]
0x915080: mov     dword ptr [ebx], offset aTtrcplane; "TtrcPlane"
0x915086: rdtsc
0x915088: mov     [esp+20h+var_4], eax
0x91508C: mov     eax, [esp+20h+var_4]
0x915090: mov     [ebx+4], eax
0x915093: mov     eax, [esi+edi*4]
0x915096: add     ebx, 0Ch
0x915099: mov     [eax+1A4h], ebx
0x91509F: movaps  xmm1, xmmword ptr [ecx+10h]
0x9150A3: mov     edx, [ebp+arg_4]
0x9150A6: movaps  xmm3, xmmword ptr [edx]
0x9150A9: movaps  xmm0, xmm1
0x9150AC: mulps   xmm0, xmm3
0x9150AF: movaps  xmm2, xmm1
0x9150B2: shufps  xmm2, xmm1, 0FFh
0x9150B6: movaps  xmm1, xmm0
0x9150B9: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x9150BD: addss   xmm1, xmm2
0x9150C1: movaps  xmm2, xmm0
0x9150C4: shufps  xmm2, xmm0, 55h ; 'U'
0x9150C8: lea     eax, [esp+20h+var_8]
0x9150CC: addss   xmm2, xmm0
0x9150D0: addps   xmm2, xmm1
0x9150D3: movss   dword ptr [eax], xmm2
0x9150D7: fld     [esp+20h+var_8]
0x9150DB: fcomp   dword ptr ds:0A2FAA8h
0x9150E1: fnstsw  ax
0x9150E3: test    ah, 5
0x9150E6: jnp     loc_915188
0x9150EC: movaps  xmm1, xmmword ptr [ecx+10h]
0x9150F0: movaps  xmm2, xmmword ptr [edx+10h]
0x9150F4: movaps  xmm0, xmm1
0x9150F7: mulps   xmm0, xmm2
0x9150FA: movaps  xmm4, xmm1
0x9150FD: shufps  xmm4, xmm1, 0FFh
0x915101: movaps  xmm1, xmm0
0x915104: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x915108: addss   xmm1, xmm4
0x91510C: movaps  xmm4, xmm0
0x91510F: shufps  xmm4, xmm0, 55h ; 'U'
0x915113: addss   xmm4, xmm0
0x915117: lea     edx, [esp+20h+var_4]
0x91511B: addps   xmm4, xmm1
0x91511E: movss   dword ptr [edx], xmm4
0x915122: fld     [esp+20h+var_4]
0x915126: fcomp   dword ptr ds:0A2FAA8h
0x91512C: fnstsw  ax
0x91512E: test    ah, 1
0x915131: jz      short loc_915188
0x915133: fld     [esp+20h+var_8]
0x915137: movaps  xmm5, xmmword ptr [ecx+20h]
0x91513B: fsub    [esp+20h+var_4]
0x91513F: movaps  xmm4, xmmword ptr ds:0A372D0h
0x915146: movaps  xmm1, xmmword ptr [ecx+30h]
0x91514A: fdivr   [esp+20h+var_8]
0x91514E: fst     [esp+20h+var_4]
0x915152: movss   xmm0, [esp+20h+var_4]
0x915158: shufps  xmm0, xmm0, 0
0x91515C: movaps  xmm6, xmm0
0x91515F: mulps   xmm6, xmm2
0x915162: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x915169: subps   xmm2, xmm0
0x91516C: mulps   xmm2, xmm3
0x91516F: addps   xmm2, xmm6
0x915172: subps   xmm2, xmm5
0x915175: andps   xmm2, xmm4
0x915178: cmpleps xmm2, xmm1
0x91517C: movmskps eax, xmm2
0x91517F: and     eax, 7
0x915182: cmp     al, 7
0x915184: jz      short loc_9151CC
0x915186: fstp    st
0x915188: mov     eax, [esi+edi*4]
0x91518B: mov     ecx, [eax+1A4h]
0x915191: cmp     ecx, [eax+1A8h]
0x915197: jnb     short loc_9151BD
0x915199: mov     esi, eax
0x91519B: mov     ecx, [esi+1A4h]
0x9151A1: mov     dword ptr [ecx], offset aEt; "Et"
0x9151A7: rdtsc
0x9151A9: mov     [esp+20h+var_4], eax
0x9151AD: mov     edx, [esp+20h+var_4]
0x9151B1: mov     [ecx+4], edx
0x9151B4: add     ecx, 0Ch
0x9151B7: mov     [esi+1A4h], ecx
0x9151BD: mov     eax, [ebp+arg_0]
0x9151C0: mov     byte ptr [eax], 0
0x9151C3: pop     edi
0x9151C4: pop     esi
0x9151C5: pop     ebx
0x9151C6: mov     esp, ebp
0x9151C8: pop     ebp
0x9151C9: retn    0Ch
0x9151CC: mov     eax, [ebp+arg_8]
0x9151CF: fstp    dword ptr [eax+14h]
0x9151D2: movaps  xmm0, xmmword ptr [ecx+10h]
0x9151D6: movaps  xmmword ptr [eax], xmm0
0x9151D9: mov     dword ptr [eax+10h], 0FFFFFFFFh
0x9151E0: mov     eax, [esi+edi*4]
0x9151E3: mov     ecx, [eax+1A4h]
0x9151E9: cmp     ecx, [eax+1A8h]
0x9151EF: jnb     short loc_915215
0x9151F1: mov     esi, eax
0x9151F3: mov     ecx, [esi+1A4h]
0x9151F9: mov     dword ptr [ecx], offset aEt; "Et"
0x9151FF: rdtsc
0x915201: mov     [esp+20h+var_4], eax
0x915205: mov     edx, [esp+20h+var_4]
0x915209: mov     [ecx+4], edx
0x91520C: add     ecx, 0Ch
0x91520F: mov     [esi+1A4h], ecx
0x915215: mov     eax, [ebp+arg_0]
0x915218: pop     edi
0x915219: pop     esi
0x91521A: mov     byte ptr [eax], 1
0x91521D: pop     ebx
0x91521E: mov     esp, ebp
0x915220: pop     ebp
0x915221: retn    0Ch

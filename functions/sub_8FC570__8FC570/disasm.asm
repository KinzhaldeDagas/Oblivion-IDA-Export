0x8FC570: push    ebp
0x8FC571: mov     ebp, esp
0x8FC573: and     esp, 0FFFFFFF0h
0x8FC576: sub     esp, 84h
0x8FC57C: mov     ecx, large fs:2Ch
0x8FC583: mov     edx, ds:0BA9DE4h
0x8FC589: mov     eax, [ecx+edx*4]
0x8FC58C: push    ebx
0x8FC58D: push    esi
0x8FC58E: mov     esi, [eax+1A4h]
0x8FC594: push    edi
0x8FC595: cmp     esi, [eax+1A8h]
0x8FC59B: jnb     short loc_8FC5C1
0x8FC59D: mov     esi, eax
0x8FC59F: mov     ecx, [esi+1A4h]
0x8FC5A5: mov     dword ptr [ecx], offset aTtspherecapsul; "TtSphereCapsule"
0x8FC5AB: rdtsc
0x8FC5AD: mov     [esp+90h+var_78], eax
0x8FC5B1: mov     eax, [esp+90h+var_78]
0x8FC5B5: mov     [ecx+4], eax
0x8FC5B8: add     ecx, 0Ch
0x8FC5BB: mov     [esi+1A4h], ecx
0x8FC5C1: mov     eax, [ebp+arg_0]
0x8FC5C4: mov     ecx, [ebp+arg_4]
0x8FC5C7: mov     esi, [eax+8]
0x8FC5CA: mov     edi, [eax]
0x8FC5CC: mov     ebx, [ecx]
0x8FC5CE: mov     [esp+90h+var_10], eax
0x8FC5D5: mov     eax, [ecx+8]
0x8FC5D8: mov     [esp+90h+var_C], ecx
0x8FC5DF: movaps  xmm1, xmmword ptr [eax]
0x8FC5E2: movaps  xmm2, xmmword ptr [eax+10h]
0x8FC5E6: movaps  xmm3, xmmword ptr [eax+20h]
0x8FC5EA: movaps  xmm4, xmmword ptr [eax+30h]
0x8FC5EE: lea     ecx, [ebx+10h]
0x8FC5F1: lea     eax, [esp+90h+var_50]
0x8FC5F5: add     esi, 30h ; '0'
0x8FC5F8: sub     eax, ecx
0x8FC5FA: mov     edx, 2
0x8FC5FF: nop
0x8FC600: movaps  xmm0, xmmword ptr [ecx]
0x8FC603: movaps  xmm5, xmm0
0x8FC606: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FC60A: movaps  xmm6, xmm3
0x8FC60D: mulps   xmm6, xmm5
0x8FC610: movaps  xmm5, xmm0
0x8FC613: shufps  xmm5, xmm0, 55h ; 'U'
0x8FC617: movaps  xmm7, xmm2
0x8FC61A: mulps   xmm7, xmm5
0x8FC61D: movaps  xmm5, xmm0
0x8FC620: shufps  xmm5, xmm0, 0
0x8FC624: movaps  xmm0, xmm1
0x8FC627: mulps   xmm0, xmm5
0x8FC62A: addps   xmm6, xmm4
0x8FC62D: addps   xmm0, xmm7
0x8FC630: addps   xmm0, xmm6
0x8FC633: movaps  xmmword ptr [eax+ecx], xmm0
0x8FC637: add     ecx, 10h
0x8FC63A: dec     edx
0x8FC63B: jnz     short loc_8FC600
0x8FC63D: lea     ecx, [esp+90h+var_60]
0x8FC641: push    ecx
0x8FC642: lea     edx, [esp+94h+var_40]
0x8FC646: push    edx
0x8FC647: lea     eax, [esp+98h+var_50]
0x8FC64B: push    eax
0x8FC64C: push    esi
0x8FC64D: call    sub_8D1CD0
0x8FC652: fld     dword ptr [edi+0Ch]
0x8FC655: fadd    dword ptr [ebx+0Ch]
0x8FC658: movaps  xmm0, [esp+0A0h+var_60]
0x8FC65D: mov     ecx, [ebp+arg_8]
0x8FC660: movaps  xmm2, xmmword ptr [esi]
0x8FC663: fld     st
0x8FC665: subps   xmm2, xmm0
0x8FC668: fadd    dword ptr [ecx+8]
0x8FC66B: movaps  xmm0, xmm2
0x8FC66E: mulps   xmm0, xmm2
0x8FC671: movaps  xmm1, xmm0
0x8FC674: fld     st
0x8FC676: shufps  xmm1, xmm0, 55h ; 'U'
0x8FC67A: movaps  xmm3, xmm0
0x8FC67D: fmul    st, st(1)
0x8FC67F: addss   xmm1, xmm0
0x8FC683: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FC687: lea     edx, [esp+0A0h+var_78]
0x8FC68B: addss   xmm3, xmm1
0x8FC68F: movss   dword ptr [edx], xmm3
0x8FC693: fld     [esp+0A0h+var_78]
0x8FC697: fcompp
0x8FC699: add     esp, 10h
0x8FC69C: fnstsw  ax
0x8FC69E: fstp    st
0x8FC6A0: test    ah, 1
0x8FC6A3: jz      loc_8FC809
0x8FC6A9: fld     [esp+90h+var_78]
0x8FC6AD: fcomp   dword ptr ds:0A2FAA8h
0x8FC6B3: fnstsw  ax
0x8FC6B5: test    ah, 41h
0x8FC6B8: jnz     short loc_8FC6C5
0x8FC6BA: fld     [esp+90h+var_78]
0x8FC6BE: fsqrt
0x8FC6C0: jmp     loc_8FC756
0x8FC6C5: movaps  xmm0, [esp+90h+var_50]
0x8FC6CA: fld     dword ptr ds:0A2FAA8h
0x8FC6D0: movaps  xmm1, [esp+90h+var_40]
0x8FC6D5: subps   xmm1, xmm0
0x8FC6D8: movaps  [esp+90h+var_70], xmm1
0x8FC6DD: fld     dword ptr [esp+90h+var_70]
0x8FC6E1: fabs
0x8FC6E3: xor     ecx, ecx
0x8FC6E5: fld     dword ptr [esp+90h+var_70+4]
0x8FC6E9: fabs
0x8FC6EB: mov     edx, 1
0x8FC6F0: fst     [esp+90h+var_78]
0x8FC6F4: fld     dword ptr [esp+90h+var_70+8]
0x8FC6F8: mov     edi, 2
0x8FC6FD: fabs
0x8FC6FF: fstp    [esp+90h+var_74]
0x8FC703: fcomp   st(1)
0x8FC705: fnstsw  ax
0x8FC707: test    ah, 5
0x8FC70A: jp      short loc_8FC719
0x8FC70C: fstp    st
0x8FC70E: xor     edx, edx
0x8FC710: fld     [esp+90h+var_78]
0x8FC714: mov     ecx, 1
0x8FC719: fld     [esp+90h+var_74]
0x8FC71D: fcomp   st(1)
0x8FC71F: fnstsw  ax
0x8FC721: fstp    st
0x8FC723: test    ah, 5
0x8FC726: jp      short loc_8FC72F
0x8FC728: mov     edi, ecx
0x8FC72A: mov     ecx, 2
0x8FC72F: fld     dword ptr [esp+edx*4+90h+var_70]
0x8FC733: mov     eax, dword ptr [esp+edi*4+90h+var_70]
0x8FC737: mov     dword ptr [esp+ecx*4+90h+var_20], 0
0x8FC73F: fchs
0x8FC741: mov     dword ptr [esp+90h+var_20+0Ch], 0
0x8FC749: mov     dword ptr [esp+edx*4+90h+var_20], eax
0x8FC74D: fstp    dword ptr [esp+edi*4+90h+var_20]
0x8FC751: movaps  xmm2, [esp+90h+var_20]
0x8FC756: movaps  xmm0, xmm2
0x8FC759: mulps   xmm0, xmm2
0x8FC75C: movaps  xmm1, xmm0
0x8FC75F: shufps  xmm1, xmm0, 55h ; 'U'
0x8FC763: addss   xmm1, xmm0
0x8FC767: movaps  xmm3, xmm0
0x8FC76A: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FC76E: mov     ecx, [ebp+arg_C]
0x8FC771: movaps  xmm0, xmm3
0x8FC774: addss   xmm0, xmm1
0x8FC778: movaps  [esp+90h+var_70], xmm0
0x8FC77D: rsqrtss xmm1, xmm0
0x8FC781: movss   dword ptr [esp+90h+var_70], xmm1
0x8FC787: movaps  xmm1, [esp+90h+var_70]
0x8FC78C: mulss   xmm0, xmm1
0x8FC790: mulss   xmm0, xmm1
0x8FC794: mov     edx, [ecx]
0x8FC796: mov     [esp+90h+var_74], 40400000h
0x8FC79E: movss   xmm3, [esp+90h+var_74]
0x8FC7A4: subss   xmm3, xmm0
0x8FC7A8: mov     [esp+90h+var_74], 3F000000h
0x8FC7B0: movss   xmm0, [esp+90h+var_74]
0x8FC7B6: mulss   xmm0, xmm1
0x8FC7BA: mulss   xmm0, xmm3
0x8FC7BE: movaps  xmm1, xmm0
0x8FC7C1: shufps  xmm1, xmm0, 0
0x8FC7C5: movaps  xmm0, xmm1
0x8FC7C8: mulps   xmm0, xmm2
0x8FC7CB: movaps  [esp+90h+var_20], xmm0
0x8FC7D0: fld     dword ptr [ebx+0Ch]
0x8FC7D3: fsub    st, st(1)
0x8FC7D5: lea     eax, [esp+90h+var_30]
0x8FC7D9: push    eax
0x8FC7DA: fstp    [esp+94h+var_74]
0x8FC7DE: movss   xmm1, [esp+94h+var_74]
0x8FC7E4: movaps  xmm2, xmm1
0x8FC7E7: fsub    st, st(1)
0x8FC7E9: shufps  xmm2, xmm1, 0
0x8FC7ED: mulps   xmm2, xmm0
0x8FC7F0: movaps  xmm0, xmmword ptr [esi]
0x8FC7F3: fstp    dword ptr [esp+94h+var_20+0Ch]
0x8FC7FA: addps   xmm0, xmm2
0x8FC7FD: movaps  [esp+94h+var_30], xmm0
0x8FC802: fstp    st
0x8FC804: call    dword ptr [edx+4]
0x8FC807: jmp     short loc_8FC80B
0x8FC809: fstp    st
0x8FC80B: mov     ecx, large fs:2Ch
0x8FC812: mov     edx, ds:0BA9DE4h
0x8FC818: mov     eax, [ecx+edx*4]
0x8FC81B: mov     esi, [eax+1A4h]
0x8FC821: cmp     esi, [eax+1A8h]
0x8FC827: jnb     short loc_8FC84D
0x8FC829: mov     esi, eax
0x8FC82B: mov     ecx, [esi+1A4h]
0x8FC831: mov     dword ptr [ecx], offset aEt; "Et"
0x8FC837: rdtsc
0x8FC839: mov     [esp+90h+var_74], eax
0x8FC83D: mov     edx, [esp+90h+var_74]
0x8FC841: mov     [ecx+4], edx
0x8FC844: add     ecx, 0Ch
0x8FC847: mov     [esi+1A4h], ecx
0x8FC84D: pop     edi
0x8FC84E: pop     esi
0x8FC84F: pop     ebx
0x8FC850: mov     esp, ebp
0x8FC852: pop     ebp
0x8FC853: retn    10h

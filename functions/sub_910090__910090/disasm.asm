0x910090: push    ebp
0x910091: mov     ebp, esp
0x910093: and     esp, 0FFFFFFF0h
0x910096: sub     esp, 44h
0x910099: mov     edx, ds:0BA9DE4h
0x91009F: push    ebx
0x9100A0: push    esi
0x9100A1: mov     esi, ecx
0x9100A3: mov     ecx, large fs:2Ch
0x9100AA: mov     eax, [ecx+edx*4]
0x9100AD: mov     ebx, [eax+1A8h]
0x9100B3: push    edi
0x9100B4: mov     edi, [eax+1A4h]
0x9100BA: cmp     edi, ebx
0x9100BC: jnb     short loc_9100E2
0x9100BE: mov     edi, eax
0x9100C0: mov     ecx, [edi+1A4h]
0x9100C6: mov     dword ptr [ecx], offset aTtdashpot; "TtDashpot"
0x9100CC: rdtsc
0x9100CE: mov     [esp+50h+var_3C], eax
0x9100D2: mov     eax, [esp+50h+var_3C]
0x9100D6: mov     [ecx+4], eax
0x9100D9: add     ecx, 0Ch
0x9100DC: mov     [edi+1A4h], ecx
0x9100E2: mov     ecx, [ebp+arg_0]
0x9100E5: fld     dword ptr [ecx+8]
0x9100E8: mov     ebx, [esi+18h]
0x9100EB: mov     eax, [ebx+50h]
0x9100EE: fmul    dword ptr ds:0A9CBBCh
0x9100F4: mov     edi, [esi+1Ch]
0x9100F7: lea     edx, [esi+20h]
0x9100FA: push    edx
0x9100FB: fstp    [esp+54h+var_3C]
0x9100FF: add     eax, 10h
0x910102: push    eax
0x910103: lea     ecx, [esp+58h+var_20]
0x910107: mov     [esp+58h+var_34], edi
0x91010B: call    sub_88FCC0
0x910110: mov     ecx, [ebx+50h]
0x910113: mov     eax, [edi+50h]
0x910116: lea     edx, [esi+30h]
0x910119: push    edx
0x91011A: add     eax, 10h
0x91011D: mov     [esp+54h+var_38], ecx
0x910121: push    eax
0x910122: lea     ecx, [esp+58h+var_30]
0x910126: call    sub_88FCC0
0x91012B: fld     [esp+50h+var_3C]
0x91012F: fmul    dword ptr [esi+40h]
0x910132: mov     edx, [esp+50h+var_38]
0x910136: mov     ecx, [edi+50h]
0x910139: movaps  xmm1, xmmword ptr [ecx+0D0h]
0x910140: movaps  xmm0, xmmword ptr [edx+0D0h]
0x910147: fstp    [esp+50h+var_38]
0x91014B: fld     [esp+50h+var_3C]
0x91014F: movaps  xmm2, [esp+50h+var_30]
0x910154: fmul    dword ptr [esi+44h]
0x910157: movaps  xmm3, [esp+50h+var_20]
0x91015C: subps   xmm3, xmm2
0x91015F: subps   xmm0, xmm1
0x910162: movss   xmm1, [esp+50h+var_38]
0x910168: fstp    [esp+50h+var_38]
0x91016C: movaps  xmm2, xmm1
0x91016F: shufps  xmm2, xmm1, 0
0x910173: movss   xmm1, [esp+50h+var_38]
0x910179: mulps   xmm2, xmm3
0x91017C: movaps  xmmword ptr [esi+50h], xmm2
0x910180: lea     edi, [esi+50h]
0x910183: movaps  xmm2, xmm1
0x910186: shufps  xmm2, xmm1, 0
0x91018A: mulps   xmm2, xmm0
0x91018D: movaps  xmm0, xmmword ptr [edi]
0x910190: addps   xmm0, xmm2
0x910193: movaps  xmmword ptr [edi], xmm0
0x910196: movaps  xmm1, xmmword ptr [edi]
0x910199: mov     [esp+50h+var_38], 0BF800000h
0x9101A1: movss   xmm0, [esp+50h+var_38]
0x9101A7: movaps  xmm2, xmm0
0x9101AA: shufps  xmm2, xmm0, 0
0x9101AE: mulps   xmm2, xmm1
0x9101B1: mov     ecx, ebx
0x9101B3: movaps  [esp+50h+var_10], xmm2
0x9101B8: call    sub_8A6410
0x9101BD: mov     ebx, [ebx+50h]
0x9101C0: mov     eax, [ebx]
0x9101C2: lea     ecx, [esp+50h+var_20]
0x9101C6: push    ecx
0x9101C7: lea     edx, [esp+54h+var_10]
0x9101CB: push    edx
0x9101CC: mov     ecx, ebx
0x9101CE: call    dword ptr [eax+60h]
0x9101D1: mov     esi, [esp+50h+var_34]
0x9101D5: mov     ecx, esi
0x9101D7: call    sub_8A6410
0x9101DC: mov     ecx, [esi+50h]
0x9101DF: mov     eax, [ecx]
0x9101E1: lea     edx, [esp+50h+var_30]
0x9101E5: push    edx
0x9101E6: push    edi
0x9101E7: call    dword ptr [eax+60h]
0x9101EA: mov     ecx, large fs:2Ch
0x9101F1: mov     edx, ds:0BA9DE4h
0x9101F7: mov     eax, [ecx+edx*4]
0x9101FA: mov     esi, [eax+1A4h]
0x910200: cmp     esi, [eax+1A8h]
0x910206: jnb     short loc_91022C
0x910208: mov     esi, eax
0x91020A: mov     ecx, [esi+1A4h]
0x910210: mov     dword ptr [ecx], offset aEt; "Et"
0x910216: rdtsc
0x910218: mov     [esp+50h+var_34], eax
0x91021C: mov     eax, [esp+50h+var_34]
0x910220: mov     [ecx+4], eax
0x910223: add     ecx, 0Ch
0x910226: mov     [esi+1A4h], ecx
0x91022C: pop     edi
0x91022D: pop     esi
0x91022E: pop     ebx
0x91022F: mov     esp, ebp
0x910231: pop     ebp
0x910232: retn    4

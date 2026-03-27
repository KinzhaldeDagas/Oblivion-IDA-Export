0x757580: push    ebp
0x757581: mov     ebp, esp
0x757583: and     esp, 0FFFFFFF8h
0x757586: fldz
0x757588: sub     esp, 13Ch
0x75758E: push    ebx
0x75758F: mov     ebx, ecx
0x757591: fcom    dword ptr [ebx+1Ch]
0x757594: push    esi
0x757595: push    edi
0x757596: fnstsw  ax
0x757598: test    ah, 44h
0x75759B: jnp     loc_757843
0x7575A1: mov     edx, [ebp+arg_4]
0x7575A4: cmp     word ptr [edx+48h], 0
0x7575A9: jz      loc_757843
0x7575AF: mov     ecx, [ebx+18h]
0x7575B2: test    ecx, ecx
0x7575B4: jz      loc_757843
0x7575BA: cmp     byte ptr [ebx+24h], 0
0x7575BE: jnz     short loc_7575E2
0x7575C0: fcomp   dword ptr [ebx+20h]
0x7575C3: fnstsw  ax
0x7575C5: test    ah, 44h
0x7575C8: jp      short loc_7575E4
0x7575CA: fld     [ebp+arg_0]
0x7575CD: push    edx; int
0x7575CE: push    ecx
0x7575CF: mov     ecx, ebx
0x7575D1: fstp    [esp+150h+var_150]; float
0x7575D4: call    sub_7573E0
0x7575D9: pop     edi
0x7575DA: pop     esi
0x7575DB: pop     ebx
0x7575DC: mov     esp, ebp
0x7575DE: pop     ebp
0x7575DF: retn    8
0x7575E2: fstp    st
0x7575E4: lea     esi, [ecx+64h]
0x7575E7: mov     ecx, 0Dh
0x7575EC: lea     edi, [esp+148h+var_9C]
0x7575F3: rep movsd
0x7575F5: mov     esi, [ebx+10h]
0x7575F8: add     esi, 64h ; 'd'
0x7575FB: mov     ecx, 0Dh
0x757600: lea     edi, [esp+148h+var_68]
0x757607: lea     eax, [esp+148h+var_34]
0x75760E: rep movsd
0x757610: push    eax
0x757611: lea     ecx, [esp+14Ch+var_68]
0x757618: call    sub_718A80
0x75761D: lea     ecx, [esp+148h+var_9C]
0x757624: push    ecx
0x757625: lea     edx, [esp+14Ch+var_D0]
0x757629: push    edx
0x75762A: lea     ecx, [esp+150h+var_34]
0x757631: call    sub_53D7A0
0x757636: mov     eax, [esp+148h+var_AC]
0x75763D: fld     dword ptr [ebx+20h]
0x757640: mov     ecx, [esp+148h+var_A8]
0x757647: fmul    qword ptr ds:0A2FAA0h
0x75764D: mov     edx, [esp+148h+var_A4]
0x757654: mov     [esp+148h+var_118], eax
0x757658: mov     [esp+148h+var_114], ecx
0x75765C: fstp    [esp+148h+var_E8]
0x757660: lea     eax, [ebx+3Ch]
0x757663: push    eax
0x757664: lea     ecx, [esp+14Ch+var_124]
0x757668: push    ecx
0x757669: lea     ecx, [esp+150h+var_D0]
0x757670: mov     [esp+150h+var_110], edx
0x757674: call    sub_7101F0
0x757679: mov     esi, [ebp+arg_4]
0x75767C: xor     edx, edx
0x75767E: cmp     [esi+48h], dx
0x757682: mov     [esp+148h+var_128], edx
0x757686: jbe     loc_757845
0x75768C: fldz
0x75768E: mov     edi, [esi+5Ch]
0x757691: fld     [ebp+arg_0]
0x757694: movzx   ecx, dx
0x757697: lea     eax, ds:0[ecx*8]
0x75769E: sub     eax, ecx
0x7576A0: lea     edi, [edi+eax*4]
0x7576A3: fsub    dword ptr [edi+14h]
0x7576A6: fstp    [esp+148h+var_138]
0x7576AA: fld     st
0x7576AC: fld     [esp+148h+var_138]
0x7576B0: fucom   st(1)
0x7576B2: fnstsw  ax
0x7576B4: fstp    st(1)
0x7576B6: test    ah, 44h
0x7576B9: jnp     loc_757830
0x7576BF: cmp     byte ptr [ebx+24h], 0
0x7576C3: mov     eax, [esi+1Ch]
0x7576C6: lea     ecx, [ecx+ecx*2]
0x7576C9: lea     eax, [eax+ecx*4]
0x7576CC: mov     ecx, [eax]
0x7576CE: mov     [esp+148h+var_F4], ecx
0x7576D2: fld     [esp+148h+var_F4]
0x7576D6: fsub    [esp+148h+var_118]
0x7576DA: mov     ecx, [eax+4]
0x7576DD: mov     eax, [eax+8]
0x7576E0: mov     [esp+148h+var_F0], ecx
0x7576E4: fstp    [esp+148h+var_E4]
0x7576E8: mov     [esp+148h+var_EC], eax
0x7576EC: fld     [esp+148h+var_F0]
0x7576F0: fsub    [esp+148h+var_114]
0x7576F4: fstp    [esp+148h+var_E0]
0x7576F8: fld     [esp+148h+var_EC]
0x7576FC: fsub    [esp+148h+var_110]
0x757700: fstp    [esp+148h+var_DC]
0x757704: fld     [esp+148h+var_E0]
0x757708: fld     [esp+148h+var_E4]
0x75770C: fld     [esp+148h+var_DC]
0x757710: fld     st(1)
0x757712: fmulp   st(2), st
0x757714: fld     st(2)
0x757716: fmulp   st(3), st
0x757718: fxch    st(1)
0x75771A: faddp   st(2), st
0x75771C: fmul    st, st
0x75771E: faddp   st(1), st
0x757720: fstp    [esp+148h+var_138]
0x757724: fld     [esp+148h+var_138]
0x757728: jz      short loc_75773A
0x75772A: fld     dword ptr [ebx+2Ch]
0x75772D: fcomp   st(1)
0x75772F: fnstsw  ax
0x757731: test    ah, 1
0x757734: jnz     loc_75782E
0x75773A: fld     st(2)
0x75773C: fcomp   dword ptr [ebx+20h]
0x75773F: fnstsw  ax
0x757741: test    ah, 44h
0x757744: jnp     loc_7577CB
0x75774A: fld     st(2)
0x75774C: fucomp  st(1)
0x75774E: fnstsw  ax
0x757750: test    ah, 44h
0x757753: jnp     short loc_7577CB
0x757755: fstp    st(2)
0x757757: fmul    dword ptr [ebx+1Ch]
0x75775A: fstp    [esp+148h+var_D8]
0x75775E: fld     [esp+148h+var_E8]
0x757762: call    __CIpow
0x757767: fstp    [esp+148h+var_138]
0x75776B: fld     [esp+148h+var_138]
0x75776F: sub     esp, 8
0x757772: fstp    [esp+150h+var_14C]; float
0x757776: fld1
0x757778: fstp    [esp+150h+var_150]; float
0x75777B: call    Min_Float
0x757780: fdivr   [esp+150h+var_D8]
0x757784: add     esp, 8
0x757787: fstp    [esp+148h+var_138]
0x75778B: fld     [esp+148h+var_138]
0x75778F: fld     st
0x757791: fmul    [esp+148h+var_124]
0x757795: fstp    [esp+148h+var_10C]
0x757799: mov     ecx, [esp+148h+var_10C]
0x75779D: fld     [esp+148h+var_120]
0x7577A1: mov     [esp+148h+var_134], ecx
0x7577A5: fmul    st, st(1)
0x7577A7: fstp    [esp+148h+var_108]
0x7577AB: mov     edx, [esp+148h+var_108]
0x7577AF: mov     [esp+148h+var_130], edx
0x7577B3: fmul    [esp+148h+var_11C]
0x7577B7: mov     edx, [esp+148h+var_128]
0x7577BB: fstp    [esp+148h+var_104]
0x7577BF: mov     eax, [esp+148h+var_104]
0x7577C3: fldz
0x7577C5: mov     [esp+148h+var_12C], eax
0x7577C9: jmp     short loc_757810
0x7577CB: fstp    st
0x7577CD: fmul    dword ptr [ebx+1Ch]
0x7577D0: fstp    [esp+148h+var_138]
0x7577D4: fld     [esp+148h+var_124]
0x7577D8: fld     [esp+148h+var_138]
0x7577DC: fld     st
0x7577DE: fmulp   st(2), st
0x7577E0: fxch    st(1)
0x7577E2: fstp    [esp+148h+var_100]
0x7577E6: mov     ecx, [esp+148h+var_100]
0x7577EA: fld     [esp+148h+var_120]
0x7577EE: mov     [esp+148h+var_134], ecx
0x7577F2: fmul    st, st(1)
0x7577F4: fstp    [esp+148h+var_FC]
0x7577F8: mov     eax, [esp+148h+var_FC]
0x7577FC: mov     [esp+148h+var_130], eax
0x757800: fmul    [esp+148h+var_11C]
0x757804: fstp    [esp+148h+var_F8]
0x757808: mov     ecx, [esp+148h+var_F8]
0x75780C: mov     [esp+148h+var_12C], ecx
0x757810: fld     dword ptr [edi]
0x757812: fadd    [esp+148h+var_134]
0x757816: fstp    dword ptr [edi]
0x757818: fld     dword ptr [edi+4]
0x75781B: fadd    [esp+148h+var_130]
0x75781F: fstp    dword ptr [edi+4]
0x757822: fld     [esp+148h+var_12C]
0x757826: fadd    dword ptr [edi+8]
0x757829: fstp    dword ptr [edi+8]
0x75782C: jmp     short loc_757832
0x75782E: fstp    st
0x757830: fstp    st
0x757832: add     edx, 1
0x757835: cmp     dx, [esi+48h]
0x757839: mov     [esp+148h+var_128], edx
0x75783D: jb      loc_75768E
0x757843: fstp    st
0x757845: pop     edi
0x757846: pop     esi
0x757847: pop     ebx
0x757848: mov     esp, ebp
0x75784A: pop     ebp
0x75784B: retn    8

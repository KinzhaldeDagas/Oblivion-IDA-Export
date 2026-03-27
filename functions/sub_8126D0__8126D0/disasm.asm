0x8126D0: sub     esp, 30h
0x8126D3: fld     dword ptr ds:0A9372Ch
0x8126D9: push    ebx
0x8126DA: mov     edx, ecx
0x8126DC: fstp    [esp+34h+var_30]
0x8126E0: movzx   eax, word ptr [edx+0Eh]
0x8126E4: test    ax, ax
0x8126E7: push    ebp
0x8126E8: push    esi
0x8126E9: push    edi
0x8126EA: mov     [esp+40h+var_2C], edx
0x8126EE: jnz     short loc_8126F6
0x8126F0: fldz
0x8126F2: fstp    [esp+40h+var_30]
0x8126F6: fld     [esp+40h+var_30]
0x8126FA: movzx   eax, ax
0x8126FD: test    eax, eax
0x8126FF: fst     [esp+40h+var_1C]
0x812703: fst     [esp+40h+var_18]
0x812707: fst     [esp+40h+var_14]
0x81270B: fchs
0x81270D: fstp    [esp+40h+var_30]
0x812711: fld     [esp+40h+var_30]
0x812715: fst     [esp+40h+var_28]
0x812719: fst     [esp+40h+var_24]
0x81271D: fstp    [esp+40h+var_20]
0x812721: jle     loc_8127C2
0x812727: mov     ecx, [edx+10h]
0x81272A: mov     esi, eax
0x81272C: lea     esp, [esp+0]
0x812730: fld     [esp+40h+var_1C]
0x812734: fld     dword ptr [ecx]
0x812736: fcompp
0x812738: fnstsw  ax
0x81273A: test    ah, 41h
0x81273D: jz      short loc_812745
0x81273F: fld     dword ptr [ecx]
0x812741: fstp    [esp+40h+var_1C]
0x812745: fld     [esp+40h+var_28]
0x812749: fld     dword ptr [ecx]
0x81274B: fcompp
0x81274D: fnstsw  ax
0x81274F: test    ah, 5
0x812752: jnp     short loc_81275A
0x812754: fld     dword ptr [ecx]
0x812756: fstp    [esp+40h+var_28]
0x81275A: fld     [esp+40h+var_18]
0x81275E: fld     dword ptr [ecx+4]
0x812761: fcompp
0x812763: fnstsw  ax
0x812765: test    ah, 41h
0x812768: jz      short loc_812771
0x81276A: fld     dword ptr [ecx+4]
0x81276D: fstp    [esp+40h+var_18]
0x812771: fld     [esp+40h+var_24]
0x812775: fld     dword ptr [ecx+4]
0x812778: fcompp
0x81277A: fnstsw  ax
0x81277C: test    ah, 5
0x81277F: jnp     short loc_812788
0x812781: fld     dword ptr [ecx+4]
0x812784: fstp    [esp+40h+var_24]
0x812788: fld     [esp+40h+var_14]
0x81278C: fld     dword ptr [ecx+8]
0x81278F: fcompp
0x812791: fnstsw  ax
0x812793: test    ah, 41h
0x812796: jz      short loc_81279F
0x812798: fld     dword ptr [ecx+8]
0x81279B: fstp    [esp+40h+var_14]
0x81279F: fld     [esp+40h+var_20]
0x8127A3: fld     dword ptr [ecx+8]
0x8127A6: fcompp
0x8127A8: fnstsw  ax
0x8127AA: test    ah, 5
0x8127AD: jnp     short loc_8127B6
0x8127AF: fld     dword ptr [ecx+8]
0x8127B2: fstp    [esp+40h+var_20]
0x8127B6: add     ecx, 10h
0x8127B9: sub     esi, 1
0x8127BC: jnz     loc_812730
0x8127C2: mov     edi, [edx+4]
0x8127C5: test    edi, edi
0x8127C7: jz      loc_812976
0x8127CD: mov     esi, [edx]
0x8127CF: test    esi, esi
0x8127D1: jz      loc_812976
0x8127D7: fld     [esp+40h+var_28]
0x8127DB: fld     st
0x8127DD: fld     [esp+40h+var_1C]
0x8127E1: fld     st
0x8127E3: fsubp   st(2), st
0x8127E5: fxch    st(1)
0x8127E7: fstp    [esp+40h+var_10]
0x8127EB: fld     [esp+40h+var_24]
0x8127EF: fld     st
0x8127F1: fld     [esp+40h+var_18]
0x8127F5: fld     st
0x8127F7: fsubp   st(2), st
0x8127F9: fxch    st(1)
0x8127FB: fstp    [esp+40h+var_C]
0x8127FF: fld     [esp+40h+var_20]
0x812803: fld     st
0x812805: fld     [esp+40h+var_14]
0x812809: fld     st
0x81280B: fsubp   st(2), st
0x81280D: fxch    st(1)
0x81280F: fstp    [esp+40h+var_8]
0x812813: fld     [esp+40h+var_10]
0x812817: fld     qword ptr ds:0A2FAA0h
0x81281D: fmul    st(1), st
0x81281F: fxch    st(1)
0x812821: fstp    [esp+40h+var_28]
0x812825: fld     [esp+40h+var_C]
0x812829: fmul    st, st(1)
0x81282B: fstp    [esp+40h+var_24]
0x81282F: fmul    [esp+40h+var_8]
0x812833: fstp    [esp+40h+var_20]
0x812837: fld     [esp+40h+var_28]
0x81283B: faddp   st(5), st
0x81283D: fxch    st(4)
0x81283F: fstp    [esp+40h+var_1C]
0x812843: mov     ebx, [esp+40h+var_1C]
0x812847: fld     [esp+40h+var_24]
0x81284B: faddp   st(2), st
0x81284D: fxch    st(1)
0x81284F: fstp    [esp+40h+var_18]
0x812853: mov     ebp, [esp+40h+var_18]
0x812857: fld     [esp+40h+var_20]
0x81285B: faddp   st(3), st
0x81285D: fxch    st(2)
0x81285F: fstp    [esp+40h+var_14]
0x812863: fld     [esp+40h+var_1C]
0x812867: fsubp   st(3), st
0x812869: fxch    st(2)
0x81286B: fstp    [esp+40h+var_10]
0x81286F: fld     [esp+40h+var_18]
0x812873: fsubp   st(2), st
0x812875: fxch    st(1)
0x812877: fstp    [esp+40h+var_C]
0x81287B: fsub    [esp+40h+var_14]
0x81287F: fstp    [esp+40h+var_8]
0x812883: fld     [esp+40h+var_C]
0x812887: fld     [esp+40h+var_10]
0x81288B: fld     [esp+40h+var_8]
0x81288F: fld     st(1)
0x812891: fmulp   st(2), st
0x812893: fld     st(2)
0x812895: fmulp   st(3), st
0x812897: fxch    st(1)
0x812899: faddp   st(2), st
0x81289B: fmul    st, st
0x81289D: faddp   st(1), st
0x81289F: fstp    [esp+40h+var_30]
0x8128A3: fld     [esp+40h+var_30]
0x8128A7: call    __CIsqrt
0x8128AC: fstp    [esp+40h+var_30]
0x8128B0: fld     [esp+40h+var_30]
0x8128B4: mov     eax, [esi]
0x8128B6: fadd    dword ptr [edi+28h]
0x8128B9: mov     edx, [eax+4]
0x8128BC: mov     ecx, esi
0x8128BE: fstp    [esp+40h+var_4]
0x8128C2: call    edx
0x8128C4: test    eax, eax
0x8128C6: jz      short loc_8128D6
0x8128C8: cmp     eax, offset unk_B47878
0x8128CD: jz      short loc_812923
0x8128CF: mov     eax, [eax+4]
0x8128D2: test    eax, eax
0x8128D4: jnz     short loc_8128C8
0x8128D6: xor     al, al
0x8128D8: neg     al
0x8128DA: sbb     eax, eax
0x8128DC: and     eax, esi
0x8128DE: mov     esi, eax
0x8128E0: jz      short loc_812927
0x8128E2: mov     ecx, [esp+40h+var_14]
0x8128E6: mov     edx, [esi]
0x8128E8: mov     edx, [edx+9Ch]
0x8128EE: sub     esp, 10h
0x8128F1: mov     eax, esp
0x8128F3: mov     [eax], ebx
0x8128F5: mov     [eax+4], ebp
0x8128F8: mov     [eax+8], ecx
0x8128FB: mov     ecx, [esp+50h+var_4]
0x8128FF: mov     [eax+0Ch], ecx
0x812902: mov     ecx, esi
0x812904: call    edx
0x812906: mov     ecx, [esp+40h+var_2C]
0x81290A: movzx   edx, word ptr [ecx+0Eh]
0x81290E: mov     eax, [esi]
0x812910: mov     eax, [eax+0A0h]
0x812916: push    edx
0x812917: mov     ecx, esi
0x812919: call    eax
0x81291B: pop     edi
0x81291C: pop     esi
0x81291D: pop     ebp
0x81291E: pop     ebx
0x81291F: add     esp, 30h
0x812922: retn
0x812923: mov     al, 1
0x812925: jmp     short loc_8128D8
0x812927: mov     edi, [esp+40h+var_2C]
0x81292B: mov     eax, [edi]
0x81292D: push    eax
0x81292E: push    offset stru_B4786C
0x812933: call    NiRTTI_Cast
0x812938: mov     esi, eax
0x81293A: add     esp, 8
0x81293D: test    esi, esi
0x81293F: jz      short loc_812976
0x812941: mov     ecx, [esp+40h+var_14]
0x812945: mov     edx, [esi]
0x812947: mov     edx, [edx+9Ch]
0x81294D: sub     esp, 10h
0x812950: mov     eax, esp
0x812952: mov     [eax], ebx
0x812954: mov     [eax+4], ebp
0x812957: mov     [eax+8], ecx
0x81295A: mov     ecx, [esp+50h+var_4]
0x81295E: mov     [eax+0Ch], ecx
0x812961: mov     ecx, esi
0x812963: call    edx
0x812965: movzx   ecx, word ptr [edi+0Eh]
0x812969: mov     eax, [esi]
0x81296B: mov     edx, [eax+0A0h]
0x812971: push    ecx
0x812972: mov     ecx, esi
0x812974: call    edx
0x812976: pop     edi
0x812977: pop     esi
0x812978: pop     ebp
0x812979: pop     ebx
0x81297A: add     esp, 30h
0x81297D: retn

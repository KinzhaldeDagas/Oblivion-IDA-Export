0x63C730: sub     esp, 5Ch
0x63C733: push    ebx
0x63C734: push    ebp
0x63C735: push    esi
0x63C736: mov     ebx, ecx
0x63C738: mov     ecx, ds:0B33B00h
0x63C73E: push    edi
0x63C73F: call    sub_45A500
0x63C744: test    al, al
0x63C746: jnz     loc_63CDAD
0x63C74C: mov     eax, ds:0B33B00h
0x63C751: mov     ecx, [eax+18h]
0x63C754: shr     ecx, 0Dh
0x63C757: test    cl, 1
0x63C75A: jz      short loc_63C77A
0x63C75C: mov     ecx, ds:0B3A6B0h
0x63C762: push    2
0x63C764: call    sub_572EA0
0x63C769: fcomp   dword ptr ds:0A2FAA8h
0x63C76F: fnstsw  ax
0x63C771: test    ah, 41h
0x63C774: jz      loc_63CDAD
0x63C77A: mov     ecx, ds:0B3F9B0h
0x63C780: fld     dword ptr ds:0B33E9Ch
0x63C786: mov     esi, [esp+6Ch+arg_0]
0x63C78A: fstp    [esp+6Ch+var_5C]
0x63C78E: mov     edx, ds:0B3F9A8h
0x63C794: mov     eax, ds:0B3F9ACh
0x63C799: mov     [esp+6Ch+var_44], ecx
0x63C79D: mov     ecx, ds:0B333C4h; this
0x63C7A3: cmp     esi, ecx
0x63C7A5: mov     dword ptr [esp+6Ch+var_4C], edx
0x63C7A9: mov     dword ptr [esp+6Ch+var_4C+4], eax
0x63C7AD: jnz     short loc_63C7F6
0x63C7AF: push    0; a2
0x63C7B1: call    Player_GetAnimData
0x63C7B6: mov     ecx, ds:0B333C4h; this
0x63C7BC: cmp     byte ptr [ecx+588h], 0
0x63C7C3: mov     edi, eax
0x63C7C5: jnz     short loc_63C804
0x63C7C7: push    1; a2
0x63C7C9: call    Player_GetAnimData
0x63C7CE: test    edi, edi
0x63C7D0: mov     [esp+6Ch+arg_0], eax
0x63C7D4: jz      short loc_63C802
0x63C7D6: push    0
0x63C7D8: mov     ecx, eax
0x63C7DA: call    ActorAnimData_GetAnimGroupFromField8Value
0x63C7DF: push    0
0x63C7E1: mov     ecx, edi
0x63C7E3: mov     bp, ax
0x63C7E6: call    ActorAnimData_GetAnimGroupFromField8Value
0x63C7EB: cmp     bp, ax
0x63C7EE: jnz     short loc_63C804
0x63C7F0: mov     eax, [esp+6Ch+arg_0]
0x63C7F4: jmp     short loc_63C802
0x63C7F6: mov     edx, [esi]
0x63C7F8: mov     eax, [edx+164h]
0x63C7FE: mov     ecx, esi
0x63C800: call    eax
0x63C802: mov     edi, eax
0x63C804: mov     edx, [esi]
0x63C806: mov     eax, [edx+19Ch]
0x63C80C: mov     ecx, esi
0x63C80E: call    eax
0x63C810: test    al, al
0x63C812: jz      short loc_63C829
0x63C814: mov     edx, [ebx]
0x63C816: mov     eax, [edx+2E4h]
0x63C81C: mov     ecx, ebx
0x63C81E: call    eax
0x63C820: cmp     eax, 6
0x63C823: jnz     loc_63C9EE
0x63C829: mov     edx, [esi]
0x63C82B: mov     eax, [edx+198h]
0x63C831: push    0
0x63C833: mov     ecx, esi
0x63C835: call    eax
0x63C837: test    al, al
0x63C839: jnz     loc_63C9EE
0x63C83F: cmp     [ebx+2A9h], al
0x63C845: jnz     loc_63C9EE
0x63C84B: test    edi, edi
0x63C84D: jz      short loc_63C877
0x63C84F: mov     ecx, [esi+8]
0x63C852: shr     ecx, 4
0x63C855: test    cl, 1
0x63C858: mov     ecx, edi
0x63C85A: jz      short loc_63C868
0x63C85C: push    0
0x63C85E: push    1
0x63C860: push    esi
0x63C861: lea     edx, [esp+78h+var_4C]
0x63C865: push    edx
0x63C866: jmp     short loc_63C872
0x63C868: push    1
0x63C86A: push    0
0x63C86C: push    esi
0x63C86D: lea     eax, [esp+78h+var_4C]
0x63C871: push    eax
0x63C872: call    sub_4723A0
0x63C877: mov     edx, [ebx]
0x63C879: mov     edx, [edx+18Ch]
0x63C87F: lea     eax, [esp+6Ch+arg_0]
0x63C883: push    eax
0x63C884: mov     ecx, ebx
0x63C886: call    edx
0x63C888: mov     edi, [eax]
0x63C88A: lea     ecx, [esp+6Ch+arg_0]; this
0x63C88E: call    sub_7016A0
0x63C893: test    edi, edi
0x63C895: jz      short loc_63C8C7
0x63C897: lea     ecx, [edi+1F0h]
0x63C89D: test    ecx, ecx
0x63C89F: jz      short loc_63C8C7
0x63C8A1: call    sub_628E70
0x63C8A6: test    al, al
0x63C8A8: jz      short loc_63C8C7
0x63C8AA: mov     eax, ds:0B3F9A8h
0x63C8AF: mov     ecx, ds:0B3F9ACh
0x63C8B5: mov     edx, ds:0B3F9B0h
0x63C8BB: mov     dword ptr [esp+6Ch+var_4C], eax
0x63C8BF: mov     dword ptr [esp+6Ch+var_4C+4], ecx
0x63C8C3: mov     [esp+6Ch+var_44], edx
0x63C8C7: movzx   eax, word ptr [ebx+1FCh]
0x63C8CE: test    al, 3
0x63C8D0: jz      loc_63CAAF
0x63C8D6: test    al, 0Ch
0x63C8D8: jz      loc_63CAAF
0x63C8DE: mov     eax, [esi]
0x63C8E0: mov     edx, [eax+1F8h]
0x63C8E6: mov     ecx, esi
0x63C8E8: call    edx
0x63C8EA: test    al, al
0x63C8EC: jnz     loc_63CAAF
0x63C8F2: mov     eax, [ebx]
0x63C8F4: mov     edx, [eax+2D0h]
0x63C8FA: mov     ecx, ebx
0x63C8FC: call    edx
0x63C8FE: cmp     eax, 0Bh
0x63C901: jl      short loc_63C90C
0x63C903: cmp     eax, 0Ch
0x63C906: jle     loc_63CAAF
0x63C90C: fldz
0x63C90E: fld     dword ptr [esp+6Ch+var_4C+4]
0x63C912: fucom   st(1)
0x63C914: fnstsw  ax
0x63C916: fstp    st(1)
0x63C918: test    ah, 44h
0x63C91B: jnp     loc_63CAAD
0x63C921: fld     dword ptr ds:0B33E9Ch
0x63C927: movzx   eax, word ptr [ebx+1FCh]
0x63C92E: test    al, 4
0x63C930: fmul    [esp+6Ch+a2]
0x63C934: fstp    [esp+6Ch+arg_0]
0x63C938: fdivr   [esp+6Ch+arg_0]
0x63C93C: fmul    qword ptr ds:0A4D918h
0x63C942: fstp    [esp+6Ch+arg_0]
0x63C946: fld     [esp+6Ch+arg_0]
0x63C94A: jz      short loc_63C98F
0x63C94C: fld     dword ptr [esp+6Ch+var_4C]
0x63C950: fstp    [esp+6Ch+var_58]
0x63C954: fsubr   qword ptr ds:0A6E740h
0x63C95A: fstp    [esp+6Ch+a2]
0x63C95E: fld     [esp+6Ch+a2]
0x63C962: call    __CIcos
0x63C967: fstp    [esp+6Ch+a2]
0x63C96B: fld     [esp+6Ch+a2]
0x63C96F: fmul    dword ptr [esp+6Ch+var_4C+4]
0x63C973: fstp    [esp+6Ch+a2]
0x63C977: fld     [esp+6Ch+a2]
0x63C97B: fabs
0x63C97D: fstp    [esp+6Ch+a2]
0x63C981: fld     [esp+6Ch+a2]
0x63C985: fsubr   [esp+6Ch+var_58]
0x63C989: fstp    dword ptr [esp+6Ch+var_4C]
0x63C98D: jmp     short loc_63C9D0
0x63C98F: test    al, 8
0x63C991: jz      short loc_63C9CE
0x63C993: fsubr   qword ptr ds:0A6E740h
0x63C999: fstp    [esp+6Ch+a2]
0x63C99D: fld     [esp+6Ch+a2]
0x63C9A1: call    __CIcos
0x63C9A6: fstp    [esp+6Ch+a2]
0x63C9AA: fld     [esp+6Ch+a2]
0x63C9AE: fmul    dword ptr [esp+6Ch+var_4C+4]
0x63C9B2: fstp    [esp+6Ch+a2]
0x63C9B6: fld     [esp+6Ch+a2]
0x63C9BA: fabs
0x63C9BC: fstp    [esp+6Ch+a2]
0x63C9C0: fld     [esp+6Ch+a2]
0x63C9C4: fadd    dword ptr [esp+6Ch+var_4C]
0x63C9C8: fstp    dword ptr [esp+6Ch+var_4C]
0x63C9CC: jmp     short loc_63C9D0
0x63C9CE: fstp    st
0x63C9D0: fld     [esp+6Ch+arg_0]
0x63C9D4: call    __CIcos
0x63C9D9: fstp    [esp+6Ch+arg_0]
0x63C9DD: fld     [esp+6Ch+arg_0]
0x63C9E1: fmul    dword ptr [esp+6Ch+var_4C+4]
0x63C9E5: fstp    dword ptr [esp+6Ch+var_4C+4]
0x63C9E9: jmp     loc_63CAAF
0x63C9EE: mov     eax, [esi]
0x63C9F0: mov     edx, [eax+198h]
0x63C9F6: mov     edi, [esi+3Ch]
0x63C9F9: push    0
0x63C9FB: mov     ecx, esi
0x63C9FD: call    edx
0x63C9FF: test    al, al
0x63CA01: setz    al
0x63CA04: lea     ecx, [esp+6Ch+var_4C]
0x63CA08: push    eax
0x63CA09: push    ecx
0x63CA0A: push    edi
0x63CA0B: call    sub_88F700
0x63CA10: mov     edx, [ebx]
0x63CA12: mov     edx, [edx+18Ch]
0x63CA18: add     esp, 0Ch
0x63CA1B: lea     eax, [esp+6Ch+arg_0]
0x63CA1F: push    eax
0x63CA20: mov     ecx, ebx
0x63CA22: call    edx
0x63CA24: mov     ebp, [eax]
0x63CA26: mov     eax, [esp+6Ch+arg_0]
0x63CA2A: test    eax, eax
0x63CA2C: jz      short loc_63CA4C
0x63CA2E: mov     edi, eax
0x63CA30: add     eax, 4
0x63CA33: push    eax; lpAddend
0x63CA34: call    dword ptr ds:0A2807Ch
0x63CA3A: test    eax, eax
0x63CA3C: jnz     short loc_63CA4C
0x63CA3E: test    edi, edi
0x63CA40: jz      short loc_63CA4C
0x63CA42: mov     eax, [edi]
0x63CA44: mov     edx, [eax]
0x63CA46: push    1
0x63CA48: mov     ecx, edi
0x63CA4A: call    edx
0x63CA4C: test    ebp, ebp
0x63CA4E: jz      short loc_63CA5A
0x63CA50: or      dword ptr [ebp+1F4h], 1000h
0x63CA5A: mov     ecx, [esi+24h]
0x63CA5D: mov     edx, [esi+28h]
0x63CA60: mov     eax, [esi+20h]
0x63CA63: mov     [esp+6Ch+a3], edx
0x63CA67: fld     [esp+6Ch+a3]
0x63CA6B: push    ecx
0x63CA6C: mov     [esp+70h+arg_8], ecx
0x63CA70: fstp    [esp+70h+var_70]; float
0x63CA73: lea     ecx, [esp+70h+var_24]
0x63CA77: mov     [esp+70h+a2], eax
0x63CA7B: call    NiMatrix33_InitRotationTransform
0x63CA80: lea     eax, [esp+6Ch+var_24]
0x63CA84: push    eax
0x63CA85: lea     ecx, [esp+70h+var_4C]
0x63CA89: push    ecx
0x63CA8A: lea     edx, [esp+74h+a2]
0x63CA8E: push    edx
0x63CA8F: call    sub_710250
0x63CA94: mov     ecx, [eax]
0x63CA96: mov     dword ptr [esp+78h+var_4C], ecx
0x63CA9A: mov     edx, [eax+4]
0x63CA9D: mov     dword ptr [esp+78h+var_4C+4], edx
0x63CAA1: mov     eax, [eax+8]
0x63CAA4: add     esp, 0Ch
0x63CAA7: mov     [esp+6Ch+var_44], eax
0x63CAAB: jmp     short loc_63CAAF
0x63CAAD: fstp    st
0x63CAAF: mov     ecx, [esi+8]
0x63CAB2: shr     ecx, 4
0x63CAB5: test    cl, 1
0x63CAB8: jz      short loc_63CB19
0x63CABA: fld     dword ptr [esi+2Ch]
0x63CABD: mov     ecx, ds:0B333A0h; this
0x63CAC3: fadd    dword ptr [esp+6Ch+var_4C]
0x63CAC7: fstp    [esp+6Ch+a2]
0x63CACB: fld     dword ptr [esi+30h]
0x63CACE: fadd    dword ptr [esp+6Ch+var_4C+4]
0x63CAD2: fstp    [esp+6Ch+arg_8]
0x63CAD6: fld     dword ptr [esi+34h]
0x63CAD9: fadd    [esp+6Ch+var_44]
0x63CADD: fstp    [esp+6Ch+a3]
0x63CAE1: cmp     dword ptr [ecx+34h], 0
0x63CAE5: jnz     short loc_63CAFE
0x63CAE7: cmp     esi, ds:0B333C4h
0x63CAED: jz      short loc_63CAFE
0x63CAEF: lea     edx, [esp+6Ch+a3]
0x63CAF3: push    edx; a3
0x63CAF4: lea     eax, [esp+70h+a2]
0x63CAF8: push    eax; a2
0x63CAF9: call    GetTerrainHeight
0x63CAFE: mov     edx, [esi]
0x63CB00: mov     edx, [edx+1CCh]
0x63CB06: lea     eax, [esp+6Ch+a2]
0x63CB0A: push    eax
0x63CB0B: mov     ecx, esi
0x63CB0D: call    edx
0x63CB0F: pop     edi
0x63CB10: pop     esi
0x63CB11: pop     ebp
0x63CB12: pop     ebx
0x63CB13: add     esp, 5Ch
0x63CB16: retn    10h
0x63CB19: mov     eax, [ebx]
0x63CB1B: mov     edx, [eax+2C0h]
0x63CB21: mov     edi, [esi]
0x63CB23: mov     ecx, ebx
0x63CB25: call    edx
0x63CB27: fld     [esp+6Ch+var_5C]
0x63CB2B: mov     edx, [edi+1B4h]
0x63CB31: movzx   eax, ax
0x63CB34: push    eax
0x63CB35: lea     ecx, [esp+70h+var_4C]
0x63CB39: push    ecx
0x63CB3A: push    ecx
0x63CB3B: mov     ecx, esi
0x63CB3D: fstp    [esp+78h+var_78]
0x63CB40: call    edx
0x63CB42: mov     ecx, esi; this
0x63CB44: call    TESObjectREFR_GetParentCell
0x63CB49: mov     edi, eax
0x63CB4B: test    edi, edi
0x63CB4D: jz      loc_63CDAD
0x63CB53: mov     ecx, edi; this
0x63CB55: call    TESObjectCELL_IsInterior
0x63CB5A: test    al, al
0x63CB5C: jnz     loc_63CBEB
0x63CB62: mov     eax, [esi]
0x63CB64: fldz
0x63CB66: mov     edx, [eax+174h]
0x63CB6C: fstp    [esp+6Ch+arg_0]
0x63CB70: mov     ecx, esi
0x63CB72: call    edx
0x63CB74: mov     ecx, [eax]
0x63CB76: mov     [esp+6Ch+a2], ecx
0x63CB7A: mov     edx, [eax+4]
0x63CB7D: mov     [esp+6Ch+arg_8], edx
0x63CB81: mov     eax, [eax+8]
0x63CB84: lea     ecx, [esp+6Ch+arg_0]
0x63CB88: push    ecx
0x63CB89: lea     edx, [esp+70h+a2]
0x63CB8D: push    edx
0x63CB8E: mov     ecx, edi; this
0x63CB90: mov     [esp+74h+a3], eax
0x63CB97: call    sub_4CE3C0
0x63CB9C: mov     ecx, eax
0x63CB9E: call    sub_4C5B50
0x63CBA3: test    al, al
0x63CBA5: jz      loc_63CDAD
0x63CBAB: fld     [esp+6Ch+arg_0]
0x63CBAF: fld     st
0x63CBB1: fsub    [esp+6Ch+a3]
0x63CBB5: fld     qword ptr ds:0A46970h
0x63CBBB: fcom    st(1)
0x63CBBD: fnstsw  ax
0x63CBBF: fstp    st(1)
0x63CBC1: test    ah, 5
0x63CBC4: jp      loc_63CDA9
0x63CBCA: faddp   st(1), st
0x63CBCC: fstp    [esp+6Ch+a3]
0x63CBD0: mov     eax, [esi]
0x63CBD2: mov     edx, [eax+1CCh]
0x63CBD8: lea     ecx, [esp+6Ch+a2]
0x63CBDC: push    ecx
0x63CBDD: mov     ecx, esi
0x63CBDF: call    edx
0x63CBE1: pop     edi
0x63CBE2: pop     esi
0x63CBE3: pop     ebp
0x63CBE4: pop     ebx
0x63CBE5: add     esp, 5Ch
0x63CBE8: retn    10h
0x63CBEB: push    2
0x63CBED: push    0
0x63CBEF: mov     ecx, edi
0x63CBF1: call    sub_441800
0x63CBF6: mov     ebp, eax
0x63CBF8: test    ebp, ebp
0x63CBFA: jz      loc_63CDAD
0x63CC00: mov     eax, [esi]
0x63CC02: mov     edx, [eax+190h]
0x63CC08: mov     ecx, esi
0x63CC0A: call    edx
0x63CC0C: test    al, al
0x63CC0E: jz      loc_63CDAD
0x63CC14: mov     eax, [esi]
0x63CC16: mov     edx, [eax+174h]
0x63CC1C: mov     ecx, esi
0x63CC1E: call    edx
0x63CC20: mov     ebx, eax
0x63CC22: mov     eax, [ebx]
0x63CC24: mov     ecx, [ebx+4]
0x63CC27: mov     edx, [ebx+8]
0x63CC2A: mov     dword ptr [esp+6Ch+var_58], eax
0x63CC2E: mov     eax, [ebp+20h]
0x63CC31: mov     [esp+6Ch+var_34], eax
0x63CC35: fld     [esp+6Ch+var_34]
0x63CC39: fsub    dword ptr [esp+6Ch+var_58]
0x63CC3D: mov     eax, [ebp+2Ch]
0x63CC40: mov     dword ptr [esp+6Ch+var_58+4], ecx
0x63CC44: mov     ecx, [ebp+24h]
0x63CC47: fstp    [esp+6Ch+a2]
0x63CC4B: mov     [esp+6Ch+var_30], ecx
0x63CC4F: fld     [esp+6Ch+var_30]
0x63CC53: mov     [esp+6Ch+var_50], edx
0x63CC57: fsub    dword ptr [esp+6Ch+var_58+4]
0x63CC5B: mov     edx, [ebp+28h]
0x63CC5E: mov     [esp+6Ch+var_2C], edx
0x63CC62: lea     ecx, [esp+6Ch+a2]
0x63CC66: fstp    [esp+6Ch+arg_8]
0x63CC6A: mov     [esp+6Ch+var_28], eax
0x63CC6E: fld     [esp+6Ch+var_2C]
0x63CC72: fsub    [esp+6Ch+var_50]
0x63CC76: fstp    [esp+6Ch+a3]
0x63CC7A: call    sub_404C90
0x63CC7F: fld     [esp+6Ch+var_28]
0x63CC83: fcompp
0x63CC85: fnstsw  ax
0x63CC87: test    ah, 5
0x63CC8A: jp      loc_63CDAD
0x63CC90: mov     ecx, [ebx]
0x63CC92: mov     edx, [ebx+4]
0x63CC95: push    0; int
0x63CC97: push    0; float
0x63CC99: push    0; float
0x63CC9B: push    edi; int
0x63CC9C: sub     esp, 0Ch
0x63CC9F: mov     eax, esp
0x63CCA1: mov     [eax], ecx
0x63CCA3: mov     ecx, [ebx+8]
0x63CCA6: mov     [eax+4], edx
0x63CCA9: lea     edx, [esp+88h+a2]
0x63CCB0: mov     [eax+8], ecx
0x63CCB3: push    edx; int
0x63CCB4: mov     ecx, esi
0x63CCB6: call    sub_5E2E20
0x63CCBB: lea     eax, [esp+6Ch+var_58]
0x63CCBF: push    eax
0x63CCC0: lea     ecx, [esp+70h+a2]
0x63CCC4: call    sub_8AA350
0x63CCC9: test    al, al
0x63CCCB: jz      loc_63CBD0
0x63CCD1: mov     ecx, esi
0x63CCD3: call    sub_5E0260
0x63CCD8: test    al, al
0x63CCDA: jz      short loc_63CD2F
0x63CCDC: mov     ecx, esi
0x63CCDE: call    sub_5E1F60
0x63CCE3: cmp     eax, edi
0x63CCE5: jnz     short loc_63CD2F
0x63CCE7: lea     ecx, [esp+6Ch+var_40]
0x63CCEB: push    ecx
0x63CCEC: mov     ecx, esi
0x63CCEE: call    sub_628E40
0x63CCF3: mov     edx, [eax]
0x63CCF5: push    0; int
0x63CCF7: push    0; float
0x63CCF9: push    0; float
0x63CCFB: push    edi; int
0x63CCFC: sub     esp, 0Ch
0x63CCFF: mov     ecx, esp
0x63CD01: mov     [ecx], edx
0x63CD03: mov     edx, [eax+4]
0x63CD06: mov     eax, [eax+8]
0x63CD09: mov     [ecx+4], edx
0x63CD0C: mov     [ecx+8], eax
0x63CD0F: lea     ecx, [esp+88h+var_34]
0x63CD13: push    ecx; int
0x63CD14: mov     ecx, esi
0x63CD16: call    sub_5E2E20
0x63CD1B: mov     edx, [eax]
0x63CD1D: mov     [esp+6Ch+a2], edx
0x63CD21: mov     ecx, [eax+4]
0x63CD24: mov     [esp+6Ch+arg_8], ecx
0x63CD28: mov     edx, [eax+8]
0x63CD2B: mov     [esp+6Ch+a3], edx
0x63CD2F: lea     eax, [esp+6Ch+var_58]
0x63CD33: push    eax
0x63CD34: lea     ecx, [esp+70h+a2]
0x63CD38: call    sub_8AA350
0x63CD3D: test    al, al
0x63CD3F: jz      loc_63CBD0
0x63CD45: mov     ecx, ds:0B333C4h; this
0x63CD4B: call    TESObjectREFR_GetParentCell
0x63CD50: cmp     eax, edi
0x63CD52: jnz     loc_63CBD0
0x63CD58: mov     ecx, ds:0B333C4h
0x63CD5E: mov     edx, [ecx]
0x63CD60: mov     eax, [edx+174h]
0x63CD66: call    eax
0x63CD68: mov     edx, [eax]
0x63CD6A: push    0; int
0x63CD6C: push    0; float
0x63CD6E: push    0; float
0x63CD70: push    edi; int
0x63CD71: sub     esp, 0Ch
0x63CD74: mov     ecx, esp
0x63CD76: mov     [ecx], edx
0x63CD78: mov     edx, [eax+4]
0x63CD7B: mov     eax, [eax+8]
0x63CD7E: mov     [ecx+4], edx
0x63CD81: mov     [ecx+8], eax
0x63CD84: lea     ecx, [esp+88h+var_34]
0x63CD88: push    ecx; int
0x63CD89: mov     ecx, esi
0x63CD8B: call    sub_5E2E20
0x63CD90: mov     edx, [eax]
0x63CD92: mov     [esp+6Ch+a2], edx
0x63CD96: mov     ecx, [eax+4]
0x63CD99: mov     [esp+6Ch+arg_8], ecx
0x63CD9D: mov     edx, [eax+8]
0x63CDA0: mov     [esp+6Ch+a3], edx
0x63CDA4: jmp     loc_63CBD0
0x63CDA9: fstp    st(1)
0x63CDAB: fstp    st
0x63CDAD: pop     edi
0x63CDAE: pop     esi
0x63CDAF: pop     ebp
0x63CDB0: pop     ebx
0x63CDB1: add     esp, 5Ch
0x63CDB4: retn    10h

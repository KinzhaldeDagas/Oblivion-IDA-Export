0x575870: sub     esp, 30h
0x575873: push    ebp
0x575874: mov     ebp, [esp+34h+arg_C]
0x575878: movzx   eax, word ptr [ebp+4]
0x57587C: cmp     ax, 0FFFFh
0x575880: push    edi
0x575881: mov     edi, ecx
0x575883: jnz     short loc_57589D
0x575885: mov     eax, [ebp+0]
0x575888: lea     edx, [eax+1]
0x57588B: jmp     short loc_575890
0x57588D: align 10h
0x575890: mov     cl, [eax]
0x575892: add     eax, 1
0x575895: test    cl, cl
0x575897: jnz     short loc_575890
0x575899: sub     eax, edx
0x57589B: jmp     short loc_5758A0
0x57589D: movzx   eax, ax
0x5758A0: test    eax, eax
0x5758A2: jz      loc_575B25
0x5758A8: cmp     dword ptr [edi+38h], 0
0x5758AC: jz      loc_575B25
0x5758B2: mov     ecx, [esp+38h+arg_14]
0x5758B6: mov     eax, [esp+38h+arg_10]
0x5758BA: fild    dword ptr [eax]
0x5758BC: push    ebx
0x5758BD: mov     ebx, [ebp+0]
0x5758C0: push    0
0x5758C2: push    ecx
0x5758C3: fstp    dword ptr [esp+44h+var_30]
0x5758C7: lea     edx, [esp+44h+var_28]
0x5758CB: push    edx
0x5758CC: lea     eax, [esp+48h+var_30]
0x5758D0: push    eax
0x5758D1: push    ebx
0x5758D2: mov     ecx, edi
0x5758D4: call    sub_573C10
0x5758D9: fld     dword ptr [esp+3Ch+var_30]
0x5758DD: cmp     byte ptr [esp+3Ch+arg_1C], 0
0x5758E2: fadd    [esp+3Ch+arg_0]
0x5758E6: fstp    [esp+3Ch+var_1C]
0x5758EA: fld     [esp+3Ch+arg_4]
0x5758EE: fst     [esp+3Ch+var_14]
0x5758F2: fld     [esp+3Ch+arg_8]
0x5758F6: fstp    [esp+3Ch+var_18]
0x5758FA: jz      short loc_575911
0x5758FC: mov     eax, [edi+38h]
0x5758FF: fld     dword ptr [eax+850h]
0x575905: fsub    dword ptr [eax]
0x575907: fadd    st, st
0x575909: fsubp   st(1), st
0x57590B: fstp    [esp+3Ch+var_14]
0x57590F: jmp     short loc_575913
0x575911: fstp    st
0x575913: push    esi
0x575914: mov     ecx, ebp
0x575916: xor     esi, esi
0x575918: call    BSStringT_GetLen
0x57591D: test    eax, eax
0x57591F: jbe     short loc_57593A
0x575921: mov     ecx, ebx
0x575923: neg     ecx
0x575925: sbb     ecx, ecx
0x575927: and     ecx, esi
0x575929: cmp     byte ptr [ecx+ebx], 0
0x57592D: jz      short loc_575936
0x57592F: add     esi, 1
0x575932: cmp     esi, eax
0x575934: jb      short loc_575921
0x575936: test    esi, esi
0x575938: jnz     short loc_575946
0x57593A: pop     esi
0x57593B: pop     ebx
0x57593C: pop     edi
0x57593D: xor     eax, eax
0x57593F: pop     ebp
0x575940: add     esp, 30h
0x575943: retn    20h ; ' '
0x575946: mov     edx, [esp+40h+arg_18]
0x57594A: push    edx
0x57594B: push    esi
0x57594C: mov     ecx, edi
0x57594E: call    sub_574200
0x575953: fld     [esp+40h+arg_0]
0x575957: fstp    dword ptr [esp+40h+var_28]
0x57595B: mov     ebp, eax
0x57595D: fld     [esp+40h+arg_8]
0x575961: mov     eax, dword ptr [esp+40h+var_28]
0x575965: fstp    dword ptr [esp+40h+var_28+4]
0x575969: mov     ecx, dword ptr [esp+40h+var_28+4]
0x57596D: fld     [esp+40h+var_14]
0x575971: mov     [ebp+54h], eax
0x575974: mov     eax, [esp+40h+arg_10]
0x575978: fstp    [esp+40h+var_20]
0x57597C: fldz
0x57597E: mov     edx, [esp+40h+var_20]
0x575982: mov     [ebp+58h], ecx
0x575985: fst     [esp+40h+var_10]
0x575989: mov     [ebp+5Ch], edx
0x57598C: fstp    [esp+40h+var_C]
0x575990: fld1
0x575992: mov     edx, [esp+40h+arg_C]
0x575996: xor     ecx, ecx
0x575998: fst     [esp+40h+var_8]
0x57599C: mov     [eax], ecx
0x57599E: fstp    [esp+40h+var_4]
0x5759A2: mov     eax, [edx]
0x5759A4: xor     esi, esi
0x5759A6: cmp     [eax], cl
0x5759A8: mov     [esp+40h+arg_0], ecx
0x5759AC: mov     [esp+40h+arg_1C], ecx
0x5759B0: jz      loc_575B02
0x5759B6: fld     [esp+40h+var_1C]
0x5759BA: fld     st
0x5759BC: fst     [esp+40h+var_28]
0x5759C0: fstp    [esp+40h+var_30]
0x5759C4: jmp     short loc_5759C8
0x5759C6: xor     ecx, ecx
0x5759C8: mov     edx, eax
0x5759CA: neg     edx
0x5759CC: sbb     edx, edx
0x5759CE: and     edx, esi
0x5759D0: mov     bl, [edx+eax]
0x5759D3: cmp     bl, 3
0x5759D6: jnz     short loc_5759DC
0x5759D8: mov     [esp+40h+arg_0], ecx
0x5759DC: movsx   ecx, bl
0x5759DF: sub     ecx, 9
0x5759E2: jz      short loc_575A27
0x5759E4: sub     ecx, 1
0x5759E7: fstp    st
0x5759E9: jnz     short loc_575A48
0x5759EB: mov     ecx, [esp+40h+arg_10]
0x5759EF: fild    dword ptr [ecx]
0x5759F1: mov     ecx, [esp+40h+arg_14]
0x5759F5: lea     edx, [esi+1]
0x5759F8: push    edx
0x5759F9: push    ecx
0x5759FA: fstp    [esp+48h+arg_8]
0x5759FE: lea     edx, [esp+48h+arg_4]
0x575A02: push    edx
0x575A03: lea     ecx, [esp+4Ch+arg_8]
0x575A07: push    ecx
0x575A08: push    eax
0x575A09: mov     ecx, edi
0x575A0B: call    sub_573C10
0x575A10: fld     [esp+40h+arg_8]
0x575A14: mov     edx, [edi+38h]
0x575A17: fstp    [esp+40h+var_1C]
0x575A1B: fld     [esp+40h+var_14]
0x575A1F: fsub    dword ptr [edx]
0x575A21: fstp    [esp+40h+var_14]
0x575A25: jmp     short loc_575A48
0x575A27: fld     qword ptr ds:0A68950h
0x575A2D: call    unknown_libname_14
0x575A32: fstp    [esp+40h+arg_8]
0x575A36: fld     [esp+40h+arg_8]
0x575A3A: fsubr   qword ptr ds:0A68950h
0x575A40: fadd    [esp+40h+var_28]
0x575A44: fstp    [esp+40h+var_1C]
0x575A48: mov     al, bl
0x575A4A: movzx   ecx, al
0x575A4D: add     ecx, 0FFFFFF6Fh; switch 4 cases
0x575A53: cmp     ecx, 3
0x575A56: ja      short def_575A58
0x575A58: jmp     ds:jpt_575A58[ecx*4]; switch jump
0x575A5F: mov     al, 27h ; '''; jumptable 00575A58 cases 145,146
0x575A61: jmp     short def_575A58
0x575A63: mov     al, 22h ; '"'; jumptable 00575A58 cases 147,148

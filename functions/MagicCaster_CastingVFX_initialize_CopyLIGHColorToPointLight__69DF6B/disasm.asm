0x69DF6B: lea     esi, [edi+8]
0x69DF6E: push    eax; a2
0x69DF6F: mov     ecx, esi; this
0x69DF71: mov     [esp+4+arg_1C], 0FFFFFFFFh
0x69DF79: call    NiSmartPointer_Set??
0x69DF7E: fld1
0x69DF80: mov     ecx, [edi+4]
0x69DF83: fstp    dword ptr [edi+0Ch]
0x69DF86: mov     eax, [ecx+78h]
0x69DF89: movzx   edx, al
0x69DF8C: mov     [esp+arg_24], edx
0x69DF90: movzx   ecx, ah
0x69DF93: fild    [esp+arg_24]
0x69DF97: mov     [esp+arg_24], ecx
0x69DF9B: fstp    [esp+arg_8]
0x69DF9F: shr     eax, 10h
0x69DFA2: fild    [esp+arg_24]
0x69DFA6: movzx   edx, al
0x69DFA9: fstp    [esp+arg_C]
0x69DFAD: mov     [esp+arg_24], edx
0x69DFB1: mov     eax, [esi]
0x69DFB3: fild    [esp+arg_24]
0x69DFB7: add     dword ptr [eax+0B8h], 1
0x69DFBE: push    0
0x69DFC0: fstp    [esp+4+arg_10]
0x69DFC4: fld     [esp+4+arg_8]
0x69DFC8: fld     qword ptr ds:0A3DDD8h
0x69DFCE: fdiv    st(1), st
0x69DFD0: fxch    st(1)
0x69DFD2: fstp    [esp+4+arg_8]
0x69DFD6: fld     [esp+4+arg_C]
0x69DFDA: fdiv    st, st(1)
0x69DFDC: mov     ecx, [esp+4+arg_8]
0x69DFE0: mov     [eax+0ECh], ecx
0x69DFE6: fstp    [esp+4+arg_C]
0x69DFEA: mov     edx, [esp+4+arg_C]
0x69DFEE: mov     [eax+0F0h], edx
0x69DFF4: fdivr   [esp+4+arg_10]
0x69DFF8: fstp    [esp+4+arg_10]
0x69DFFC: fld     dword ptr ds:0A34A80h
0x69E002: mov     ecx, [esp+4+arg_10]
0x69E006: fstp    [esp+4+arg_8]
0x69E00A: fldz
0x69E00C: mov     [eax+0F4h], ecx
0x69E012: mov     eax, [esi]
0x69E014: mov     edx, [esp+4+arg_8]
0x69E018: fst     [esp+4+arg_C]
0x69E01C: add     dword ptr [eax+0B8h], 1
0x69E023: fstp    [esp+4+arg_10]
0x69E027: mov     ecx, [esp+4+arg_C]
0x69E02B: mov     [eax+0F8h], edx
0x69E031: mov     edx, [esp+4+arg_10]
0x69E035: mov     [eax+0FCh], ecx
0x69E03B: mov     [eax+100h], edx
0x69E041: mov     ecx, [edi+4]
0x69E044: mov     eax, [esi]
0x69E046: fld     dword ptr [ecx+88h]
0x69E04C: add     dword ptr [eax+0B8h], 1
0x69E053: fstp    dword ptr [eax+0DCh]
0x69E059: call    GetShadowSceneNode
0x69E05E: add     esp, 4
0x69E061: test    eax, eax
0x69E063: jz      short loc_69E071
0x69E065: mov     edx, [esi]
0x69E067: push    1
0x69E069: push    edx
0x69E06A: mov     ecx, eax
0x69E06C: call    sub_7C6AE0
0x69E071: mov     eax, [esp+a2]
0x69E075: push    eax; a2
0x69E076: mov     ecx, edi; this
0x69E078: call    NiSmartPointer_Set??
0x69E07D: mov     ecx, [edi]
0x69E07F: mov     edx, [ecx]
0x69E081: mov     eax, [esi]
0x69E083: mov     edx, [edx+84h]
0x69E089: push    1
0x69E08B: push    eax
0x69E08C: call    edx
0x69E08E: mov     ecx, [esp+8+arg_C]
0x69E092: mov     large fs:0, ecx
0x69E099: pop     ecx
0x69E09A: pop     edi
0x69E09B: pop     esi
0x69E09C: add     esp, 18h
0x69E09F: retn    8

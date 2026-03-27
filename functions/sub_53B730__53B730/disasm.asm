0x53B730: sub     esp, 38h
0x53B733: fld     [esp+38h+arg_4]
0x53B737: push    ebx
0x53B738: push    ebp
0x53B739: push    esi
0x53B73A: mov     esi, [esp+44h+arg_0]
0x53B73E: push    edi
0x53B73F: push    ecx
0x53B740: fstp    [esp+4Ch+var_4C]
0x53B743: push    esi
0x53B744: mov     ebp, ecx
0x53B746: call    nullsub_returnVoid_2arg
0x53B74B: mov     edi, [esi+10h]
0x53B74E: test    edi, edi
0x53B750: mov     ebx, [esi+14h]
0x53B753: mov     [esp+48h+var_30], edi
0x53B757: mov     [esp+48h+var_2C], ebx
0x53B75B: jz      loc_53BBB4
0x53B761: xor     edx, edx
0x53B763: cmp     dword ptr [ebp+edx*4+8], 0
0x53B768: jz      loc_53BBB4
0x53B76E: lea     eax, [edx+1]
0x53B771: xor     edx, edx
0x53B773: mov     ecx, 3
0x53B778: div     ecx
0x53B77A: cmp     edx, 2
0x53B77D: jl      short loc_53B763
0x53B77F: mov     eax, [esi+0DCh]
0x53B785: cmp     eax, ecx
0x53B787: jz      short loc_53B792
0x53B789: cmp     eax, 2
0x53B78C: jnz     loc_53B9B1
0x53B792: mov     ecx, [esi+0B0h]
0x53B798: mov     edx, [esi+0A8h]
0x53B79E: mov     eax, [esi+0ACh]
0x53B7A4: mov     [esp+48h+var_10], ecx
0x53B7A8: mov     ecx, [esi+5Ch]
0x53B7AB: mov     [esp+48h+var_18], edx
0x53B7AF: mov     edx, [esi+54h]
0x53B7B2: mov     [esp+48h+var_14], eax
0x53B7B6: mov     eax, [esi+58h]
0x53B7B9: mov     [esp+48h+var_4], ecx
0x53B7BD: mov     ecx, [ebp+8]
0x53B7C0: push    4
0x53B7C2: mov     [esp+4Ch+var_C], edx
0x53B7C6: mov     [esp+4Ch+var_8], eax
0x53B7CA: call    NiNode_GetNiPropertyByID
0x53B7CF: test    eax, eax
0x53B7D1: jz      short loc_53B83C
0x53B7D3: mov     ecx, [ebp+8]
0x53B7D6: push    4
0x53B7D8: call    NiNode_GetNiPropertyByID
0x53B7DD: mov     edx, [eax]
0x53B7DF: mov     ecx, eax
0x53B7E1: mov     eax, [edx+54h]
0x53B7E4: call    eax
0x53B7E6: xor     ecx, ecx
0x53B7E8: cmp     eax, 0Bh
0x53B7EB: setz    cl
0x53B7EE: mov     eax, ecx
0x53B7F0: test    eax, eax
0x53B7F2: jz      short loc_53B83C
0x53B7F4: mov     ecx, [ebp+8]
0x53B7F7: push    4
0x53B7F9: call    NiNode_GetNiPropertyByID
0x53B7FE: test    eax, eax
0x53B800: jz      short loc_53B83C
0x53B802: fld     [esp+48h+var_18]
0x53B806: fstp    [esp+48h+var_28]
0x53B80A: mov     edx, [esp+48h+var_28]
0x53B80E: fld     [esp+48h+var_14]
0x53B812: mov     [eax+6Ch], edx
0x53B815: fstp    [esp+48h+var_24]
0x53B819: mov     ecx, [esp+48h+var_24]
0x53B81D: fld     [esp+48h+var_10]
0x53B821: mov     [eax+70h], ecx
0x53B824: fstp    [esp+48h+var_20]
0x53B828: mov     edx, [esp+48h+var_20]
0x53B82C: fld1
0x53B82E: mov     [eax+74h], edx
0x53B831: fstp    [esp+48h+var_1C]
0x53B835: mov     ecx, [esp+48h+var_1C]
0x53B839: mov     [eax+78h], ecx
0x53B83C: mov     ecx, [ebp+0Ch]
0x53B83F: push    4
0x53B841: call    NiNode_GetNiPropertyByID
0x53B846: test    eax, eax
0x53B848: jz      short loc_53B8B3
0x53B84A: mov     ecx, [ebp+0Ch]
0x53B84D: push    4
0x53B84F: call    NiNode_GetNiPropertyByID
0x53B854: mov     edx, [eax]
0x53B856: mov     ecx, eax
0x53B858: mov     eax, [edx+54h]
0x53B85B: call    eax
0x53B85D: xor     ecx, ecx
0x53B85F: cmp     eax, 0Bh
0x53B862: setz    cl
0x53B865: mov     eax, ecx
0x53B867: test    eax, eax
0x53B869: jz      short loc_53B8B3
0x53B86B: mov     ecx, [ebp+0Ch]
0x53B86E: push    4
0x53B870: call    NiNode_GetNiPropertyByID
0x53B875: test    eax, eax
0x53B877: jz      short loc_53B8B3
0x53B879: fld     [esp+48h+var_C]
0x53B87D: fstp    [esp+48h+var_28]
0x53B881: mov     edx, [esp+48h+var_28]
0x53B885: fld     [esp+48h+var_8]
0x53B889: mov     [eax+6Ch], edx
0x53B88C: fstp    [esp+48h+var_24]
0x53B890: mov     ecx, [esp+48h+var_24]
0x53B894: fld     [esp+48h+var_4]
0x53B898: mov     [eax+70h], ecx
0x53B89B: fstp    [esp+48h+var_20]
0x53B89F: mov     edx, [esp+48h+var_20]
0x53B8A3: fld1
0x53B8A5: mov     [eax+74h], edx
0x53B8A8: fstp    [esp+48h+var_1C]
0x53B8AC: mov     ecx, [esp+48h+var_1C]
0x53B8B0: mov     [eax+78h], ecx
0x53B8B3: fld     dword ptr ds:0B365B4h
0x53B8B9: xor     edx, edx
0x53B8BB: fldz
0x53B8BD: fsub    st(1), st
0x53B8BF: fld     qword ptr ds:0A3F398h
0x53B8C5: fld1
0x53B8C7: fld     [esp+48h+arg_4]
0x53B8CB: mov     eax, edx
0x53B8CD: sub     eax, 0
0x53B8D0: jz      short loc_53B8E5
0x53B8D2: sub     eax, 1
0x53B8D5: jz      short loc_53B8DE
0x53B8D7: mov     eax, 0Fh
0x53B8DC: jmp     short loc_53B8EA
0x53B8DE: mov     eax, 1
0x53B8E3: jmp     short loc_53B8EA
0x53B8E5: mov     eax, 2
0x53B8EA: test    ebx, ebx
0x53B8EC: movzx   eax, byte ptr [edi+eax+48h]
0x53B8F1: mov     [esp+48h+arg_4], eax
0x53B8F5: fild    [esp+48h+arg_4]
0x53B8F9: fmul    st, st(3)
0x53B8FB: fmul    st, st(5)
0x53B8FD: fadd    st, st(4)
0x53B8FF: fstp    [esp+48h+arg_4]
0x53B903: jz      short loc_53B967
0x53B905: fld     dword ptr [esi+0D8h]
0x53B90B: mov     eax, edx
0x53B90D: sub     eax, 0
0x53B910: fmul    [esp+48h+arg_4]
0x53B914: fstp    [esp+48h+arg_4]
0x53B918: fld     dword ptr [esi+0D8h]
0x53B91E: fstp    [esp+48h+var_34]
0x53B922: jz      short loc_53B937
0x53B924: sub     eax, 1
0x53B927: jz      short loc_53B930
0x53B929: mov     eax, 0Fh
0x53B92E: jmp     short loc_53B93C
0x53B930: mov     eax, 1
0x53B935: jmp     short loc_53B93C
0x53B937: mov     eax, 2
0x53B93C: movzx   ecx, byte ptr [eax+ebx+48h]
0x53B941: mov     [esp+48h+var_38], ecx
0x53B945: fild    [esp+48h+var_38]
0x53B949: fmul    st, st(3)
0x53B94B: fmul    st, st(5)
0x53B94D: fadd    st, st(4)
0x53B94F: fstp    [esp+48h+var_38]
0x53B953: fld     [esp+48h+var_38]
0x53B957: fld     [esp+48h+var_34]
0x53B95B: fsubr   st, st(3)
0x53B95D: fmulp   st(1), st
0x53B95F: fadd    [esp+48h+arg_4]
0x53B963: fstp    [esp+48h+arg_4]
0x53B967: cmp     dx, 2
0x53B96B: jnb     short loc_53B992
0x53B96D: fld     dword ptr [esi+0C0h]
0x53B973: movzx   eax, dx
0x53B976: fmul    st, st(1)
0x53B978: fmul    [esp+48h+arg_4]
0x53B97C: fstp    [esp+48h+arg_4]
0x53B980: fld     [esp+48h+arg_4]
0x53B984: fadd    dword ptr ds:0B4315Ch[eax*4]
0x53B98B: fstp    dword ptr ds:0B4315Ch[eax*4]
0x53B992: lea     eax, [edx+1]
0x53B995: xor     edx, edx
0x53B997: mov     ecx, 3
0x53B99C: div     ecx
0x53B99E: cmp     edx, 2
0x53B9A1: jl      loc_53B8CB
0x53B9A7: fstp    st(3)
0x53B9A9: fstp    st(3)
0x53B9AB: fstp    st
0x53B9AD: fstp    st(1)
0x53B9AF: fstp    st
0x53B9B1: test    byte ptr [esi+0FCh], 3
0x53B9B8: jbe     loc_53BA6C
0x53B9BE: test    ebx, ebx
0x53B9C0: jz      short loc_53BA28
0x53B9C2: xor     edi, edi
0x53B9C4: cmp     edi, 1
0x53B9C7: mov     eax, offset sub_542E00
0x53B9CC: jz      short loc_53B9D3
0x53B9CE: mov     eax, offset sub_542E20
0x53B9D3: mov     edx, [esp+48h+var_30]
0x53B9D7: lea     esi, [edi+edi*2+6]
0x53B9DB: push    0
0x53B9DD: add     esi, esi
0x53B9DF: push    eax
0x53B9E0: add     esi, esi
0x53B9E2: lea     eax, [esi+edx]
0x53B9E5: push    eax
0x53B9E6: push    0
0x53B9E8: call    sub_542D30
0x53B9ED: mov     ecx, ds:0B33B00h
0x53B9F3: add     esp, 10h
0x53B9F6: call    sub_45A500
0x53B9FB: test    al, al
0x53B9FD: jz      short loc_53BA13
0x53B9FF: mov     ecx, [ebp+edi*4+8]
0x53BA03: push    0
0x53BA05: push    0
0x53BA07: add     esi, ebx
0x53BA09: push    esi
0x53BA0A: push    ecx
0x53BA0B: call    sub_542D30
0x53BA10: add     esp, 10h
0x53BA13: lea     eax, [edi+1]
0x53BA16: xor     edx, edx
0x53BA18: mov     ecx, 3
0x53BA1D: div     ecx
0x53BA1F: mov     edi, edx
0x53BA21: cmp     edi, 2
0x53BA24: jl      short loc_53B9C4
0x53BA26: jmp     short loc_53BA6C
0x53BA28: mov     eax, [esi+0DCh]
0x53BA2E: cmp     eax, 3
0x53BA31: jz      short loc_53BA38
0x53BA33: cmp     eax, 2
0x53BA36: jnz     short loc_53BA6C
0x53BA38: xor     esi, esi
0x53BA3A: lea     ebx, [ebx+0]
0x53BA40: mov     ecx, [ebp+esi*4+8]
0x53BA44: push    0
0x53BA46: lea     edx, [esi+esi*2+6]
0x53BA4A: push    0
0x53BA4C: lea     eax, [edi+edx*4]
0x53BA4F: push    eax
0x53BA50: push    ecx
0x53BA51: call    sub_542D30
0x53BA56: lea     eax, [esi+1]
0x53BA59: xor     edx, edx
0x53BA5B: mov     ecx, 3
0x53BA60: div     ecx
0x53BA62: add     esp, 10h
0x53BA65: mov     esi, edx
0x53BA67: cmp     esi, 2
0x53BA6A: jl      short loc_53BA40
0x53BA6C: xor     esi, esi
0x53BA6E: mov     edi, edi
0x53BA70: cmp     dword ptr [ebp+esi*4+10h], 0
0x53BA75: jz      loc_53BB7F
0x53BA7B: mov     ecx, [ebp+esi*4+8]
0x53BA7F: push    4
0x53BA81: call    NiNode_GetNiPropertyByID
0x53BA86: mov     edi, eax
0x53BA88: test    edi, edi
0x53BA8A: jnz     short loc_53BA90
0x53BA8C: xor     ebx, ebx
0x53BA8E: jmp     short loc_53BAEA
0x53BA90: mov     edx, [edi]
0x53BA92: mov     eax, [edx+4]
0x53BA95: mov     ecx, edi
0x53BA97: call    eax
0x53BA99: test    eax, eax
0x53BA9B: jz      short loc_53BAAE
0x53BA9D: lea     ecx, [ecx+0]
0x53BAA0: cmp     eax, offset dword_B4335C
0x53BAA5: jz      short loc_53BACC
0x53BAA7: mov     eax, [eax+4]
0x53BAAA: test    eax, eax
0x53BAAC: jnz     short loc_53BAA0
0x53BAAE: xor     al, al
0x53BAB0: neg     al
0x53BAB2: sbb     eax, eax
0x53BAB4: and     eax, edi
0x53BAB6: mov     ebx, eax
0x53BAB8: jz      short loc_53BAEA
0x53BABA: mov     ecx, [ebp+esi*4+10h]
0x53BABE: mov     edx, [ecx+20h]
0x53BAC1: mov     eax, [edx]
0x53BAC3: test    eax, eax
0x53BAC5: jz      short loc_53BAD0
0x53BAC7: mov     eax, [eax+8]
0x53BACA: jmp     short loc_53BAD2
0x53BACC: mov     al, 1
0x53BACE: jmp     short loc_53BAB0
0x53BAD0: xor     eax, eax
0x53BAD2: push    eax; a2
0x53BAD3: mov     ecx, ebx; this
0x53BAD5: call    sub_802890
0x53BADA: mov     eax, [esp+48h+arg_0]
0x53BADE: fld     dword ptr [eax+0D8h]
0x53BAE4: fstp    dword ptr [ebx+80h]
0x53BAEA: cmp     [esp+48h+var_2C], 0
0x53BAEF: jnz     loc_53BB7F
0x53BAF5: push    6
0x53BAF7: lea     ecx, [esp+4Ch+arg_4]
0x53BAFB: push    ecx
0x53BAFC: mov     ecx, [ebp+esi*4+8]
0x53BB00: call    sub_708560
0x53BB05: mov     eax, [esp+48h+arg_4]
0x53BB09: test    eax, eax
0x53BB0B: jz      short loc_53BB2B
0x53BB0D: mov     edi, eax
0x53BB0F: add     eax, 4
0x53BB12: push    eax; lpAddend
0x53BB13: call    dword ptr ds:0A2807Ch
0x53BB19: test    eax, eax
0x53BB1B: jnz     short loc_53BB2B
0x53BB1D: test    edi, edi
0x53BB1F: jz      short loc_53BB2B
0x53BB21: mov     edx, [edi]
0x53BB23: mov     eax, [edx]
0x53BB25: push    1
0x53BB27: mov     ecx, edi
0x53BB29: call    eax
0x53BB2B: mov     ecx, [ebp+esi*4+10h]
0x53BB2F: push    ecx; a2
0x53BB30: mov     ecx, [ebp+esi*4+8]; this
0x53BB34: call    sub_405680
0x53BB39: mov     edi, [ebp+esi*4+10h]
0x53BB3D: test    edi, edi
0x53BB3F: jz      short loc_53BB65
0x53BB41: lea     edx, [edi+4]
0x53BB44: push    edx; lpAddend
0x53BB45: call    dword ptr ds:0A2807Ch
0x53BB4B: test    eax, eax
0x53BB4D: jnz     short loc_53BB5D
0x53BB4F: test    edi, edi
0x53BB51: jz      short loc_53BB5D
0x53BB53: mov     eax, [edi]
0x53BB55: mov     edx, [eax]
0x53BB57: push    1
0x53BB59: mov     ecx, edi
0x53BB5B: call    edx
0x53BB5D: mov     dword ptr [ebp+esi*4+10h], 0
0x53BB65: push    0; a2
0x53BB67: mov     ecx, ebx; this
0x53BB69: call    sub_802890
0x53BB6E: fldz
0x53BB70: fstp    dword ptr [ebx+80h]
0x53BB76: mov     ecx, [ebp+esi*4+8]; this
0x53BB7A: call    NiAVObject_InitializePropertyState
0x53BB7F: mov     edi, [ebp+esi*4+8]
0x53BB83: push    6
0x53BB85: mov     ecx, edi
0x53BB87: call    NiNode_GetNiPropertyByID
0x53BB8C: test    eax, eax
0x53BB8E: jnz     short loc_53BB97
0x53BB90: or      word ptr [edi+18h], 1
0x53BB95: jmp     short loc_53BB9D
0x53BB97: and     word ptr [edi+18h], 0FFFEh
0x53BB9D: lea     eax, [esi+1]
0x53BBA0: xor     edx, edx
0x53BBA2: mov     ecx, 3
0x53BBA7: div     ecx
0x53BBA9: mov     esi, edx
0x53BBAB: cmp     esi, 2
0x53BBAE: jl      loc_53BA70
0x53BBB4: pop     edi
0x53BBB5: pop     esi
0x53BBB6: pop     ebp
0x53BBB7: pop     ebx
0x53BBB8: add     esp, 38h
0x53BBBB: retn    8

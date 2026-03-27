0x9377C0: push    ebp
0x9377C1: mov     ebp, esp
0x9377C3: and     esp, 0FFFFFFF0h
0x9377C6: sub     esp, 104h
0x9377CC: push    ebx
0x9377CD: mov     ebx, [ebp+arg_0]
0x9377D0: push    esi
0x9377D1: mov     esi, ecx
0x9377D3: movaps  xmm2, xmmword ptr [esi+20h]
0x9377D7: movaps  xmm1, xmmword ptr [esi+30h]
0x9377DB: movaps  xmm3, xmmword ptr [esi+40h]
0x9377DF: movaps  xmm4, xmmword ptr [esi+60h]
0x9377E3: mov     [esp+10Ch+var_104], 4479FFFFh
0x9377EB: movss   xmm0, [esp+10Ch+var_104]
0x9377F1: movaps  [esp+10Ch+var_80], xmm0
0x9377F9: mov     [esp+10Ch+var_104], 0DBB1A2BCh
0x937801: movss   xmm0, [esp+10Ch+var_104]
0x937807: movaps  [esp+10Ch+var_60], xmm0
0x93780F: movaps  xmm0, xmmword ptr ds:0A372D0h
0x937816: andps   xmm1, xmm0
0x937819: andps   xmm3, xmm0
0x93781C: andps   xmm2, xmm0
0x93781F: movaps  xmm0, xmmword ptr [esi+70h]
0x937823: movaps  xmm5, xmm0
0x937826: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x93782A: lea     eax, [esi+20h]
0x93782D: movaps  xmm6, xmm3
0x937830: mulps   xmm6, xmm5
0x937833: movaps  xmm5, xmm0
0x937836: shufps  xmm5, xmm0, 55h ; 'U'
0x93783A: movaps  xmm7, xmm1
0x93783D: mulps   xmm7, xmm5
0x937840: movaps  xmm5, xmm0
0x937843: shufps  xmm5, xmm0, 0
0x937847: movaps  xmm0, xmm2
0x93784A: mulps   xmm0, xmm5
0x93784D: addps   xmm0, xmm7
0x937850: addps   xmm0, xmm6
0x937853: addps   xmm0, xmm4
0x937856: movaps  xmm4, xmm0
0x937859: movaps  xmm0, xmmword ptr [esi+0C0h]
0x937860: andps   xmm0, xmmword ptr ds:0A372D0h
0x937867: subps   xmm0, xmm4
0x93786A: movaps  xmm4, xmmword ptr [ebx]
0x93786D: cmpltps xmm4, xmm0
0x937871: movmskps ecx, xmm4
0x937874: test    cl, 7
0x937877: push    edi
0x937878: movaps  [esp+110h+var_F0], xmm2
0x93787D: movaps  [esp+110h+var_E0], xmm1
0x937882: movaps  [esp+110h+var_D0], xmm3
0x937887: jnz     loc_937D5C
0x93788D: movaps  xmm5, xmmword ptr [esi+70h]
0x937891: movaps  xmmword ptr [esi+0E0h], xmm0
0x937898: movaps  xmm0, xmm2
0x93789B: shufps  xmm2, [esp+110h+var_E0], var_20+0Eh
0x9378A1: shufps  xmm0, xmm1, 44h ; 'D'
0x9378A5: movaps  xmm1, xmmword ptr [esi+60h]
0x9378A9: movaps  xmm7, xmm3
0x9378AC: shufps  xmm7, xmm3, 0EEh ; 'î'
0x9378B0: movaps  xmm4, xmm3
0x9378B3: shufps  xmm4, xmm3, 44h ; 'D'
0x9378B7: movaps  xmm6, xmm1
0x9378BA: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x9378BE: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x9378C2: mulps   xmm2, xmm6
0x9378C5: movaps  xmm6, xmm0
0x9378C8: movaps  xmm3, xmm1
0x9378CB: shufps  xmm3, xmm1, 55h ; 'U'
0x9378CF: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x9378D3: shufps  xmm6, xmm4, 0DDh ; 'Ý'
0x9378D7: mulps   xmm6, xmm3
0x9378DA: movaps  xmm3, xmm1
0x9378DD: shufps  xmm3, xmm1, 0
0x9378E1: mulps   xmm0, xmm3
0x9378E4: addps   xmm0, xmm6
0x9378E7: addps   xmm0, xmm2
0x9378EA: movaps  xmm2, xmmword ptr [esi+0D0h]
0x9378F1: addps   xmm0, xmm5
0x9378F4: movaps  xmm1, xmm0
0x9378F7: movaps  xmm0, xmmword ptr ds:0A372D0h
0x9378FE: andps   xmm2, xmm0
0x937901: movaps  xmm0, xmm2
0x937904: subps   xmm0, xmm1
0x937907: movaps  xmm1, xmmword ptr [ebx]
0x93790A: cmpltps xmm1, xmm0
0x93790E: movmskps edx, xmm1
0x937911: test    dl, 7
0x937914: jnz     loc_937D5C
0x93791A: push    eax
0x93791B: lea     ecx, [esp+114h+var_40]
0x937922: movaps  xmmword ptr [esi+0F0h], xmm0
0x937929: call    sub_8D2860
0x93792E: fld     dword ptr [esp+110h+var_F0+8]
0x937932: fmul    dword ptr [esi+64h]
0x937935: movaps  xmm0, [esp+110h+var_40]
0x93793D: fld     dword ptr [esp+110h+var_F0+4]
0x937941: movaps  xmm3, [esp+110h+var_30]
0x937949: fmul    dword ptr [esi+68h]
0x93794C: movaps  xmm2, [esp+110h+var_20]
0x937954: mulps   xmm0, xmm0
0x937957: movaps  [esp+110h+var_50], xmm0
0x93795F: faddp   st(1), st
0x937961: movaps  xmm0, xmmword ptr [esi+0C0h]
0x937968: fld     dword ptr [esp+110h+var_E0]
0x93796C: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x937970: fmul    dword ptr [esi+78h]
0x937973: movaps  xmm4, xmm0
0x937976: shufps  xmm4, xmm0, 0
0x93797A: movaps  xmm0, xmm4
0x93797D: faddp   st(1), st
0x93797F: mulps   xmm0, xmm3
0x937982: fld     dword ptr [esp+110h+var_D0]
0x937986: mulps   xmm2, xmm2
0x937989: fmul    dword ptr [esi+74h]
0x93798C: movaps  [esp+110h+var_70], xmm0
0x937994: movaps  xmm0, xmmword ptr [esi+0C0h]
0x93799B: movaps  xmm1, xmm3
0x93799E: faddp   st(1), st
0x9379A0: mulps   xmm1, xmm3
0x9379A3: lea     eax, [esp+110h+var_C0]
0x9379A7: movaps  [esp+110h+var_A0], xmm2
0x9379AC: fstp    dword ptr [esp+110h+var_100]
0x9379B0: shufps  xmm0, xmm0, 55h ; 'U'
0x9379B4: fld     dword ptr [esp+110h+var_E0+8]
0x9379B8: addps   xmm2, xmm1
0x9379BB: fmul    dword ptr [esi+64h]
0x9379BE: push    eax
0x9379BF: fld     dword ptr [esp+114h+var_E0+4]
0x9379C3: movaps  [esp+114h+var_10], xmm1
0x9379CB: fmul    dword ptr [esi+68h]
0x9379CE: movaps  [esp+114h+var_B0], xmm0
0x9379D3: mov     dword ptr [esp+114h+var_100+0Ch], 0
0x9379DB: movaps  [esp+114h+var_C0], xmm2
0x9379E0: faddp   st(1), st
0x9379E2: fld     dword ptr [esp+114h+var_D0]
0x9379E6: fmul    dword ptr [esi+70h]
0x9379E9: faddp   st(1), st
0x9379EB: fld     dword ptr [esp+114h+var_F0]
0x9379EF: fmul    dword ptr [esi+78h]
0x9379F2: faddp   st(1), st
0x9379F4: fstp    dword ptr [esp+114h+var_100+4]
0x9379F8: fld     dword ptr [esp+114h+var_D0+8]
0x9379FC: fmul    dword ptr [esi+64h]
0x9379FF: fld     dword ptr [esp+114h+var_D0+4]
0x937A03: fmul    dword ptr [esi+68h]
0x937A06: faddp   st(1), st
0x937A08: fld     dword ptr [esp+114h+var_E0]
0x937A0C: fmul    dword ptr [esi+70h]
0x937A0F: faddp   st(1), st
0x937A11: fld     dword ptr [esp+114h+var_F0]
0x937A15: fmul    dword ptr [esi+74h]
0x937A18: faddp   st(1), st
0x937A1A: fstp    dword ptr [esp+114h+var_100+8]
0x937A1E: call    sub_9366F0
0x937A23: movaps  xmm0, [esp+114h+var_B0]
0x937A28: movaps  xmm1, [esp+114h+var_100]
0x937A2D: movaps  xmm2, xmmword ptr ds:0A372D0h
0x937A34: movaps  xmm3, xmm0
0x937A37: shufps  xmm3, xmm0, 0
0x937A3B: mulps   xmm3, [esp+114h+var_20]
0x937A43: movaps  xmm0, [esp+114h+var_70]
0x937A4B: subps   xmm0, xmm3
0x937A4E: andps   xmm0, xmm2
0x937A51: subps   xmm0, xmm1
0x937A54: movaps  xmm1, xmm0
0x937A57: movaps  xmm0, [esp+114h+var_C0]
0x937A5C: mulps   xmm0, xmm1
0x937A5F: add     esp, 4
0x937A62: movaps  [esp+110h+var_100], xmm0
0x937A67: mov     ecx, [esi+0B0h]
0x937A6D: lea     edi, [esi+0B0h]
0x937A73: mov     [esp+110h+var_104], ecx
0x937A77: movss   xmm1, [esp+110h+var_104]
0x937A7D: movaps  xmm2, xmm1
0x937A80: shufps  xmm2, xmm1, 0
0x937A84: cmpltps xmm2, xmm0
0x937A88: movmskps edx, xmm2
0x937A8B: test    dl, 7
0x937A8E: movaps  [esp+110h+var_90], xmm1
0x937A96: jnz     loc_937D5C
0x937A9C: lea     eax, [esp+110h+var_80]
0x937AA3: push    eax
0x937AA4: lea     ecx, [esp+114h+var_C0]
0x937AA8: push    ecx
0x937AA9: lea     edx, [esp+118h+var_60]
0x937AB0: push    edx
0x937AB1: lea     eax, [esp+11Ch+var_100]
0x937AB5: push    eax
0x937AB6: call    sub_936740
0x937ABB: fld     dword ptr [esp+120h+var_E0+4]
0x937ABF: movaps  xmm0, [esp+120h+var_100]
0x937AC4: movaps  xmmword ptr [esi+100h], xmm0
0x937ACB: fmul    dword ptr [esi+78h]
0x937ACE: fld     dword ptr [esp+120h+var_F0]
0x937AD2: movaps  xmm0, xmmword ptr [esi+0C0h]
0x937AD9: fmul    dword ptr [esi+68h]
0x937ADC: movaps  xmm1, xmm0
0x937ADF: shufps  xmm1, xmm0, 0
0x937AE3: movaps  xmm0, xmm1
0x937AE6: faddp   st(1), st
0x937AE8: mulps   xmm0, [esp+120h+var_20]
0x937AF0: fld     dword ptr [esp+120h+var_D0+4]
0x937AF4: movaps  [esp+120h+var_B0], xmm0
0x937AF9: fmul    dword ptr [esi+74h]
0x937AFC: movaps  xmm0, xmmword ptr [esi+0C0h]
0x937B03: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x937B07: movaps  [esp+120h+var_70], xmm0
0x937B0F: faddp   st(1), st
0x937B11: movaps  xmm0, [esp+120h+var_A0]
0x937B19: fld     dword ptr [esp+120h+var_F0+8]
0x937B1D: addps   xmm0, [esp+120h+var_50]
0x937B25: fmul    dword ptr [esi+60h]
0x937B28: lea     ecx, [esp+120h+var_C0]
0x937B2C: push    ecx
0x937B2D: mov     dword ptr [esp+124h+var_100+0Ch], 0
0x937B35: faddp   st(1), st
0x937B37: movaps  [esp+124h+var_C0], xmm0
0x937B3C: fstp    dword ptr [esp+124h+var_100]
0x937B40: fld     dword ptr [esp+124h+var_F0+4]
0x937B44: fmul    dword ptr [esi+78h]
0x937B47: fld     dword ptr [esp+124h+var_D0+4]
0x937B4B: fmul    dword ptr [esi+70h]
0x937B4E: faddp   st(1), st
0x937B50: fld     dword ptr [esp+124h+var_E0]
0x937B54: fmul    dword ptr [esi+68h]
0x937B57: faddp   st(1), st
0x937B59: fld     dword ptr [esp+124h+var_E0+8]
0x937B5D: fmul    dword ptr [esi+60h]
0x937B60: faddp   st(1), st
0x937B62: fstp    dword ptr [esp+124h+var_100+4]
0x937B66: fld     dword ptr [esp+124h+var_E0+4]
0x937B6A: fmul    dword ptr [esi+70h]
0x937B6D: fld     dword ptr [esp+124h+var_D0]
0x937B71: fmul    dword ptr [esi+68h]
0x937B74: faddp   st(1), st
0x937B76: fld     dword ptr [esp+124h+var_F0+4]
0x937B7A: fmul    dword ptr [esi+74h]
0x937B7D: faddp   st(1), st
0x937B7F: fld     dword ptr [esp+124h+var_D0+8]
0x937B83: fmul    dword ptr [esi+60h]
0x937B86: faddp   st(1), st
0x937B88: fstp    dword ptr [esp+124h+var_100+8]
0x937B8C: call    sub_9366F0
0x937B91: movaps  xmm0, [esp+124h+var_70]
0x937B99: movaps  xmm1, [esp+124h+var_100]
0x937B9E: movaps  xmm2, xmmword ptr ds:0A372D0h
0x937BA5: movaps  xmm3, xmm0
0x937BA8: shufps  xmm3, xmm0, 0
0x937BAC: mulps   xmm3, [esp+124h+var_40]
0x937BB4: movaps  xmm0, [esp+124h+var_B0]
0x937BB9: subps   xmm0, xmm3
0x937BBC: andps   xmm0, xmm2
0x937BBF: subps   xmm0, xmm1
0x937BC2: movaps  xmm1, xmm0
0x937BC5: movaps  xmm0, [esp+124h+var_C0]
0x937BCA: mulps   xmm0, xmm1
0x937BCD: movaps  xmm1, [esp+124h+var_90]
0x937BD5: movaps  xmm2, xmm1
0x937BD8: add     esp, 14h
0x937BDB: movaps  [esp+110h+var_100], xmm0
0x937BE0: shufps  xmm2, xmm1, 0
0x937BE4: cmpltps xmm2, xmm0
0x937BE8: movmskps edx, xmm2
0x937BEB: test    dl, 7
0x937BEE: jnz     loc_937D5C
0x937BF4: lea     eax, [esp+110h+var_80]
0x937BFB: push    eax
0x937BFC: lea     ecx, [esp+114h+var_C0]
0x937C00: push    ecx
0x937C01: lea     edx, [esp+118h+var_60]
0x937C08: push    edx
0x937C09: lea     eax, [esp+11Ch+var_100]
0x937C0D: push    eax
0x937C0E: call    sub_936740
0x937C13: fld     dword ptr [esp+120h+var_E0+8]
0x937C17: movaps  xmm0, [esp+120h+var_100]
0x937C1C: movaps  xmmword ptr [esi+110h], xmm0
0x937C23: fmul    dword ptr [esi+78h]
0x937C26: fld     dword ptr [esp+120h+var_F0]
0x937C2A: movaps  xmm0, xmmword ptr [esi+0C0h]
0x937C31: fmul    dword ptr [esi+64h]
0x937C34: shufps  xmm0, xmm0, 55h ; 'U'
0x937C38: movaps  xmm1, xmm0
0x937C3B: shufps  xmm1, xmm0, 0
0x937C3F: faddp   st(1), st
0x937C41: movaps  xmm0, xmm1
0x937C44: fld     dword ptr [esp+120h+var_D0+8]
0x937C48: mulps   xmm0, [esp+120h+var_40]
0x937C50: fmul    dword ptr [esi+74h]
0x937C53: movaps  [esp+120h+var_A0], xmm0
0x937C5B: movaps  xmm0, xmmword ptr [esi+0C0h]
0x937C62: movaps  [esp+120h+var_90], xmm0
0x937C6A: faddp   st(1), st
0x937C6C: movaps  xmm0, [esp+120h+var_10]
0x937C74: fld     dword ptr [esp+120h+var_F0+4]
0x937C78: addps   xmm0, [esp+120h+var_50]
0x937C80: fmul    dword ptr [esi+60h]
0x937C83: lea     ecx, [esp+120h+var_C0]
0x937C87: push    ecx
0x937C88: mov     dword ptr [esp+124h+var_100+0Ch], 0
0x937C90: faddp   st(1), st
0x937C92: movaps  [esp+124h+var_C0], xmm0
0x937C97: fstp    dword ptr [esp+124h+var_100]
0x937C9B: fld     dword ptr [esp+124h+var_F0+8]
0x937C9F: fmul    dword ptr [esi+78h]
0x937CA2: fld     dword ptr [esp+124h+var_D0+8]
0x937CA6: fmul    dword ptr [esi+70h]
0x937CA9: faddp   st(1), st
0x937CAB: fld     dword ptr [esp+124h+var_E0]
0x937CAF: fmul    dword ptr [esi+64h]
0x937CB2: faddp   st(1), st
0x937CB4: fld     dword ptr [esp+124h+var_E0+4]
0x937CB8: fmul    dword ptr [esi+60h]
0x937CBB: faddp   st(1), st
0x937CBD: fstp    dword ptr [esp+124h+var_100+4]
0x937CC1: fld     dword ptr [esp+124h+var_E0+8]
0x937CC5: fmul    dword ptr [esi+70h]
0x937CC8: fld     dword ptr [esp+124h+var_D0]
0x937CCC: fmul    dword ptr [esi+64h]
0x937CCF: faddp   st(1), st
0x937CD1: fld     dword ptr [esp+124h+var_F0+8]
0x937CD5: fmul    dword ptr [esi+74h]
0x937CD8: faddp   st(1), st
0x937CDA: fld     dword ptr [esp+124h+var_D0+4]
0x937CDE: fmul    dword ptr [esi+60h]
0x937CE1: faddp   st(1), st
0x937CE3: fstp    dword ptr [esp+124h+var_100+8]
0x937CE7: call    sub_9366F0
0x937CEC: movaps  xmm0, [esp+124h+var_90]
0x937CF4: movaps  xmm1, [esp+124h+var_100]
0x937CF9: movaps  xmm2, xmmword ptr ds:0A372D0h
0x937D00: movaps  xmm3, xmm0
0x937D03: shufps  xmm3, xmm0, 0
0x937D07: mulps   xmm3, [esp+124h+var_30]
0x937D0F: movaps  xmm0, [esp+124h+var_A0]
0x937D17: subps   xmm0, xmm3
0x937D1A: andps   xmm0, xmm2
0x937D1D: subps   xmm0, xmm1
0x937D20: movaps  xmm1, xmm0
0x937D23: movaps  xmm0, [esp+124h+var_C0]
0x937D28: mulps   xmm0, xmm1
0x937D2B: movaps  xmm1, xmmword ptr [ebx]
0x937D2E: cmpltps xmm1, xmm0
0x937D32: movmskps edx, xmm1
0x937D35: movaps  [esp+124h+var_100], xmm0
0x937D3A: and     edx, 7
0x937D3D: lea     eax, [esp+124h+var_104]
0x937D41: push    eax
0x937D42: lea     ecx, [esp+128h+var_100]
0x937D46: push    edi
0x937D47: push    ecx
0x937D48: mov     [esp+130h+var_104], edx
0x937D4C: call    sub_9366B0
0x937D51: mov     eax, [esp+130h+var_104]
0x937D55: add     esp, 20h
0x937D58: test    eax, eax
0x937D5A: jz      short loc_937D6A
0x937D5C: mov     eax, 1
0x937D61: pop     edi
0x937D62: pop     esi
0x937D63: pop     ebx
0x937D64: mov     esp, ebp
0x937D66: pop     ebp
0x937D67: retn    4
0x937D6A: lea     edx, [esp+110h+var_80]
0x937D71: push    edx
0x937D72: lea     eax, [esp+114h+var_C0]
0x937D76: push    eax
0x937D77: lea     ecx, [esp+118h+var_60]
0x937D7E: push    ecx
0x937D7F: lea     edx, [esp+11Ch+var_100]
0x937D83: push    edx
0x937D84: call    sub_936740
0x937D89: movaps  xmm0, [esp+120h+var_100]
0x937D8E: add     esp, 10h
0x937D91: pop     edi
0x937D92: movaps  xmmword ptr [esi+120h], xmm0
0x937D99: pop     esi
0x937D9A: xor     eax, eax
0x937D9C: pop     ebx
0x937D9D: mov     esp, ebp
0x937D9F: pop     ebp
0x937DA0: retn    4

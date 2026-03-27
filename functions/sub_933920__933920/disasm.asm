0x933920: push    ebp
0x933921: mov     ebp, esp
0x933923: and     esp, 0FFFFFFF0h
0x933926: sub     esp, 44h
0x933929: mov     edx, [ebp+arg_4]
0x93392C: push    ebx
0x93392D: mov     dword ptr [ecx+8], 0
0x933934: push    esi
0x933935: push    edi
0x933936: mov     edi, [ecx]
0x933938: mov     eax, edx
0x93393A: shl     eax, 4
0x93393D: add     eax, edi
0x93393F: mov     [esp+50h+var_28], eax
0x933943: mov     esi, [eax]
0x933945: mov     dword ptr [esp+50h+var_10], esi
0x933949: mov     esi, [eax+4]
0x93394C: mov     dword ptr [esp+50h+var_10+4], esi
0x933950: mov     esi, [eax+8]
0x933953: mov     eax, [eax+0Ch]
0x933956: mov     dword ptr [esp+50h+var_10+0Ch], eax
0x93395A: mov     dword ptr [esp+50h+var_10+8], esi
0x93395E: mov     esi, [ebp+arg_0]
0x933961: movaps  xmm3, [esp+50h+var_10]
0x933966: mov     eax, esi
0x933968: shl     eax, 4
0x93396B: movaps  xmm0, xmmword ptr [eax+edi]
0x93396F: add     eax, edi
0x933971: subps   xmm3, xmm0
0x933974: movaps  xmm0, xmm3
0x933977: mulps   xmm0, xmm3
0x93397A: movaps  xmm1, xmm0
0x93397D: shufps  xmm1, xmm0, 4Eh ; 'N'
0x933981: addps   xmm1, xmm0
0x933984: movaps  xmm2, xmm1
0x933987: shufps  xmm2, xmm1, 0B1h ; '±'
0x93398B: addps   xmm1, xmm2
0x93398E: lea     ebx, [esp+50h+var_38]
0x933992: movss   dword ptr [ebx], xmm1
0x933996: mov     ebx, [ebp+arg_8]
0x933999: shl     ebx, 4
0x93399C: add     edi, ebx
0x93399E: mov     [esp+50h+var_20], edi
0x9339A2: mov     ebx, [edi]
0x9339A4: mov     dword ptr [esp+50h+var_10], ebx
0x9339A8: mov     ebx, [edi+4]
0x9339AB: mov     dword ptr [esp+50h+var_10+4], ebx
0x9339AF: mov     ebx, [edi+8]
0x9339B2: mov     edi, [edi+0Ch]
0x9339B5: mov     dword ptr [esp+50h+var_10+0Ch], edi
0x9339B9: mov     edi, [esp+50h+var_28]
0x9339BD: movaps  xmm1, xmmword ptr [edi]
0x9339C0: mov     dword ptr [esp+50h+var_10+8], ebx
0x9339C4: movaps  xmm4, [esp+50h+var_10]
0x9339C9: subps   xmm4, xmm1
0x9339CC: movaps  xmm1, xmm4
0x9339CF: mulps   xmm1, xmm4
0x9339D2: movaps  xmm2, xmm1
0x9339D5: shufps  xmm2, xmm1, 4Eh ; 'N'
0x9339D9: addps   xmm2, xmm1
0x9339DC: movaps  xmm5, xmm2
0x9339DF: shufps  xmm5, xmm2, 0B1h ; '±'
0x9339E3: addps   xmm2, xmm5
0x9339E6: lea     edi, [esp+50h+var_30]
0x9339EA: movss   dword ptr [edi], xmm2
0x9339EE: mov     edi, [eax]
0x9339F0: mov     dword ptr [esp+50h+var_10], edi
0x9339F4: mov     edi, [eax+4]
0x9339F7: mov     dword ptr [esp+50h+var_10+4], edi
0x9339FB: mov     edi, [eax+8]
0x9339FE: mov     eax, [eax+0Ch]
0x933A01: mov     dword ptr [esp+50h+var_10+0Ch], eax
0x933A05: mov     eax, [esp+50h+var_20]
0x933A09: movaps  xmm2, xmmword ptr [eax]
0x933A0C: mov     dword ptr [esp+50h+var_10+8], edi
0x933A10: movaps  xmm5, [esp+50h+var_10]
0x933A15: subps   xmm5, xmm2
0x933A18: mulps   xmm5, xmm5
0x933A1B: movaps  xmm2, xmm5
0x933A1E: shufps  xmm2, xmm5, 4Eh ; 'N'
0x933A22: addps   xmm2, xmm5
0x933A25: movaps  xmm5, xmm2
0x933A28: shufps  xmm5, xmm2, 0B1h ; '±'
0x933A2C: addps   xmm2, xmm5
0x933A2F: lea     eax, [esp+50h+var_28]
0x933A33: movaps  xmm5, xmm0
0x933A36: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x933A3A: movss   dword ptr [eax], xmm2
0x933A3E: movaps  xmm2, xmm0
0x933A41: shufps  xmm2, xmm0, 55h ; 'U'
0x933A45: addss   xmm2, xmm0
0x933A49: movaps  xmm0, xmm5
0x933A4C: addss   xmm0, xmm2
0x933A50: movaps  [esp+50h+var_10], xmm0
0x933A55: rsqrtss xmm2, xmm0
0x933A59: movss   dword ptr [esp+50h+var_10], xmm2
0x933A5F: movaps  xmm6, [esp+50h+var_10]
0x933A64: mulss   xmm0, xmm6
0x933A68: mulss   xmm0, xmm6
0x933A6C: mov     [esp+50h+var_20], 40400000h
0x933A74: movss   xmm2, [esp+50h+var_20]
0x933A7A: movaps  xmm7, xmm2
0x933A7D: subss   xmm7, xmm0
0x933A81: mov     [esp+50h+var_20], 3F000000h
0x933A89: movss   xmm5, [esp+50h+var_20]
0x933A8F: movaps  xmm0, xmm5
0x933A92: mulss   xmm0, xmm6
0x933A96: movaps  xmm6, xmm0
0x933A99: movaps  xmm0, xmm1
0x933A9C: shufps  xmm0, xmm1, 55h ; 'U'
0x933AA0: addss   xmm0, xmm1
0x933AA4: mulss   xmm6, xmm7
0x933AA8: movaps  xmm7, xmm0
0x933AAB: movaps  xmm0, xmm1
0x933AAE: shufps  xmm0, xmm1, 0AAh ; 'ª'
0x933AB2: addss   xmm0, xmm7
0x933AB6: movaps  [esp+50h+var_10], xmm0
0x933ABB: rsqrtss xmm1, xmm0
0x933ABF: movss   dword ptr [esp+50h+var_10], xmm1
0x933AC5: movaps  xmm1, [esp+50h+var_10]
0x933ACA: mulss   xmm0, xmm1
0x933ACE: mulss   xmm0, xmm1
0x933AD2: subss   xmm2, xmm0
0x933AD6: mulss   xmm5, xmm1
0x933ADA: mulss   xmm5, xmm2
0x933ADE: movaps  xmm0, xmm6
0x933AE1: shufps  xmm0, xmm6, 0
0x933AE5: mulps   xmm0, xmm3
0x933AE8: movaps  xmm1, xmm0
0x933AEB: movaps  xmm0, xmm5
0x933AEE: shufps  xmm0, xmm5, 0
0x933AF2: mulps   xmm0, xmm4
0x933AF5: subps   xmm0, xmm1
0x933AF8: mulps   xmm0, xmm0
0x933AFB: movaps  xmm1, xmm0
0x933AFE: shufps  xmm1, xmm0, 55h ; 'U'
0x933B02: movaps  xmm2, xmm0
0x933B05: lea     eax, [esp+50h+var_20]
0x933B09: addss   xmm1, xmm0
0x933B0D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x933B11: addss   xmm2, xmm1
0x933B15: movss   dword ptr [eax], xmm2
0x933B19: fld     [esp+50h+var_20]
0x933B1D: fcomp   dword ptr ds:0A372CCh
0x933B23: fnstsw  ax
0x933B25: test    ah, 5
0x933B28: jp      loc_933BC3
0x933B2E: fld     [esp+50h+var_30]
0x933B32: fcomp   [esp+50h+var_28]
0x933B36: fnstsw  ax
0x933B38: test    ah, 41h
0x933B3B: jnz     short loc_933B43
0x933B3D: fld     [esp+50h+var_30]
0x933B41: jmp     short loc_933B47
0x933B43: fld     [esp+50h+var_28]
0x933B47: fld     [esp+50h+var_38]
0x933B4B: fcomp   st(1)
0x933B4D: fnstsw  ax
0x933B4F: test    ah, 41h
0x933B52: jnz     short loc_933B5A
0x933B54: fstp    st
0x933B56: fld     [esp+50h+var_38]
0x933B5A: fld     st
0x933B5C: fld     [esp+50h+var_38]
0x933B60: fucompp
0x933B62: fnstsw  ax
0x933B64: test    ah, 44h
0x933B67: jp      short loc_933B7B
0x933B69: push    edx
0x933B6A: fstp    st
0x933B6C: push    esi
0x933B6D: call    sub_933870
0x933B72: pop     edi
0x933B73: pop     esi
0x933B74: pop     ebx
0x933B75: mov     esp, ebp
0x933B77: pop     ebp
0x933B78: retn    0Ch
0x933B7B: fld     st
0x933B7D: fld     [esp+50h+var_30]
0x933B81: fucompp
0x933B83: fnstsw  ax
0x933B85: test    ah, 44h
0x933B88: jp      short loc_933B9F
0x933B8A: mov     eax, [ebp+arg_8]
0x933B8D: fstp    st
0x933B8F: push    eax
0x933B90: push    edx
0x933B91: call    sub_933870
0x933B96: pop     edi
0x933B97: pop     esi
0x933B98: pop     ebx
0x933B99: mov     esp, ebp
0x933B9B: pop     ebp
0x933B9C: retn    0Ch
0x933B9F: fld     [esp+50h+var_28]
0x933BA3: fucompp
0x933BA5: fnstsw  ax
0x933BA7: test    ah, 44h
0x933BAA: jp      loc_933D6E
0x933BB0: mov     edx, [ebp+arg_8]
0x933BB3: push    esi
0x933BB4: push    edx
0x933BB5: call    sub_933870
0x933BBA: pop     edi
0x933BBB: pop     esi
0x933BBC: pop     ebx
0x933BBD: mov     esp, ebp
0x933BBF: pop     ebp
0x933BC0: retn    0Ch
0x933BC3: mov     eax, [ebp+arg_8]
0x933BC6: mov     word ptr [esp+50h+var_20], si
0x933BCB: mov     word ptr [esp+50h+var_10], si
0x933BD0: lea     esi, [ecx+4]
0x933BD3: mov     ecx, [esi+4]
0x933BD6: mov     word ptr [esp+50h+var_38], ax
0x933BDB: mov     word ptr [esp+50h+var_18], ax
0x933BE0: mov     eax, [esi+8]
0x933BE3: xor     edi, edi
0x933BE5: mov     word ptr [esp+50h+var_28], dx
0x933BEA: mov     word ptr [esp+50h+var_30], dx
0x933BEF: mov     ebx, 3
0x933BF4: mov     edx, 4
0x933BF9: and     eax, 3FFFFFFFh
0x933BFE: cmp     ecx, eax
0x933C00: mov     word ptr [esp+50h+var_20+2], 1
0x933C07: mov     word ptr [esp+50h+var_1C], 2
0x933C0E: mov     word ptr [esp+50h+var_28+2], di
0x933C13: mov     word ptr [esp+50h+var_24], 5
0x933C1A: mov     word ptr [esp+50h+var_30+2], bx
0x933C1F: mov     word ptr [esp+50h+var_2C], dx
0x933C24: mov     word ptr [esp+50h+var_38+2], 2
0x933C2B: mov     word ptr [esp+50h+var_34], 1
0x933C32: mov     word ptr [esp+50h+var_18+2], 5
0x933C39: mov     word ptr [esp+50h+var_14], di
0x933C3E: mov     word ptr [esp+50h+var_10+2], dx
0x933C43: mov     word ptr [esp+50h+var_10+4], bx
0x933C48: jnz     short loc_933C55
0x933C4A: push    8
0x933C4C: push    esi
0x933C4D: call    sub_8A6EE0
0x933C52: add     esp, 8
0x933C55: mov     ecx, [esi+4]
0x933C58: mov     edx, [esi]
0x933C5A: mov     eax, [esp+50h+var_20]
0x933C5E: mov     [edx+ecx*8], eax
0x933C61: mov     eax, [esp+50h+var_1C]
0x933C65: mov     [edx+ecx*8+4], eax
0x933C69: mov     edi, [esi+4]
0x933C6C: inc     edi
0x933C6D: mov     [esi+4], edi
0x933C70: mov     ecx, [esi+8]
0x933C73: and     ecx, 3FFFFFFFh
0x933C79: mov     eax, edi
0x933C7B: cmp     eax, ecx
0x933C7D: jnz     short loc_933C8A
0x933C7F: push    8
0x933C81: push    esi
0x933C82: call    sub_8A6EE0
0x933C87: add     esp, 8
0x933C8A: mov     edx, [esi+4]
0x933C8D: mov     eax, [esi]
0x933C8F: mov     ecx, [esp+50h+var_28]
0x933C93: mov     [eax+edx*8], ecx
0x933C96: mov     ecx, [esp+50h+var_24]
0x933C9A: mov     [eax+edx*8+4], ecx
0x933C9E: inc     dword ptr [esi+4]
0x933CA1: mov     edx, [esi+8]
0x933CA4: mov     eax, [esi+4]
0x933CA7: and     edx, 3FFFFFFFh
0x933CAD: cmp     eax, edx
0x933CAF: jnz     short loc_933CBC
0x933CB1: push    8
0x933CB3: push    esi
0x933CB4: call    sub_8A6EE0
0x933CB9: add     esp, 8
0x933CBC: mov     eax, [esi+4]
0x933CBF: mov     ecx, [esi]
0x933CC1: mov     edx, [esp+50h+var_30]
0x933CC5: mov     [ecx+eax*8], edx
0x933CC8: mov     edx, [esp+50h+var_2C]
0x933CCC: mov     [ecx+eax*8+4], edx
0x933CD0: mov     edi, [esi+4]
0x933CD3: inc     edi
0x933CD4: mov     [esi+4], edi
0x933CD7: mov     eax, [esi+8]
0x933CDA: and     eax, 3FFFFFFFh
0x933CDF: mov     ecx, edi
0x933CE1: cmp     ecx, eax
0x933CE3: jnz     short loc_933CF0
0x933CE5: push    8
0x933CE7: push    esi
0x933CE8: call    sub_8A6EE0
0x933CED: add     esp, 8
0x933CF0: mov     ecx, [esi+4]
0x933CF3: mov     edx, [esi]
0x933CF5: mov     eax, [esp+50h+var_38]
0x933CF9: mov     [edx+ecx*8], eax
0x933CFC: mov     eax, [esp+50h+var_34]
0x933D00: mov     [edx+ecx*8+4], eax
0x933D04: mov     edi, [esi+4]
0x933D07: inc     edi
0x933D08: mov     [esi+4], edi
0x933D0B: mov     ecx, [esi+8]
0x933D0E: and     ecx, 3FFFFFFFh
0x933D14: mov     eax, edi
0x933D16: cmp     eax, ecx
0x933D18: jnz     short loc_933D25
0x933D1A: push    8
0x933D1C: push    esi
0x933D1D: call    sub_8A6EE0
0x933D22: add     esp, 8
0x933D25: mov     edx, [esi+4]
0x933D28: mov     eax, [esi]
0x933D2A: mov     ecx, [esp+50h+var_18]
0x933D2E: mov     [eax+edx*8], ecx
0x933D31: mov     ecx, [esp+50h+var_14]
0x933D35: mov     [eax+edx*8+4], ecx
0x933D39: inc     dword ptr [esi+4]
0x933D3C: mov     edx, [esi+8]
0x933D3F: mov     eax, [esi+4]
0x933D42: and     edx, 3FFFFFFFh
0x933D48: cmp     eax, edx
0x933D4A: jnz     short loc_933D57
0x933D4C: push    8
0x933D4E: push    esi
0x933D4F: call    sub_8A6EE0
0x933D54: add     esp, 8
0x933D57: mov     eax, [esi+4]
0x933D5A: mov     ecx, [esi]
0x933D5C: mov     edx, dword ptr [esp+50h+var_10]
0x933D60: mov     [ecx+eax*8], edx
0x933D63: mov     edx, dword ptr [esp+50h+var_10+4]
0x933D67: mov     [ecx+eax*8+4], edx
0x933D6B: inc     dword ptr [esi+4]
0x933D6E: pop     edi
0x933D6F: pop     esi
0x933D70: pop     ebx
0x933D71: mov     esp, ebp
0x933D73: pop     ebp
0x933D74: retn    0Ch

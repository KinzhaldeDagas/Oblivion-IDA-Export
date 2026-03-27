0x8F67C0: push    ebp
0x8F67C1: mov     ebp, esp
0x8F67C3: and     esp, 0FFFFFFF0h
0x8F67C6: sub     esp, 304h
0x8F67CC: mov     edx, large fs:2Ch
0x8F67D3: push    ebx
0x8F67D4: push    esi
0x8F67D5: mov     esi, ds:0BA9DE4h
0x8F67DB: mov     eax, [edx+esi*4]
0x8F67DE: mov     ebx, [eax+1A8h]
0x8F67E4: push    edi
0x8F67E5: mov     edi, [eax+1A4h]
0x8F67EB: cmp     edi, ebx
0x8F67ED: mov     dword ptr [esp+310h+var_2FC+8], ecx
0x8F67F1: jnb     short loc_8F681E
0x8F67F3: mov     edi, eax
0x8F67F5: mov     esi, [edi+1A4h]
0x8F67FB: mov     dword ptr [esi], offset aLtbvtree3; "LtBvTree3"
0x8F6801: mov     dword ptr [esi+0Ch], offset aQuerytree; "QueryTree"
0x8F6808: rdtsc
0x8F680A: mov     dword ptr [esp+310h+var_2FC+4], eax
0x8F680E: mov     eax, dword ptr [esp+310h+var_2FC+4]
0x8F6812: mov     [esi+4], eax
0x8F6815: add     esi, 10h
0x8F6818: mov     [edi+1A4h], esi
0x8F681E: mov     edi, [ebp+arg_8]
0x8F6821: mov     ecx, [ecx+8]
0x8F6824: fld     dword ptr [edi+18h]
0x8F6827: mov     ebx, [ebp+arg_0]
0x8F682A: fld     st
0x8F682C: mov     eax, [ebx+8]
0x8F682F: mov     esi, [ebp+arg_4]
0x8F6832: mov     [esp+310h+var_2B4], ecx
0x8F6836: mov     ecx, [esi+8]
0x8F6839: mov     [esp+310h+var_2C0], ebx
0x8F683D: mov     [esp+310h+var_2BC], esi
0x8F6841: mov     [esp+310h+var_2B8], edi
0x8F6845: fmul    dword ptr [eax+5Ch]
0x8F6848: movaps  xmm2, xmmword ptr [ecx+40h]
0x8F684C: fxch    st(1)
0x8F684E: fmul    dword ptr [ecx+5Ch]
0x8F6851: movaps  xmm3, xmmword ptr [ecx+50h]
0x8F6855: fld     st(1)
0x8F6857: subps   xmm3, xmm2
0x8F685A: fstp    dword ptr [esp+310h+var_2FC+4]
0x8F685E: movss   xmm0, dword ptr [esp+310h+var_2FC+4]
0x8F6864: push    ecx
0x8F6865: fst     dword ptr [esp+314h+var_2FC+4]
0x8F6869: movss   xmm1, dword ptr [esp+314h+var_2FC+4]
0x8F686F: movaps  xmm2, xmm1
0x8F6872: shufps  xmm2, xmm1, 0
0x8F6876: movaps  xmm1, xmmword ptr [eax+50h]
0x8F687A: mulps   xmm2, xmm3
0x8F687D: movaps  xmm3, xmmword ptr [eax+40h]
0x8F6881: subps   xmm3, xmm1
0x8F6884: movaps  xmm1, xmm0
0x8F6887: shufps  xmm1, xmm0, 0
0x8F688B: mulps   xmm1, xmm3
0x8F688E: addps   xmm1, xmm2
0x8F6891: movaps  [esp+314h+var_260], xmm1
0x8F6899: fld     dword ptr [ecx+0A0h]
0x8F689F: fmul    dword ptr [ecx+9Ch]
0x8F68A5: push    eax
0x8F68A6: lea     ecx, [esp+318h+var_2B0]
0x8F68AA: fmul    st, st(1)
0x8F68AC: fld     dword ptr [eax+0A0h]
0x8F68B2: fmul    dword ptr [eax+9Ch]
0x8F68B8: fmul    st, st(3)
0x8F68BA: faddp   st(1), st
0x8F68BC: fstp    dword ptr [esp+318h+var_260+0Ch]
0x8F68C3: fstp    st
0x8F68C5: fstp    st
0x8F68C7: call    sub_8B1FF0
0x8F68CC: lea     eax, [esp+310h+var_2B0]
0x8F68D0: lea     edx, [esp+310h+var_204]
0x8F68D7: push    eax
0x8F68D8: lea     ecx, [esp+314h+var_250]
0x8F68DF: mov     [esp+314h+var_210], edx
0x8F68E6: mov     [esp+314h+var_208], 80000080h
0x8F68F1: mov     [esp+314h+var_204], 0FFFFFFFFh
0x8F68FC: mov     [esp+314h+var_20C], 1
0x8F6907: call    sub_8B1F10
0x8F690C: mov     esi, [esi+8]
0x8F690F: movaps  xmm3, xmmword ptr [esi+20h]
0x8F6913: movaps  xmm1, [esp+310h+var_260]
0x8F691B: movaps  xmm2, xmmword ptr [esi]
0x8F691E: movaps  xmm5, xmmword ptr [esi+10h]
0x8F6922: mov     eax, [ebx+8]
0x8F6925: movaps  xmm0, xmm2
0x8F6928: movaps  xmm4, xmm3
0x8F692B: movaps  xmm7, xmm3
0x8F692E: shufps  xmm2, xmm5, 0EEh ; 'î'
0x8F6932: shufps  xmm4, xmm3, 44h ; 'D'
0x8F6936: shufps  xmm7, xmm3, 0EEh ; 'î'
0x8F693A: shufps  xmm0, xmm5, 44h ; 'D'
0x8F693E: movaps  xmm3, xmm1
0x8F6941: shufps  xmm3, xmm1, 55h ; 'U'
0x8F6945: movaps  xmm5, xmm0
0x8F6948: movaps  xmm6, xmm1
0x8F694B: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x8F694F: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x8F6953: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x8F6957: mulps   xmm5, xmm3
0x8F695A: mov     dword ptr [esp+310h+var_2FC], eax
0x8F695E: mulps   xmm2, xmm6
0x8F6961: movaps  xmm3, xmm1
0x8F6964: mov     ecx, [edi+28h]
0x8F6967: mov     dl, [ecx+10h]
0x8F696A: test    dl, dl
0x8F696C: mov     ebx, [ebx]
0x8F696E: lea     ecx, [esp+310h+var_2FC+0Ch]
0x8F6972: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x8F6976: shufps  xmm3, xmm1, 0
0x8F697A: mulps   xmm0, xmm3
0x8F697D: push    ecx
0x8F697E: addps   xmm0, xmm5
0x8F6981: addps   xmm0, xmm2
0x8F6984: push    ecx
0x8F6985: movaps  [esp+318h+var_2D0], xmm0
0x8F698A: mov     ecx, ebx
0x8F698C: jz      loc_8F6B34
0x8F6992: fld     dword ptr [esi+0A0h]
0x8F6998: mov     edx, [ebx]
0x8F699A: fmul    dword ptr [esi+9Ch]
0x8F69A0: fmul    dword ptr [esi+9Ch]
0x8F69A6: fstp    dword ptr [esp+318h+var_2FC+4]
0x8F69AA: fld     dword ptr [eax+9Ch]
0x8F69B0: fadd    dword ptr [esi+9Ch]
0x8F69B6: fmul    dword ptr [eax+0A0h]
0x8F69BC: lea     eax, [esp+318h+var_250]
0x8F69C3: fadd    dword ptr [esp+318h+var_2FC+4]
0x8F69C7: fld     dword ptr [edi+8]
0x8F69CA: fmul    dword ptr ds:0A3D65Ch
0x8F69D0: faddp   st(1), st
0x8F69D2: fstp    [esp+318h+var_318]
0x8F69D5: push    eax
0x8F69D6: call    dword ptr [edx+0Ch]
0x8F69D9: fld     dword ptr [edi+8]
0x8F69DC: mov     ecx, dword ptr [esp+310h+var_2FC]
0x8F69E0: fmul    dword ptr ds:0A3D65Ch
0x8F69E6: mov     edx, [ebp+arg_4]
0x8F69E9: mov     eax, [edx+8]
0x8F69EC: movaps  xmm1, xmmword ptr [eax+30h]
0x8F69F0: fadd    dword ptr [esp+310h+var_2FC+4]
0x8F69F4: movaps  xmm4, xmmword ptr [eax+20h]
0x8F69F8: movaps  xmm3, xmmword ptr [eax]
0x8F69FB: movaps  xmm0, xmmword ptr [ecx+50h]
0x8F69FF: fadd    dword ptr [ecx+0A0h]
0x8F6A05: movaps  xmm5, xmmword ptr [eax+10h]
0x8F6A09: subps   xmm0, xmm1
0x8F6A0C: movaps  xmm1, xmm3
0x8F6A0F: fstp    dword ptr [esp+310h+var_2FC]
0x8F6A13: movss   xmm2, dword ptr [esp+310h+var_2FC]
0x8F6A19: shufps  xmm1, xmm5, 44h ; 'D'
0x8F6A1D: movaps  xmm5, xmm4
0x8F6A20: shufps  xmm5, xmm4, 44h ; 'D'
0x8F6A24: movaps  xmm7, xmm4
0x8F6A27: shufps  xmm7, xmm4, 0EEh ; 'î'
0x8F6A2B: movaps  xmm4, xmmword ptr [eax+10h]
0x8F6A2F: shufps  xmm3, xmm4, 0EEh ; 'î'
0x8F6A33: movaps  xmm6, xmm0
0x8F6A36: shufps  xmm6, xmm0, 0AAh ; 'ª'
0x8F6A3A: shufps  xmm3, xmm7, 88h ; 'ˆ'
0x8F6A3E: mulps   xmm3, xmm6
0x8F6A41: movaps  xmm6, xmm1
0x8F6A44: movaps  xmm4, xmm0
0x8F6A47: shufps  xmm4, xmm0, 55h ; 'U'
0x8F6A4B: shufps  xmm1, xmm5, 88h ; 'ˆ'
0x8F6A4F: shufps  xmm6, xmm5, 0DDh ; 'Ý'
0x8F6A53: mulps   xmm6, xmm4
0x8F6A56: movaps  xmm4, xmm0
0x8F6A59: shufps  xmm4, xmm0, 0
0x8F6A5D: mulps   xmm1, xmm4
0x8F6A60: movaps  xmm0, xmm1
0x8F6A63: shufps  xmm2, xmm2, 0
0x8F6A67: addps   xmm0, xmm6
0x8F6A6A: addps   xmm0, xmm3
0x8F6A6D: movaps  xmm1, xmm0
0x8F6A70: subps   xmm1, xmm2
0x8F6A73: movaps  xmm3, xmm1
0x8F6A76: movaps  xmm1, [esp+310h+var_2FC+0Ch]
0x8F6A7B: maxps   xmm1, xmm3
0x8F6A7E: movaps  xmm3, xmm0
0x8F6A81: addps   xmm3, xmm2
0x8F6A84: movaps  xmm2, xmmword ptr [esp+310h+var_2EC+0Ch]
0x8F6A89: minps   xmm2, xmm3
0x8F6A8C: movaps  [esp+310h+var_2FC+0Ch], xmm1
0x8F6A91: movaps  xmmword ptr [esp+310h+var_2EC+0Ch], xmm2
0x8F6A96: fld     dword ptr [esi+9Ch]
0x8F6A9C: fcomp   dword ptr ds:0A2FAA8h
0x8F6AA2: movaps  xmm5, xmm2
0x8F6AA5: subps   xmm5, xmm1
0x8F6AA8: fnstsw  ax
0x8F6AAA: test    ah, 41h
0x8F6AAD: jnz     short loc_8F6B0E
0x8F6AAF: movaps  xmm3, xmmword ptr [esi+80h]
0x8F6AB6: fld     dword ptr [esi+5Ch]
0x8F6AB9: fmul    dword ptr [edi+18h]
0x8F6ABC: subps   xmm0, xmm3
0x8F6ABF: movaps  xmm3, xmmword ptr [esi+90h]
0x8F6AC6: movaps  xmm6, xmm3
0x8F6AC9: shufps  xmm6, xmm3, 0C9h ; 'É'
0x8F6ACD: fstp    dword ptr [esp+310h+var_2FC]
0x8F6AD1: movss   xmm4, dword ptr [esp+310h+var_2FC]
0x8F6AD7: movaps  xmm7, xmm0
0x8F6ADA: shufps  xmm7, xmm0, 0D2h ; 'Ò'
0x8F6ADE: mulps   xmm7, xmm6
0x8F6AE1: movaps  xmm6, xmm3
0x8F6AE4: shufps  xmm6, xmm3, 0D2h ; 'Ò'
0x8F6AE8: movaps  xmm3, xmm0
0x8F6AEB: shufps  xmm3, xmm0, 0C9h ; 'É'
0x8F6AEF: mulps   xmm3, xmm6
0x8F6AF2: movaps  xmm6, [esp+310h+var_2D0]
0x8F6AF7: movaps  xmm0, xmm4
0x8F6AFA: subps   xmm3, xmm7
0x8F6AFD: shufps  xmm0, xmm4, 0
0x8F6B01: mulps   xmm0, xmm3
0x8F6B04: addps   xmm6, xmm0
0x8F6B07: movaps  [esp+310h+var_2D0], xmm6
0x8F6B0C: jmp     short loc_8F6B13
0x8F6B0E: movaps  xmm6, [esp+310h+var_2D0]
0x8F6B13: xorps   xmm0, xmm0
0x8F6B16: movaps  xmm3, xmm0
0x8F6B19: minps   xmm3, xmm6
0x8F6B1C: addps   xmm1, xmm3
0x8F6B1F: maxps   xmm0, xmm6
0x8F6B22: movaps  xmm3, xmm1
0x8F6B25: addps   xmm2, xmm0
0x8F6B28: movaps  [esp+310h+var_2FC+0Ch], xmm3
0x8F6B2D: movaps  xmmword ptr [esp+310h+var_2EC+0Ch], xmm2
0x8F6B32: jmp     short loc_8F6B62
0x8F6B34: fld     dword ptr [edi+8]
0x8F6B37: mov     eax, [ebx]
0x8F6B39: fmul    dword ptr ds:0A3D65Ch
0x8F6B3F: lea     edx, [esp+318h+var_250]
0x8F6B46: fstp    [esp+318h+var_318]
0x8F6B49: push    edx
0x8F6B4A: call    dword ptr [eax+0Ch]
0x8F6B4D: movaps  xmm2, xmmword ptr [esp+310h+var_2EC+0Ch]
0x8F6B52: movaps  xmm3, [esp+310h+var_2FC+0Ch]
0x8F6B57: movaps  xmm6, [esp+310h+var_2D0]
0x8F6B5C: movaps  xmm5, xmm2
0x8F6B5F: subps   xmm5, xmm3
0x8F6B62: mov     eax, dword ptr [esp+310h+var_2FC+8]
0x8F6B66: add     eax, 10h
0x8F6B69: jz      loc_8F6C33
0x8F6B6F: movaps  xmm0, xmmword ptr [eax]
0x8F6B72: cmpleps xmm0, xmm3
0x8F6B76: movmskps ecx, xmm0
0x8F6B79: movaps  xmm0, xmmword ptr [eax+10h]
0x8F6B7D: movaps  xmm1, xmm2
0x8F6B80: cmpleps xmm1, xmm0
0x8F6B84: movmskps edx, xmm1
0x8F6B87: and     ecx, edx
0x8F6B89: and     ecx, 7
0x8F6B8C: cmp     cl, 7
0x8F6B8F: jnz     short loc_8F6B9E
0x8F6B91: mov     dword ptr [esp+310h+var_2FC+4], 1
0x8F6B99: jmp     loc_8F6C52
0x8F6B9E: fld     dword ptr [edi+8]
0x8F6BA1: xorps   xmm0, xmm0
0x8F6BA4: fmul    dword ptr ds:0A3D65Ch
0x8F6BAA: fstp    dword ptr [esp+310h+var_2FC]
0x8F6BAE: movss   xmm1, dword ptr [esp+310h+var_2FC]
0x8F6BB4: shufps  xmm1, xmm1, 0
0x8F6BB8: addps   xmm2, xmm1
0x8F6BBB: subps   xmm3, xmm1
0x8F6BBE: movaps  xmm4, xmm2
0x8F6BC1: mov     dword ptr [esp+310h+var_2FC], 0C0000000h
0x8F6BC9: movss   xmm1, dword ptr [esp+310h+var_2FC]
0x8F6BCF: mov     dword ptr [esp+310h+var_2FC], 3ECCCCCDh
0x8F6BD7: movss   xmm2, dword ptr [esp+310h+var_2FC]
0x8F6BDD: movaps  xmm7, xmm2
0x8F6BE0: shufps  xmm7, xmm2, 0
0x8F6BE4: movaps  xmm2, xmm7
0x8F6BE7: mulps   xmm2, xmm5
0x8F6BEA: movaps  xmm5, xmmword ptr ds:0A965C0h
0x8F6BF1: movaps  xmm7, xmm2
0x8F6BF4: xorps   xmm7, xmm5
0x8F6BF7: movaps  xmm5, xmm0
0x8F6BFA: minps   xmm0, [esp+310h+var_2D0]
0x8F6BFF: maxps   xmm5, xmm6
0x8F6C02: movaps  xmm6, xmm1
0x8F6C05: shufps  xmm6, xmm1, 0
0x8F6C09: mulps   xmm6, xmm5
0x8F6C0C: movaps  xmm5, xmm1
0x8F6C0F: shufps  xmm5, xmm1, 0
0x8F6C13: mulps   xmm5, xmm0
0x8F6C16: maxps   xmm6, xmm7
0x8F6C19: addps   xmm3, xmm6
0x8F6C1C: minps   xmm5, xmm2
0x8F6C1F: addps   xmm4, xmm5
0x8F6C22: movaps  [esp+310h+var_2FC+0Ch], xmm3
0x8F6C27: movaps  xmmword ptr [esp+310h+var_2EC+0Ch], xmm4
0x8F6C2C: movaps  xmmword ptr [eax], xmm3
0x8F6C2F: movaps  xmmword ptr [eax+10h], xmm4
0x8F6C33: mov     eax, [ebp+arg_4]
0x8F6C36: mov     ecx, [eax]
0x8F6C38: mov     edx, [ecx]
0x8F6C3A: lea     eax, [esp+310h+var_210]
0x8F6C41: push    eax
0x8F6C42: lea     eax, [esp+314h+var_2FC+0Ch]
0x8F6C46: push    eax
0x8F6C47: call    dword ptr [edx+24h]
0x8F6C4A: mov     dword ptr [esp+310h+var_2FC+4], 0
0x8F6C52: mov     ebx, large fs:2Ch
0x8F6C59: mov     edi, ds:0BA9DE4h
0x8F6C5F: mov     eax, [ebx+edi*4]
0x8F6C62: mov     ecx, [eax+1A4h]
0x8F6C68: cmp     ecx, [eax+1A8h]
0x8F6C6E: jnb     short loc_8F6C94
0x8F6C70: mov     esi, eax
0x8F6C72: mov     ecx, [esi+1A4h]
0x8F6C78: mov     dword ptr [ecx], offset aStnarrow; "StNarrow"
0x8F6C7E: rdtsc
0x8F6C80: mov     dword ptr [esp+310h+var_2FC], eax
0x8F6C84: mov     edx, dword ptr [esp+310h+var_2FC]
0x8F6C88: mov     [ecx+4], edx
0x8F6C8B: add     ecx, 0Ch
0x8F6C8E: mov     [esi+1A4h], ecx
0x8F6C94: mov     eax, dword ptr [esp+310h+var_2FC+4]
0x8F6C98: test    eax, eax
0x8F6C9A: jnz     loc_8F6D89
0x8F6CA0: mov     edi, [esp+310h+var_20C]
0x8F6CA7: mov     ecx, dword ptr [esp+310h+var_2FC+8]
0x8F6CAB: mov     esi, ds:0BA7D98h
0x8F6CB1: mov     eax, edi
0x8F6CB3: cdq
0x8F6CB4: and     edx, 3
0x8F6CB7: add     eax, edx
0x8F6CB9: mov     edx, [ecx+34h]
0x8F6CBC: mov     ecx, [esi+28h]
0x8F6CBF: sar     eax, 2
0x8F6CC2: sub     eax, edx
0x8F6CC4: mov     edx, [esi+14h]
0x8F6CC7: inc     eax
0x8F6CC8: add     ecx, edx
0x8F6CCA: mov     edx, [esi+8]
0x8F6CCD: shl     eax, 9
0x8F6CD0: cmp     edx, ecx
0x8F6CD2: jg      short loc_8F6CD8
0x8F6CD4: xor     edx, edx
0x8F6CD6: jmp     short loc_8F6CDA
0x8F6CD8: sub     edx, ecx
0x8F6CDA: cmp     eax, edx
0x8F6CDC: jle     short loc_8F6D2F
0x8F6CDE: mov     dword ptr [esi+4], 1
0x8F6CE5: mov     edx, [esp+310h+var_208]
0x8F6CEC: test    edx, edx
0x8F6CEE: js      loc_8F6E1E
0x8F6CF4: mov     eax, ds:0BA9DE4h
0x8F6CF9: mov     ecx, [ebx+eax*4]
0x8F6CFC: mov     eax, [ecx+19Ch]
0x8F6D02: test    eax, eax
0x8F6D04: jnz     short loc_8F6D0B
0x8F6D06: mov     eax, ds:0BA7D9Ch
0x8F6D0B: and     edx, 3FFFFFFFh
0x8F6D11: push    14h
0x8F6D13: shl     edx, 2
0x8F6D16: push    edx
0x8F6D17: mov     edx, [esp+318h+var_210]
0x8F6D1E: push    edx
0x8F6D1F: mov     ecx, eax
0x8F6D21: call    sub_8A75D0
0x8F6D26: pop     edi
0x8F6D27: pop     esi
0x8F6D28: pop     ebx
0x8F6D29: mov     esp, ebp
0x8F6D2B: pop     ebp
0x8F6D2C: retn    10h
0x8F6D2F: cmp     edi, 1
0x8F6D32: mov     byte ptr [esp+310h+var_2FC], 0
0x8F6D37: jle     short loc_8F6D59
0x8F6D39: mov     eax, dword ptr [esp+310h+var_2FC]
0x8F6D3D: mov     ecx, [esp+310h+var_210]
0x8F6D44: push    eax
0x8F6D45: dec     edi
0x8F6D46: push    edi
0x8F6D47: push    0
0x8F6D49: push    ecx
0x8F6D4A: call    sub_8F6580
0x8F6D4F: mov     edi, [esp+320h+var_20C]
0x8F6D56: add     esp, 10h
0x8F6D59: mov     edx, [ebp+arg_C]
0x8F6D5C: mov     eax, [esp+310h+var_210]
0x8F6D63: mov     ecx, [ebp+arg_4]
0x8F6D66: push    edx
0x8F6D67: mov     edx, [ecx]
0x8F6D69: push    edi
0x8F6D6A: push    eax
0x8F6D6B: mov     eax, [edx+0Ch]
0x8F6D6E: mov     edx, dword ptr [esp+31Ch+var_2FC+8]
0x8F6D72: push    eax
0x8F6D73: lea     ecx, [esp+320h+var_2C0]
0x8F6D77: push    ecx
0x8F6D78: add     edx, 30h ; '0'
0x8F6D7B: push    edx
0x8F6D7C: call    sub_934DC0
0x8F6D81: mov     edi, ds:0BA9DE4h
0x8F6D87: jmp     short loc_8F6DAC
0x8F6D89: mov     eax, [ebp+arg_C]
0x8F6D8C: mov     ecx, [ebp+arg_4]
0x8F6D8F: mov     edx, [ecx]
0x8F6D91: push    eax
0x8F6D92: mov     eax, [edx+0Ch]
0x8F6D95: mov     edx, dword ptr [esp+314h+var_2FC+8]
0x8F6D99: push    0
0x8F6D9B: push    0
0x8F6D9D: push    eax
0x8F6D9E: lea     ecx, [esp+320h+var_2C0]
0x8F6DA2: push    ecx
0x8F6DA3: add     edx, 30h ; '0'
0x8F6DA6: push    edx
0x8F6DA7: call    sub_934DC0
0x8F6DAC: mov     eax, [ebx+edi*4]
0x8F6DAF: mov     ecx, [eax+1A4h]
0x8F6DB5: mov     edx, [eax+1A8h]
0x8F6DBB: add     esp, 18h
0x8F6DBE: cmp     ecx, edx
0x8F6DC0: jnb     short loc_8F6DE6
0x8F6DC2: mov     esi, eax
0x8F6DC4: mov     ecx, [esi+1A4h]
0x8F6DCA: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8F6DD0: rdtsc
0x8F6DD2: mov     dword ptr [esp+310h+var_2FC], eax
0x8F6DD6: mov     edx, dword ptr [esp+310h+var_2FC]
0x8F6DDA: mov     [ecx+4], edx
0x8F6DDD: add     ecx, 0Ch
0x8F6DE0: mov     [esi+1A4h], ecx
0x8F6DE6: mov     edx, [esp+310h+var_208]
0x8F6DED: test    edx, edx
0x8F6DEF: js      short loc_8F6E1E
0x8F6DF1: mov     eax, [ebx+edi*4]
0x8F6DF4: mov     eax, [eax+19Ch]
0x8F6DFA: test    eax, eax
0x8F6DFC: jnz     short loc_8F6E03
0x8F6DFE: mov     eax, ds:0BA7D9Ch
0x8F6E03: mov     ecx, [esp+310h+var_210]
0x8F6E0A: and     edx, 3FFFFFFFh
0x8F6E10: push    14h
0x8F6E12: shl     edx, 2
0x8F6E15: push    edx
0x8F6E16: push    ecx
0x8F6E17: mov     ecx, eax
0x8F6E19: call    sub_8A75D0
0x8F6E1E: pop     edi
0x8F6E1F: pop     esi
0x8F6E20: pop     ebx
0x8F6E21: mov     esp, ebp
0x8F6E23: pop     ebp
0x8F6E24: retn    10h

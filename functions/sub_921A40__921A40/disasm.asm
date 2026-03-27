0x921A40: push    ebp
0x921A41: mov     ebp, esp
0x921A43: and     esp, 0FFFFFFF0h
0x921A46: sub     esp, 104h
0x921A4C: mov     al, ds:0BA84F8h
0x921A51: test    al, al
0x921A53: push    ebx
0x921A54: push    esi
0x921A55: push    edi
0x921A56: jnz     short loc_921A74
0x921A58: push    0
0x921A5A: call    sub_9246E0
0x921A5F: add     esp, 4
0x921A62: test    al, al
0x921A64: mov     ds:0BA84F8h, al
0x921A69: jnz     short loc_921A74
0x921A6B: xor     eax, eax
0x921A6D: pop     edi
0x921A6E: pop     esi
0x921A6F: pop     ebx
0x921A70: mov     esp, ebp
0x921A72: pop     ebp
0x921A73: retn
0x921A74: mov     eax, [ebp+arg_0]
0x921A77: mov     ecx, [eax+0FCh]
0x921A7D: test    ecx, ecx
0x921A7F: mov     [esp+110h+var_E0], 0
0x921A87: jle     loc_92386D
0x921A8D: lea     ecx, [ecx+0]
0x921A90: mov     eax, [ebp+arg_8]
0x921A93: mov     edx, [ebp+arg_0]
0x921A96: movzx   ecx, byte ptr [eax]
0x921A99: sub     ecx, 0
0x921A9C: jz      short loc_921AB0
0x921A9E: dec     ecx
0x921A9F: jz      short loc_921AA7
0x921AA1: dec     ecx
0x921AA2: jz      short loc_921AD0
0x921AA4: int     3; Trap to Debugger
0x921AA5: jmp     short loc_921A96
0x921AA7: add     eax, 80h ; '€'
0x921AAC: jmp     short loc_921A96
0x921AAE: align 10h
0x921AB0: movaps  xmm1, xmmword ptr [eax+10h]
0x921AB4: movaps  xmm0, xmmword ptr [edx+10h]
0x921AB8: addps   xmm1, xmm0
0x921ABB: movaps  xmmword ptr [eax+10h], xmm1
0x921ABF: mov     cl, [eax+80h]
0x921AC5: add     eax, 80h ; '€'
0x921ACA: test    cl, cl
0x921ACC: jz      short loc_921AB0
0x921ACE: jmp     short loc_921A96
0x921AD0: mov     ecx, [edx+4]
0x921AD3: mov     edx, [edx+8]
0x921AD6: mov     ebx, [ebp+arg_4]
0x921AD9: mov     edi, [ebp+arg_C]
0x921ADC: mov     [esp+110h+var_D8], ecx
0x921AE0: mov     [esp+110h+var_D4], edx
0x921AE4: mov     edx, [ebx+0Ch]; jumptable 00921B0F case 1
0x921AE7: mov     eax, [ebx+10h]
0x921AEA: mov     esi, [ebx+4]
0x921AED: mov     [esp+110h+var_E4], edx
0x921AF1: mov     [esp+110h+var_FC], eax
0x921AF5: add     ebx, 18h
0x921AF8: jmp     short loc_921B00
0x921AFA: align 10h
0x921B00: lea     ecx, [esi+50h]
0x921B03: movsx   eax, byte ptr [ebx]
0x921B06: cmp     eax, 10h; switch 17 cases
0x921B09: ja      def_921B0F; jumptable 00921B0F default case
0x921B0F: jmp     ds:jpt_921B0F[eax*4]; switch jump
0x921B16: mov     eax, [esp+110h+var_FC]; jumptable 00921B0F case 3
0x921B1A: fld     dword ptr [ecx-44h]
0x921B1D: movaps  xmm0, xmmword ptr [eax+10h]
0x921B21: movaps  xmm3, xmmword ptr [eax+20h]
0x921B25: movaps  xmm1, xmmword ptr [edx+10h]
0x921B29: movaps  xmm2, xmmword ptr [ecx-40h]
0x921B2D: movaps  xmm4, xmmword ptr [esi]
0x921B30: subps   xmm1, xmm0
0x921B33: movaps  xmm0, xmmword ptr [edx+20h]
0x921B37: mulps   xmm0, xmm2
0x921B3A: movaps  xmm2, xmmword ptr [ecx-30h]
0x921B3E: mulps   xmm3, xmm2
0x921B41: mulps   xmm1, xmm4
0x921B44: addps   xmm0, xmm3
0x921B47: addps   xmm0, xmm1
0x921B4A: movaps  xmm1, xmm0
0x921B4D: shufps  xmm1, xmm0, 55h ; 'U'
0x921B51: addss   xmm1, xmm0
0x921B55: movaps  xmm2, xmm0
0x921B58: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x921B5C: addss   xmm2, xmm1
0x921B60: lea     eax, [esp+110h+var_40]
0x921B67: movss   dword ptr [eax], xmm2
0x921B6B: mov     eax, [esp+110h+var_FC]
0x921B6F: movaps  xmm0, xmmword ptr [eax+10h]
0x921B73: movaps  xmm1, xmmword ptr [edx+10h]
0x921B77: movaps  xmm2, xmmword ptr [ecx-10h]
0x921B7B: movaps  xmm3, xmmword ptr [ecx]
0x921B7E: subps   xmm1, xmm0
0x921B81: movaps  xmm0, xmmword ptr [edx+20h]
0x921B85: mulps   xmm0, xmm2
0x921B88: movaps  xmm2, xmmword ptr [eax+20h]
0x921B8C: mulps   xmm2, xmm3
0x921B8F: movaps  xmm3, xmmword ptr [ecx-20h]
0x921B93: mulps   xmm1, xmm3
0x921B96: addps   xmm0, xmm2
0x921B99: addps   xmm0, xmm1
0x921B9C: movaps  xmm1, xmm0
0x921B9F: shufps  xmm1, xmm0, 55h ; 'U'
0x921BA3: movaps  xmm2, xmm0
0x921BA6: lea     eax, [esp+110h+var_C0]
0x921BAA: addss   xmm1, xmm0
0x921BAE: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x921BB2: addss   xmm2, xmm1
0x921BB6: movss   dword ptr [eax], xmm2
0x921BBA: mov     eax, [ebp+arg_0]
0x921BBD: fmul    dword ptr [eax+4]
0x921BC0: fld     [esp+110h+var_40]
0x921BC7: fmul    dword ptr [eax+8]
0x921BCA: fsubp   st(1), st
0x921BCC: fld     dword ptr [ecx-14h]
0x921BCF: fmul    dword ptr [eax+4]
0x921BD2: fld     [esp+110h+var_C0]
0x921BD6: fmul    dword ptr [eax+8]
0x921BD9: fsubp   st(1), st
0x921BDB: fld     dword ptr [ecx-24h]
0x921BDE: fld     st(1)
0x921BE0: fmul    dword ptr [ebx+4]
0x921BE3: fxch    st(1)
0x921BE5: fmul    st, st(3)
0x921BE7: faddp   st(1), st
0x921BE9: fstp    [esp+110h+var_E8]
0x921BED: fld     dword ptr [ecx+0Ch]
0x921BF0: fmul    st, st(1)
0x921BF2: fld     st(2)
0x921BF4: fmul    dword ptr [ebx+4]
0x921BF7: faddp   st(1), st
0x921BF9: fstp    [esp+110h+var_F8]
0x921BFD: fxch    st(1)
0x921BFF: fmul    dword ptr [ecx-34h]
0x921C02: fstp    [esp+110h+var_F0]
0x921C06: fmul    dword ptr [ecx-4]
0x921C09: fstp    [esp+110h+var_EC]
0x921C0D: fld     [esp+110h+var_E8]
0x921C11: fcomp   dword ptr ds:0A2FAA8h
0x921C17: fnstsw  ax
0x921C19: test    ah, 41h
0x921C1C: jnz     loc_921CDD
0x921C22: fld     [esp+110h+var_F8]
0x921C26: fcomp   dword ptr ds:0A2FAA8h
0x921C2C: fnstsw  ax
0x921C2E: test    ah, 41h
0x921C31: jnz     loc_921CF2
0x921C37: mov     eax, [esp+110h+var_E8]
0x921C3B: fld     [esp+110h+var_E8]
0x921C3F: movaps  xmm2, xmmword ptr [edx+30h]
0x921C43: mov     [esp+110h+var_60], eax
0x921C4A: movss   xmm1, [esp+110h+var_60]
0x921C53: mov     eax, [esp+110h+var_FC]
0x921C57: movaps  xmm0, xmm1
0x921C5A: shufps  xmm0, xmm1, 0
0x921C5E: mulps   xmm0, xmm2
0x921C61: movaps  xmm2, xmmword ptr [eax+30h]
0x921C65: mov     eax, [esp+110h+var_FC]
0x921C69: shufps  xmm1, xmm1, 0
0x921C6D: mulps   xmm1, xmm2
0x921C70: movaps  xmm2, xmm0
0x921C73: shufps  xmm2, xmm0, 0FFh
0x921C77: mulps   xmm2, xmm4
0x921C7A: movaps  xmm3, xmm1
0x921C7D: shufps  xmm3, xmm1, 0FFh
0x921C81: mulps   xmm3, xmm4
0x921C84: movaps  xmm4, xmmword ptr [edx+10h]
0x921C88: addps   xmm4, xmm2
0x921C8B: movaps  xmmword ptr [edx+10h], xmm4
0x921C8F: movaps  xmm2, xmmword ptr [eax+10h]
0x921C93: subps   xmm2, xmm3
0x921C96: movaps  xmmword ptr [eax+10h], xmm2
0x921C9A: movaps  xmm2, xmmword ptr [ecx-40h]
0x921C9E: mov     eax, [esp+110h+var_FC]
0x921CA2: mulps   xmm0, xmm2
0x921CA5: movaps  xmm2, xmmword ptr [ecx-30h]
0x921CA9: mulps   xmm1, xmm2
0x921CAC: movaps  xmm2, xmmword ptr [edx+20h]
0x921CB0: addps   xmm2, xmm0
0x921CB3: movaps  xmmword ptr [edx+20h], xmm2
0x921CB7: movaps  xmm0, xmmword ptr [eax+20h]
0x921CBB: addps   xmm0, xmm1
0x921CBE: movaps  xmmword ptr [eax+20h], xmm0
0x921CC2: fadd    dword ptr [edi]
0x921CC4: mov     eax, [esp+110h+var_F8]
0x921CC8: mov     [esp+110h+var_B8], eax
0x921CCC: movss   xmm1, [esp+110h+var_B8]
0x921CD2: fstp    dword ptr [edi]
0x921CD4: fld     [esp+110h+var_F8]
0x921CD8: jmp     loc_921DAD
0x921CDD: fld     [esp+110h+var_EC]
0x921CE1: fcomp   dword ptr ds:0A2FAA8h
0x921CE7: fnstsw  ax
0x921CE9: test    ah, 41h
0x921CEC: jp      loc_921D9B
0x921CF2: fld     [esp+110h+var_F0]
0x921CF6: fcomp   dword ptr ds:0A2FAA8h
0x921CFC: fnstsw  ax
0x921CFE: test    ah, 41h
0x921D01: jnz     loc_921E29
0x921D07: mov     eax, [esp+110h+var_F0]
0x921D0B: fld     [esp+110h+var_F0]
0x921D0F: movaps  xmm2, xmmword ptr [edx+30h]
0x921D13: mov     [esp+110h+var_30], eax
0x921D1A: movss   xmm1, [esp+110h+var_30]
0x921D23: mov     eax, [esp+110h+var_FC]
0x921D27: movaps  xmm0, xmm1
0x921D2A: shufps  xmm0, xmm1, 0
0x921D2E: mulps   xmm0, xmm2
0x921D31: movaps  xmm2, xmmword ptr [eax+30h]
0x921D35: mov     eax, [esp+110h+var_FC]
0x921D39: shufps  xmm1, xmm1, 0
0x921D3D: mulps   xmm1, xmm2
0x921D40: movaps  xmm2, xmm0
0x921D43: shufps  xmm2, xmm0, 0FFh
0x921D47: mulps   xmm2, xmm4
0x921D4A: movaps  xmm3, xmm1
0x921D4D: shufps  xmm3, xmm1, 0FFh
0x921D51: mulps   xmm3, xmm4
0x921D54: movaps  xmm4, xmmword ptr [edx+10h]
0x921D58: addps   xmm4, xmm2
0x921D5B: movaps  xmmword ptr [edx+10h], xmm4
0x921D5F: movaps  xmm2, xmmword ptr [eax+10h]
0x921D63: subps   xmm2, xmm3
0x921D66: movaps  xmmword ptr [eax+10h], xmm2
0x921D6A: movaps  xmm2, xmmword ptr [ecx-40h]
0x921D6E: mov     eax, [esp+110h+var_FC]
0x921D72: mulps   xmm0, xmm2
0x921D75: movaps  xmm2, xmmword ptr [ecx-30h]
0x921D79: mulps   xmm1, xmm2
0x921D7C: movaps  xmm2, xmmword ptr [edx+20h]
0x921D80: addps   xmm2, xmm0
0x921D83: movaps  xmmword ptr [edx+20h], xmm2
0x921D87: movaps  xmm0, xmmword ptr [eax+20h]
0x921D8B: addps   xmm0, xmm1
0x921D8E: movaps  xmmword ptr [eax+20h], xmm0
0x921D92: fadd    dword ptr [edi]
0x921D94: fstp    dword ptr [edi]
0x921D96: jmp     loc_921E29
0x921D9B: mov     eax, [esp+110h+var_EC]
0x921D9F: fld     [esp+110h+var_EC]
0x921DA3: mov     [esp+110h+var_B0], eax
0x921DA7: movss   xmm1, [esp+110h+var_B0]
0x921DAD: movaps  xmm2, xmmword ptr [edx+30h]
0x921DB1: movaps  xmm4, xmmword ptr [ecx-20h]
0x921DB5: mov     eax, [esp+110h+var_FC]
0x921DB9: movaps  xmm0, xmm1
0x921DBC: shufps  xmm0, xmm1, 0
0x921DC0: mulps   xmm0, xmm2
0x921DC3: movaps  xmm2, xmmword ptr [eax+30h]
0x921DC7: mov     eax, [esp+110h+var_FC]
0x921DCB: shufps  xmm1, xmm1, 0
0x921DCF: mulps   xmm1, xmm2
0x921DD2: movaps  xmm2, xmm0
0x921DD5: shufps  xmm2, xmm0, 0FFh
0x921DD9: mulps   xmm2, xmm4
0x921DDC: movaps  xmm3, xmm1
0x921DDF: shufps  xmm3, xmm1, 0FFh
0x921DE3: mulps   xmm3, xmm4
0x921DE6: movaps  xmm4, xmmword ptr [edx+10h]
0x921DEA: addps   xmm4, xmm2
0x921DED: movaps  xmmword ptr [edx+10h], xmm4
0x921DF1: movaps  xmm2, xmmword ptr [eax+10h]
0x921DF5: subps   xmm2, xmm3
0x921DF8: movaps  xmmword ptr [eax+10h], xmm2
0x921DFC: movaps  xmm2, xmmword ptr [ecx-10h]
0x921E00: mov     eax, [esp+110h+var_FC]
0x921E04: mulps   xmm0, xmm2
0x921E07: movaps  xmm2, xmmword ptr [ecx]
0x921E0A: mulps   xmm1, xmm2
0x921E0D: movaps  xmm2, xmmword ptr [edx+20h]
0x921E11: addps   xmm2, xmm0
0x921E14: movaps  xmmword ptr [edx+20h], xmm2
0x921E18: movaps  xmm0, xmmword ptr [eax+20h]
0x921E1C: addps   xmm0, xmm1
0x921E1F: movaps  xmmword ptr [eax+20h], xmm0
0x921E23: fadd    dword ptr [edi+4]
0x921E26: fstp    dword ptr [edi+4]
0x921E29: mov     al, [ebx+8]
0x921E2C: add     ebx, 8
0x921E2F: add     esi, 60h ; '`'
0x921E32: add     ecx, 60h ; '`'
0x921E35: add     edi, 8
0x921E38: cmp     al, 3
0x921E3A: jnz     loc_921B03
0x921E40: mov     eax, [esp+110h+var_FC]
0x921E44: fld     dword ptr [esi+0Ch]
0x921E47: movaps  xmm0, xmmword ptr [eax+10h]
0x921E4B: movaps  xmm3, xmmword ptr [eax+20h]
0x921E4F: movaps  xmm1, xmmword ptr [edx+10h]
0x921E53: movaps  xmm2, xmmword ptr [esi+10h]
0x921E57: movaps  xmm4, xmmword ptr [esi]
0x921E5A: subps   xmm1, xmm0
0x921E5D: movaps  xmm0, xmmword ptr [edx+20h]
0x921E61: mulps   xmm0, xmm2
0x921E64: movaps  xmm2, xmmword ptr [esi+20h]
0x921E68: lea     ecx, [eax+10h]
0x921E6B: mulps   xmm3, xmm2
0x921E6E: add     eax, 20h ; ' '
0x921E71: mulps   xmm1, xmm4
0x921E74: addps   xmm0, xmm3
0x921E77: addps   xmm0, xmm1
0x921E7A: movaps  xmm1, xmm0
0x921E7D: shufps  xmm1, xmm0, 55h ; 'U'
0x921E81: addss   xmm1, xmm0
0x921E85: movaps  xmm2, xmm0
0x921E88: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x921E8C: addss   xmm2, xmm1
0x921E90: mov     [esp+110h+var_F0], eax
0x921E94: lea     eax, [esp+110h+var_A8]
0x921E98: movss   dword ptr [eax], xmm2
0x921E9C: movaps  xmm0, xmmword ptr [ecx]
0x921E9F: movaps  xmm1, xmmword ptr [edx+10h]
0x921EA3: movaps  xmm2, xmmword ptr [esi+40h]
0x921EA7: mov     eax, [esp+110h+var_F0]
0x921EAB: movaps  xmm3, xmmword ptr [esi+50h]
0x921EAF: subps   xmm1, xmm0
0x921EB2: movaps  xmm0, xmmword ptr [edx+20h]
0x921EB6: mulps   xmm0, xmm2
0x921EB9: movaps  xmm2, xmmword ptr [eax]
0x921EBC: mulps   xmm2, xmm3
0x921EBF: movaps  xmm3, xmmword ptr [esi+30h]
0x921EC3: mulps   xmm1, xmm3
0x921EC6: addps   xmm0, xmm2
0x921EC9: addps   xmm0, xmm1
0x921ECC: movaps  xmm1, xmm0
0x921ECF: shufps  xmm1, xmm0, 55h ; 'U'
0x921ED3: movaps  xmm2, xmm0
0x921ED6: lea     eax, [esp+110h+var_18]
0x921EDD: addss   xmm1, xmm0
0x921EE1: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x921EE5: addss   xmm2, xmm1
0x921EE9: movss   dword ptr [eax], xmm2
0x921EED: mov     eax, [ebp+arg_0]
0x921EF0: fmul    dword ptr [eax+4]
0x921EF3: fld     [esp+110h+var_A8]
0x921EF7: fmul    dword ptr [eax+8]
0x921EFA: fsubp   st(1), st
0x921EFC: fld     dword ptr [esi+3Ch]
0x921EFF: fmul    dword ptr [eax+4]
0x921F02: fld     [esp+110h+var_18]
0x921F09: fmul    dword ptr [eax+8]
0x921F0C: fsubp   st(1), st
0x921F0E: fld     dword ptr [esi+2Ch]
0x921F11: fld     st(1)
0x921F13: fmul    dword ptr [ebx+4]
0x921F16: fxch    st(1)
0x921F18: fmul    st, st(3)
0x921F1A: faddp   st(1), st
0x921F1C: fstp    [esp+110h+var_EC]
0x921F20: fld     dword ptr [esi+5Ch]
0x921F23: fld     st(2)
0x921F25: fmul    dword ptr [ebx+4]
0x921F28: fxch    st(1)
0x921F2A: fmul    st, st(2)
0x921F2C: faddp   st(1), st
0x921F2E: fstp    [esp+110h+var_E8]
0x921F32: fxch    st(1)
0x921F34: fmul    dword ptr [esi+1Ch]
0x921F37: fstp    [esp+110h+var_F8]
0x921F3B: fmul    dword ptr [esi+4Ch]
0x921F3E: fstp    [esp+110h+var_F4]
0x921F42: fld     [esp+110h+var_EC]
0x921F46: fcomp   dword ptr ds:0A2FAA8h
0x921F4C: fnstsw  ax
0x921F4E: test    ah, 41h
0x921F51: jnz     loc_92214F
0x921F57: fld     [esp+110h+var_E8]
0x921F5B: fcomp   dword ptr ds:0A2FAA8h
0x921F61: fnstsw  ax
0x921F63: test    ah, 41h
0x921F66: jnz     loc_922164
0x921F6C: mov     eax, [esp+110h+var_EC]
0x921F70: fld     [esp+110h+var_EC]
0x921F74: movaps  xmm2, xmmword ptr [edx+30h]
0x921F78: mov     [esp+110h+var_A0], eax
0x921F7C: movss   xmm1, [esp+110h+var_A0]
0x921F82: mov     eax, [esp+110h+var_FC]
0x921F86: add     eax, 30h ; '0'
0x921F89: movaps  xmm0, xmm1
0x921F8C: shufps  xmm0, xmm1, 0
0x921F90: mulps   xmm0, xmm2
0x921F93: movaps  xmm2, xmmword ptr [eax]
0x921F96: shufps  xmm1, xmm1, 0
0x921F9A: mulps   xmm1, xmm2
0x921F9D: movaps  xmm2, xmm0
0x921FA0: shufps  xmm2, xmm0, 0FFh
0x921FA4: mulps   xmm2, xmm4
0x921FA7: movaps  xmm3, xmm1
0x921FAA: shufps  xmm3, xmm1, 0FFh
0x921FAE: mulps   xmm3, xmm4
0x921FB1: movaps  xmm4, xmmword ptr [edx+10h]
0x921FB5: addps   xmm4, xmm2
0x921FB8: movaps  xmmword ptr [edx+10h], xmm4
0x921FBC: movaps  xmm2, xmmword ptr [ecx]
0x921FBF: subps   xmm2, xmm3
0x921FC2: movaps  xmmword ptr [ecx], xmm2
0x921FC5: movaps  xmm2, xmmword ptr [esi+10h]
0x921FC9: mulps   xmm0, xmm2
0x921FCC: movaps  xmm2, xmmword ptr [esi+20h]
0x921FD0: mulps   xmm1, xmm2
0x921FD3: movaps  xmm2, xmmword ptr [edx+20h]
0x921FD7: addps   xmm2, xmm0
0x921FDA: mov     [esp+110h+var_F8], eax
0x921FDE: mov     eax, [esp+110h+var_F0]
0x921FE2: movaps  xmmword ptr [edx+20h], xmm2
0x921FE6: movaps  xmm0, xmmword ptr [eax]
0x921FE9: addps   xmm0, xmm1
0x921FEC: movaps  xmmword ptr [eax], xmm0
0x921FEF: fadd    dword ptr [edi]
0x921FF1: lea     eax, [esi+30h]
0x921FF4: mov     [esp+110h+var_F4], eax
0x921FF8: mov     eax, [esp+110h+var_E8]
0x921FFC: fstp    dword ptr [edi]
0x921FFE: movaps  xmm2, xmmword ptr [edx+30h]
0x922002: fld     [esp+110h+var_E8]
0x922006: mov     [esp+110h+var_50], eax
0x92200D: movss   xmm1, [esp+110h+var_50]
0x922016: mov     eax, [esp+110h+var_F8]
0x92201A: movaps  xmm0, xmm1
0x92201D: shufps  xmm0, xmm1, 0
0x922021: mulps   xmm0, xmm2
0x922024: movaps  xmm2, xmmword ptr [eax]
0x922027: mov     eax, [esp+110h+var_F4]
0x92202B: jmp     loc_922238
0x922030: mov     eax, [esp+110h+var_FC]; jumptable 00921B0F case 2
0x922034: lea     ecx, [eax+10h]
0x922037: add     eax, 20h ; ' '
0x92203A: mov     [esp+110h+var_F0], eax
0x92203E: mov     edi, edi
0x922040: movaps  xmm0, xmmword ptr [ecx]
0x922043: fld     dword ptr [esi+0Ch]
0x922046: movaps  xmm1, xmmword ptr [edx+10h]
0x92204A: movaps  xmm2, xmmword ptr [esi+10h]
0x92204E: mov     eax, [esp+110h+var_F0]
0x922052: movaps  xmm3, xmmword ptr [eax]
0x922055: movaps  xmm4, xmmword ptr [esi]
0x922058: subps   xmm1, xmm0
0x92205B: movaps  xmm0, xmmword ptr [edx+20h]
0x92205F: mulps   xmm0, xmm2
0x922062: movaps  xmm2, xmmword ptr [esi+20h]
0x922066: mulps   xmm3, xmm2
0x922069: mulps   xmm1, xmm4
0x92206C: addps   xmm0, xmm3
0x92206F: addps   xmm0, xmm1
0x922072: movaps  xmm1, xmm0
0x922075: shufps  xmm1, xmm0, 55h ; 'U'
0x922079: movaps  xmm2, xmm0
0x92207C: lea     eax, [esp+110h+var_58]
0x922083: addss   xmm1, xmm0
0x922087: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92208B: addss   xmm2, xmm1
0x92208F: movss   dword ptr [eax], xmm2
0x922093: mov     eax, [ebp+arg_0]
0x922096: fmul    dword ptr [eax+4]
0x922099: fld     [esp+110h+var_58]
0x9220A0: fmul    dword ptr [eax+8]
0x9220A3: fsubp   st(1), st
0x9220A5: fcom    dword ptr ds:0A2FAA8h
0x9220AB: fnstsw  ax
0x9220AD: test    ah, 41h
0x9220B0: jnz     loc_922134
0x9220B6: fmul    dword ptr [esi+1Ch]
0x9220B9: movaps  xmm2, xmmword ptr [edx+30h]
0x9220BD: mov     eax, [esp+110h+var_FC]
0x9220C1: fst     [esp+110h+var_F4]
0x9220C5: movss   xmm1, [esp+110h+var_F4]
0x9220CB: movaps  xmm0, xmm1
0x9220CE: shufps  xmm0, xmm1, 0
0x9220D2: mulps   xmm0, xmm2
0x9220D5: movaps  xmm2, xmmword ptr [eax+30h]
0x9220D9: mov     eax, [esp+110h+var_F0]
0x9220DD: shufps  xmm1, xmm1, 0
0x9220E1: mulps   xmm1, xmm2
0x9220E4: movaps  xmm2, xmm0
0x9220E7: shufps  xmm2, xmm0, 0FFh
0x9220EB: mulps   xmm2, xmm4
0x9220EE: movaps  xmm3, xmm1
0x9220F1: shufps  xmm3, xmm1, 0FFh
0x9220F5: mulps   xmm3, xmm4
0x9220F8: movaps  xmm4, xmmword ptr [edx+10h]
0x9220FC: addps   xmm4, xmm2
0x9220FF: movaps  xmmword ptr [edx+10h], xmm4
0x922103: movaps  xmm2, xmmword ptr [ecx]
0x922106: subps   xmm2, xmm3
0x922109: movaps  xmmword ptr [ecx], xmm2
0x92210C: movaps  xmm2, xmmword ptr [esi+10h]
0x922110: mulps   xmm0, xmm2
0x922113: movaps  xmm2, xmmword ptr [esi+20h]
0x922117: mulps   xmm1, xmm2
0x92211A: movaps  xmm2, xmmword ptr [edx+20h]
0x92211E: addps   xmm2, xmm0
0x922121: movaps  xmmword ptr [edx+20h], xmm2
0x922125: movaps  xmm0, xmmword ptr [eax]
0x922128: addps   xmm0, xmm1
0x92212B: movaps  xmmword ptr [eax], xmm0
0x92212E: fadd    dword ptr [edi]
0x922130: fstp    dword ptr [edi]
0x922132: jmp     short loc_922136
0x922134: fstp    st
0x922136: mov     al, [ebx+4]
0x922139: add     ebx, 4
0x92213C: add     esi, 30h ; '0'
0x92213F: add     edi, 4
0x922142: cmp     al, 2
0x922144: jz      loc_922040
0x92214A: jmp     loc_921B00
0x92214F: fld     [esp+110h+var_F4]
0x922153: fcomp   dword ptr ds:0A2FAA8h
0x922159: fnstsw  ax
0x92215B: test    ah, 41h
0x92215E: jp      loc_9221FF
0x922164: fld     [esp+110h+var_F8]
0x922168: fcomp   dword ptr ds:0A2FAA8h
0x92216E: fnstsw  ax
0x922170: test    ah, 41h
0x922173: jnz     loc_922296
0x922179: mov     eax, [esp+110h+var_F8]
0x92217D: fld     [esp+110h+var_F8]
0x922181: movaps  xmm2, xmmword ptr [edx+30h]
0x922185: mov     [esp+110h+var_98], eax
0x922189: movss   xmm1, [esp+110h+var_98]
0x92218F: mov     eax, [esp+110h+var_FC]
0x922193: movaps  xmm0, xmm1
0x922196: shufps  xmm0, xmm1, 0
0x92219A: mulps   xmm0, xmm2
0x92219D: movaps  xmm2, xmmword ptr [eax+30h]
0x9221A1: mov     eax, [esp+110h+var_F0]
0x9221A5: shufps  xmm1, xmm1, 0
0x9221A9: mulps   xmm1, xmm2
0x9221AC: movaps  xmm2, xmm0
0x9221AF: shufps  xmm2, xmm0, 0FFh
0x9221B3: mulps   xmm2, xmm4
0x9221B6: movaps  xmm3, xmm1
0x9221B9: shufps  xmm3, xmm1, 0FFh
0x9221BD: mulps   xmm3, xmm4
0x9221C0: movaps  xmm4, xmmword ptr [edx+10h]
0x9221C4: addps   xmm4, xmm2
0x9221C7: movaps  xmmword ptr [edx+10h], xmm4
0x9221CB: movaps  xmm2, xmmword ptr [ecx]
0x9221CE: subps   xmm2, xmm3
0x9221D1: movaps  xmmword ptr [ecx], xmm2
0x9221D4: movaps  xmm2, xmmword ptr [esi+10h]
0x9221D8: mulps   xmm0, xmm2
0x9221DB: movaps  xmm2, xmmword ptr [esi+20h]
0x9221DF: mulps   xmm1, xmm2
0x9221E2: movaps  xmm2, xmmword ptr [edx+20h]
0x9221E6: addps   xmm2, xmm0
0x9221E9: movaps  xmmword ptr [edx+20h], xmm2
0x9221ED: movaps  xmm0, xmmword ptr [eax]
0x9221F0: addps   xmm0, xmm1
0x9221F3: movaps  xmmword ptr [eax], xmm0
0x9221F6: fadd    dword ptr [edi]
0x9221F8: fstp    dword ptr [edi]
0x9221FA: jmp     loc_922296
0x9221FF: movaps  xmm2, xmmword ptr [edx+30h]
0x922203: fld     [esp+110h+var_F4]
0x922207: lea     eax, [esi+30h]
0x92220A: mov     [esp+110h+var_EC], eax
0x92220E: mov     eax, [esp+110h+var_F4]
0x922212: mov     [esp+110h+var_28], eax
0x922219: movss   xmm1, [esp+110h+var_28]
0x922222: mov     eax, [esp+110h+var_FC]
0x922226: movaps  xmm0, xmm1
0x922229: shufps  xmm0, xmm1, 0
0x92222D: mulps   xmm0, xmm2
0x922230: movaps  xmm2, xmmword ptr [eax+30h]
0x922234: mov     eax, [esp+110h+var_EC]
0x922238: movaps  xmm4, xmmword ptr [eax]
0x92223B: shufps  xmm1, xmm1, 0
0x92223F: mulps   xmm1, xmm2
0x922242: movaps  xmm2, xmm0
0x922245: shufps  xmm2, xmm0, 0FFh
0x922249: mulps   xmm2, xmm4
0x92224C: movaps  xmm3, xmm1
0x92224F: shufps  xmm3, xmm1, 0FFh
0x922253: mulps   xmm3, xmm4
0x922256: movaps  xmm4, xmmword ptr [edx+10h]
0x92225A: addps   xmm4, xmm2
0x92225D: movaps  xmmword ptr [edx+10h], xmm4
0x922261: movaps  xmm2, xmmword ptr [ecx]
0x922264: subps   xmm2, xmm3
0x922267: movaps  xmmword ptr [ecx], xmm2
0x92226A: movaps  xmm2, xmmword ptr [eax+10h]
0x92226E: mulps   xmm0, xmm2
0x922271: movaps  xmm2, xmmword ptr [eax+20h]
0x922275: mov     eax, [esp+110h+var_F0]
0x922279: mulps   xmm1, xmm2
0x92227C: movaps  xmm2, xmmword ptr [edx+20h]
0x922280: addps   xmm2, xmm0
0x922283: movaps  xmmword ptr [edx+20h], xmm2
0x922287: movaps  xmm0, xmmword ptr [eax]
0x92228A: addps   xmm0, xmm1
0x92228D: movaps  xmmword ptr [eax], xmm0
0x922290: fadd    dword ptr [edi+4]
0x922293: fstp    dword ptr [edi+4]
0x922296: mov     al, [ebx+8]
0x922299: add     ebx, 8
0x92229C: add     esi, 60h ; '`'
0x92229F: add     edi, 8
0x9222A2: cmp     al, 8
0x9222A4: jnz     loc_921B00
0x9222AA: mov     ecx, [esp+110h+var_FC]; jumptable 00921B0F case 8
0x9222AE: fld     dword ptr [esi+6Ch]
0x9222B1: movaps  xmm0, xmmword ptr [ecx+10h]
0x9222B5: fld     dword ptr [esi+7Ch]
0x9222B8: movaps  xmm1, xmmword ptr [edx+10h]
0x9222BC: movaps  xmm2, xmmword ptr [esi+10h]
0x9222C0: movaps  xmm3, xmmword ptr [ecx+20h]
0x9222C4: subps   xmm1, xmm0
0x9222C7: movaps  xmm0, xmmword ptr [edx+20h]
0x9222CB: mulps   xmm0, xmm2
0x9222CE: movaps  xmm2, xmmword ptr [esi]
0x9222D1: mulps   xmm1, xmm2
0x9222D4: movaps  xmm2, xmmword ptr [esi+20h]
0x9222D8: mulps   xmm3, xmm2
0x9222DB: lea     eax, [ecx+10h]
0x9222DE: addps   xmm0, xmm3
0x9222E1: addps   xmm0, xmm1
0x9222E4: add     ecx, 20h ; ' '
0x9222E7: movaps  xmm1, xmm0
0x9222EA: shufps  xmm1, xmm0, 55h ; 'U'
0x9222EE: addss   xmm1, xmm0
0x9222F2: movaps  xmm2, xmm0
0x9222F5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9222F9: addss   xmm2, xmm1
0x9222FD: mov     [esp+110h+var_E8], eax
0x922301: lea     eax, [esp+110h+var_48]
0x922308: movss   dword ptr [eax], xmm2
0x92230C: mov     eax, [esp+110h+var_E8]
0x922310: movaps  xmm0, xmmword ptr [eax]
0x922313: movaps  xmm1, xmmword ptr [edx+10h]
0x922317: movaps  xmm2, xmmword ptr [esi+40h]
0x92231B: movaps  xmm3, xmmword ptr [esi+50h]
0x92231F: subps   xmm1, xmm0
0x922322: movaps  xmm0, xmmword ptr [edx+20h]
0x922326: mulps   xmm0, xmm2
0x922329: movaps  xmm2, xmmword ptr [ecx]
0x92232C: mulps   xmm2, xmm3
0x92232F: movaps  xmm3, xmmword ptr [esi+30h]
0x922333: addps   xmm0, xmm2
0x922336: mulps   xmm1, xmm3
0x922339: addps   xmm0, xmm1
0x92233C: movaps  xmm1, xmm0
0x92233F: shufps  xmm1, xmm0, 55h ; 'U'
0x922343: addss   xmm1, xmm0
0x922347: movaps  xmm2, xmm0
0x92234A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92234E: addss   xmm2, xmm1
0x922352: lea     eax, [esp+110h+var_88]
0x922359: movss   dword ptr [eax], xmm2
0x92235D: movaps  xmm1, xmmword ptr [esi+60h]
0x922361: movaps  xmm0, xmmword ptr [edx+20h]
0x922365: movaps  xmm2, xmmword ptr [ecx]
0x922368: mulps   xmm0, xmm1
0x92236B: movaps  xmm1, xmmword ptr [esi+70h]
0x92236F: mulps   xmm2, xmm1
0x922372: addps   xmm0, xmm2
0x922375: movaps  xmm1, xmm0
0x922378: shufps  xmm1, xmm0, 55h ; 'U'
0x92237C: movaps  xmm2, xmm0
0x92237F: lea     eax, [esp+110h+var_90]
0x922386: addss   xmm1, xmm0
0x92238A: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92238E: addss   xmm2, xmm1
0x922392: movss   dword ptr [eax], xmm2
0x922396: mov     eax, [ebp+arg_0]
0x922399: fmul    dword ptr [eax+0Ch]
0x92239C: fld     [esp+110h+var_90]
0x9223A3: fmul    dword ptr [eax+8]
0x9223A6: fsubp   st(1), st
0x9223A8: fmul    st, st(1)
0x9223AA: fstp    [esp+110h+var_F0]
0x9223AE: fstp    st
0x9223B0: fld     dword ptr [esi+0Ch]
0x9223B3: fmul    dword ptr [eax+0Ch]
0x9223B6: fld     [esp+110h+var_48]
0x9223BD: fmul    dword ptr [eax+8]
0x9223C0: fsubp   st(1), st
0x9223C2: fstp    [esp+110h+var_EC]
0x9223C6: fld     dword ptr [esi+3Ch]
0x9223C9: fmul    dword ptr [eax+0Ch]
0x9223CC: fld     [esp+110h+var_88]
0x9223D3: fmul    dword ptr [eax+8]
0x9223D6: mov     eax, [ebx+0Ch]
0x9223D9: mov     [esp+110h+var_DC], eax
0x9223DD: fsubp   st(1), st
0x9223DF: fstp    [esp+110h+var_F4]
0x9223E3: fld     [esp+110h+var_EC]
0x9223E7: fmul    dword ptr [esi+2Ch]
0x9223EA: fld     [esp+110h+var_F4]
0x9223EE: fmul    dword ptr [ebx+8]
0x9223F1: faddp   st(1), st
0x9223F3: fld     [esp+110h+var_F4]
0x9223F7: fmul    dword ptr [esi+5Ch]
0x9223FA: fld     [esp+110h+var_EC]
0x9223FE: fmul    dword ptr [ebx+8]
0x922401: faddp   st(1), st
0x922403: fld     [esp+110h+var_F0]
0x922407: fld     st
0x922409: fmul    st, st(1)
0x92240B: fld     st(2)
0x92240D: fmul    st, st(3)
0x92240F: faddp   st(1), st
0x922411: fld     st(3)
0x922413: fmul    st, st(4)
0x922415: faddp   st(1), st
0x922417: fld     [esp+110h+var_DC]
0x92241B: fmul    [esp+110h+var_DC]
0x92241F: fld     st(1)
0x922421: fcompp
0x922423: fnstsw  ax
0x922425: test    ah, 41h
0x922428: jnz     short loc_922455
0x92242A: fsqrt
0x92242C: fdivr   dword ptr [ebx+0Ch]
0x92242F: fld     st
0x922431: fmulp   st(4), st
0x922433: fld     st
0x922435: fmulp   st(3), st
0x922437: fxch    st(1)
0x922439: fmul    st, st(1)
0x92243B: fxch    st(1)
0x92243D: fld     st
0x92243F: fmul    dword ptr [esi+0Ch]
0x922442: fstp    dword ptr [esi+0Ch]
0x922445: fld     st
0x922447: fmul    dword ptr [esi+3Ch]
0x92244A: fstp    dword ptr [esi+3Ch]
0x92244D: fmul    dword ptr [esi+7Ch]
0x922450: fstp    dword ptr [esi+7Ch]
0x922453: jmp     short loc_922457
0x922455: fstp    st
0x922457: fmul    dword ptr [ebx+14h]
0x92245A: movaps  xmm2, xmmword ptr [edx+30h]
0x92245E: movaps  xmm4, xmmword ptr [esi]
0x922461: mov     eax, [esp+110h+var_FC]
0x922465: fstp    [esp+110h+var_F0]
0x922469: add     eax, 30h ; '0'
0x92246C: fld     st(1)
0x92246E: mov     [esp+110h+var_F8], eax
0x922472: fstp    [esp+110h+var_F4]
0x922476: movss   xmm1, [esp+110h+var_F4]
0x92247C: fxch    st(1)
0x92247E: movaps  xmm0, xmm1
0x922481: shufps  xmm0, xmm1, 0
0x922485: mulps   xmm0, xmm2
0x922488: movaps  xmm2, xmmword ptr [eax]
0x92248B: mov     eax, [esp+110h+var_E8]
0x92248F: shufps  xmm1, xmm1, 0
0x922493: mulps   xmm1, xmm2
0x922496: movaps  xmm2, xmm0
0x922499: shufps  xmm2, xmm0, 0FFh
0x92249D: mulps   xmm2, xmm4
0x9224A0: movaps  xmm3, xmm1
0x9224A3: shufps  xmm3, xmm1, 0FFh
0x9224A7: mulps   xmm3, xmm4
0x9224AA: movaps  xmm4, xmmword ptr [edx+10h]
0x9224AE: addps   xmm4, xmm2
0x9224B1: movaps  xmmword ptr [edx+10h], xmm4
0x9224B5: movaps  xmm2, xmmword ptr [eax]
0x9224B8: subps   xmm2, xmm3
0x9224BB: movaps  xmmword ptr [eax], xmm2
0x9224BE: movaps  xmm2, xmmword ptr [esi+10h]
0x9224C2: mulps   xmm0, xmm2
0x9224C5: movaps  xmm2, xmmword ptr [esi+20h]
0x9224C9: mulps   xmm1, xmm2
0x9224CC: movaps  xmm2, xmmword ptr [edx+20h]
0x9224D0: addps   xmm2, xmm0
0x9224D3: movaps  xmmword ptr [edx+20h], xmm2
0x9224D7: movaps  xmm0, xmmword ptr [ecx]
0x9224DA: addps   xmm0, xmm1
0x9224DD: movaps  xmmword ptr [ecx], xmm0
0x9224E0: fadd    dword ptr [edi]
0x9224E2: lea     eax, [esi+30h]
0x9224E5: mov     [esp+110h+var_F4], eax
0x9224E9: mov     eax, [esp+110h+var_F8]
0x9224ED: fstp    dword ptr [edi]
0x9224EF: movaps  xmm2, xmmword ptr [edx+30h]
0x9224F3: fst     [esp+110h+var_EC]
0x9224F7: movss   xmm1, [esp+110h+var_EC]
0x9224FD: movaps  xmm0, xmm1
0x922500: shufps  xmm0, xmm1, 0
0x922504: mulps   xmm0, xmm2
0x922507: movaps  xmm2, xmmword ptr [eax]
0x92250A: mov     eax, [esp+110h+var_F4]
0x92250E: movaps  xmm4, xmmword ptr [eax]
0x922511: mov     eax, [esp+110h+var_E8]
0x922515: shufps  xmm1, xmm1, 0
0x922519: mulps   xmm1, xmm2
0x92251C: movaps  xmm2, xmm0
0x92251F: shufps  xmm2, xmm0, 0FFh
0x922523: mulps   xmm2, xmm4
0x922526: movaps  xmm3, xmm1
0x922529: shufps  xmm3, xmm1, 0FFh
0x92252D: mulps   xmm3, xmm4
0x922530: movaps  xmm4, xmmword ptr [edx+10h]
0x922534: addps   xmm4, xmm2
0x922537: movaps  xmmword ptr [edx+10h], xmm4
0x92253B: movaps  xmm2, xmmword ptr [eax]
0x92253E: subps   xmm2, xmm3
0x922541: movaps  xmmword ptr [eax], xmm2
0x922544: mov     eax, [esp+110h+var_F4]
0x922548: movaps  xmm2, xmmword ptr [eax+10h]
0x92254C: mulps   xmm0, xmm2
0x92254F: movaps  xmm2, xmmword ptr [eax+20h]
0x922553: mulps   xmm1, xmm2
0x922556: movaps  xmm2, xmmword ptr [edx+20h]
0x92255A: addps   xmm2, xmm0
0x92255D: movaps  xmmword ptr [edx+20h], xmm2
0x922561: movaps  xmm0, xmmword ptr [ecx]
0x922564: addps   xmm0, xmm1
0x922567: movaps  xmmword ptr [ecx], xmm0
0x92256A: fadd    dword ptr [edi+4]
0x92256D: mov     eax, [esp+110h+var_F0]
0x922571: fstp    dword ptr [edi+4]
0x922574: movaps  xmm2, xmmword ptr [edx+30h]
0x922578: fld     [esp+110h+var_F0]
0x92257C: mov     [esp+110h+var_8], eax
0x922583: movss   xmm1, [esp+110h+var_8]
0x92258C: mov     eax, [esp+110h+var_F8]
0x922590: movaps  xmm0, xmm1
0x922593: shufps  xmm0, xmm1, 0
0x922597: mulps   xmm0, xmm2
0x92259A: movaps  xmm2, xmmword ptr [eax]
0x92259D: shufps  xmm1, xmm1, 0
0x9225A1: mulps   xmm1, xmm2
0x9225A4: movaps  xmm2, xmmword ptr [esi+60h]
0x9225A8: mulps   xmm0, xmm2
0x9225AB: movaps  xmm2, xmmword ptr [esi+70h]
0x9225AF: mulps   xmm1, xmm2
0x9225B2: movaps  xmm2, xmmword ptr [edx+20h]
0x9225B6: addps   xmm2, xmm0
0x9225B9: movaps  xmmword ptr [edx+20h], xmm2
0x9225BD: movaps  xmm0, xmmword ptr [ecx]
0x9225C0: addps   xmm0, xmm1
0x9225C3: movaps  xmmword ptr [ecx], xmm0
0x9225C6: fadd    dword ptr [edi+8]
0x9225C9: add     ebx, 18h
0x9225CC: add     esi, 80h ; '€'
0x9225D2: fstp    dword ptr [edi+8]
0x9225D5: mov     al, [ebx]
0x9225D7: add     edi, 0Ch
0x9225DA: cmp     al, 1
0x9225DC: jnz     loc_921B00
0x9225E2: jmp     loc_921AE4; jumptable 00921B0F case 1
0x9225E7: mov     eax, [esp+110h+var_FC]; jumptable 00921B0F case 7
0x9225EB: fld     dword ptr [esi+0Ch]
0x9225EE: movaps  xmm0, xmmword ptr [eax+10h]
0x9225F2: movaps  xmm1, xmmword ptr [edx+10h]
0x9225F6: movaps  xmm3, xmmword ptr [eax+20h]
0x9225FA: movaps  xmm2, xmmword ptr [esi+10h]
0x9225FE: subps   xmm1, xmm0
0x922601: movaps  xmm0, xmmword ptr [edx+20h]
0x922605: mulps   xmm0, xmm2
0x922608: movaps  xmm2, xmmword ptr [esi]
0x92260B: mulps   xmm1, xmm2
0x92260E: movaps  xmm2, xmmword ptr [esi+20h]
0x922612: lea     ecx, [eax+10h]
0x922615: mulps   xmm3, xmm2
0x922618: add     eax, 20h ; ' '
0x92261B: addps   xmm0, xmm3
0x92261E: addps   xmm0, xmm1
0x922621: movaps  xmm1, xmm0
0x922624: shufps  xmm1, xmm0, 55h ; 'U'
0x922628: addss   xmm1, xmm0
0x92262C: movaps  xmm2, xmm0
0x92262F: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x922633: addss   xmm2, xmm1
0x922637: mov     [esp+110h+var_F0], eax
0x92263B: lea     eax, [esp+110h+var_80]
0x922642: movss   dword ptr [eax], xmm2
0x922646: movaps  xmm0, xmmword ptr [ecx]
0x922649: movaps  xmm1, xmmword ptr [edx+10h]
0x92264D: movaps  xmm2, xmmword ptr [esi+40h]
0x922651: mov     eax, [esp+110h+var_F0]
0x922655: movaps  xmm3, xmmword ptr [esi+50h]
0x922659: subps   xmm1, xmm0
0x92265C: movaps  xmm0, xmmword ptr [edx+20h]
0x922660: mulps   xmm0, xmm2
0x922663: movaps  xmm2, xmmword ptr [eax]
0x922666: mulps   xmm2, xmm3
0x922669: movaps  xmm3, xmmword ptr [esi+30h]
0x92266D: mulps   xmm1, xmm3
0x922670: addps   xmm0, xmm2
0x922673: addps   xmm0, xmm1
0x922676: movaps  xmm1, xmm0
0x922679: shufps  xmm1, xmm0, 55h ; 'U'
0x92267D: movaps  xmm2, xmm0
0x922680: lea     eax, [esp+110h+var_C8]
0x922684: addss   xmm1, xmm0
0x922688: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92268C: addss   xmm2, xmm1
0x922690: movss   dword ptr [eax], xmm2
0x922694: mov     eax, [ebp+arg_0]
0x922697: fmul    dword ptr [eax+0Ch]
0x92269A: fld     [esp+110h+var_80]
0x9226A1: fmul    dword ptr [eax+8]
0x9226A4: fsubp   st(1), st
0x9226A6: fstp    [esp+110h+var_F4]
0x9226AA: fld     dword ptr [esi+3Ch]
0x9226AD: fmul    dword ptr [eax+0Ch]
0x9226B0: fld     [esp+110h+var_C8]
0x9226B4: fmul    dword ptr [eax+8]
0x9226B7: fsubp   st(1), st
0x9226B9: fstp    [esp+110h+var_EC]
0x9226BD: fld     dword ptr [ebx+0Ch]
0x9226C0: fld     st
0x9226C2: fmul    st, st(1)
0x9226C4: fstp    [esp+110h+var_E8]
0x9226C8: fstp    st
0x9226CA: fld     dword ptr [esi+2Ch]
0x9226CD: fmul    [esp+110h+var_F4]
0x9226D1: fld     [esp+110h+var_EC]
0x9226D5: fmul    dword ptr [ebx+8]
0x9226D8: faddp   st(1), st
0x9226DA: fld     dword ptr [esi+5Ch]
0x9226DD: fld     [esp+110h+var_F4]
0x9226E1: fmul    dword ptr [ebx+8]
0x9226E4: fxch    st(1)
0x9226E6: fmul    [esp+110h+var_EC]
0x9226EA: faddp   st(1), st
0x9226EC: fld     st(1)
0x9226EE: fmul    st, st(2)
0x9226F0: fld     st(1)
0x9226F2: fmul    st, st(2)
0x9226F4: faddp   st(1), st
0x9226F6: fcom    [esp+110h+var_E8]
0x9226FA: fnstsw  ax
0x9226FC: test    ah, 41h
0x9226FF: jnz     short loc_92271F
0x922701: fdivr   [esp+110h+var_E8]
0x922705: fsqrt
0x922707: fld     st
0x922709: fmulp   st(3), st
0x92270B: fld     st
0x92270D: fmulp   st(2), st
0x92270F: fld     st
0x922711: fmul    dword ptr [esi+0Ch]
0x922714: fstp    dword ptr [esi+0Ch]
0x922717: fmul    dword ptr [esi+3Ch]
0x92271A: fstp    dword ptr [esi+3Ch]
0x92271D: jmp     short loc_922721
0x92271F: fstp    st
0x922721: movaps  xmm2, xmmword ptr [edx+30h]
0x922725: fld     st(1)
0x922727: movaps  xmm4, xmmword ptr [esi]
0x92272A: fstp    [esp+110h+var_F4]
0x92272E: movss   xmm1, [esp+110h+var_F4]
0x922734: fxch    st(1)
0x922736: mov     eax, [esp+110h+var_FC]
0x92273A: movaps  xmm0, xmm1
0x92273D: shufps  xmm0, xmm1, 0
0x922741: mulps   xmm0, xmm2
0x922744: movaps  xmm2, xmmword ptr [eax+30h]
0x922748: add     eax, 30h ; '0'
0x92274B: shufps  xmm1, xmm1, 0
0x92274F: mulps   xmm1, xmm2
0x922752: movaps  xmm2, xmm0
0x922755: shufps  xmm2, xmm0, 0FFh
0x922759: mulps   xmm2, xmm4
0x92275C: movaps  xmm3, xmm1
0x92275F: shufps  xmm3, xmm1, 0FFh
0x922763: mulps   xmm3, xmm4
0x922766: movaps  xmm4, xmmword ptr [edx+10h]
0x92276A: addps   xmm4, xmm2
0x92276D: movaps  xmmword ptr [edx+10h], xmm4
0x922771: movaps  xmm2, xmmword ptr [ecx]
0x922774: subps   xmm2, xmm3
0x922777: movaps  xmmword ptr [ecx], xmm2
0x92277A: movaps  xmm2, xmmword ptr [esi+10h]
0x92277E: mulps   xmm0, xmm2
0x922781: movaps  xmm2, xmmword ptr [esi+20h]
0x922785: mulps   xmm1, xmm2
0x922788: movaps  xmm2, xmmword ptr [edx+20h]
0x92278C: addps   xmm2, xmm0
0x92278F: movaps  xmmword ptr [edx+20h], xmm2
0x922793: mov     [esp+110h+var_F8], eax
0x922797: mov     eax, [esp+110h+var_F0]
0x92279B: movaps  xmm0, xmmword ptr [eax]
0x92279E: addps   xmm0, xmm1
0x9227A1: movaps  xmmword ptr [eax], xmm0
0x9227A4: fadd    dword ptr [edi]
0x9227A6: lea     eax, [esi+30h]
0x9227A9: mov     [esp+110h+var_EC], eax
0x9227AD: mov     eax, [esp+110h+var_F8]
0x9227B1: fstp    dword ptr [edi]
0x9227B3: movaps  xmm2, xmmword ptr [edx+30h]
0x9227B7: fst     [esp+110h+var_F4]
0x9227BB: add     esi, 60h ; '`'
0x9227BE: movss   xmm1, [esp+110h+var_F4]
0x9227C4: movaps  xmm0, xmm1
0x9227C7: shufps  xmm0, xmm1, 0
0x9227CB: mulps   xmm0, xmm2
0x9227CE: movaps  xmm2, xmmword ptr [eax]
0x9227D1: mov     eax, [esp+110h+var_EC]
0x9227D5: movaps  xmm4, xmmword ptr [eax]
0x9227D8: shufps  xmm1, xmm1, 0
0x9227DC: mulps   xmm1, xmm2
0x9227DF: movaps  xmm2, xmm0
0x9227E2: shufps  xmm2, xmm0, 0FFh
0x9227E6: mulps   xmm2, xmm4
0x9227E9: movaps  xmm3, xmm1
0x9227EC: shufps  xmm3, xmm1, 0FFh
0x9227F0: mulps   xmm3, xmm4
0x9227F3: movaps  xmm4, xmmword ptr [edx+10h]
0x9227F7: addps   xmm4, xmm2
0x9227FA: movaps  xmmword ptr [edx+10h], xmm4
0x9227FE: movaps  xmm2, xmmword ptr [ecx]
0x922801: subps   xmm2, xmm3
0x922804: movaps  xmmword ptr [ecx], xmm2
0x922807: movaps  xmm2, xmmword ptr [eax+10h]
0x92280B: mulps   xmm0, xmm2
0x92280E: movaps  xmm2, xmmword ptr [eax+20h]
0x922812: mov     eax, [esp+110h+var_F0]
0x922816: mulps   xmm1, xmm2
0x922819: movaps  xmm2, xmmword ptr [edx+20h]
0x92281D: addps   xmm2, xmm0
0x922820: movaps  xmmword ptr [edx+20h], xmm2
0x922824: movaps  xmm0, xmmword ptr [eax]
0x922827: addps   xmm0, xmm1
0x92282A: movaps  xmmword ptr [eax], xmm0
0x92282D: fadd    dword ptr [edi+4]
0x922830: add     edi, 8
0x922833: fstp    dword ptr [edi-4]
0x922836: mov     al, [ebx+14h]
0x922839: add     ebx, 14h
0x92283C: cmp     al, 1
0x92283E: jnz     loc_921B00
0x922844: jmp     loc_921AE4; jumptable 00921B0F case 1
0x922849: mov     ecx, [ebp+arg_0]; jumptable 00921B0F case 9
0x92284C: mov     eax, [esp+110h+var_FC]
0x922850: add     ecx, 0Ch
0x922853: mov     [esp+110h+var_F4], ecx
0x922857: lea     ecx, [eax+30h]
0x92285A: mov     [esp+110h+var_F8], ecx
0x92285E: lea     ecx, [eax+20h]
0x922861: movaps  xmm1, xmmword ptr [esi]
0x922864: fld     dword ptr [esi+1Ch]
0x922867: movaps  xmm0, xmmword ptr [edx+20h]
0x92286B: movaps  xmm2, xmmword ptr [ecx]
0x92286E: mov     eax, [ebx+4]
0x922871: mulps   xmm0, xmm1
0x922874: movaps  xmm1, xmmword ptr [esi+10h]
0x922878: mulps   xmm2, xmm1
0x92287B: addps   xmm0, xmm2
0x92287E: mov     [esp+110h+var_CC], eax
0x922882: movaps  xmm1, xmm0
0x922885: shufps  xmm1, xmm0, 55h ; 'U'
0x922889: movaps  xmm2, xmm0
0x92288C: lea     eax, [esp+110h+var_78]
0x922893: addss   xmm1, xmm0
0x922897: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x92289B: addss   xmm2, xmm1
0x92289F: movss   dword ptr [eax], xmm2
0x9228A3: mov     eax, [esp+110h+var_F4]
0x9228A7: fmul    dword ptr [eax]
0x9228A9: mov     eax, [ebp+arg_0]
0x9228AC: fld     [esp+110h+var_78]
0x9228B3: fmul    dword ptr [eax+8]
0x9228B6: fsubp   st(1), st
0x9228B8: fmul    dword ptr [esi+0Ch]
0x9228BB: fld     st
0x9228BD: fabs
0x9228BF: fcom    [esp+110h+var_CC]
0x9228C3: fnstsw  ax
0x9228C5: test    ah, 41h
0x9228C8: jnz     short loc_9228DA
0x9228CA: fdivr   [esp+110h+var_CC]
0x9228CE: fld     st
0x9228D0: fmulp   st(2), st
0x9228D2: fmul    dword ptr [esi+1Ch]
0x9228D5: fstp    dword ptr [esi+1Ch]
0x9228D8: jmp     short loc_9228DC
0x9228DA: fstp    st
0x9228DC: movaps  xmm2, xmmword ptr [edx+30h]
0x9228E0: fst     [esp+110h+var_EC]
0x9228E4: movss   xmm1, [esp+110h+var_EC]
0x9228EA: mov     eax, [esp+110h+var_F8]
0x9228EE: movaps  xmm0, xmm1
0x9228F1: shufps  xmm0, xmm1, 0
0x9228F5: mulps   xmm0, xmm2
0x9228F8: movaps  xmm2, xmmword ptr [eax]
0x9228FB: shufps  xmm1, xmm1, 0
0x9228FF: mulps   xmm1, xmm2
0x922902: movaps  xmm2, xmmword ptr [esi]
0x922905: mulps   xmm0, xmm2
0x922908: movaps  xmm2, xmmword ptr [esi+10h]
0x92290C: mulps   xmm1, xmm2
0x92290F: movaps  xmm2, xmmword ptr [edx+20h]
0x922913: addps   xmm2, xmm0
0x922916: movaps  xmmword ptr [edx+20h], xmm2
0x92291A: movaps  xmm0, xmmword ptr [ecx]
0x92291D: addps   xmm0, xmm1
0x922920: movaps  xmmword ptr [ecx], xmm0
0x922923: fadd    dword ptr [edi]
0x922925: add     ebx, 8
0x922928: add     esi, 20h ; ' '
0x92292B: fstp    dword ptr [edi]
0x92292D: mov     al, [ebx]
0x92292F: add     edi, 4
0x922932: cmp     al, 9
0x922934: jz      loc_922861
0x92293A: jmp     loc_921B00
0x92293F: mov     ecx, [esp+110h+var_FC]; jumptable 00921B0F case 10
0x922943: add     ecx, 20h ; ' '
0x922946: movaps  xmm0, xmmword ptr [edx+20h]
0x92294A: movaps  xmm1, xmmword ptr [ecx]
0x92294D: movaps  xmm2, xmmword ptr [esi]
0x922950: movaps  xmm3, xmmword ptr [esi+10h]
0x922954: mulps   xmm1, xmm3
0x922957: mulps   xmm0, xmm2
0x92295A: addps   xmm0, xmm1
0x92295D: movaps  xmm1, xmm0
0x922960: shufps  xmm1, xmm0, 55h ; 'U'
0x922964: movaps  xmm4, xmm0
0x922967: lea     eax, [esp+110h+var_20]
0x92296E: addss   xmm1, xmm0
0x922972: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x922976: addss   xmm4, xmm1
0x92297A: movss   dword ptr [eax], xmm4
0x92297E: fld     [esp+110h+var_20]
0x922985: mov     eax, [ebp+arg_0]
0x922988: fmul    dword ptr [eax+8]
0x92298B: fld     dword ptr [esi+1Ch]
0x92298E: fsub    dword ptr [ebx+4]
0x922991: fmul    dword ptr [ebx+0Ch]
0x922994: fsub    st, st(1)
0x922996: fst     [esp+110h+var_F4]
0x92299A: fcomp   dword ptr ds:0A2FAA8h
0x9229A0: fnstsw  ax
0x9229A2: test    ah, 41h
0x9229A5: jnz     short loc_9229BC
0x9229A7: fstp    st
0x9229A9: fld     [esp+110h+var_F4]
0x9229AD: fmul    dword ptr [esi+0Ch]
0x9229B0: fst     [esp+110h+var_F4]
0x9229B4: movss   xmm1, [esp+110h+var_F4]
0x9229BA: jmp     short loc_9229E1
0x9229BC: fld     dword ptr [esi+1Ch]
0x9229BF: fsub    dword ptr [ebx+8]
0x9229C2: fmul    dword ptr [ebx+0Ch]
0x9229C5: fsubrp  st(1), st
0x9229C7: fcom    dword ptr ds:0A2FAA8h
0x9229CD: fnstsw  ax
0x9229CF: test    ah, 5
0x9229D2: jp      short loc_922A1E
0x9229D4: fmul    dword ptr [esi+0Ch]
0x9229D7: fst     [esp+110h+var_F4]
0x9229DB: movss   xmm1, [esp+110h+var_F4]
0x9229E1: movaps  xmm4, xmmword ptr [edx+30h]
0x9229E5: mov     eax, [esp+110h+var_FC]
0x9229E9: movaps  xmm0, xmm1
0x9229EC: shufps  xmm0, xmm1, 0
0x9229F0: mulps   xmm0, xmm4
0x9229F3: movaps  xmm4, xmmword ptr [eax+30h]
0x9229F7: mulps   xmm0, xmm2
0x9229FA: movaps  xmm2, xmmword ptr [edx+20h]
0x9229FE: addps   xmm2, xmm0
0x922A01: movaps  xmmword ptr [edx+20h], xmm2
0x922A05: movaps  xmm0, xmmword ptr [ecx]
0x922A08: shufps  xmm1, xmm1, 0
0x922A0C: mulps   xmm1, xmm4
0x922A0F: mulps   xmm1, xmm3
0x922A12: addps   xmm0, xmm1
0x922A15: movaps  xmmword ptr [ecx], xmm0
0x922A18: fadd    dword ptr [edi]
0x922A1A: fstp    dword ptr [edi]
0x922A1C: jmp     short loc_922A20
0x922A1E: fstp    st
0x922A20: mov     al, [ebx+10h]
0x922A23: add     ebx, 10h
0x922A26: add     esi, 20h ; ' '
0x922A29: add     edi, 4
0x922A2C: cmp     al, 0Ah
0x922A2E: jz      loc_922946
0x922A34: jmp     loc_921B00
0x922A39: mov     eax, [esp+110h+var_FC]; jumptable 00921B0F case 4
0x922A3D: lea     ecx, [eax+30h]
0x922A40: mov     [esp+110h+var_F8], ecx
0x922A44: lea     ecx, [eax+20h]
0x922A47: jmp     short loc_922A50
0x922A49: align 10h
0x922A50: movaps  xmm1, xmmword ptr [esi]
0x922A53: fld     dword ptr [esi+1Ch]
0x922A56: movaps  xmm0, xmmword ptr [edx+20h]
0x922A5A: movaps  xmm2, xmmword ptr [ecx]
0x922A5D: mulps   xmm0, xmm1
0x922A60: movaps  xmm1, xmmword ptr [esi+10h]
0x922A64: mulps   xmm2, xmm1
0x922A67: addps   xmm0, xmm2
0x922A6A: movaps  xmm1, xmm0
0x922A6D: shufps  xmm1, xmm0, 55h ; 'U'
0x922A71: movaps  xmm2, xmm0
0x922A74: lea     eax, [esp+110h+var_70]
0x922A7B: addss   xmm1, xmm0
0x922A7F: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x922A83: addss   xmm2, xmm1
0x922A87: movss   dword ptr [eax], xmm2
0x922A8B: fadd    dword ptr [ebx+0Ch]
0x922A8E: fld     dword ptr [esi+0Ch]
0x922A91: fld     st(1)
0x922A93: fmul    dword ptr [ebx+10h]
0x922A96: fld     [esp+110h+var_70]
0x922A9D: fmul    dword ptr [ebx+14h]
0x922AA0: fsubp   st(1), st
0x922AA2: fmul    st, st(1)
0x922AA4: fstp    [esp+110h+var_F0]
0x922AA8: fstp    st
0x922AAA: fld     [esp+110h+var_F0]
0x922AAE: fcomp   dword ptr [ebx+4]
0x922AB1: fnstsw  ax
0x922AB3: test    ah, 41h
0x922AB6: jnz     short loc_922ACD
0x922AB8: mov     eax, [ebx+18h]
0x922ABB: test    eax, eax
0x922ABD: jz      short loc_922AC8
0x922ABF: fld     dword ptr [ebx+4]
0x922AC2: fdiv    [esp+110h+var_F0]
0x922AC6: fmulp   st(1), st
0x922AC8: mov     eax, [ebx+4]
0x922ACB: jmp     short loc_922AEE
0x922ACD: fld     [esp+110h+var_F0]
0x922AD1: fcomp   dword ptr [ebx+8]
0x922AD4: fnstsw  ax
0x922AD6: test    ah, 5
0x922AD9: jp      short loc_922AF2
0x922ADB: mov     eax, [ebx+18h]
0x922ADE: test    eax, eax
0x922AE0: jz      short loc_922AEB
0x922AE2: fld     dword ptr [ebx+8]
0x922AE5: fdiv    [esp+110h+var_F0]
0x922AE9: fmulp   st(1), st
0x922AEB: mov     eax, [ebx+8]
0x922AEE: mov     [esp+110h+var_F0], eax
0x922AF2: mov     eax, [esp+110h+var_F0]
0x922AF6: fstp    dword ptr [esi+1Ch]
0x922AF9: movaps  xmm2, xmmword ptr [edx+30h]
0x922AFD: fld     [esp+110h+var_F0]
0x922B01: mov     [esp+110h+var_38], eax
0x922B08: movss   xmm1, [esp+110h+var_38]
0x922B11: mov     eax, [esp+110h+var_F8]
0x922B15: movaps  xmm0, xmm1
0x922B18: shufps  xmm0, xmm1, 0
0x922B1C: mulps   xmm0, xmm2
0x922B1F: movaps  xmm2, xmmword ptr [eax]
0x922B22: shufps  xmm1, xmm1, 0
0x922B26: mulps   xmm1, xmm2
0x922B29: movaps  xmm2, xmmword ptr [esi]
0x922B2C: mulps   xmm0, xmm2
0x922B2F: movaps  xmm2, xmmword ptr [esi+10h]
0x922B33: mulps   xmm1, xmm2
0x922B36: movaps  xmm2, xmmword ptr [edx+20h]
0x922B3A: addps   xmm2, xmm0
0x922B3D: movaps  xmmword ptr [edx+20h], xmm2
0x922B41: movaps  xmm0, xmmword ptr [ecx]
0x922B44: addps   xmm0, xmm1
0x922B47: movaps  xmmword ptr [ecx], xmm0
0x922B4A: fadd    dword ptr [edi]
0x922B4C: add     ebx, 1Ch
0x922B4F: add     esi, 20h ; ' '
0x922B52: fstp    dword ptr [edi]
0x922B54: mov     al, [ebx]
0x922B56: add     edi, 4
0x922B59: cmp     al, 4
0x922B5B: jz      loc_922A50
0x922B61: jmp     loc_921B00
0x922B66: mov     ecx, [esp+110h+var_FC]; jumptable 00921B0F case 12
0x922B6A: lea     eax, [ecx+30h]
0x922B6D: add     ecx, 20h ; ' '
0x922B70: mov     [esp+110h+var_F8], eax
0x922B74: lea     eax, [edx+20h]
0x922B77: mov     [esp+110h+var_F0], ecx
0x922B7B: jmp     short loc_922B80
0x922B7D: align 10h
0x922B80: movaps  xmm2, xmmword ptr [esi]
0x922B83: fld     dword ptr [esi+0Ch]
0x922B86: movaps  xmm3, xmmword ptr [esi+10h]
0x922B8A: fld     dword ptr [esi+1Ch]
0x922B8D: movaps  xmm0, xmmword ptr [edx+20h]
0x922B91: mov     ecx, [esp+110h+var_F0]
0x922B95: movaps  xmm1, xmmword ptr [ecx]
0x922B98: mulps   xmm0, xmm2
0x922B9B: mulps   xmm1, xmm3
0x922B9E: addps   xmm0, xmm1
0x922BA1: movaps  xmm1, xmm0
0x922BA4: shufps  xmm1, xmm0, 55h ; 'U'
0x922BA8: addss   xmm1, xmm0
0x922BAC: movaps  xmm4, xmm0
0x922BAF: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x922BB3: addss   xmm4, xmm1
0x922BB7: lea     ecx, [esp+110h+var_68]
0x922BBE: movss   dword ptr [ecx], xmm4
0x922BC2: mov     ecx, [ebp+arg_0]
0x922BC5: fmul    dword ptr [ecx+4]
0x922BC8: movaps  xmm4, xmmword ptr [edx+30h]
0x922BCC: fld     [esp+110h+var_68]
0x922BD3: add     ebx, 4
0x922BD6: fmul    dword ptr [ecx+8]
0x922BD9: mov     ecx, [esp+110h+var_F8]
0x922BDD: add     esi, 20h ; ' '
0x922BE0: add     edi, 4
0x922BE3: fsubp   st(1), st
0x922BE5: fmulp   st(1), st
0x922BE7: fst     [esp+110h+var_F4]
0x922BEB: movss   xmm1, [esp+110h+var_F4]
0x922BF1: movaps  xmm0, xmm1
0x922BF4: shufps  xmm0, xmm1, 0
0x922BF8: mulps   xmm0, xmm4
0x922BFB: movaps  xmm4, xmmword ptr [ecx]
0x922BFE: mov     ecx, [esp+110h+var_F0]
0x922C02: mulps   xmm0, xmm2
0x922C05: movaps  xmm2, xmmword ptr [eax]
0x922C08: addps   xmm2, xmm0
0x922C0B: movaps  xmmword ptr [eax], xmm2
0x922C0E: movaps  xmm0, xmmword ptr [ecx]
0x922C11: shufps  xmm1, xmm1, 0
0x922C15: mulps   xmm1, xmm4
0x922C18: mulps   xmm1, xmm3
0x922C1B: addps   xmm0, xmm1
0x922C1E: movaps  xmmword ptr [ecx], xmm0
0x922C21: fadd    dword ptr [edi-4]
0x922C24: fstp    dword ptr [edi-4]
0x922C27: mov     cl, [ebx]
0x922C29: cmp     cl, 0Ch
0x922C2C: jz      loc_922B80
0x922C32: jmp     loc_921B00
0x922C37: mov     ecx, [esp+110h+var_FC]; jumptable 00921B0F case 13
0x922C3B: lea     eax, [ecx+30h]
0x922C3E: add     ecx, 10h
0x922C41: mov     [esp+110h+var_E8], ecx
0x922C45: mov     ecx, [esp+110h+var_FC]
0x922C49: add     ecx, 20h ; ' '
0x922C4C: mov     [esp+110h+var_F8], eax
0x922C50: lea     eax, [edx+10h]
0x922C53: mov     [esp+110h+var_F0], ecx
0x922C57: jmp     short loc_922C60
0x922C59: align 10h
0x922C60: movaps  xmm1, xmmword ptr [edx+10h]
0x922C64: fld     dword ptr [esi+1Ch]
0x922C67: movaps  xmm2, xmmword ptr [esi+10h]
0x922C6B: fld     dword ptr [esi+0Ch]
0x922C6E: movaps  xmm3, xmmword ptr [esi+20h]
0x922C72: mov     ecx, [esp+110h+var_E8]
0x922C76: movaps  xmm0, xmmword ptr [ecx]
0x922C79: mov     ecx, [esp+110h+var_F0]
0x922C7D: movaps  xmm4, xmmword ptr [ecx]
0x922C80: subps   xmm1, xmm0
0x922C83: movaps  xmm0, xmmword ptr [edx+20h]
0x922C87: mulps   xmm0, xmm2
0x922C8A: movaps  xmm2, xmmword ptr [esi]
0x922C8D: mulps   xmm1, xmm2
0x922C90: mulps   xmm4, xmm3
0x922C93: addps   xmm0, xmm4
0x922C96: addps   xmm0, xmm1
0x922C99: movaps  xmm1, xmm0
0x922C9C: shufps  xmm1, xmm0, 55h ; 'U'
0x922CA0: addss   xmm1, xmm0
0x922CA4: movaps  xmm3, xmm0
0x922CA7: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x922CAB: addss   xmm3, xmm1
0x922CAF: lea     ecx, [esp+110h+var_10]
0x922CB6: movss   dword ptr [ecx], xmm3
0x922CBA: mov     ecx, [ebp+arg_0]
0x922CBD: fmul    dword ptr [ecx+4]
0x922CC0: movaps  xmm3, xmmword ptr [edx+30h]
0x922CC4: fld     [esp+110h+var_10]
0x922CCB: add     ebx, 4
0x922CCE: fmul    dword ptr [ecx+8]
0x922CD1: mov     ecx, [esp+110h+var_F8]
0x922CD5: add     esi, 30h ; '0'
0x922CD8: add     edi, 4
0x922CDB: fsubp   st(1), st
0x922CDD: fmulp   st(1), st
0x922CDF: fst     [esp+110h+var_F4]
0x922CE3: movss   xmm1, [esp+110h+var_F4]
0x922CE9: movaps  xmm0, xmm1
0x922CEC: shufps  xmm0, xmm1, 0
0x922CF0: mulps   xmm0, xmm3
0x922CF3: movaps  xmm3, xmmword ptr [ecx]
0x922CF6: mov     ecx, [esp+110h+var_E8]
0x922CFA: shufps  xmm1, xmm1, 0
0x922CFE: mulps   xmm1, xmm3
0x922D01: movaps  xmm3, xmm0
0x922D04: shufps  xmm3, xmm0, 0FFh
0x922D08: mulps   xmm3, xmm2
0x922D0B: movaps  xmm4, xmm1
0x922D0E: shufps  xmm4, xmm1, 0FFh
0x922D12: mulps   xmm4, xmm2
0x922D15: movaps  xmm2, xmmword ptr [eax]
0x922D18: addps   xmm2, xmm3
0x922D1B: movaps  xmmword ptr [eax], xmm2
0x922D1E: movaps  xmm2, xmmword ptr [ecx]
0x922D21: subps   xmm2, xmm4
0x922D24: movaps  xmmword ptr [ecx], xmm2
0x922D27: movaps  xmm2, xmmword ptr [esi-20h]
0x922D2B: mulps   xmm0, xmm2
0x922D2E: movaps  xmm2, xmmword ptr [esi-10h]
0x922D32: lea     ecx, [edx+20h]
0x922D35: mulps   xmm1, xmm2
0x922D38: movaps  xmm2, xmmword ptr [ecx]
0x922D3B: addps   xmm2, xmm0
0x922D3E: movaps  xmmword ptr [ecx], xmm2
0x922D41: mov     ecx, [esp+110h+var_F0]
0x922D45: movaps  xmm0, xmmword ptr [ecx]
0x922D48: addps   xmm0, xmm1
0x922D4B: movaps  xmmword ptr [ecx], xmm0
0x922D4E: fadd    dword ptr [edi-4]
0x922D51: fstp    dword ptr [edi-4]
0x922D54: mov     cl, [ebx]
0x922D56: cmp     cl, 0Dh
0x922D59: jz      loc_922C60
0x922D5F: jmp     loc_921B00
0x922D64: mov     eax, [esp+110h+var_FC]; jumptable 00921B0F case 6
0x922D68: lea     ecx, [eax+30h]
0x922D6B: mov     [esp+110h+var_F8], ecx
0x922D6F: lea     ecx, [eax+10h]
0x922D72: add     eax, 20h ; ' '
0x922D75: mov     [esp+110h+var_F0], eax
0x922D79: lea     esp, [esp+0]
0x922D80: movaps  xmm0, xmmword ptr [ecx]
0x922D83: fld     dword ptr [esi+0Ch]
0x922D86: mov     eax, [ebx+4]
0x922D89: movaps  xmm1, xmmword ptr [edx+10h]
0x922D8D: movaps  xmm2, xmmword ptr [esi+10h]
0x922D91: subps   xmm1, xmm0
0x922D94: movaps  xmm0, xmmword ptr [edx+20h]
0x922D98: mulps   xmm0, xmm2
0x922D9B: movaps  xmm2, xmmword ptr [esi]
0x922D9E: mulps   xmm1, xmm2
0x922DA1: movaps  xmm2, xmmword ptr [esi+20h]
0x922DA5: mov     [esp+110h+var_D0], eax
0x922DA9: mov     eax, [esp+110h+var_F0]
0x922DAD: movaps  xmm3, xmmword ptr [eax]
0x922DB0: mulps   xmm3, xmm2
0x922DB3: addps   xmm0, xmm3
0x922DB6: addps   xmm0, xmm1
0x922DB9: movaps  xmm1, xmm0
0x922DBC: shufps  xmm1, xmm0, 55h ; 'U'
0x922DC0: movaps  xmm2, xmm0
0x922DC3: lea     eax, [esp+110h+var_C4]
0x922DC7: addss   xmm1, xmm0
0x922DCB: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x922DCF: addss   xmm2, xmm1
0x922DD3: movss   dword ptr [eax], xmm2
0x922DD7: mov     eax, [ebp+arg_0]
0x922DDA: fmul    dword ptr [eax+4]
0x922DDD: fld     [esp+110h+var_C4]
0x922DE1: fmul    dword ptr [eax+8]
0x922DE4: fsubp   st(1), st
0x922DE6: fmul    dword ptr [esi+1Ch]
0x922DE9: fld     st
0x922DEB: fabs
0x922DED: fcom    [esp+110h+var_D0]
0x922DF1: fnstsw  ax
0x922DF3: test    ah, 41h
0x922DF6: jnz     short loc_922E0A
0x922DF8: fdivr   [esp+110h+var_D0]
0x922DFC: fxch    st(1)
0x922DFE: fmul    st, st(1)
0x922E00: fxch    st(1)
0x922E02: fmul    dword ptr [esi+0Ch]
0x922E05: fstp    dword ptr [esi+0Ch]
0x922E08: jmp     short loc_922E0C
0x922E0A: fstp    st
0x922E0C: movaps  xmm2, xmmword ptr [edx+30h]
0x922E10: fst     [esp+110h+var_F4]
0x922E14: movss   xmm1, [esp+110h+var_F4]
0x922E1A: movaps  xmm4, xmmword ptr [esi]
0x922E1D: mov     eax, [esp+110h+var_F8]
0x922E21: movaps  xmm0, xmm1
0x922E24: shufps  xmm0, xmm1, 0
0x922E28: mulps   xmm0, xmm2
0x922E2B: movaps  xmm2, xmmword ptr [eax]
0x922E2E: mov     eax, [esp+110h+var_F0]
0x922E32: shufps  xmm1, xmm1, 0
0x922E36: mulps   xmm1, xmm2
0x922E39: movaps  xmm2, xmm0
0x922E3C: shufps  xmm2, xmm0, 0FFh
0x922E40: mulps   xmm2, xmm4
0x922E43: movaps  xmm3, xmm1
0x922E46: shufps  xmm3, xmm1, 0FFh
0x922E4A: mulps   xmm3, xmm4
0x922E4D: movaps  xmm4, xmmword ptr [edx+10h]
0x922E51: addps   xmm4, xmm2
0x922E54: movaps  xmmword ptr [edx+10h], xmm4
0x922E58: movaps  xmm2, xmmword ptr [ecx]
0x922E5B: subps   xmm2, xmm3
0x922E5E: movaps  xmmword ptr [ecx], xmm2
0x922E61: movaps  xmm2, xmmword ptr [esi+10h]
0x922E65: mulps   xmm0, xmm2
0x922E68: movaps  xmm2, xmmword ptr [esi+20h]
0x922E6C: mulps   xmm1, xmm2
0x922E6F: movaps  xmm2, xmmword ptr [edx+20h]
0x922E73: addps   xmm2, xmm0
0x922E76: movaps  xmmword ptr [edx+20h], xmm2
0x922E7A: movaps  xmm0, xmmword ptr [eax]
0x922E7D: addps   xmm0, xmm1
0x922E80: movaps  xmmword ptr [eax], xmm0
0x922E83: fadd    dword ptr [edi]
0x922E85: add     ebx, 8
0x922E88: add     esi, 30h ; '0'
0x922E8B: fstp    dword ptr [edi]
0x922E8D: mov     al, [ebx]
0x922E8F: add     edi, 4
0x922E92: cmp     al, 6
0x922E94: jz      loc_922D80
0x922E9A: jmp     loc_921B00
0x922E9F: align 10h
0x922EA0: mov     edx, [esp+110h+var_FC]; jumptable 00921B0F case 11
0x922EA4: mov     ecx, [esp+110h+var_E4]
0x922EA8: movaps  xmm0, xmmword ptr [edx+10h]
0x922EAC: movaps  xmm1, xmmword ptr [ecx+10h]
0x922EB0: movaps  xmm2, xmmword ptr [esi+10h]
0x922EB4: movaps  xmm3, xmmword ptr [edx+20h]
0x922EB8: movaps  xmm4, xmmword ptr [esi]
0x922EBB: subps   xmm1, xmm0
0x922EBE: movaps  xmm0, xmmword ptr [ecx+20h]
0x922EC2: mulps   xmm0, xmm2
0x922EC5: movaps  xmm2, xmmword ptr [esi+20h]
0x922EC9: mulps   xmm3, xmm2
0x922ECC: mulps   xmm1, xmm4
0x922ECF: addps   xmm0, xmm3
0x922ED2: addps   xmm0, xmm1
0x922ED5: movaps  xmm1, xmm0
0x922ED8: shufps  xmm1, xmm0, 55h ; 'U'
0x922EDC: movaps  xmm2, xmm0
0x922EDF: lea     eax, [esp+110h+var_BC]
0x922EE3: addss   xmm1, xmm0
0x922EE7: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x922EEB: addss   xmm2, xmm1
0x922EEF: movss   dword ptr [eax], xmm2
0x922EF3: fld     [esp+110h+var_BC]
0x922EF7: mov     eax, [ebp+arg_0]
0x922EFA: fmul    dword ptr [eax+8]
0x922EFD: fld     dword ptr [esi+0Ch]
0x922F00: fsub    dword ptr [ebx+4]
0x922F03: fmul    dword ptr [eax+4]
0x922F06: fsub    st, st(1)
0x922F08: fcom    dword ptr ds:0A2FAA8h
0x922F0E: fnstsw  ax
0x922F10: test    ah, 41h
0x922F13: jnz     short loc_922F8F
0x922F15: fmul    dword ptr [esi+1Ch]
0x922F18: movaps  xmm2, xmmword ptr [ecx+30h]
0x922F1C: fst     [esp+110h+var_F4]
0x922F20: movss   xmm1, [esp+110h+var_F4]
0x922F26: movaps  xmm0, xmm1
0x922F29: shufps  xmm0, xmm1, 0
0x922F2D: mulps   xmm0, xmm2
0x922F30: movaps  xmm2, xmmword ptr [edx+30h]
0x922F34: shufps  xmm1, xmm1, 0
0x922F38: mulps   xmm1, xmm2
0x922F3B: movaps  xmm2, xmm0
0x922F3E: shufps  xmm2, xmm0, 0FFh
0x922F42: mulps   xmm2, xmm4
0x922F45: movaps  xmm3, xmm1
0x922F48: shufps  xmm3, xmm1, 0FFh
0x922F4C: mulps   xmm3, xmm4
0x922F4F: movaps  xmm4, xmmword ptr [ecx+10h]
0x922F53: addps   xmm4, xmm2
0x922F56: movaps  xmmword ptr [ecx+10h], xmm4
0x922F5A: movaps  xmm2, xmmword ptr [edx+10h]
0x922F5E: subps   xmm2, xmm3
0x922F61: movaps  xmmword ptr [edx+10h], xmm2
0x922F65: movaps  xmm2, xmmword ptr [esi+10h]
0x922F69: mulps   xmm0, xmm2
0x922F6C: movaps  xmm2, xmmword ptr [esi+20h]
0x922F70: mulps   xmm1, xmm2
0x922F73: movaps  xmm2, xmmword ptr [ecx+20h]
0x922F77: addps   xmm2, xmm0
0x922F7A: movaps  xmmword ptr [ecx+20h], xmm2
0x922F7E: movaps  xmm0, xmmword ptr [edx+20h]
0x922F82: addps   xmm0, xmm1
0x922F85: movaps  xmmword ptr [edx+20h], xmm0
0x922F89: fadd    dword ptr [edi]
0x922F8B: fstp    dword ptr [edi]
0x922F8D: jmp     short loc_922F91
0x922F8F: fstp    st
0x922F91: fld     dword ptr [esi+0Ch]
0x922F94: mov     eax, [ebp+arg_0]
0x922F97: fsub    dword ptr [ebx+8]
0x922F9A: fmul    dword ptr [eax+4]
0x922F9D: fsubrp  st(1), st
0x922F9F: fcom    dword ptr ds:0A2FAA8h
0x922FA5: fnstsw  ax
0x922FA7: test    ah, 5
0x922FAA: jp      short loc_923029
0x922FAC: fmul    dword ptr [esi+1Ch]
0x922FAF: movaps  xmm2, xmmword ptr [ecx+30h]
0x922FB3: movaps  xmm4, xmmword ptr [esi]
0x922FB6: fst     [esp+110h+var_F4]
0x922FBA: movss   xmm1, [esp+110h+var_F4]
0x922FC0: movaps  xmm0, xmm1
0x922FC3: shufps  xmm0, xmm1, 0
0x922FC7: mulps   xmm0, xmm2
0x922FCA: movaps  xmm2, xmmword ptr [edx+30h]
0x922FCE: shufps  xmm1, xmm1, 0
0x922FD2: mulps   xmm1, xmm2
0x922FD5: movaps  xmm2, xmm0
0x922FD8: shufps  xmm2, xmm0, 0FFh
0x922FDC: mulps   xmm2, xmm4
0x922FDF: movaps  xmm3, xmm1
0x922FE2: shufps  xmm3, xmm1, 0FFh
0x922FE6: mulps   xmm3, xmm4
0x922FE9: movaps  xmm4, xmmword ptr [ecx+10h]
0x922FED: addps   xmm4, xmm2
0x922FF0: movaps  xmmword ptr [ecx+10h], xmm4
0x922FF4: movaps  xmm2, xmmword ptr [edx+10h]
0x922FF8: subps   xmm2, xmm3
0x922FFB: movaps  xmmword ptr [edx+10h], xmm2
0x922FFF: movaps  xmm2, xmmword ptr [esi+10h]
0x923003: mulps   xmm0, xmm2
0x923006: movaps  xmm2, xmmword ptr [esi+20h]
0x92300A: mulps   xmm1, xmm2
0x92300D: movaps  xmm2, xmmword ptr [ecx+20h]
0x923011: addps   xmm2, xmm0
0x923014: movaps  xmmword ptr [ecx+20h], xmm2
0x923018: movaps  xmm0, xmmword ptr [edx+20h]
0x92301C: addps   xmm0, xmm1
0x92301F: movaps  xmmword ptr [edx+20h], xmm0
0x923023: fadd    dword ptr [edi]
0x923025: fstp    dword ptr [edi]
0x923027: jmp     short loc_92302B
0x923029: fstp    st
0x92302B: push    1
0x92302D: mov     ecx, esi
0x92302F: call    sub_8F0EE0
0x923034: add     ebx, 0Ch
0x923037: mov     esi, eax
0x923039: mov     al, [ebx]
0x92303B: add     edi, 4
0x92303E: cmp     al, 0Bh
0x923040: jz      loc_922EA0; jumptable 00921B0F case 11
0x923046: mov     edx, [esp+110h+var_E4]
0x92304A: jmp     loc_921B00
0x92304F: mov     eax, [esp+110h+var_FC]; jumptable 00921B0F case 5
0x923053: fld     dword ptr [esi+0Ch]
0x923056: movaps  xmm0, xmmword ptr [eax+10h]
0x92305A: movaps  xmm1, xmmword ptr [edx+10h]
0x92305E: movaps  xmm2, xmmword ptr [esi+10h]
0x923062: movaps  xmm3, xmmword ptr [eax+20h]
0x923066: subps   xmm1, xmm0
0x923069: movaps  xmm0, xmmword ptr [edx+20h]
0x92306D: mulps   xmm0, xmm2
0x923070: movaps  xmm2, xmmword ptr [esi]
0x923073: mulps   xmm1, xmm2
0x923076: movaps  xmm2, xmmword ptr [esi+20h]
0x92307A: mulps   xmm3, xmm2
0x92307D: addps   xmm0, xmm3
0x923080: addps   xmm0, xmm1
0x923083: movaps  xmm1, xmm0
0x923086: shufps  xmm1, xmm0, 55h ; 'U'
0x92308A: movaps  xmm2, xmm0
0x92308D: addss   xmm1, xmm0
0x923091: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x923095: lea     ecx, [esp+110h+var_B4]
0x923099: addss   xmm2, xmm1
0x92309D: movss   dword ptr [ecx], xmm2
0x9230A1: fadd    dword ptr [ebx+0Ch]
0x9230A4: fld     dword ptr [esi+1Ch]
0x9230A7: fld     st(1)
0x9230A9: fmul    dword ptr [ebx+10h]
0x9230AC: fld     [esp+110h+var_B4]
0x9230B0: fmul    dword ptr [ebx+14h]
0x9230B3: fsubp   st(1), st
0x9230B5: fmul    st, st(1)
0x9230B7: fstp    [esp+110h+var_F8]
0x9230BB: fstp    st
0x9230BD: fld     [esp+110h+var_F8]
0x9230C1: fcomp   dword ptr [ebx+4]
0x9230C4: fnstsw  ax
0x9230C6: test    ah, 41h
0x9230C9: jnz     short loc_9230E4
0x9230CB: mov     eax, [ebx+18h]
0x9230CE: test    eax, eax
0x9230D0: jz      short loc_9230DB
0x9230D2: fld     dword ptr [ebx+4]
0x9230D5: fdiv    [esp+110h+var_F8]
0x9230D9: fmulp   st(1), st
0x9230DB: mov     edx, [ebx+4]
0x9230DE: mov     [esp+110h+var_F8], edx
0x9230E2: jmp     short loc_923109
0x9230E4: fld     [esp+110h+var_F8]
0x9230E8: fcomp   dword ptr [ebx+8]
0x9230EB: fnstsw  ax
0x9230ED: test    ah, 5
0x9230F0: jp      short loc_923109
0x9230F2: mov     eax, [ebx+18h]
0x9230F5: test    eax, eax
0x9230F7: jz      short loc_923102
0x9230F9: fld     dword ptr [ebx+8]
0x9230FC: fdiv    [esp+110h+var_F8]
0x923100: fmulp   st(1), st
0x923102: mov     eax, [ebx+8]
0x923105: mov     [esp+110h+var_F8], eax
0x923109: mov     ecx, [esp+110h+var_F8]
0x92310D: fstp    dword ptr [esi+0Ch]
0x923110: mov     eax, [esp+110h+var_E4]
0x923114: fld     [esp+110h+var_F8]
0x923118: movaps  xmm2, xmmword ptr [eax+30h]
0x92311C: movaps  xmm4, xmmword ptr [esi]
0x92311F: mov     [esp+110h+var_AC], ecx
0x923123: mov     ecx, [esp+110h+var_FC]
0x923127: movss   xmm1, [esp+110h+var_AC]
0x92312D: movaps  xmm0, xmm1
0x923130: shufps  xmm0, xmm1, 0
0x923134: mulps   xmm0, xmm2
0x923137: movaps  xmm2, xmmword ptr [ecx+30h]
0x92313B: shufps  xmm1, xmm1, 0
0x92313F: mulps   xmm1, xmm2
0x923142: movaps  xmm2, xmm0
0x923145: shufps  xmm2, xmm0, 0FFh
0x923149: mulps   xmm2, xmm4
0x92314C: movaps  xmm3, xmm1
0x92314F: shufps  xmm3, xmm1, 0FFh
0x923153: mulps   xmm3, xmm4
0x923156: movaps  xmm4, xmmword ptr [eax+10h]
0x92315A: addps   xmm4, xmm2
0x92315D: movaps  xmmword ptr [eax+10h], xmm4
0x923161: movaps  xmm2, xmmword ptr [ecx+10h]
0x923165: subps   xmm2, xmm3
0x923168: movaps  xmmword ptr [ecx+10h], xmm2
0x92316C: movaps  xmm2, xmmword ptr [esi+10h]
0x923170: mulps   xmm0, xmm2
0x923173: movaps  xmm2, xmmword ptr [esi+20h]
0x923177: mulps   xmm1, xmm2
0x92317A: movaps  xmm2, xmmword ptr [eax+20h]
0x92317E: addps   xmm2, xmm0
0x923181: movaps  xmmword ptr [eax+20h], xmm2
0x923185: movaps  xmm0, xmmword ptr [ecx+20h]
0x923189: addps   xmm0, xmm1
0x92318C: movaps  xmmword ptr [ecx+20h], xmm0
0x923190: fadd    dword ptr [edi]
0x923192: push    1
0x923194: mov     ecx, esi
0x923196: fstp    dword ptr [edi]
0x923198: call    sub_8F0EE0
0x92319D: mov     edx, [esp+110h+var_E4]
0x9231A1: add     ebx, 1Ch
0x9231A4: mov     esi, eax
0x9231A6: mov     al, [ebx]
0x9231A8: add     edi, 4
0x9231AB: cmp     al, 5
0x9231AD: jz      loc_92304F; jumptable 00921B0F case 5
0x9231B3: jmp     loc_921B00
0x9231B8: mov     eax, [ebp+arg_0]; jumptable 00921B0F case 15
0x9231BB: mov     ecx, [eax+8]
0x9231BE: mov     [esp+110h+var_D4], ecx
0x9231C2: mov     ecx, [eax+4]
0x9231C5: mov     [esp+110h+var_D8], ecx
0x9231C9: mov     ecx, [ebx+8]
0x9231CC: mov     [eax+8], ecx
0x9231CF: mov     ecx, [ebx+4]
0x9231D2: mov     [eax+4], ecx
0x9231D5: add     ebx, 0Ch
0x9231D8: jmp     loc_921B00
0x9231DD: mov     ecx, [esp+110h+var_D8]; jumptable 00921B0F case 16
0x9231E1: mov     eax, [ebp+arg_0]
0x9231E4: mov     [eax+4], ecx
0x9231E7: mov     ecx, [esp+110h+var_D4]
0x9231EB: mov     [eax+8], ecx
0x9231EE: add     ebx, 4
0x9231F1: jmp     loc_921B00
0x9231F6: lea     edx, [ebx+8]; jumptable 00921B0F case 14
0x9231F9: push    edx
0x9231FA: push    esi
0x9231FB: call    dword ptr [ebx+4]
0x9231FE: movzx   eax, byte ptr [ebx+1]
0x923202: mov     edx, [esp+118h+var_E4]
0x923206: add     esp, 8
0x923209: add     ebx, eax
0x92320B: jmp     loc_921B00
0x923210: int     3; Trap to Debugger
0x923211: mov     ebx, [esp+110h+var_E0]; jumptable 00921B0F case 0
0x923215: test    ebx, ebx
0x923217: mov     esi, [ebp+arg_0]
0x92321A: mov     eax, [ebp+arg_8]
0x92321D: jnz     loc_923390
0x923223: movzx   ecx, byte ptr [eax]
0x923226: sub     ecx, 0
0x923229: jz      short loc_92325D
0x92322B: dec     ecx
0x92322C: jz      short loc_923256
0x92322E: dec     ecx
0x92322F: jnz     short loc_923223
0x923231: mov     ecx, [ebp+arg_4]
0x923234: mov     esi, [ecx+0Ch]; jumptable 0092324F case 1
0x923237: mov     edi, [ecx+10h]
0x92323A: mov     eax, [ecx+4]
0x92323D: add     ecx, 18h
0x923240: mov     dl, [ecx+2]
0x923243: movsx   edx, dl
0x923246: cmp     edx, 6; switch 7 cases
0x923249: ja      def_92324F; jumptable 0092324F default case
0x92324F: jmp     ds:jpt_92324F[edx*4]; switch jump
0x923256: add     eax, 80h ; '€'
0x92325B: jmp     short loc_923223
0x92325D: xorps   xmm4, xmm4
0x923260: movaps  xmmword ptr [eax+50h], xmm4
0x923264: movaps  xmmword ptr [eax+40h], xmm4
0x923268: mov     ecx, [eax+8]
0x92326B: movaps  xmm0, xmmword ptr ds:0A372D0h
0x923272: movaps  xmm3, xmmword ptr [eax+20h]
0x923276: movaps  xmm1, xmmword ptr [eax+10h]
0x92327A: shl     ecx, 5
0x92327D: mov     edx, [ecx+esi+34h]
0x923281: andps   xmm1, xmm0
0x923284: lea     ecx, [ecx+esi+34h]
0x923288: mov     [esp+110h+var_A4], edx
0x92328C: mov     edx, [ecx+4]
0x92328F: movaps  xmm2, xmm3
0x923292: andps   xmm2, xmm0
0x923295: movss   xmm0, [esp+110h+var_A4]
0x92329B: movaps  xmm5, xmm0
0x92329E: shufps  xmm5, xmm0, 0
0x9232A2: movaps  xmm0, xmm5
0x9232A5: mulps   xmm0, xmm1
0x9232A8: mov     [esp+110h+var_9C], edx
0x9232AC: movss   xmm1, [esp+110h+var_9C]
0x9232B2: mov     edx, [esi]
0x9232B4: movaps  xmm5, xmm1
0x9232B7: shufps  xmm5, xmm1, 0
0x9232BB: mov     [esp+110h+var_94], edx
0x9232BF: movss   xmm1, [esp+110h+var_94]
0x9232C5: mulps   xmm5, xmm2
0x9232C8: addps   xmm0, xmm5
0x9232CB: shufps  xmm1, xmm1, 0
0x9232CF: cmpltps xmm1, xmm0
0x9232D3: movmskps edx, xmm1
0x9232D6: test    dl, 7
0x9232D9: jnz     short loc_923353
0x9232DB: mov     edx, [ecx+0Ch]
0x9232DE: mov     [esp+110h+var_8C], edx
0x9232E5: movss   xmm1, [esp+110h+var_8C]
0x9232EE: shufps  xmm1, xmm1, 0
0x9232F2: cmpltps xmm1, xmm0
0x9232F6: movmskps edx, xmm1
0x9232F9: test    dl, 7
0x9232FC: jnz     short loc_923313
0x9232FE: mov     ecx, [eax+4]
0x923301: test    ecx, ecx
0x923303: jbe     short loc_923309
0x923305: dec     ecx
0x923306: mov     [eax+4], ecx
0x923309: movaps  xmmword ptr [eax+20h], xmm4
0x92330D: movaps  xmmword ptr [eax+10h], xmm4
0x923311: jmp     short loc_923377
0x923313: mov     edx, [ecx+8]
0x923316: mov     [esp+110h+var_84], edx
0x92331D: movss   xmm0, [esp+110h+var_84]
0x923326: shufps  xmm0, xmm0, 0
0x92332A: mulps   xmm0, xmm3
0x92332D: movaps  xmmword ptr [eax+20h], xmm0
0x923331: mov     edx, [ecx+8]
0x923334: movaps  xmm1, xmmword ptr [eax+10h]
0x923338: mov     [esp+110h+var_7C], edx
0x92333F: movss   xmm0, [esp+110h+var_7C]
0x923348: shufps  xmm0, xmm0, 0
0x92334C: mulps   xmm0, xmm1
0x92334F: movaps  xmmword ptr [eax+10h], xmm0
0x923353: mov     ecx, [ecx+10h]
0x923356: mov     [eax+4], ecx
0x923359: movaps  xmm0, xmmword ptr [eax+20h]
0x92335D: movaps  xmm1, xmmword ptr [eax+50h]
0x923361: addps   xmm1, xmm0
0x923364: movaps  xmmword ptr [eax+50h], xmm1
0x923368: movaps  xmm0, xmmword ptr [eax+10h]
0x92336C: movaps  xmm1, xmmword ptr [eax+40h]
0x923370: addps   xmm1, xmm0
0x923373: movaps  xmmword ptr [eax+40h], xmm1
0x923377: mov     cl, [eax+80h]
0x92337D: add     eax, 80h ; '€'
0x923382: test    cl, cl
0x923384: jz      loc_923260
0x92338A: jmp     loc_923223
0x92338F: align 10h
0x923390: movzx   ecx, byte ptr [eax]
0x923393: sub     ecx, 0
0x923396: jz      short loc_9233B0
0x923398: dec     ecx
0x923399: jz      short loc_9233A3
0x92339B: dec     ecx
0x92339C: jnz     short loc_923390
0x92339E: jmp     loc_923231
0x9233A3: add     eax, 80h ; '€'
0x9233A8: jmp     short loc_923390
0x9233AA: align 10h
0x9233B0: mov     edx, [eax+8]
0x9233B3: movaps  xmm0, xmmword ptr ds:0A372D0h
0x9233BA: movaps  xmm3, xmmword ptr [eax+20h]
0x9233BE: movaps  xmm1, xmmword ptr [eax+10h]
0x9233C2: shl     edx, 5
0x9233C5: lea     ecx, [edx+esi+34h]
0x9233C9: mov     edx, [ecx]
0x9233CB: andps   xmm1, xmm0
0x9233CE: mov     [esp+110h+var_74], edx
0x9233D5: mov     edx, [ecx+4]
0x9233D8: movaps  xmm2, xmm3
0x9233DB: andps   xmm2, xmm0
0x9233DE: movss   xmm0, [esp+110h+var_74]
0x9233E7: movaps  xmm4, xmm0
0x9233EA: shufps  xmm4, xmm0, 0
0x9233EE: movaps  xmm0, xmm4
0x9233F1: mulps   xmm0, xmm1
0x9233F4: mov     [esp+110h+var_6C], edx
0x9233FB: movss   xmm1, [esp+110h+var_6C]
0x923404: mov     edx, [esi]
0x923406: movaps  xmm4, xmm1
0x923409: shufps  xmm4, xmm1, 0
0x92340D: mov     [esp+110h+var_64], edx
0x923414: movss   xmm1, [esp+110h+var_64]
0x92341D: mulps   xmm4, xmm2
0x923420: addps   xmm0, xmm4
0x923423: shufps  xmm1, xmm1, 0
0x923427: cmpltps xmm1, xmm0
0x92342B: movmskps edx, xmm1
0x92342E: test    dl, 7
0x923431: jnz     short loc_9234AE
0x923433: mov     edx, [ecx+0Ch]
0x923436: mov     [esp+110h+var_5C], edx
0x92343D: movss   xmm1, [esp+110h+var_5C]
0x923446: shufps  xmm1, xmm1, 0
0x92344A: cmpltps xmm1, xmm0
0x92344E: movmskps edx, xmm1
0x923451: test    dl, 7
0x923454: jnz     short loc_92346E
0x923456: mov     ecx, [eax+4]
0x923459: test    ecx, ecx
0x92345B: jbe     short loc_923461
0x92345D: dec     ecx
0x92345E: mov     [eax+4], ecx
0x923461: xorps   xmm0, xmm0
0x923464: movaps  xmmword ptr [eax+20h], xmm0
0x923468: movaps  xmmword ptr [eax+10h], xmm0
0x92346C: jmp     short loc_9234D2
0x92346E: mov     edx, [ecx+8]
0x923471: mov     [esp+110h+var_54], edx
0x923478: movss   xmm0, [esp+110h+var_54]
0x923481: shufps  xmm0, xmm0, 0
0x923485: mulps   xmm0, xmm3
0x923488: movaps  xmmword ptr [eax+20h], xmm0
0x92348C: mov     edx, [ecx+8]
0x92348F: movaps  xmm1, xmmword ptr [eax+10h]
0x923493: mov     [esp+110h+var_4C], edx
0x92349A: movss   xmm0, [esp+110h+var_4C]
0x9234A3: shufps  xmm0, xmm0, 0
0x9234A7: mulps   xmm0, xmm1
0x9234AA: movaps  xmmword ptr [eax+10h], xmm0
0x9234AE: mov     ecx, [ecx+10h]
0x9234B1: mov     [eax+4], ecx
0x9234B4: movaps  xmm0, xmmword ptr [eax+20h]
0x9234B8: movaps  xmm1, xmmword ptr [eax+50h]
0x9234BC: addps   xmm1, xmm0
0x9234BF: movaps  xmmword ptr [eax+50h], xmm1
0x9234C3: movaps  xmm0, xmmword ptr [eax+10h]
0x9234C7: movaps  xmm1, xmmword ptr [eax+40h]
0x9234CB: addps   xmm1, xmm0
0x9234CE: movaps  xmmword ptr [eax+40h], xmm1
0x9234D2: mov     cl, [eax+80h]
0x9234D8: add     eax, 80h ; '€'
0x9234DD: test    cl, cl
0x9234DF: jz      loc_9233B0
0x9234E5: jmp     loc_923390
0x9234EA: movaps  xmm1, xmmword ptr [esi+20h]; jumptable 0092324F case 5
0x9234EE: movaps  xmm2, xmmword ptr [eax+10h]
0x9234F2: movaps  xmm3, xmmword ptr [edi+10h]
0x9234F6: movaps  xmm5, xmmword ptr [eax+20h]
0x9234FA: movaps  xmm0, xmm1
0x9234FD: mulps   xmm0, xmm2
0x923500: movaps  xmm2, xmmword ptr [eax+40h]
0x923504: mulps   xmm1, xmm2
0x923507: movaps  xmm2, xmmword ptr [esi+10h]
0x92350B: subps   xmm2, xmm3
0x92350E: movaps  xmm3, xmmword ptr [edi+20h]
0x923512: movaps  xmm4, xmm3
0x923515: movaps  xmm6, xmm2
0x923518: mulps   xmm4, xmm5
0x92351B: movaps  xmm5, xmmword ptr [eax+50h]
0x92351F: mulps   xmm3, xmm5
0x923522: movaps  xmm5, xmmword ptr [eax]
0x923525: addps   xmm1, xmm3
0x923528: addps   xmm0, xmm4
0x92352B: movaps  xmm4, xmmword ptr [eax+30h]
0x92352F: mulps   xmm2, xmm4
0x923532: addps   xmm1, xmm2
0x923535: movaps  xmm2, xmm1
0x923538: shufps  xmm2, xmm1, 55h ; 'U'
0x92353C: addss   xmm2, xmm1
0x923540: movaps  xmm3, xmm1
0x923543: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x923547: movaps  xmm1, xmm3
0x92354A: addss   xmm1, xmm2
0x92354E: mulps   xmm6, xmm5
0x923551: addps   xmm0, xmm6
0x923554: movaps  xmm2, xmm0
0x923557: shufps  xmm2, xmm0, 55h ; 'U'
0x92355B: movaps  xmm3, xmm0
0x92355E: lea     edx, [esp+110h+var_44]
0x923565: addss   xmm2, xmm0
0x923569: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92356D: addss   xmm3, xmm2
0x923571: movss   dword ptr [edx], xmm3
0x923575: fld     dword ptr [eax+0Ch]
0x923578: fsub    [esp+110h+var_44]
0x92357F: lea     edx, [esp+110h+var_3C]
0x923586: add     eax, 60h ; '`'
0x923589: fstp    dword ptr [eax-54h]
0x92358C: movss   dword ptr [edx], xmm1
0x923590: fld     dword ptr [eax-24h]
0x923593: fsub    [esp+110h+var_3C]
0x92359A: fstp    dword ptr [eax-24h]
0x92359D: movzx   edx, byte ptr [ecx+1]
0x9235A1: add     ecx, edx
0x9235A3: mov     dl, [ecx+2]
0x9235A6: cmp     dl, 5
0x9235A9: jnz     loc_923243
0x9235AF: movaps  xmm1, xmmword ptr [esi+20h]
0x9235B3: movaps  xmm2, xmmword ptr [eax+10h]
0x9235B7: movaps  xmm3, xmmword ptr [edi+10h]
0x9235BB: movaps  xmm5, xmmword ptr [eax+20h]
0x9235BF: movaps  xmm0, xmm1
0x9235C2: mulps   xmm0, xmm2
0x9235C5: movaps  xmm2, xmmword ptr [eax+40h]
0x9235C9: mulps   xmm1, xmm2
0x9235CC: movaps  xmm2, xmmword ptr [esi+10h]
0x9235D0: subps   xmm2, xmm3
0x9235D3: movaps  xmm3, xmmword ptr [edi+20h]
0x9235D7: movaps  xmm4, xmm3
0x9235DA: movaps  xmm6, xmm2
0x9235DD: mulps   xmm4, xmm5
0x9235E0: movaps  xmm5, xmmword ptr [eax+50h]
0x9235E4: mulps   xmm3, xmm5
0x9235E7: movaps  xmm5, xmmword ptr [eax]
0x9235EA: addps   xmm1, xmm3
0x9235ED: addps   xmm0, xmm4
0x9235F0: movaps  xmm4, xmmword ptr [eax+30h]
0x9235F4: mulps   xmm2, xmm4
0x9235F7: addps   xmm1, xmm2
0x9235FA: movaps  xmm2, xmm1
0x9235FD: shufps  xmm2, xmm1, 55h ; 'U'
0x923601: addss   xmm2, xmm1
0x923605: movaps  xmm3, xmm1
0x923608: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x92360C: movaps  xmm1, xmm3
0x92360F: addss   xmm1, xmm2
0x923613: mulps   xmm6, xmm5
0x923616: addps   xmm0, xmm6
0x923619: movaps  xmm2, xmm0
0x92361C: shufps  xmm2, xmm0, 55h ; 'U'
0x923620: movaps  xmm3, xmm0
0x923623: lea     edx, [esp+110h+var_34]
0x92362A: addss   xmm2, xmm0
0x92362E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x923632: addss   xmm3, xmm2
0x923636: movss   dword ptr [edx], xmm3
0x92363A: fld     dword ptr [eax+0Ch]
0x92363D: fsub    [esp+110h+var_34]
0x923644: lea     edx, [esp+110h+var_2C]
0x92364B: add     eax, 60h ; '`'
0x92364E: fstp    dword ptr [eax-54h]
0x923651: movss   dword ptr [edx], xmm1
0x923655: fld     dword ptr [eax-24h]
0x923658: fsub    [esp+110h+var_2C]
0x92365F: fstp    dword ptr [eax-24h]
0x923662: movzx   edx, byte ptr [ecx+1]
0x923666: add     ecx, edx
0x923668: cmp     byte ptr [ecx+2], 6
0x92366C: jnz     loc_923240
0x923672: movaps  xmm1, xmmword ptr [esi+20h]; jumptable 0092324F case 6
0x923676: movaps  xmm2, xmmword ptr [eax+10h]
0x92367A: movaps  xmm3, xmmword ptr [edi+10h]
0x92367E: movaps  xmm5, xmmword ptr [eax+20h]
0x923682: movaps  xmm0, xmm1
0x923685: mulps   xmm0, xmm2
0x923688: movaps  xmm2, xmmword ptr [eax+40h]
0x92368C: mulps   xmm1, xmm2
0x92368F: movaps  xmm2, xmmword ptr [esi+10h]
0x923693: subps   xmm2, xmm3
0x923696: movaps  xmm3, xmmword ptr [edi+20h]
0x92369A: movaps  xmm6, xmm2
0x92369D: movaps  xmm4, xmm3
0x9236A0: mulps   xmm4, xmm5
0x9236A3: movaps  xmm5, xmmword ptr [eax+50h]
0x9236A7: mulps   xmm3, xmm5
0x9236AA: movaps  xmm5, xmmword ptr [eax]
0x9236AD: addps   xmm1, xmm3
0x9236B0: addps   xmm0, xmm4
0x9236B3: movaps  xmm4, xmmword ptr [eax+30h]
0x9236B7: mulps   xmm2, xmm4
0x9236BA: addps   xmm1, xmm2
0x9236BD: movaps  xmm2, xmm1
0x9236C0: shufps  xmm2, xmm1, 55h ; 'U'
0x9236C4: addss   xmm2, xmm1
0x9236C8: movaps  xmm3, xmm1
0x9236CB: shufps  xmm3, xmm1, 0AAh ; 'ª'
0x9236CF: movaps  xmm1, xmm3
0x9236D2: addss   xmm1, xmm2
0x9236D6: mulps   xmm6, xmm5
0x9236D9: addps   xmm0, xmm6
0x9236DC: movaps  xmm2, xmm0
0x9236DF: shufps  xmm2, xmm0, 55h ; 'U'
0x9236E3: addss   xmm2, xmm0
0x9236E7: movaps  xmm3, xmm0
0x9236EA: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x9236EE: addss   xmm3, xmm2
0x9236F2: lea     edx, [esp+110h+var_24]
0x9236F9: movss   dword ptr [edx], xmm3
0x9236FD: fld     dword ptr [eax+0Ch]
0x923700: fsub    [esp+110h+var_24]
0x923707: lea     edx, [esp+110h+var_1C]
0x92370E: add     eax, 80h ; '€'
0x923713: fstp    dword ptr [eax-74h]
0x923716: movss   dword ptr [edx], xmm1
0x92371A: fld     dword ptr [eax-44h]
0x92371D: lea     edx, [esp+110h+var_14]
0x923724: fsub    [esp+110h+var_1C]
0x92372B: fstp    dword ptr [eax-44h]
0x92372E: movaps  xmm1, xmmword ptr [eax-20h]
0x923732: movaps  xmm0, xmmword ptr [esi+20h]
0x923736: movaps  xmm2, xmmword ptr [edi+20h]
0x92373A: mulps   xmm0, xmm1
0x92373D: movaps  xmm1, xmmword ptr [eax-10h]
0x923741: mulps   xmm2, xmm1
0x923744: addps   xmm0, xmm2
0x923747: movaps  xmm1, xmm0
0x92374A: shufps  xmm1, xmm0, 55h ; 'U'
0x92374E: movaps  xmm2, xmm0
0x923751: addss   xmm1, xmm0
0x923755: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x923759: addss   xmm2, xmm1
0x92375D: movss   dword ptr [edx], xmm2
0x923761: fld     dword ptr [eax-4]
0x923764: fsub    [esp+110h+var_14]
0x92376B: fstp    dword ptr [eax-4]
0x92376E: movzx   edx, byte ptr [ecx+1]
0x923772: add     ecx, edx
0x923774: cmp     byte ptr [ecx], 1
0x923777: jnz     loc_923240
0x92377D: jmp     loc_923234; jumptable 0092324F case 1
0x923782: movaps  xmm1, xmmword ptr [eax+10h]; jumptable 0092324F case 3
0x923786: movaps  xmm0, xmmword ptr [esi+20h]
0x92378A: movaps  xmm2, xmmword ptr [edi+10h]
0x92378E: movaps  xmm3, xmmword ptr [edi+20h]
0x923792: mulps   xmm0, xmm1
0x923795: movaps  xmm1, xmmword ptr [esi+10h]
0x923799: subps   xmm1, xmm2
0x92379C: movaps  xmm2, xmmword ptr [eax]
0x92379F: mulps   xmm1, xmm2
0x9237A2: movaps  xmm2, xmmword ptr [eax+20h]
0x9237A6: mulps   xmm3, xmm2
0x9237A9: addps   xmm0, xmm3
0x9237AC: addps   xmm0, xmm1
0x9237AF: movaps  xmm1, xmm0
0x9237B2: shufps  xmm1, xmm0, 55h ; 'U'
0x9237B6: movaps  xmm2, xmm0
0x9237B9: lea     edx, [esp+110h+var_C]
0x9237C0: addss   xmm1, xmm0
0x9237C4: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x9237C8: addss   xmm2, xmm1
0x9237CC: movss   dword ptr [edx], xmm2
0x9237D0: fld     dword ptr [eax+0Ch]
0x9237D3: fsub    [esp+110h+var_C]
0x9237DA: add     eax, 30h ; '0'
0x9237DD: fstp    dword ptr [eax-24h]
0x9237E0: movzx   edx, byte ptr [ecx+1]
0x9237E4: add     ecx, edx
0x9237E6: cmp     byte ptr [ecx+2], 3
0x9237EA: jz      short loc_923782; jumptable 0092324F case 3
0x9237EC: jmp     loc_923240
0x9237F1: movaps  xmm1, xmmword ptr [eax]; jumptable 0092324F case 4
0x9237F4: movaps  xmm0, xmmword ptr [esi+20h]
0x9237F8: movaps  xmm2, xmmword ptr [edi+20h]
0x9237FC: mulps   xmm0, xmm1
0x9237FF: movaps  xmm1, xmmword ptr [eax+10h]
0x923803: mulps   xmm2, xmm1
0x923806: addps   xmm0, xmm2
0x923809: movaps  xmm1, xmm0
0x92380C: shufps  xmm1, xmm0, 55h ; 'U'
0x923810: movaps  xmm2, xmm0
0x923813: lea     edx, [esp+110h+var_4]
0x92381A: addss   xmm1, xmm0
0x92381E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x923822: addss   xmm2, xmm1
0x923826: movss   dword ptr [edx], xmm2
0x92382A: fld     dword ptr [eax+1Ch]
0x92382D: fsub    [esp+110h+var_4]
0x923834: add     eax, 20h ; ' '
0x923837: fstp    dword ptr [eax-4]
0x92383A: movzx   edx, byte ptr [ecx+1]
0x92383E: add     ecx, edx
0x923840: cmp     byte ptr [ecx+2], 4
0x923844: jz      short loc_9237F1; jumptable 0092324F case 4
0x923846: jmp     loc_923240
0x92384B: movzx   edx, byte ptr [ecx+1]; jumptable 0092324F case 2
0x92384F: add     ecx, edx
0x923851: jmp     loc_923240
0x923856: int     3; Trap to Debugger
0x923857: mov     eax, [ebp+arg_0]; jumptable 0092324F case 0
0x92385A: mov     ecx, [eax+0FCh]
0x923860: inc     ebx
0x923861: cmp     ebx, ecx
0x923863: mov     [esp+110h+var_E0], ebx
0x923867: jl      loc_921A90
0x92386D: mov     edi, [ebp+arg_C]
0x923870: mov     esi, [ebp+arg_4]
0x923873: mov     ebx, [esi+8]; jumptable 009238D3 case 1
0x923876: mov     ecx, [esi+14h]
0x923879: mov     eax, [esi+4]
0x92387C: add     esi, 18h
0x92387F: test    ebx, ebx
0x923881: mov     [esp+110h+var_E4], ecx
0x923885: jnz     short def_9238D3
0x923887: cmp     byte ptr [esi], 1
0x92388A: jle     short def_9238D3
0x92388C: lea     esp, [esp+0]
0x923890: mov     cl, [esi+2]
0x923893: cmp     cl, 3
0x923896: jl      short loc_9238AB
0x923898: add     edi, 4
0x92389B: cmp     cl, 5
0x92389E: jl      short loc_9238AB
0x9238A0: add     edi, 4
0x9238A3: cmp     cl, 6
0x9238A6: jnz     short loc_9238AB
0x9238A8: add     edi, 4
0x9238AB: movzx   edx, byte ptr [esi+1]
0x9238AF: mov     cl, [esi+edx]
0x9238B2: add     esi, edx
0x9238B4: cmp     cl, 1
0x9238B7: jg      short loc_923890
0x9238B9: lea     esp, [esp+0]

0x93C690: push    ebp
0x93C691: mov     ebp, esp
0x93C693: and     esp, 0FFFFFFF0h
0x93C696: sub     esp, 94h
0x93C69C: push    ebx
0x93C69D: push    esi
0x93C69E: mov     esi, ecx
0x93C6A0: mov     ecx, [ebp+arg_8]
0x93C6A3: movaps  xmm4, xmmword ptr [ecx]
0x93C6A6: movaps  xmm5, xmmword ptr [ecx+10h]
0x93C6AA: movaps  xmm6, xmmword ptr [ecx+20h]
0x93C6AE: movaps  xmm7, xmmword ptr [ecx+30h]
0x93C6B2: mov     edx, [esi+4]
0x93C6B5: push    edi
0x93C6B6: lea     edi, [esi+4]
0x93C6B9: lea     eax, [esi+0E0h]
0x93C6BF: lea     ecx, [esi+0A0h]
0x93C6C5: sub     ecx, eax
0x93C6C7: jmp     short loc_93C6D0
0x93C6C9: align 10h
0x93C6D0: movaps  xmm0, xmmword ptr [eax]
0x93C6D3: movaps  xmm2, xmm0
0x93C6D6: shufps  xmm2, xmm0, 0
0x93C6DA: movaps  xmm1, xmm4
0x93C6DD: mulps   xmm1, xmm2
0x93C6E0: movaps  xmm2, xmm0
0x93C6E3: shufps  xmm2, xmm0, 55h ; 'U'
0x93C6E7: movaps  xmm3, xmm5
0x93C6EA: mulps   xmm3, xmm2
0x93C6ED: movaps  xmm2, xmm0
0x93C6F0: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93C6F4: movaps  xmm0, xmm6
0x93C6F7: mulps   xmm0, xmm2
0x93C6FA: addps   xmm0, xmm7
0x93C6FD: addps   xmm1, xmm3
0x93C700: addps   xmm1, xmm0
0x93C703: movaps  xmmword ptr [ecx+eax], xmm1
0x93C707: add     eax, 10h
0x93C70A: dec     edx
0x93C70B: test    edx, edx
0x93C70D: jg      short loc_93C6D0
0x93C70F: mov     [esp+0A0h+var_80], 0
0x93C717: mov     [esp+0A0h+var_84], 2EDBE6FFh
0x93C71F: lea     ebx, [esi+20h]
0x93C722: mov     eax, [esp+0A0h+var_80]
0x93C726: fld     [esp+0A0h+var_84]
0x93C72A: mov     ecx, [edi]
0x93C72C: fadd    st, st
0x93C72E: inc     eax
0x93C72F: mov     [esp+0A0h+var_80], eax
0x93C733: mov     eax, [esi]
0x93C735: fstp    [esp+0A0h+var_84]
0x93C739: lea     edx, [eax+ecx]
0x93C73C: shl     eax, 3
0x93C73F: or      eax, ecx
0x93C741: sub     eax, 9; switch 25 cases
0x93C744: cmp     eax, 18h
0x93C747: mov     [esp+0A0h+var_8C], edx
0x93C74B: mov     dword ptr [esi+170h], 0
0x93C755: ja      def_93C767; jumptable 0093C767 default case, cases 13-16,20-24,27-32
0x93C75B: jmp     short loc_93C760
0x93C75D: align 10h
0x93C760: movzx   eax, ds:byte_93D47C[eax]
0x93C767: jmp     ds:jpt_93C767[eax*4]; switch jump
0x93C76E: push    1; jumptable 0093C767 case 19
0x93C770: push    ecx
0x93C771: mov     ecx, [esi+174h]
0x93C777: mov     eax, esp
0x93C779: cmp     ecx, 2
0x93C77C: push    edi
0x93C77D: setz    cl
0x93C780: mov     [eax], cl
0x93C782: push    esi
0x93C783: lea     eax, [esi+0A0h]
0x93C789: push    eax
0x93C78A: push    ebx
0x93C78B: jmp     short loc_93C7AA
0x93C78D: push    0FFFFFFFFh; jumptable 0093C767 case 26
0x93C78F: push    ecx
0x93C790: mov     ecx, [esi+174h]
0x93C796: mov     eax, esp
0x93C798: push    esi
0x93C799: cmp     ecx, 2
0x93C79C: setz    dl
0x93C79F: push    edi
0x93C7A0: mov     [eax], dl
0x93C7A2: push    ebx
0x93C7A3: lea     eax, [esi+0A0h]
0x93C7A9: push    eax
0x93C7AA: mov     ecx, esi
0x93C7AC: call    sub_93B220
0x93C7B1: dec     eax
0x93C7B2: jz      def_93C767; jumptable 0093C767 default case, cases 13-16,20-24,27-32
0x93C7B8: dec     eax
0x93C7B9: jnz     loc_93CFE4
0x93C7BF: movaps  xmm0, xmmword ptr [esi+20h]; jumptable 0093C767 case 18
0x93C7C3: movaps  xmm1, xmmword ptr [esi+30h]
0x93C7C7: lea     ecx, [esi+130h]
0x93C7CD: push    ecx
0x93C7CE: lea     ebx, [esi+20h]
0x93C7D1: subps   xmm1, xmm0
0x93C7D4: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93C7DB: lea     edx, [esp+0A4h+var_40]
0x93C7DF: push    edx
0x93C7E0: lea     eax, [esi+0A0h]
0x93C7E6: push    eax
0x93C7E7: lea     eax, [esp+0ACh+var_10]
0x93C7EE: movaps  [esp+0ACh+var_10], xmm1
0x93C7F6: movaps  xmm1, xmmword ptr [esi+0B0h]
0x93C7FD: push    eax
0x93C7FE: subps   xmm1, xmm0
0x93C801: push    ebx
0x93C802: movaps  [esp+0B4h+var_40], xmm1
0x93C807: call    sub_8D1A30
0x93C80C: add     esp, 14h
0x93C80F: test    eax, eax
0x93C811: jz      loc_93CD29
0x93C817: test    al, 1
0x93C819: jz      short loc_93C824
0x93C81B: movaps  xmm0, xmmword ptr [esi+30h]
0x93C81F: movaps  xmmword ptr [ebx], xmm0
0x93C822: jmp     short loc_93C828
0x93C824: test    al, 2
0x93C826: jz      short loc_93C82E
0x93C828: mov     dword ptr [esi], 1
0x93C82E: test    al, 4
0x93C830: jz      short loc_93C859
0x93C832: movaps  xmm0, xmmword ptr [esi+0B0h]
0x93C839: movaps  xmmword ptr [esi+0A0h], xmm0
0x93C840: movaps  xmm0, xmmword ptr [esi+0F0h]
0x93C847: movaps  xmmword ptr [esi+0E0h], xmm0
0x93C84E: mov     dword ptr [edi], 1
0x93C854: jmp     loc_93CB05
0x93C859: test    al, 8
0x93C85B: jz      loc_93CB05
0x93C861: mov     dword ptr [edi], 1
0x93C867: jmp     loc_93CB05
0x93C86C: push    3F800000h; jumptable 0093C767 case 12
0x93C871: lea     eax, [esi+0A0h]
0x93C877: lea     ebx, [esi+20h]
0x93C87A: call    sub_93C0C0
0x93C87F: add     esp, 4
0x93C882: test    eax, eax
0x93C884: jl      def_93C767; jumptable 0093C767 default case, cases 13-16,20-24,27-32
0x93C88A: mov     ebx, [edi]
0x93C88C: movaps  xmm0, xmmword ptr [esi+0D0h]
0x93C893: lea     ecx, [eax+0Ah]
0x93C896: dec     ebx
0x93C897: shl     ecx, 4
0x93C89A: mov     [edi], ebx
0x93C89C: add     eax, 0Eh
0x93C89F: movaps  xmmword ptr [ecx+esi], xmm0
0x93C8A3: movaps  xmm0, xmmword ptr [esi+110h]
0x93C8AA: shl     eax, 4
0x93C8AD: movaps  xmmword ptr [eax+esi], xmm0
0x93C8B1: push    1; jumptable 0093C767 case 11
0x93C8B3: lea     eax, [esi+0A0h]
0x93C8B9: push    eax
0x93C8BA: lea     ebx, [esi+20h]
0x93C8BD: push    ebx
0x93C8BE: mov     ecx, esi
0x93C8C0: call    sub_93B000
0x93C8C5: cmp     eax, 7
0x93C8C8: jz      loc_93CFE4
0x93C8CE: movsx   eax, ds:byte_A99F04[eax]
0x93C8D5: test    eax, eax
0x93C8D7: jl      loc_93CDAC
0x93C8DD: movsx   edx, ds:byte_A99F0C[eax]
0x93C8E4: movsx   ecx, ds:byte_A99F0E[eax]
0x93C8EB: movaps  xmm1, xmmword ptr [ebx]
0x93C8EE: add     eax, 0Ah
0x93C8F1: shl     eax, 4
0x93C8F4: movaps  xmm0, xmmword ptr [eax+esi]
0x93C8F8: lea     eax, [ecx+0Ah]
0x93C8FB: shl     eax, 4
0x93C8FE: movaps  xmm2, xmmword ptr [eax+esi]
0x93C902: add     eax, esi
0x93C904: mov     [esp+0A0h+var_7C], eax
0x93C908: lea     eax, [edx+0Ah]
0x93C90B: shl     eax, 4
0x93C90E: movaps  xmm3, xmmword ptr [eax+esi]
0x93C912: add     eax, esi
0x93C914: subps   xmm3, xmm0
0x93C917: subps   xmm1, xmm0
0x93C91A: subps   xmm2, xmm0
0x93C91D: movaps  xmm0, xmm1
0x93C920: mulps   xmm0, xmm3
0x93C923: movaps  xmm3, xmm0
0x93C926: shufps  xmm3, xmm0, 55h ; 'U'
0x93C92A: movaps  xmm4, xmm0
0x93C92D: addss   xmm3, xmm0
0x93C931: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93C935: movaps  xmm0, xmmword ptr [esi+0C0h]
0x93C93C: mov     [esp+0A0h+var_90], eax
0x93C940: addss   xmm4, xmm3
0x93C944: movmskps eax, xmm4
0x93C947: test    al, 1
0x93C949: mov     dword ptr [edi], 2
0x93C94F: jz      short loc_93C9C7
0x93C951: mov     eax, [esp+0A0h+var_90]
0x93C955: movaps  xmmword ptr [eax], xmm0
0x93C958: movaps  xmm0, xmmword ptr [esi+100h]
0x93C95F: mulps   xmm1, xmm2
0x93C962: lea     eax, [edx+0Eh]
0x93C965: shl     eax, 4
0x93C968: movaps  xmmword ptr [eax+esi], xmm0
0x93C96C: movaps  xmm0, xmm1
0x93C96F: shufps  xmm0, xmm1, 55h ; 'U'
0x93C973: movaps  xmm2, xmm1
0x93C976: addss   xmm0, xmm1
0x93C97A: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x93C97E: addss   xmm2, xmm0
0x93C982: movmskps eax, xmm2
0x93C985: test    al, 1
0x93C987: jz      loc_93CB05
0x93C98D: mov     eax, [edi]
0x93C98F: cmp     ecx, eax
0x93C991: jnz     short loc_93C995
0x93C993: mov     ecx, edx
0x93C995: dec     eax
0x93C996: mov     [edi], eax
0x93C998: add     eax, 0Ah
0x93C99B: shl     eax, 4
0x93C99E: movaps  xmm0, xmmword ptr [eax+esi]
0x93C9A2: lea     edx, [ecx+0Ah]
0x93C9A5: shl     edx, 4
0x93C9A8: movaps  xmmword ptr [edx+esi], xmm0
0x93C9AC: mov     eax, [edi]
0x93C9AE: add     eax, 0Eh
0x93C9B1: shl     eax, 4
0x93C9B4: movaps  xmm0, xmmword ptr [eax+esi]
0x93C9B8: add     ecx, 0Eh
0x93C9BB: shl     ecx, 4
0x93C9BE: movaps  xmmword ptr [ecx+esi], xmm0
0x93C9C2: jmp     loc_93CB05
0x93C9C7: mov     edx, [esp+0A0h+var_7C]
0x93C9CB: add     ecx, 0Eh
0x93C9CE: movaps  xmmword ptr [edx], xmm0
0x93C9D1: movaps  xmm0, xmmword ptr [esi+100h]
0x93C9D8: shl     ecx, 4
0x93C9DB: movaps  xmmword ptr [ecx+esi], xmm0
0x93C9DF: jmp     loc_93CB05
0x93C9E4: push    0BF800000h; jumptable 0093C767 case 33
0x93C9E9: lea     eax, [esi+20h]
0x93C9EC: lea     ebx, [esi+0A0h]
0x93C9F2: call    sub_93C0C0
0x93C9F7: add     esp, 4
0x93C9FA: test    eax, eax
0x93C9FC: jl      def_93C767; jumptable 0093C767 default case, cases 13-16,20-24,27-32
0x93CA02: mov     edx, [esi]
0x93CA04: movaps  xmm0, xmmword ptr [esi+50h]
0x93CA08: dec     edx
0x93CA09: add     eax, 2
0x93CA0C: shl     eax, 4
0x93CA0F: mov     [esi], edx
0x93CA11: movaps  xmmword ptr [eax+esi], xmm0
0x93CA15: push    0FFFFFFFFh; jumptable 0093C767 case 25
0x93CA17: lea     ebx, [esi+20h]
0x93CA1A: push    ebx
0x93CA1B: lea     eax, [esi+0A0h]
0x93CA21: push    eax
0x93CA22: mov     ecx, esi
0x93CA24: call    sub_93B000
0x93CA29: cmp     eax, 7
0x93CA2C: jz      loc_93CFE4
0x93CA32: movsx   eax, ds:byte_A99F04[eax]
0x93CA39: test    eax, eax
0x93CA3B: jl      loc_93CED1
0x93CA41: movsx   edx, ds:byte_A99F0C[eax]
0x93CA48: movsx   ecx, ds:byte_A99F0E[eax]
0x93CA4F: movaps  xmm1, xmmword ptr [esi+0A0h]
0x93CA56: add     eax, 2
0x93CA59: shl     eax, 4
0x93CA5C: movaps  xmm0, xmmword ptr [eax+esi]
0x93CA60: mov     [esp+0A0h+var_7C], edx
0x93CA64: lea     eax, [ecx+2]
0x93CA67: shl     eax, 4
0x93CA6A: movaps  xmm2, xmmword ptr [eax+esi]
0x93CA6E: add     eax, esi
0x93CA70: add     edx, 2
0x93CA73: shl     edx, 4
0x93CA76: movaps  xmm3, xmmword ptr [edx+esi]
0x93CA7A: subps   xmm3, xmm0
0x93CA7D: mov     [esp+0A0h+var_90], eax
0x93CA81: lea     eax, [edx+esi]
0x93CA84: subps   xmm1, xmm0
0x93CA87: subps   xmm2, xmm0
0x93CA8A: movaps  xmm0, xmm1
0x93CA8D: mulps   xmm0, xmm3
0x93CA90: movaps  xmm3, xmm0
0x93CA93: shufps  xmm3, xmm0, 55h ; 'U'
0x93CA97: movaps  xmm4, xmm0
0x93CA9A: addss   xmm3, xmm0
0x93CA9E: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93CAA2: movaps  xmm0, xmmword ptr [esi+40h]
0x93CAA6: addss   xmm4, xmm3
0x93CAAA: movmskps edx, xmm4
0x93CAAD: test    dl, 1
0x93CAB0: mov     dword ptr [esi], 2
0x93CAB6: jz      short loc_93CAFE
0x93CAB8: mulps   xmm1, xmm2
0x93CABB: movaps  xmmword ptr [eax], xmm0
0x93CABE: movaps  xmm0, xmm1
0x93CAC1: shufps  xmm0, xmm1, 55h ; 'U'
0x93CAC5: movaps  xmm2, xmm1
0x93CAC8: addss   xmm0, xmm1
0x93CACC: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x93CAD0: addss   xmm2, xmm0
0x93CAD4: movmskps eax, xmm2
0x93CAD7: test    al, 1
0x93CAD9: jz      short loc_93CB05
0x93CADB: mov     eax, [esi]
0x93CADD: cmp     ecx, eax
0x93CADF: jnz     short loc_93CAE5
0x93CAE1: mov     ecx, [esp+0A0h+var_7C]
0x93CAE5: dec     eax
0x93CAE6: mov     [esi], eax
0x93CAE8: add     eax, 2
0x93CAEB: shl     eax, 4
0x93CAEE: movaps  xmm0, xmmword ptr [eax+esi]
0x93CAF2: add     ecx, 2
0x93CAF5: shl     ecx, 4
0x93CAF8: movaps  xmmword ptr [ecx+esi], xmm0
0x93CAFC: jmp     short loc_93CB05
0x93CAFE: mov     ecx, [esp+0A0h+var_90]
0x93CB02: movaps  xmmword ptr [ecx], xmm0
0x93CB05: mov     eax, [esi]
0x93CB07: mov     ecx, [edi]
0x93CB09: shl     eax, 3
0x93CB0C: or      eax, ecx
0x93CB0E: sub     eax, 9
0x93CB11: cmp     eax, 18h
0x93CB14: jbe     loc_93C760
0x93CB1A: mov     eax, 1; jumptable 0093C767 default case, cases 13-16,20-24,27-32
0x93CB1F: movaps  xmm0, xmmword ptr [esi+120h]
0x93CB26: mov     edx, [esi]
0x93CB28: mov     ebx, [esp+0A0h+var_8C]
0x93CB2C: mulps   xmm0, xmm0
0x93CB2F: movaps  xmm1, xmm0
0x93CB32: shufps  xmm1, xmm0, 55h ; 'U'
0x93CB36: addss   xmm1, xmm0
0x93CB3A: movaps  xmm2, xmm0
0x93CB3D: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93CB41: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93CB48: addss   xmm2, xmm1
0x93CB4C: movaps  xmm1, xmmword ptr [esi+120h]
0x93CB53: lea     ecx, [esp+0A0h+var_74]
0x93CB57: movss   dword ptr [ecx], xmm2
0x93CB5B: movaps  xmm2, xmmword ptr [esi+20h]
0x93CB5F: mov     ecx, edx
0x93CB61: sub     ecx, ebx
0x93CB63: add     ecx, [edi]
0x93CB65: mov     ebx, [esi+14h]
0x93CB68: or      ebx, ecx
0x93CB6A: test    eax, eax
0x93CB6C: mov     [esi+14h], ebx
0x93CB6F: subps   xmm2, xmm0
0x93CB72: lea     ebx, [esi+20h]
0x93CB75: movaps  xmm0, xmm2
0x93CB78: mulps   xmm0, xmm1
0x93CB7B: movaps  xmm2, xmm0
0x93CB7E: shufps  xmm2, xmm0, 55h ; 'U'
0x93CB82: movaps  xmm3, xmm0
0x93CB85: addss   xmm2, xmm0
0x93CB89: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93CB8D: lea     ecx, [esp+0A0h+var_64]
0x93CB91: addss   xmm3, xmm2
0x93CB95: movss   dword ptr [ecx], xmm3
0x93CB99: jnz     loc_93D317
0x93CB9F: fld     [esp+0A0h+var_74]
0x93CBA3: fmul    [esp+0A0h+var_84]
0x93CBA7: fld     [esp+0A0h+var_64]
0x93CBAB: fabs
0x93CBAD: fmul    [esp+0A0h+var_64]
0x93CBB1: fcomp   st(1)
0x93CBB3: fnstsw  ax
0x93CBB5: test    ah, 41h
0x93CBB8: jnp     loc_93D315
0x93CBBE: fld     [esp+0A0h+var_74]
0x93CBC2: fcomp   [esp+0A0h+var_84]
0x93CBC6: fnstsw  ax
0x93CBC8: test    ah, 5
0x93CBCB: jnp     loc_93D315
0x93CBD1: mov     eax, [esp+0A0h+var_80]
0x93CBD5: fstp    [esp+0A0h+var_90]
0x93CBD9: and     eax, 1
0x93CBDC: mov     [esp+0A0h+var_8C], eax
0x93CBE0: jz      loc_93CFF3
0x93CBE6: cmp     edx, [esi+8]
0x93CBE9: jz      loc_93CFF3
0x93CBEF: cmp     dword ptr [esi+170h], 1
0x93CBF6: jz      loc_93CFF3
0x93CBFC: mov     ecx, [ebp+arg_0]
0x93CBFF: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93CC06: mov     eax, [ecx]
0x93CC08: add     edx, 2
0x93CC0B: shl     edx, 4
0x93CC0E: add     edx, esi
0x93CC10: push    edx
0x93CC11: lea     edx, [esp+0A4h+var_20]
0x93CC18: xorps   xmm1, xmm0
0x93CC1B: push    edx
0x93CC1C: movaps  [esp+0A8h+var_20], xmm1
0x93CC24: call    dword ptr [eax+24h]
0x93CC27: mov     ecx, [esi]
0x93CC29: movaps  xmm0, xmmword ptr [ebx]
0x93CC2C: movaps  xmm2, [esp+0A0h+var_20]
0x93CC34: lea     eax, [ecx+2]
0x93CC37: shl     eax, 4
0x93CC3A: movaps  xmm1, xmmword ptr [eax+esi]
0x93CC3E: movaps  xmm3, xmm1
0x93CC41: subps   xmm3, xmm0
0x93CC44: movaps  xmm0, xmm3
0x93CC47: mulps   xmm0, xmm2
0x93CC4A: movaps  xmm3, xmm0
0x93CC4D: shufps  xmm3, xmm0, 55h ; 'U'
0x93CC51: movaps  xmm4, xmm0
0x93CC54: addss   xmm3, xmm0
0x93CC58: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93CC5C: lea     edx, [esp+0A0h+var_70]
0x93CC60: addss   xmm4, xmm3
0x93CC64: movss   dword ptr [edx], xmm4
0x93CC68: fld     [esp+0A0h+var_70]
0x93CC6C: fabs
0x93CC6E: fmul    [esp+0A0h+var_70]
0x93CC72: fcomp   [esp+0A0h+var_90]
0x93CC76: fnstsw  ax
0x93CC78: test    ah, 41h
0x93CC7B: jnz     loc_93CFF3
0x93CC81: mov     eax, ecx
0x93CC83: sub     eax, 2
0x93CC86: jz      short loc_93CCD6
0x93CC88: dec     eax
0x93CC89: jnz     loc_93CD1A
0x93CC8F: movaps  xmm0, xmmword ptr [esi+40h]
0x93CC93: movaps  xmm3, xmm1
0x93CC96: subps   xmm3, xmm0
0x93CC99: movaps  xmm0, xmm3
0x93CC9C: mulps   xmm0, xmm2
0x93CC9F: movaps  xmm3, xmm0
0x93CCA2: shufps  xmm3, xmm0, 55h ; 'U'
0x93CCA6: movaps  xmm4, xmm0
0x93CCA9: lea     eax, [esp+0A0h+var_68]
0x93CCAD: addss   xmm3, xmm0
0x93CCB1: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93CCB5: addss   xmm4, xmm3
0x93CCB9: movss   dword ptr [eax], xmm4
0x93CCBD: fld     [esp+0A0h+var_68]
0x93CCC1: fabs
0x93CCC3: fmul    [esp+0A0h+var_68]
0x93CCC7: fcomp   [esp+0A0h+var_90]
0x93CCCB: fnstsw  ax
0x93CCCD: test    ah, 5
0x93CCD0: jnp     loc_93CFF3
0x93CCD6: movaps  xmm0, xmmword ptr [esi+30h]
0x93CCDA: subps   xmm1, xmm0
0x93CCDD: movaps  xmm0, xmm1
0x93CCE0: mulps   xmm0, xmm2
0x93CCE3: movaps  xmm1, xmm0
0x93CCE6: shufps  xmm1, xmm0, 55h ; 'U'
0x93CCEA: movaps  xmm2, xmm0
0x93CCED: addss   xmm1, xmm0
0x93CCF1: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93CCF5: lea     edx, [esp+0A0h+var_5C]
0x93CCF9: addss   xmm2, xmm1
0x93CCFD: movss   dword ptr [edx], xmm2
0x93CD01: fld     [esp+0A0h+var_5C]
0x93CD05: fabs
0x93CD07: fmul    [esp+0A0h+var_5C]
0x93CD0B: fcomp   [esp+0A0h+var_90]
0x93CD0F: fnstsw  ax
0x93CD11: test    ah, 5
0x93CD14: jnp     loc_93CFF3
0x93CD1A: inc     ecx
0x93CD1B: mov     [esi], ecx
0x93CD1D: mov     dword ptr [esi+14h], 1
0x93CD24: jmp     loc_93C722
0x93CD29: movaps  xmm0, [esp+0A0h+var_40]
0x93CD2E: movaps  xmm1, xmm0
0x93CD31: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93CD35: movaps  xmm2, xmm1
0x93CD38: movaps  xmm1, [esp+0A0h+var_10]
0x93CD40: movaps  xmm3, xmm1
0x93CD43: shufps  xmm3, xmm1, 0D2h ; 'Ò'
0x93CD47: mulps   xmm3, xmm2
0x93CD4A: movaps  xmm2, xmm0
0x93CD4D: shufps  xmm2, xmm0, 0D2h ; 'Ò'
0x93CD51: movaps  xmm0, xmm1
0x93CD54: shufps  xmm0, xmm1, 0C9h ; 'É'
0x93CD58: movaps  xmm1, xmm0
0x93CD5B: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93CD62: mulps   xmm1, xmm2
0x93CD65: movaps  xmm2, xmmword ptr [ebx]
0x93CD68: subps   xmm1, xmm3
0x93CD6B: subps   xmm2, xmm0
0x93CD6E: movaps  xmm0, xmm1
0x93CD71: mulps   xmm0, xmm2
0x93CD74: movaps  xmm2, xmm0
0x93CD77: shufps  xmm2, xmm0, 55h ; 'U'
0x93CD7B: movaps  xmm3, xmm0
0x93CD7E: addss   xmm2, xmm0
0x93CD82: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x93CD86: addss   xmm3, xmm2
0x93CD8A: movmskps edx, xmm3
0x93CD8D: test    dl, 1
0x93CD90: movaps  xmmword ptr [esi+120h], xmm1
0x93CD97: jz      loc_93CFE4
0x93CD9D: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93CDA4: xorps   xmm1, xmm0
0x93CDA7: jmp     loc_93CFDD
0x93CDAC: add     eax, 8
0x93CDAF: cmp     eax, 3
0x93CDB2: jle     short loc_93CDB9
0x93CDB4: mov     eax, 1
0x93CDB9: mov     ecx, [edi]
0x93CDBB: movaps  xmm0, xmmword ptr [esi+0C0h]
0x93CDC2: dec     ecx
0x93CDC3: mov     [edi], ecx
0x93CDC5: lea     ecx, [eax+0Ah]
0x93CDC8: shl     ecx, 4
0x93CDCB: add     eax, 0Eh
0x93CDCE: movaps  xmmword ptr [ecx+esi], xmm0
0x93CDD2: movaps  xmm0, xmmword ptr [esi+100h]
0x93CDD9: shl     eax, 4
0x93CDDC: movaps  xmmword ptr [eax+esi], xmm0
0x93CDE0: movaps  xmm5, xmmword ptr [esi+0B0h]; jumptable 0093C767 case 10
0x93CDE7: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93CDEE: movaps  xmm1, xmmword ptr [ebx]
0x93CDF1: movaps  xmm2, xmm5
0x93CDF4: subps   xmm2, xmm0
0x93CDF7: subps   xmm0, xmm1
0x93CDFA: movaps  xmm4, xmm0
0x93CDFD: movaps  xmm3, xmm5
0x93CE00: subps   xmm3, xmm1
0x93CE03: movaps  xmm0, xmm3
0x93CE06: mulps   xmm0, xmm2
0x93CE09: movaps  xmm6, xmm0
0x93CE0C: shufps  xmm6, xmm0, 55h ; 'U'
0x93CE10: addss   xmm6, xmm0
0x93CE14: movaps  xmm7, xmm0
0x93CE17: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x93CE1B: addss   xmm7, xmm6
0x93CE1F: movaps  xmm1, xmm4
0x93CE22: mulps   xmm1, xmm2
0x93CE25: movaps  xmm0, xmm1
0x93CE28: shufps  xmm0, xmm1, 55h ; 'U'
0x93CE2C: movaps  xmm6, xmm1
0x93CE2F: addss   xmm0, xmm1
0x93CE33: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x93CE37: addss   xmm6, xmm0
0x93CE3B: movmskps eax, xmm7
0x93CE3E: movmskps edx, xmm6
0x93CE41: and     eax, 1
0x93CE44: and     edx, 1
0x93CE47: cmp     eax, edx
0x93CE49: jz      short loc_93CEB1
0x93CE4B: movaps  xmm1, xmm3
0x93CE4E: shufps  xmm1, xmm3, 0D2h ; 'Ò'
0x93CE52: movaps  xmm0, xmm4
0x93CE55: shufps  xmm0, xmm4, 0C9h ; 'É'
0x93CE59: mulps   xmm1, xmm0
0x93CE5C: movaps  xmm0, xmm4
0x93CE5F: shufps  xmm0, xmm4, 0D2h ; 'Ò'
0x93CE63: movaps  xmm4, xmm3
0x93CE66: shufps  xmm4, xmm3, 0C9h ; 'É'
0x93CE6A: movaps  xmm3, xmm4
0x93CE6D: mulps   xmm3, xmm0
0x93CE70: movaps  xmm0, xmm3
0x93CE73: subps   xmm0, xmm1
0x93CE76: movaps  xmm1, xmm0
0x93CE79: shufps  xmm1, xmm0, 0C9h ; 'É'
0x93CE7D: movaps  xmm3, xmm2
0x93CE80: shufps  xmm3, xmm2, 0D2h ; 'Ò'
0x93CE84: mulps   xmm3, xmm1
0x93CE87: movaps  xmm1, xmm0
0x93CE8A: shufps  xmm1, xmm0, 0D2h ; 'Ò'
0x93CE8E: movaps  xmm0, xmm2
0x93CE91: shufps  xmm0, xmm2, 0C9h ; 'É'
0x93CE95: mulps   xmm0, xmm1
0x93CE98: subps   xmm0, xmm3
0x93CE9B: movaps  xmmword ptr [esi+120h], xmm0
0x93CEA2: mov     edx, [edi]
0x93CEA4: mov     [esi+174h], edx
0x93CEAA: xor     eax, eax
0x93CEAC: jmp     loc_93CB1F
0x93CEB1: test    eax, eax
0x93CEB3: jz      short loc_93CECA
0x93CEB5: movaps  xmm0, xmmword ptr [esi+0F0h]
0x93CEBC: movaps  xmmword ptr [esi+0A0h], xmm5
0x93CEC3: movaps  xmmword ptr [esi+0E0h], xmm0
0x93CECA: dec     dword ptr [edi]
0x93CECC: jmp     loc_93CFD0; jumptable 0093C767 case 9
0x93CED1: add     eax, 8
0x93CED4: cmp     eax, 3
0x93CED7: jle     short loc_93CEDE
0x93CED9: mov     eax, 1
0x93CEDE: mov     edx, [esi]
0x93CEE0: movaps  xmm0, xmmword ptr [esi+40h]
0x93CEE4: dec     edx
0x93CEE5: add     eax, 2
0x93CEE8: shl     eax, 4
0x93CEEB: mov     [esi], edx
0x93CEED: movaps  xmmword ptr [eax+esi], xmm0
0x93CEF1: movaps  xmm5, xmmword ptr [ebx+10h]; jumptable 0093C767 case 17
0x93CEF5: movaps  xmm0, xmmword ptr [ebx]
0x93CEF8: movaps  xmm1, xmmword ptr [esi+0A0h]
0x93CEFF: movaps  xmm2, xmm5
0x93CF02: subps   xmm2, xmm0
0x93CF05: subps   xmm0, xmm1
0x93CF08: movaps  xmm4, xmm0
0x93CF0B: movaps  xmm3, xmm5
0x93CF0E: subps   xmm3, xmm1
0x93CF11: movaps  xmm0, xmm3
0x93CF14: mulps   xmm0, xmm2
0x93CF17: movaps  xmm6, xmm0
0x93CF1A: shufps  xmm6, xmm0, 55h ; 'U'
0x93CF1E: addss   xmm6, xmm0
0x93CF22: movaps  xmm7, xmm0
0x93CF25: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x93CF29: addss   xmm7, xmm6
0x93CF2D: movaps  xmm1, xmm4
0x93CF30: mulps   xmm1, xmm2
0x93CF33: movaps  xmm0, xmm1
0x93CF36: shufps  xmm0, xmm1, 55h ; 'U'
0x93CF3A: movaps  xmm6, xmm1
0x93CF3D: addss   xmm0, xmm1
0x93CF41: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x93CF45: addss   xmm6, xmm0
0x93CF49: movmskps eax, xmm7
0x93CF4C: movmskps ecx, xmm6
0x93CF4F: and     eax, 1
0x93CF52: and     ecx, 1
0x93CF55: cmp     eax, ecx
0x93CF57: jz      short loc_93CFBF
0x93CF59: movaps  xmm1, xmm3
0x93CF5C: shufps  xmm1, xmm3, 0D2h ; 'Ò'
0x93CF60: movaps  xmm0, xmm4
0x93CF63: shufps  xmm0, xmm4, 0C9h ; 'É'
0x93CF67: mulps   xmm1, xmm0
0x93CF6A: movaps  xmm0, xmm4
0x93CF6D: shufps  xmm0, xmm4, 0D2h ; 'Ò'
0x93CF71: movaps  xmm4, xmm3
0x93CF74: shufps  xmm4, xmm3, 0C9h ; 'É'
0x93CF78: movaps  xmm3, xmm4
0x93CF7B: mulps   xmm3, xmm0
0x93CF7E: movaps  xmm0, xmm3
0x93CF81: subps   xmm0, xmm1
0x93CF84: movaps  xmm1, xmm2
0x93CF87: shufps  xmm1, xmm2, 0C9h ; 'É'
0x93CF8B: movaps  xmm3, xmm0
0x93CF8E: shufps  xmm3, xmm0, 0D2h ; 'Ò'
0x93CF92: mulps   xmm3, xmm1
0x93CF95: movaps  xmm1, xmm2
0x93CF98: shufps  xmm1, xmm2, 0D2h ; 'Ò'
0x93CF9C: movaps  xmm2, xmm0
0x93CF9F: shufps  xmm2, xmm0, 0C9h ; 'É'
0x93CFA3: mulps   xmm2, xmm1
0x93CFA6: subps   xmm2, xmm3
0x93CFA9: movaps  xmmword ptr [esi+120h], xmm2
0x93CFB0: mov     edx, [edi]
0x93CFB2: mov     [esi+174h], edx
0x93CFB8: xor     eax, eax
0x93CFBA: jmp     loc_93CB1F
0x93CFBF: test    eax, eax
0x93CFC1: jz      short loc_93CFCE
0x93CFC3: movaps  xmm0, xmmword ptr [ebx+50h]
0x93CFC7: movaps  xmmword ptr [ebx], xmm5
0x93CFCA: movaps  xmmword ptr [ebx+40h], xmm0
0x93CFCE: dec     dword ptr [esi]
0x93CFD0: movaps  xmm1, xmmword ptr [ebx]; jumptable 0093C767 case 9
0x93CFD3: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93CFDA: subps   xmm1, xmm0
0x93CFDD: movaps  xmmword ptr [esi+120h], xmm1
0x93CFE4: mov     edx, [edi]
0x93CFE6: mov     [esi+174h], edx
0x93CFEC: xor     eax, eax
0x93CFEE: jmp     loc_93CB1F
0x93CFF3: mov     edx, [edi]
0x93CFF5: cmp     edx, [esi+0Ch]
0x93CFF8: jz      loc_93D1D1
0x93CFFE: cmp     dword ptr [esi+170h], 0FFFFFFFFh
0x93D005: jz      loc_93D1D1
0x93D00B: mov     eax, [ebp+arg_8]
0x93D00E: movaps  xmm3, xmmword ptr [eax+20h]
0x93D012: movaps  xmm1, xmmword ptr [esi+120h]
0x93D019: movaps  xmm2, xmmword ptr [eax]
0x93D01C: movaps  xmm5, xmmword ptr [eax+10h]
0x93D020: mov     ecx, [ebp+arg_4]
0x93D023: mov     eax, [ecx]
0x93D025: movaps  xmm4, xmm3
0x93D028: shufps  xmm4, xmm3, 44h ; 'D'
0x93D02C: movaps  xmm7, xmm3
0x93D02F: movaps  xmm0, xmm2
0x93D032: shufps  xmm0, xmm5, 44h ; 'D'
0x93D036: shufps  xmm7, xmm3, 0EEh ; 'î'
0x93D03A: shufps  xmm2, xmm5, 0EEh ; 'î'
0x93D03E: movaps  xmm5, xmm0
0x93D041: add     edx, 0Eh
0x93D044: shl     edx, 4
0x93D047: movaps  xmm3, xmm1
0x93D04A: shufps  xmm3, xmm1, 55h ; 'U'
0x93D04E: shufps  xmm5, xmm4, 0DDh ; 'Ý'
0x93D052: mulps   xmm5, xmm3
0x93D055: add     edx, esi
0x93D057: shufps  xmm0, xmm4, 88h ; 'ˆ'
0x93D05B: movaps  xmm3, xmm1
0x93D05E: push    edx
0x93D05F: movaps  xmm6, xmm1
0x93D062: shufps  xmm3, xmm1, 0
0x93D066: mulps   xmm0, xmm3
0x93D069: shufps  xmm6, xmm1, 0AAh ; 'ª'
0x93D06D: shufps  xmm2, xmm7, 88h ; 'ˆ'
0x93D071: lea     edx, [esp+0A4h+var_30]
0x93D075: mulps   xmm2, xmm6
0x93D078: addps   xmm0, xmm5
0x93D07B: addps   xmm0, xmm2
0x93D07E: push    edx
0x93D07F: movaps  [esp+0A8h+var_30], xmm0
0x93D084: call    dword ptr [eax+24h]
0x93D087: mov     ecx, [edi]
0x93D089: movaps  xmm0, xmmword ptr [esi+0E0h]
0x93D090: movaps  xmm2, [esp+0A0h+var_30]
0x93D095: lea     eax, [ecx+0Eh]
0x93D098: shl     eax, 4
0x93D09B: movaps  xmm1, xmmword ptr [eax+esi]
0x93D09F: lea     edx, [eax+esi]
0x93D0A2: movaps  xmm3, xmm1
0x93D0A5: subps   xmm3, xmm0
0x93D0A8: movaps  xmm0, xmm3
0x93D0AB: mulps   xmm0, xmm2
0x93D0AE: movaps  xmm3, xmm0
0x93D0B1: shufps  xmm3, xmm0, 55h ; 'U'
0x93D0B5: movaps  xmm4, xmm0
0x93D0B8: lea     eax, [esp+0A0h+var_6C]
0x93D0BC: addss   xmm3, xmm0
0x93D0C0: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93D0C4: addss   xmm4, xmm3
0x93D0C8: movss   dword ptr [eax], xmm4
0x93D0CC: fld     [esp+0A0h+var_6C]
0x93D0D0: fabs
0x93D0D2: fmul    [esp+0A0h+var_6C]
0x93D0D6: fcomp   [esp+0A0h+var_90]
0x93D0DA: fnstsw  ax
0x93D0DC: test    ah, 41h
0x93D0DF: jnz     loc_93D1D1
0x93D0E5: mov     eax, ecx
0x93D0E7: sub     eax, 2
0x93D0EA: jz      short loc_93D13D
0x93D0EC: dec     eax
0x93D0ED: jnz     loc_93D17D
0x93D0F3: movaps  xmm0, xmmword ptr [esi+100h]
0x93D0FA: movaps  xmm3, xmm1
0x93D0FD: subps   xmm3, xmm0
0x93D100: movaps  xmm0, xmm3
0x93D103: mulps   xmm0, xmm2
0x93D106: movaps  xmm3, xmm0
0x93D109: shufps  xmm3, xmm0, 55h ; 'U'
0x93D10D: movaps  xmm4, xmm0
0x93D110: lea     eax, [esp+0A0h+var_60]
0x93D114: addss   xmm3, xmm0
0x93D118: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93D11C: addss   xmm4, xmm3
0x93D120: movss   dword ptr [eax], xmm4
0x93D124: fld     [esp+0A0h+var_60]
0x93D128: fabs
0x93D12A: fmul    [esp+0A0h+var_60]
0x93D12E: fcomp   [esp+0A0h+var_90]
0x93D132: fnstsw  ax
0x93D134: test    ah, 5
0x93D137: jnp     loc_93D1D1
0x93D13D: movaps  xmm0, xmmword ptr [esi+0F0h]
0x93D144: subps   xmm1, xmm0
0x93D147: mulps   xmm1, xmm2
0x93D14A: movaps  xmm0, xmm1
0x93D14D: shufps  xmm0, xmm1, 55h ; 'U'
0x93D151: movaps  xmm2, xmm1
0x93D154: lea     eax, [esp+0A0h+var_78]
0x93D158: addss   xmm0, xmm1
0x93D15C: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x93D160: addss   xmm2, xmm0
0x93D164: movss   dword ptr [eax], xmm2
0x93D168: fld     [esp+0A0h+var_78]
0x93D16C: fabs
0x93D16E: fmul    [esp+0A0h+var_78]
0x93D172: fcomp   [esp+0A0h+var_90]
0x93D176: fnstsw  ax
0x93D178: test    ah, 5
0x93D17B: jnp     short loc_93D1D1
0x93D17D: movaps  xmm0, xmmword ptr [edx]
0x93D180: mov     eax, [ebp+arg_8]
0x93D183: movaps  xmm1, xmmword ptr [eax+30h]
0x93D187: movaps  xmm3, xmmword ptr [eax+20h]
0x93D18B: movaps  xmm2, xmm0
0x93D18E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93D192: mulps   xmm3, xmm2
0x93D195: movaps  xmm2, xmmword ptr [eax+10h]
0x93D199: addps   xmm3, xmm1
0x93D19C: movaps  xmm1, xmm0
0x93D19F: shufps  xmm1, xmm0, 55h ; 'U'
0x93D1A3: mulps   xmm2, xmm1
0x93D1A6: movaps  xmm1, xmm0
0x93D1A9: shufps  xmm1, xmm0, 0
0x93D1AD: movaps  xmm0, xmmword ptr [eax]
0x93D1B0: add     ecx, 0Ah
0x93D1B3: mulps   xmm0, xmm1
0x93D1B6: shl     ecx, 4
0x93D1B9: addps   xmm0, xmm2
0x93D1BC: addps   xmm0, xmm3
0x93D1BF: movaps  xmmword ptr [ecx+esi], xmm0
0x93D1C3: inc     dword ptr [edi]
0x93D1C5: mov     dword ptr [esi+14h], 1
0x93D1CC: jmp     loc_93C722
0x93D1D1: mov     eax, [esp+0A0h+var_8C]
0x93D1D5: test    eax, eax
0x93D1D7: jnz     loc_93D335
0x93D1DD: mov     eax, [esi]
0x93D1DF: cmp     eax, [esi+8]
0x93D1E2: jz      loc_93D335
0x93D1E8: cmp     dword ptr [esi+170h], 1
0x93D1EF: jz      loc_93D335
0x93D1F5: mov     ecx, [ebp+arg_0]
0x93D1F8: movaps  xmm0, xmmword ptr ds:0A965C0h
0x93D1FF: movaps  xmm1, xmmword ptr [esi+120h]
0x93D206: mov     edx, [ecx]
0x93D208: add     eax, 2
0x93D20B: shl     eax, 4
0x93D20E: add     eax, esi
0x93D210: push    eax
0x93D211: lea     eax, [esp+0A4h+var_50]
0x93D215: xorps   xmm1, xmm0
0x93D218: push    eax
0x93D219: movaps  [esp+0A8h+var_50], xmm1
0x93D21E: call    dword ptr [edx+24h]
0x93D221: mov     ecx, [esi]
0x93D223: movaps  xmm1, xmmword ptr [ebx]
0x93D226: movaps  xmm2, [esp+0A0h+var_50]
0x93D22B: lea     edx, [ecx+2]
0x93D22E: shl     edx, 4
0x93D231: movaps  xmm0, xmmword ptr [edx+esi]
0x93D235: movaps  xmm3, xmm0
0x93D238: subps   xmm3, xmm1
0x93D23B: movaps  xmm1, xmm3
0x93D23E: mulps   xmm1, xmm2
0x93D241: movaps  xmm3, xmm1
0x93D244: shufps  xmm3, xmm1, 55h ; 'U'
0x93D248: movaps  xmm4, xmm1
0x93D24B: lea     eax, [esp+0A0h+var_54]
0x93D24F: addss   xmm3, xmm1
0x93D253: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x93D257: addss   xmm4, xmm3
0x93D25B: movss   dword ptr [eax], xmm4
0x93D25F: fld     [esp+0A0h+var_54]
0x93D263: fabs
0x93D265: fmul    [esp+0A0h+var_54]
0x93D269: fcomp   [esp+0A0h+var_90]
0x93D26D: fnstsw  ax
0x93D26F: test    ah, 41h
0x93D272: jnz     loc_93D335
0x93D278: mov     eax, ecx
0x93D27A: sub     eax, 2
0x93D27D: jz      short loc_93D2C9
0x93D27F: dec     eax
0x93D280: jnz     loc_93D306
0x93D286: movaps  xmm1, xmmword ptr [esi+40h]
0x93D28A: movaps  xmm3, xmm0
0x93D28D: subps   xmm3, xmm1
0x93D290: movaps  xmm1, xmm3
0x93D293: mulps   xmm1, xmm2
0x93D296: movaps  xmm3, xmm1
0x93D299: shufps  xmm3, xmm1, 55h ; 'U'
0x93D29D: movaps  xmm4, xmm1
0x93D2A0: addss   xmm3, xmm1
0x93D2A4: shufps  xmm4, xmm1, 0AAh ; 'ª'
0x93D2A8: lea     edx, [esp+0A0h+var_58]
0x93D2AC: addss   xmm4, xmm3
0x93D2B0: movss   dword ptr [edx], xmm4
0x93D2B4: fld     [esp+0A0h+var_58]
0x93D2B8: fabs
0x93D2BA: fmul    [esp+0A0h+var_58]
0x93D2BE: fcomp   [esp+0A0h+var_90]
0x93D2C2: fnstsw  ax
0x93D2C4: test    ah, 5
0x93D2C7: jnp     short loc_93D335
0x93D2C9: movaps  xmm1, xmmword ptr [esi+30h]
0x93D2CD: subps   xmm0, xmm1
0x93D2D0: mulps   xmm0, xmm2
0x93D2D3: movaps  xmm1, xmm0
0x93D2D6: shufps  xmm1, xmm0, 55h ; 'U'
0x93D2DA: movaps  xmm2, xmm0
0x93D2DD: lea     eax, [esp+0A0h+var_88]
0x93D2E1: addss   xmm1, xmm0
0x93D2E5: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x93D2E9: addss   xmm2, xmm1
0x93D2ED: movss   dword ptr [eax], xmm2
0x93D2F1: fld     [esp+0A0h+var_88]
0x93D2F5: fabs
0x93D2F7: fmul    [esp+0A0h+var_88]
0x93D2FB: fcomp   [esp+0A0h+var_90]
0x93D2FF: fnstsw  ax
0x93D301: test    ah, 5
0x93D304: jnp     short loc_93D335
0x93D306: inc     ecx
0x93D307: mov     [esi], ecx
0x93D309: mov     dword ptr [esi+14h], 1
0x93D310: jmp     loc_93C722
0x93D315: fstp    st
0x93D317: mov     al, [esi+10h]
0x93D31A: test    al, al
0x93D31C: jnz     loc_93D40C
0x93D322: mov     ecx, [ebp+arg_8]
0x93D325: mov     edx, [ebp+arg_4]
0x93D328: mov     eax, [ebp+arg_0]
0x93D32B: push    ecx
0x93D32C: push    edx
0x93D32D: push    eax
0x93D32E: mov     ecx, esi
0x93D330: call    sub_93C350
0x93D335: movaps  xmm2, xmmword ptr [esi+120h]
0x93D33C: movaps  xmm0, xmmword ptr [esi+0A0h]
0x93D343: movaps  xmm1, xmmword ptr [ebx]
0x93D346: subps   xmm1, xmm0
0x93D349: mov     eax, [ebp+arg_C]
0x93D34C: movaps  xmm0, xmm2
0x93D34F: mulps   xmm0, xmm2
0x93D352: movaps  xmm3, xmm0
0x93D355: shufps  xmm3, xmm0, 55h ; 'U'
0x93D359: addss   xmm3, xmm0
0x93D35D: movaps  xmm4, xmm0
0x93D360: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x93D364: movaps  xmm0, xmm4
0x93D367: addss   xmm0, xmm3
0x93D36B: movaps  [esp+0A0h+var_50], xmm0
0x93D370: rsqrtss xmm3, xmm0
0x93D374: movss   dword ptr [esp+0A0h+var_50], xmm3
0x93D37A: movaps  xmm3, [esp+0A0h+var_50]
0x93D37F: mulss   xmm0, xmm3
0x93D383: mulss   xmm0, xmm3
0x93D387: mov     [esp+0A0h+var_8C], 40400000h
0x93D38F: movss   xmm4, [esp+0A0h+var_8C]
0x93D395: subss   xmm4, xmm0
0x93D399: mov     [esp+0A0h+var_8C], 3F000000h
0x93D3A1: movss   xmm0, [esp+0A0h+var_8C]
0x93D3A7: mulss   xmm0, xmm3
0x93D3AB: mulss   xmm0, xmm4
0x93D3AF: movaps  xmm3, xmm0
0x93D3B2: shufps  xmm3, xmm0, 0
0x93D3B6: mulps   xmm3, xmm2
0x93D3B9: movaps  xmmword ptr [esi+120h], xmm3
0x93D3C0: movaps  xmm0, xmmword ptr [esi+120h]
0x93D3C7: movaps  xmmword ptr [eax], xmm0
0x93D3CA: movaps  xmm0, xmmword ptr [esi+120h]
0x93D3D1: mulps   xmm1, xmm0
0x93D3D4: movaps  xmm0, xmm1
0x93D3D7: shufps  xmm0, xmm1, 55h ; 'U'
0x93D3DB: movaps  xmm2, xmm1
0x93D3DE: addss   xmm0, xmm1
0x93D3E2: shufps  xmm2, xmm1, 0AAh ; 'ª'
0x93D3E6: lea     ecx, [esp+0A0h+var_88]
0x93D3EA: addss   xmm2, xmm0
0x93D3EE: movss   dword ptr [ecx], xmm2
0x93D3F2: mov     edx, [esp+0A0h+var_88]
0x93D3F6: mov     [eax+0Ch], edx
0x93D3F9: mov     eax, edx
0x93D3FB: mov     [esi+12Ch], eax
0x93D401: xor     eax, eax
0x93D403: pop     edi
0x93D404: pop     esi
0x93D405: pop     ebx
0x93D406: mov     esp, ebp
0x93D408: pop     ebp
0x93D409: retn    10h
0x93D40C: mov     eax, [edi]
0x93D40E: mov     ecx, [esi]
0x93D410: lea     edx, [ecx+eax]
0x93D413: cmp     edx, 4
0x93D416: jle     short loc_93D442
0x93D418: cmp     ecx, eax
0x93D41A: jle     short loc_93D436
0x93D41C: mov     dword ptr [esi], 3
0x93D422: mov     dword ptr [edi], 1
0x93D428: mov     eax, 4
0x93D42D: pop     edi
0x93D42E: pop     esi
0x93D42F: pop     ebx
0x93D430: mov     esp, ebp
0x93D432: pop     ebp
0x93D433: retn    10h
0x93D436: mov     dword ptr [esi], 1
0x93D43C: mov     dword ptr [edi], 3
0x93D442: pop     edi
0x93D443: pop     esi
0x93D444: mov     eax, 4
0x93D449: pop     ebx
0x93D44A: mov     esp, ebp
0x93D44C: pop     ebp
0x93D44D: retn    10h

0x8C0CB0: push    ebp
0x8C0CB1: mov     ebp, esp
0x8C0CB3: and     esp, 0FFFFFFF0h
0x8C0CB6: push    ecx
0x8C0CB7: push    ebx
0x8C0CB8: push    esi
0x8C0CB9: mov     esi, [ebp+arg_0]
0x8C0CBC: push    edi
0x8C0CBD: push    esi
0x8C0CBE: mov     edi, ecx
0x8C0CC0: call    sub_8A0C30
0x8C0CC5: mov     edi, [edi+4]
0x8C0CC8: mov     eax, [esi+21Ch]
0x8C0CCE: mov     edx, [eax+4]
0x8C0CD1: push    0
0x8C0CD3: push    0
0x8C0CD5: push    30h ; '0'
0x8C0CD7: lea     ecx, [edi+10h]
0x8C0CDA: push    ecx
0x8C0CDB: push    eax
0x8C0CDC: call    edx
0x8C0CDE: mov     eax, [esi+21Ch]
0x8C0CE4: mov     edx, [eax+4]
0x8C0CE7: push    0
0x8C0CE9: push    0
0x8C0CEB: push    30h ; '0'
0x8C0CED: lea     ecx, [edi+40h]
0x8C0CF0: push    ecx
0x8C0CF1: push    eax
0x8C0CF2: call    edx
0x8C0CF4: mov     eax, [esi+21Ch]
0x8C0CFA: push    1
0x8C0CFC: lea     ecx, [esp+3Ch+var_4]
0x8C0D00: push    ecx
0x8C0D01: mov     ebx, 4
0x8C0D06: push    ebx
0x8C0D07: lea     edx, [edi+70h]
0x8C0D0A: push    edx
0x8C0D0B: push    eax
0x8C0D0C: mov     eax, [eax+4]
0x8C0D0F: mov     [esp+4Ch+var_4], ebx
0x8C0D13: call    eax
0x8C0D15: mov     eax, [esi+21Ch]
0x8C0D1B: push    1
0x8C0D1D: lea     ecx, [esp+50h+var_4]
0x8C0D21: push    ecx
0x8C0D22: push    ebx
0x8C0D23: lea     edx, [edi+74h]
0x8C0D26: push    edx
0x8C0D27: push    eax
0x8C0D28: mov     eax, [eax+4]
0x8C0D2B: mov     [esp+60h+var_4], ebx
0x8C0D2F: call    eax
0x8C0D31: mov     eax, [esi+21Ch]
0x8C0D37: add     esp, 50h
0x8C0D3A: push    1
0x8C0D3C: lea     ecx, [esp+14h+var_4]
0x8C0D40: push    ecx
0x8C0D41: push    ebx
0x8C0D42: lea     edx, [edi+78h]
0x8C0D45: push    edx
0x8C0D46: push    eax
0x8C0D47: mov     eax, [eax+4]
0x8C0D4A: mov     [esp+24h+var_4], ebx
0x8C0D4E: call    eax
0x8C0D50: mov     eax, [esi+21Ch]
0x8C0D56: push    1
0x8C0D58: lea     ecx, [esp+28h+var_4]
0x8C0D5C: push    ecx
0x8C0D5D: push    ebx
0x8C0D5E: lea     edx, [edi+7Ch]
0x8C0D61: push    edx
0x8C0D62: push    eax
0x8C0D63: mov     eax, [eax+4]
0x8C0D66: mov     [esp+38h+var_4], ebx
0x8C0D6A: call    eax
0x8C0D6C: mov     eax, [esi+21Ch]
0x8C0D72: push    1
0x8C0D74: lea     ecx, [esp+3Ch+var_4]
0x8C0D78: push    ecx
0x8C0D79: push    ebx
0x8C0D7A: lea     edx, [edi+80h]
0x8C0D80: push    edx
0x8C0D81: mov     [esp+48h+var_4], ebx
0x8C0D85: push    eax
0x8C0D86: mov     eax, [eax+4]
0x8C0D89: call    eax
0x8C0D8B: mov     eax, [esi+21Ch]
0x8C0D91: mov     edx, [eax+4]
0x8C0D94: push    1
0x8C0D96: lea     ecx, [esp+50h+var_4]
0x8C0D9A: push    ecx
0x8C0D9B: push    ebx
0x8C0D9C: lea     esi, [edi+84h]
0x8C0DA2: push    esi
0x8C0DA3: push    eax
0x8C0DA4: mov     [esp+60h+var_4], ebx
0x8C0DA8: call    edx
0x8C0DAA: fldz
0x8C0DAC: fcomp   dword ptr [esi]
0x8C0DAE: add     esp, 50h
0x8C0DB1: fnstsw  ax
0x8C0DB3: test    ah, 44h
0x8C0DB6: jp      short loc_8C0DC0
0x8C0DB8: fld     dword ptr ds:0A31C80h
0x8C0DBE: fstp    dword ptr [esi]
0x8C0DC0: movaps  xmm3, xmmword ptr [edi+20h]
0x8C0DC4: movss   xmm5, dword ptr ds:0A3D65Ch
0x8C0DCC: movaps  xmm0, xmm3
0x8C0DCF: mulps   xmm0, xmm3
0x8C0DD2: movaps  xmm1, xmm0
0x8C0DD5: shufps  xmm1, xmm0, 55h ; 'U'
0x8C0DD9: addss   xmm1, xmm0
0x8C0DDD: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8C0DE1: addss   xmm0, xmm1
0x8C0DE5: movaps  xmm1, xmm0
0x8C0DE8: rsqrtss xmm1, xmm1
0x8C0DEC: movaps  xmm4, xmm1
0x8C0DEF: mulss   xmm0, xmm4
0x8C0DF3: mulss   xmm0, xmm4
0x8C0DF7: movss   xmm1, dword ptr ds:0A46C30h
0x8C0DFF: xorps   xmm2, xmm2
0x8C0E02: movss   xmm2, xmm1
0x8C0E06: xorps   xmm1, xmm1
0x8C0E09: movss   xmm1, xmm5
0x8C0E0D: movaps  xmm5, xmm2
0x8C0E10: subss   xmm5, xmm0
0x8C0E14: movaps  xmm0, xmm1
0x8C0E17: mulss   xmm0, xmm4
0x8C0E1B: mulss   xmm0, xmm5
0x8C0E1F: movaps  xmm4, xmm0
0x8C0E22: shufps  xmm4, xmm0, 0
0x8C0E26: mulps   xmm4, xmm3
0x8C0E29: movaps  xmmword ptr [edi+20h], xmm4
0x8C0E2D: movaps  xmm3, xmmword ptr [edi+30h]
0x8C0E31: movaps  xmm0, xmm3
0x8C0E34: mulps   xmm0, xmm3
0x8C0E37: movaps  xmm4, xmm0
0x8C0E3A: shufps  xmm4, xmm0, 55h ; 'U'
0x8C0E3E: addss   xmm4, xmm0
0x8C0E42: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8C0E46: addss   xmm0, xmm4
0x8C0E4A: movaps  xmm4, xmm0
0x8C0E4D: rsqrtss xmm4, xmm4
0x8C0E51: mulss   xmm0, xmm4
0x8C0E55: mulss   xmm0, xmm4
0x8C0E59: movaps  xmm5, xmm2
0x8C0E5C: subss   xmm5, xmm0
0x8C0E60: movaps  xmm0, xmm1
0x8C0E63: mulss   xmm0, xmm4
0x8C0E67: mulss   xmm0, xmm5
0x8C0E6B: movaps  xmm4, xmm0
0x8C0E6E: shufps  xmm4, xmm0, 0
0x8C0E72: mulps   xmm4, xmm3
0x8C0E75: movaps  xmmword ptr [edi+30h], xmm4
0x8C0E79: movaps  xmm3, xmmword ptr [edi+50h]
0x8C0E7D: movaps  xmm0, xmm3
0x8C0E80: mulps   xmm0, xmm3
0x8C0E83: movaps  xmm4, xmm0
0x8C0E86: shufps  xmm4, xmm0, 55h ; 'U'
0x8C0E8A: addss   xmm4, xmm0
0x8C0E8E: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8C0E92: addss   xmm0, xmm4
0x8C0E96: movaps  xmm4, xmm0
0x8C0E99: rsqrtss xmm4, xmm4
0x8C0E9D: mulss   xmm0, xmm4
0x8C0EA1: mulss   xmm0, xmm4
0x8C0EA5: movaps  xmm5, xmm2
0x8C0EA8: subss   xmm5, xmm0
0x8C0EAC: movaps  xmm0, xmm1
0x8C0EAF: mulss   xmm0, xmm4
0x8C0EB3: mulss   xmm0, xmm5
0x8C0EB7: movaps  xmm4, xmm0
0x8C0EBA: shufps  xmm4, xmm0, 0
0x8C0EBE: mulps   xmm4, xmm3
0x8C0EC1: movaps  xmmword ptr [edi+50h], xmm4
0x8C0EC5: movaps  xmm3, xmmword ptr [edi+60h]
0x8C0EC9: movaps  xmm0, xmm3
0x8C0ECC: mulps   xmm0, xmm3
0x8C0ECF: movaps  xmm4, xmm0
0x8C0ED2: shufps  xmm4, xmm0, 55h ; 'U'
0x8C0ED6: addss   xmm4, xmm0
0x8C0EDA: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8C0EDE: addss   xmm0, xmm4
0x8C0EE2: movaps  xmm4, xmm0
0x8C0EE5: rsqrtss xmm4, xmm4
0x8C0EE9: mulss   xmm0, xmm4
0x8C0EED: mulss   xmm0, xmm4
0x8C0EF1: subss   xmm2, xmm0
0x8C0EF5: mulss   xmm1, xmm4
0x8C0EF9: mulss   xmm1, xmm2
0x8C0EFD: movaps  xmm0, xmm1
0x8C0F00: shufps  xmm0, xmm1, 0
0x8C0F04: mulps   xmm0, xmm3
0x8C0F07: movaps  xmmword ptr [edi+60h], xmm0
0x8C0F0B: pop     edi
0x8C0F0C: pop     esi
0x8C0F0D: pop     ebx
0x8C0F0E: mov     esp, ebp
0x8C0F10: pop     ebp
0x8C0F11: retn    4

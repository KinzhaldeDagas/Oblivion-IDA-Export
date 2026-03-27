0x92B900: push    ebp
0x92B901: mov     ebp, esp
0x92B903: and     esp, 0FFFFFFF0h
0x92B906: sub     esp, 44h
0x92B909: push    ebx
0x92B90A: mov     ebx, [ebp+arg_4]
0x92B90D: or      edx, 0FFFFFFFFh
0x92B910: push    esi
0x92B911: mov     esi, [ebp+arg_14]
0x92B914: push    edi
0x92B915: mov     edi, [ebp+arg_10]
0x92B918: mov     [edi+10h], edx
0x92B91B: mov     [edi+14h], edx
0x92B91E: mov     [edi+18h], edx
0x92B921: mov     [esi+10h], edx
0x92B924: mov     [esi+14h], edx
0x92B927: mov     [esi+18h], edx
0x92B92A: mov     ecx, [ebx+4]
0x92B92D: xor     eax, eax
0x92B92F: test    ecx, ecx
0x92B931: mov     [esp+50h+var_35], 0
0x92B936: mov     [esp+50h+var_34], eax
0x92B93A: jle     loc_92BA8C
0x92B940: mov     [esp+50h+var_30], eax
0x92B944: cmp     eax, [ebp+arg_8]
0x92B947: jz      loc_92BA73
0x92B94D: mov     ecx, [ebp+arg_C]
0x92B950: cmp     eax, ecx
0x92B952: jz      loc_92BA73
0x92B958: lea     edx, [esp+50h+var_20]
0x92B95C: push    edx
0x92B95D: push    eax
0x92B95E: mov     eax, [ebp+arg_8]
0x92B961: push    ecx
0x92B962: push    eax
0x92B963: push    ebx
0x92B964: call    sub_92B760
0x92B969: add     esp, 14h
0x92B96C: test    eax, eax
0x92B96E: jnz     loc_92BA6C
0x92B974: mov     al, [esp+50h+var_35]
0x92B978: test    al, al
0x92B97A: movaps  xmm1, [esp+50h+var_20]
0x92B97F: jnz     short loc_92B9BA
0x92B981: mov     ecx, [ebp+arg_0]
0x92B984: movaps  xmm2, xmmword ptr [ecx]
0x92B987: mov     [esp+50h+var_2C], 0C7C35000h
0x92B98F: movss   xmm0, [esp+50h+var_2C]
0x92B995: movaps  xmm3, xmm0
0x92B998: shufps  xmm3, xmm0, 0
0x92B99C: mulps   xmm3, xmm2
0x92B99F: movaps  xmm0, xmm1
0x92B9A2: addps   xmm0, xmm3
0x92B9A5: movaps  xmmword ptr [esi], xmm0
0x92B9A8: movaps  xmm2, xmmword ptr ds:0A965C0h
0x92B9AF: xorps   xmm0, xmm2
0x92B9B2: movaps  xmmword ptr [edi], xmm0
0x92B9B5: mov     [esp+50h+var_35], 1
0x92B9BA: movaps  xmm0, xmmword ptr [esi]
0x92B9BD: mov     edx, [ebx]
0x92B9BF: mov     ecx, [esp+50h+var_30]
0x92B9C3: subps   xmm0, xmm1
0x92B9C6: movaps  xmm2, xmm0
0x92B9C9: movaps  xmm0, xmmword ptr [edx+ecx]
0x92B9CD: mov     edx, [esp+50h+var_8]
0x92B9D1: mulps   xmm0, xmm2
0x92B9D4: movaps  xmm2, xmm0
0x92B9D7: shufps  xmm2, xmm0, 55h ; 'U'
0x92B9DB: movaps  xmm3, xmm0
0x92B9DE: lea     eax, [esp+50h+var_28]
0x92B9E2: addss   xmm2, xmm0
0x92B9E6: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92B9EA: addss   xmm3, xmm2
0x92B9EE: movss   dword ptr [eax], xmm3
0x92B9F2: fld     [esp+50h+var_28]
0x92B9F6: fcomp   dword ptr ds:0A97BD8h
0x92B9FC: fnstsw  ax
0x92B9FE: test    ah, 41h
0x92BA01: jnz     short loc_92BA17
0x92BA03: mov     eax, [esp+50h+var_10]
0x92BA07: mov     [esi+10h], eax
0x92BA0A: mov     eax, [esp+50h+var_C]
0x92BA0E: movaps  xmmword ptr [esi], xmm1
0x92BA11: mov     [esi+14h], eax
0x92BA14: mov     [esi+18h], edx
0x92BA17: movaps  xmm0, xmmword ptr [edi]
0x92BA1A: mov     eax, [ebx]
0x92BA1C: subps   xmm0, xmm1
0x92BA1F: movaps  xmm2, xmm0
0x92BA22: movaps  xmm0, xmmword ptr [eax+ecx]
0x92BA26: mulps   xmm0, xmm2
0x92BA29: movaps  xmm2, xmm0
0x92BA2C: shufps  xmm2, xmm0, 55h ; 'U'
0x92BA30: movaps  xmm3, xmm0
0x92BA33: addss   xmm2, xmm0
0x92BA37: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x92BA3B: lea     ecx, [esp+50h+var_24]
0x92BA3F: addss   xmm3, xmm2
0x92BA43: movss   dword ptr [ecx], xmm3
0x92BA47: fld     [esp+50h+var_24]
0x92BA4B: fcomp   dword ptr ds:0A97BD8h
0x92BA51: fnstsw  ax
0x92BA53: test    ah, 41h
0x92BA56: jnz     short loc_92BA6C
0x92BA58: mov     eax, [esp+50h+var_10]
0x92BA5C: mov     ecx, [esp+50h+var_C]
0x92BA60: movaps  xmmword ptr [edi], xmm1
0x92BA63: mov     [edi+10h], eax
0x92BA66: mov     [edi+14h], ecx
0x92BA69: mov     [edi+18h], edx
0x92BA6C: mov     eax, [esp+50h+var_34]
0x92BA70: or      edx, 0FFFFFFFFh
0x92BA73: mov     ecx, [esp+50h+var_30]
0x92BA77: add     ecx, 10h
0x92BA7A: inc     eax
0x92BA7B: mov     [esp+50h+var_30], ecx
0x92BA7F: cmp     eax, [ebx+4]
0x92BA82: mov     [esp+50h+var_34], eax
0x92BA86: jl      loc_92B944
0x92BA8C: cmp     [edi+10h], edx
0x92BA8F: jnz     short loc_92BAA7
0x92BA91: mov     eax, [esi+10h]
0x92BA94: cmp     eax, edx
0x92BA96: jz      short loc_92BACB
0x92BA98: mov     [edi+10h], eax
0x92BA9B: mov     eax, [esi+14h]
0x92BA9E: mov     [edi+14h], eax
0x92BAA1: mov     ecx, [esi+18h]
0x92BAA4: mov     [edi+18h], ecx
0x92BAA7: cmp     [esi+10h], edx
0x92BAAA: jnz     short loc_92BAC2
0x92BAAC: mov     eax, [edi+10h]
0x92BAAF: cmp     eax, edx
0x92BAB1: jz      short loc_92BACB
0x92BAB3: mov     [esi+10h], eax
0x92BAB6: mov     edx, [edi+14h]
0x92BAB9: mov     [esi+14h], edx
0x92BABC: mov     eax, [edi+18h]
0x92BABF: mov     [esi+18h], eax
0x92BAC2: xor     eax, eax
0x92BAC4: pop     edi
0x92BAC5: pop     esi
0x92BAC6: pop     ebx
0x92BAC7: mov     esp, ebp
0x92BAC9: pop     ebp
0x92BACA: retn
0x92BACB: pop     edi
0x92BACC: pop     esi
0x92BACD: mov     eax, 1
0x92BAD2: pop     ebx
0x92BAD3: mov     esp, ebp
0x92BAD5: pop     ebp
0x92BAD6: retn

0x6CF9D0: sub     esp, 24h
0x6CF9D3: push    esi
0x6CF9D4: mov     esi, ecx
0x6CF9D6: mov     al, [esi+8]
0x6CF9D9: shr     al, 3
0x6CF9DC: test    al, 1
0x6CF9DE: jz      loc_6CFB3A
0x6CF9E4: mov     ecx, ds:0B24260h
0x6CF9EA: fld     dword ptr ds:0A79E10h
0x6CF9F0: mov     edx, ds:0B24264h
0x6CF9F6: fstp    [esp+28h+var_4]
0x6CF9FA: mov     eax, ds:0B24268h
0x6CF9FF: mov     [esp+28h+var_20], ecx
0x6CFA03: mov     ecx, ds:0B3CBA4h
0x6CFA09: push    edi
0x6CFA0A: mov     [esp+2Ch+var_1C], edx
0x6CFA0E: mov     edx, ds:0B3CBA8h
0x6CFA14: mov     [esp+2Ch+var_18], eax
0x6CFA18: mov     eax, ds:0B3CBACh
0x6CFA1D: mov     [esp+2Ch+var_14], ecx
0x6CFA21: mov     ecx, ds:0B3CBB0h
0x6CFA27: xor     edi, edi
0x6CFA29: cmp     [esi+44h], di
0x6CFA2D: mov     [esp+2Ch+var_10], edx
0x6CFA31: mov     [esp+2Ch+var_C], eax
0x6CFA35: mov     [esp+2Ch+var_8], ecx
0x6CFA39: jbe     loc_6CFB39
0x6CFA3F: push    ebx
0x6CFA40: push    ebp
0x6CFA41: xor     ebx, ebx
0x6CFA43: mov     edx, [esi+40h]
0x6CFA46: cmp     dword ptr [edx+edi*4], 0
0x6CFA4A: lea     eax, [edx+edi*4]
0x6CFA4D: jz      loc_6CFB25
0x6CFA53: mov     eax, [eax]
0x6CFA55: mov     cl, [eax+18h]
0x6CFA58: shr     cl, 1
0x6CFA5A: test    cl, 1
0x6CFA5D: jz      loc_6CFB25
0x6CFA63: mov     edx, [esi+3Ch]
0x6CFA66: fld     [esp+34h+arg_0]
0x6CFA6A: lea     ecx, [edx+ebx]
0x6CFA6D: mov     edx, [ecx]
0x6CFA6F: lea     ebp, [esp+34h+var_20]
0x6CFA73: push    ebp
0x6CFA74: push    eax
0x6CFA75: mov     eax, [edx+4Ch]
0x6CFA78: push    ecx
0x6CFA79: fstp    [esp+40h+var_40]
0x6CFA7C: call    eax
0x6CFA7E: test    al, al
0x6CFA80: jz      loc_6CFB25
0x6CFA86: fld     [esp+34h+var_20]
0x6CFA8A: fld     dword ptr ds:0A7DEB4h
0x6CFA90: fchs
0x6CFA92: fucompp
0x6CFA94: fnstsw  ax
0x6CFA96: test    ah, 44h
0x6CFA99: jnp     short loc_6CFAB8
0x6CFA9B: mov     ecx, [esi+40h]
0x6CFA9E: mov     eax, [ecx+edi*4]
0x6CFAA1: mov     edx, [esp+34h+var_20]
0x6CFAA5: add     eax, 54h ; 'T'
0x6CFAA8: mov     [eax], edx
0x6CFAAA: mov     ecx, [esp+34h+var_1C]
0x6CFAAE: mov     [eax+4], ecx
0x6CFAB1: mov     edx, [esp+34h+var_18]
0x6CFAB5: mov     [eax+8], edx
0x6CFAB8: fld     [esp+34h+var_10]
0x6CFABC: fld     dword ptr ds:0A7DEB4h
0x6CFAC2: fchs
0x6CFAC4: fucompp
0x6CFAC6: fnstsw  ax
0x6CFAC8: test    ah, 44h
0x6CFACB: jnp     short loc_6CFAE0
0x6CFACD: mov     eax, [esi+40h]
0x6CFAD0: mov     ecx, [eax+edi*4]
0x6CFAD3: add     ecx, 30h ; '0'
0x6CFAD6: push    ecx
0x6CFAD7: lea     ecx, [esp+38h+var_14]
0x6CFADB: call    sub_47C600
0x6CFAE0: fld     [esp+34h+var_4]
0x6CFAE4: fld     st
0x6CFAE6: fld     dword ptr ds:0A7DEB4h
0x6CFAEC: fchs
0x6CFAEE: fucompp
0x6CFAF0: fnstsw  ax
0x6CFAF2: test    ah, 44h
0x6CFAF5: jnp     short loc_6CFB03
0x6CFAF7: fabs
0x6CFAF9: fstp    [esp+34h+var_24]
0x6CFAFD: fld     [esp+34h+var_24]
0x6CFB01: jmp     short loc_6CFB1C
0x6CFB03: mov     cl, [esi+8]
0x6CFB06: fstp    st
0x6CFB08: shr     cl, 6
0x6CFB0B: test    cl, 1
0x6CFB0E: jz      short loc_6CFB25
0x6CFB10: fld1
0x6CFB12: fabs
0x6CFB14: fstp    [esp+34h+var_24]
0x6CFB18: fld     [esp+34h+var_24]
0x6CFB1C: mov     edx, [esi+40h]
0x6CFB1F: mov     eax, [edx+edi*4]
0x6CFB22: fstp    dword ptr [eax+60h]
0x6CFB25: movzx   ecx, word ptr [esi+44h]
0x6CFB29: add     edi, 1
0x6CFB2C: add     ebx, 30h ; '0'
0x6CFB2F: cmp     edi, ecx
0x6CFB31: jl      loc_6CFA43
0x6CFB37: pop     ebp
0x6CFB38: pop     ebx
0x6CFB39: pop     edi
0x6CFB3A: pop     esi
0x6CFB3B: add     esp, 24h
0x6CFB3E: retn    4

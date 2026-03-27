0x6BBBA0: sub     esp, 1Ch
0x6BBBA3: push    ebx
0x6BBBA4: mov     ebx, [esp+20h+arg_10]
0x6BBBA8: cmp     ebx, 1
0x6BBBAB: jz      loc_6BBD99
0x6BBBB1: fld     [esp+20h+arg_4]
0x6BBBB5: fld     dword ptr ds:0A7DEB4h
0x6BBBBB: fchs
0x6BBBBD: fucomp  st(1)
0x6BBBBF: fnstsw  ax
0x6BBBC1: test    ah, 44h
0x6BBBC4: jnp     loc_6BBD97
0x6BBBCA: mov     eax, [esp+20h+arg_14]
0x6BBBCE: push    ebp
0x6BBBCF: mov     ebp, [esp+24h+arg_8]
0x6BBBD3: push    esi
0x6BBBD4: movzx   esi, [esp+28h+arg_18]
0x6BBBD9: push    edi
0x6BBBDA: mov     edi, [eax]
0x6BBBDC: mov     ecx, esi
0x6BBBDE: imul    ecx, edi
0x6BBBE1: add     ebx, 0FFFFFFFFh
0x6BBBE4: mov     [esp+2Ch+var_10], ebx
0x6BBBE8: fld     dword ptr [ecx+ebp]
0x6BBBEB: fstp    [esp+2Ch+var_1C]
0x6BBBEF: fld     [esp+2Ch+var_1C]
0x6BBBF3: fcomp   st(1)
0x6BBBF5: fnstsw  ax
0x6BBBF7: test    ah, 41h
0x6BBBFA: jnz     short loc_6BBC05
0x6BBBFC: fld     dword ptr [ebp+0]
0x6BBBFF: xor     edi, edi
0x6BBC01: fstp    [esp+2Ch+var_1C]
0x6BBC05: lea     ecx, [edi+1]
0x6BBC08: mov     edx, ebx
0x6BBC0A: sub     edx, ecx
0x6BBC0C: add     edx, 1
0x6BBC0F: cmp     edx, 4
0x6BBC12: jl      loc_6BBD18
0x6BBC18: lea     eax, [ecx+3]
0x6BBC1B: imul    eax, esi
0x6BBC1E: add     eax, ebp
0x6BBC20: mov     [esp+2Ch+var_14], eax
0x6BBC24: mov     ebx, esi
0x6BBC26: lea     eax, [ecx+2]
0x6BBC29: imul    ebx, ecx
0x6BBC2C: imul    eax, esi
0x6BBC2F: add     eax, ebp
0x6BBC31: add     ebx, ebp
0x6BBC33: lea     ebp, [ecx+1]
0x6BBC36: imul    ebp, esi
0x6BBC39: add     ebp, [esp+2Ch+arg_8]
0x6BBC3D: lea     edx, ds:0[esi*4]
0x6BBC44: mov     [esp+2Ch+var_18], eax
0x6BBC48: jmp     short loc_6BBC4C
0x6BBC4A: fstp    st
0x6BBC4C: fld     dword ptr [ebx]
0x6BBC4E: fstp    [esp+2Ch+arg_10]
0x6BBC52: fld     [esp+2Ch+arg_10]
0x6BBC56: fcom    st(1)
0x6BBC58: fnstsw  ax
0x6BBC5A: test    ah, 1
0x6BBC5D: jz      loc_6BBD34
0x6BBC63: fstp    [esp+2Ch+var_1C]
0x6BBC67: fld     dword ptr [ebp+0]
0x6BBC6A: fstp    [esp+2Ch+arg_10]
0x6BBC6E: fld     [esp+2Ch+arg_10]
0x6BBC72: fcom    st(1)
0x6BBC74: fnstsw  ax
0x6BBC76: test    ah, 1
0x6BBC79: jz      loc_6BBD1E
0x6BBC7F: mov     eax, [esp+2Ch+var_18]
0x6BBC83: fstp    [esp+2Ch+var_1C]
0x6BBC87: fld     dword ptr [eax]
0x6BBC89: fstp    [esp+2Ch+arg_10]
0x6BBC8D: fld     [esp+2Ch+arg_10]
0x6BBC91: fcom    st(1)
0x6BBC93: fnstsw  ax
0x6BBC95: test    ah, 1
0x6BBC98: jz      loc_6BBD26
0x6BBC9E: mov     eax, [esp+2Ch+var_14]
0x6BBCA2: fstp    [esp+2Ch+var_1C]
0x6BBCA6: fld     dword ptr [eax]
0x6BBCA8: fstp    [esp+2Ch+arg_10]
0x6BBCAC: fld     [esp+2Ch+arg_10]
0x6BBCB0: fcom    st(1)
0x6BBCB2: fnstsw  ax
0x6BBCB4: test    ah, 1
0x6BBCB7: jz      short loc_6BBD2E
0x6BBCB9: mov     eax, [esp+2Ch+var_10]
0x6BBCBD: fst     [esp+2Ch+var_1C]
0x6BBCC1: add     [esp+2Ch+var_18], edx
0x6BBCC5: add     [esp+2Ch+var_14], edx
0x6BBCC9: add     ecx, 4
0x6BBCCC: add     eax, 0FFFFFFFDh
0x6BBCCF: add     edi, 4
0x6BBCD2: add     ebx, edx
0x6BBCD4: add     ebp, edx
0x6BBCD6: cmp     ecx, eax
0x6BBCD8: jbe     loc_6BBC4A
0x6BBCDE: mov     ebx, [esp+2Ch+var_10]
0x6BBCE2: mov     ebp, [esp+2Ch+arg_8]
0x6BBCE6: cmp     ecx, ebx
0x6BBCE8: ja      short loc_6BBD38
0x6BBCEA: mov     edx, esi
0x6BBCEC: imul    edx, ecx
0x6BBCEF: add     edx, ebp
0x6BBCF1: fstp    st
0x6BBCF3: fld     dword ptr [edx]
0x6BBCF5: fstp    [esp+2Ch+arg_10]
0x6BBCF9: fld     [esp+2Ch+arg_10]
0x6BBCFD: fcom    st(1)
0x6BBCFF: fnstsw  ax
0x6BBD01: test    ah, 1
0x6BBD04: jz      short loc_6BBD38
0x6BBD06: add     ecx, 1
0x6BBD09: fst     [esp+2Ch+var_1C]
0x6BBD0D: add     edi, 1
0x6BBD10: add     edx, esi
0x6BBD12: cmp     ecx, ebx
0x6BBD14: jbe     short loc_6BBCF1
0x6BBD16: jmp     short loc_6BBD38
0x6BBD18: fld     [esp+2Ch+arg_10]
0x6BBD1C: jmp     short loc_6BBCE6
0x6BBD1E: add     ecx, 1
0x6BBD21: add     edi, 1
0x6BBD24: jmp     short loc_6BBD34
0x6BBD26: add     ecx, 2
0x6BBD29: add     edi, 2
0x6BBD2C: jmp     short loc_6BBD34
0x6BBD2E: add     ecx, 3
0x6BBD31: add     edi, 3
0x6BBD34: mov     ebp, [esp+2Ch+arg_8]
0x6BBD38: fld     [esp+2Ch+var_1C]
0x6BBD3C: mov     eax, esi
0x6BBD3E: imul    esi, edi
0x6BBD41: fsub    st(2), st
0x6BBD43: fsubp   st(1), st
0x6BBD45: fdivp   st(1), st
0x6BBD47: lea     edx, [esp+2Ch+var_C]
0x6BBD4B: push    edx
0x6BBD4C: add     esi, ebp
0x6BBD4E: imul    eax, ecx
0x6BBD51: fstp    [esp+30h+arg_10]
0x6BBD55: fld     [esp+30h+arg_10]
0x6BBD59: add     eax, ebp
0x6BBD5B: push    eax
0x6BBD5C: push    esi
0x6BBD5D: push    ecx
0x6BBD5E: mov     ecx, [esp+3Ch+arg_C]
0x6BBD62: mov     edx, ds:0B3D010h[ecx*4]
0x6BBD69: fstp    [esp+3Ch+var_3C]
0x6BBD6C: call    edx
0x6BBD6E: mov     eax, [esp+3Ch+arg_14]
0x6BBD72: mov     ecx, [esp+3Ch+var_C]
0x6BBD76: mov     edx, [esp+3Ch+var_8]
0x6BBD7A: add     esp, 10h
0x6BBD7D: mov     [eax], edi
0x6BBD7F: mov     eax, [esp+2Ch+arg_0]
0x6BBD83: pop     edi
0x6BBD84: mov     [eax], ecx
0x6BBD86: mov     ecx, [esp+28h+var_4]
0x6BBD8A: pop     esi
0x6BBD8B: pop     ebp
0x6BBD8C: mov     [eax+4], edx
0x6BBD8F: mov     [eax+8], ecx
0x6BBD92: pop     ebx
0x6BBD93: add     esp, 1Ch
0x6BBD96: retn
0x6BBD97: fstp    st
0x6BBD99: mov     ecx, [esp+20h+arg_8]
0x6BBD9D: mov     edx, [ecx+4]
0x6BBDA0: mov     eax, [esp+20h+arg_0]
0x6BBDA4: mov     [eax], edx
0x6BBDA6: mov     edx, [ecx+8]
0x6BBDA9: mov     ecx, [ecx+0Ch]
0x6BBDAC: mov     [eax+4], edx
0x6BBDAF: mov     [eax+8], ecx
0x6BBDB2: pop     ebx
0x6BBDB3: add     esp, 1Ch
0x6BBDB6: retn

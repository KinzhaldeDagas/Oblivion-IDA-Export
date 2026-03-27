0x6BDBA0: mov     ecx, [esp+arg_C]
0x6BDBA4: sub     esp, 10h
0x6BDBA7: cmp     ecx, 1
0x6BDBAA: jz      loc_6BDDAE
0x6BDBB0: fld     [esp+10h+arg_0]
0x6BDBB4: fld     dword ptr ds:0A7DEB4h
0x6BDBBA: fchs
0x6BDBBC: fucomp  st(1)
0x6BDBBE: fnstsw  ax
0x6BDBC0: test    ah, 44h
0x6BDBC3: jnp     loc_6BDDAC
0x6BDBC9: mov     eax, [esp+10h+arg_10]
0x6BDBCD: mov     eax, [eax]
0x6BDBCF: push    ebx
0x6BDBD0: mov     ebx, [esp+14h+arg_4]
0x6BDBD4: push    ebp
0x6BDBD5: push    esi
0x6BDBD6: movzx   esi, [esp+1Ch+arg_14]
0x6BDBDB: push    edi
0x6BDBDC: lea     edi, [ecx-1]
0x6BDBDF: mov     ecx, esi
0x6BDBE1: imul    ecx, eax
0x6BDBE4: mov     [esp+20h+arg_C], eax
0x6BDBE8: mov     [esp+20h+var_4], edi
0x6BDBEC: fld     dword ptr [ecx+ebx]
0x6BDBEF: fstp    [esp+20h+var_C]
0x6BDBF3: fld     [esp+20h+var_C]
0x6BDBF7: fcomp   st(1)
0x6BDBF9: fnstsw  ax
0x6BDBFB: test    ah, 41h
0x6BDBFE: jnz     short loc_6BDC0E
0x6BDC00: fld     dword ptr [ebx]
0x6BDC02: mov     [esp+20h+arg_C], 0
0x6BDC0A: fstp    [esp+20h+var_C]
0x6BDC0E: mov     ecx, [esp+20h+arg_C]
0x6BDC12: add     ecx, 1
0x6BDC15: mov     edx, edi
0x6BDC17: sub     edx, ecx
0x6BDC19: add     edx, 1
0x6BDC1C: cmp     edx, 4
0x6BDC1F: jl      loc_6BDD76
0x6BDC25: mov     edi, esi
0x6BDC27: lea     eax, [ecx+3]
0x6BDC2A: imul    edi, ecx
0x6BDC2D: lea     ebp, [ecx+2]
0x6BDC30: imul    eax, esi
0x6BDC33: imul    ebp, esi
0x6BDC36: add     eax, ebx
0x6BDC38: add     edi, ebx
0x6BDC3A: add     ebp, ebx
0x6BDC3C: lea     ebx, [ecx+1]
0x6BDC3F: imul    ebx, esi
0x6BDC42: add     ebx, [esp+20h+arg_4]
0x6BDC46: lea     edx, ds:0[esi*4]
0x6BDC4D: mov     [esp+20h+var_8], eax
0x6BDC51: jmp     short loc_6BDC55
0x6BDC53: fstp    st
0x6BDC55: fld     dword ptr [edi]
0x6BDC57: fstp    [esp+20h+var_10]
0x6BDC5B: fld     [esp+20h+var_10]
0x6BDC5F: fcom    st(1)
0x6BDC61: fnstsw  ax
0x6BDC63: test    ah, 1
0x6BDC66: jz      loc_6BDD87
0x6BDC6C: fstp    [esp+20h+var_C]
0x6BDC70: fld     dword ptr [ebx]
0x6BDC72: fstp    [esp+20h+var_10]
0x6BDC76: fld     [esp+20h+var_10]
0x6BDC7A: fcom    st(1)
0x6BDC7C: fnstsw  ax
0x6BDC7E: test    ah, 1
0x6BDC81: jz      loc_6BDD7F
0x6BDC87: fstp    [esp+20h+var_C]
0x6BDC8B: fld     dword ptr [ebp+0]
0x6BDC8E: fstp    [esp+20h+var_10]
0x6BDC92: fld     [esp+20h+var_10]
0x6BDC96: fcom    st(1)
0x6BDC98: fnstsw  ax
0x6BDC9A: test    ah, 1
0x6BDC9D: jz      loc_6BDD8D
0x6BDCA3: mov     eax, [esp+20h+var_8]
0x6BDCA7: fstp    [esp+20h+var_C]
0x6BDCAB: fld     dword ptr [eax]
0x6BDCAD: fstp    [esp+20h+var_10]
0x6BDCB1: fld     [esp+20h+var_10]
0x6BDCB5: fcom    st(1)
0x6BDCB7: fnstsw  ax
0x6BDCB9: test    ah, 1
0x6BDCBC: jz      loc_6BDD9B
0x6BDCC2: mov     eax, [esp+20h+var_4]
0x6BDCC6: fst     [esp+20h+var_C]
0x6BDCCA: add     [esp+20h+arg_C], 4
0x6BDCCF: add     [esp+20h+var_8], edx
0x6BDCD3: add     ecx, 4
0x6BDCD6: add     eax, 0FFFFFFFDh
0x6BDCD9: add     edi, edx
0x6BDCDB: add     ebx, edx
0x6BDCDD: add     ebp, edx
0x6BDCDF: cmp     ecx, eax
0x6BDCE1: jbe     loc_6BDC53
0x6BDCE7: mov     ebx, [esp+20h+arg_4]
0x6BDCEB: mov     edi, [esp+20h+var_4]
0x6BDCEF: cmp     ecx, edi
0x6BDCF1: ja      short loc_6BDD27
0x6BDCF3: mov     ebp, [esp+20h+arg_C]
0x6BDCF7: mov     edx, esi
0x6BDCF9: imul    edx, ecx
0x6BDCFC: add     edx, ebx
0x6BDCFE: fstp    st
0x6BDD00: fld     dword ptr [edx]
0x6BDD02: fstp    [esp+20h+var_10]
0x6BDD06: fld     [esp+20h+var_10]
0x6BDD0A: fcom    st(1)
0x6BDD0C: fnstsw  ax
0x6BDD0E: test    ah, 1
0x6BDD11: jz      short loc_6BDD23
0x6BDD13: add     ecx, 1
0x6BDD16: fst     [esp+20h+var_C]
0x6BDD1A: add     ebp, 1
0x6BDD1D: add     edx, esi
0x6BDD1F: cmp     ecx, edi
0x6BDD21: jbe     short loc_6BDCFE
0x6BDD23: mov     [esp+20h+arg_C], ebp
0x6BDD27: fld     [esp+20h+var_C]
0x6BDD2B: mov     edi, [esp+20h+arg_C]
0x6BDD2F: fsub    st(2), st
0x6BDD31: mov     eax, esi
0x6BDD33: imul    esi, edi
0x6BDD36: fsubp   st(1), st
0x6BDD38: fdivp   st(1), st
0x6BDD3A: lea     edx, [esp+20h+arg_C]
0x6BDD3E: push    edx
0x6BDD3F: add     esi, ebx
0x6BDD41: imul    eax, ecx
0x6BDD44: fstp    [esp+24h+arg_C]
0x6BDD48: fld     [esp+24h+arg_C]
0x6BDD4C: add     eax, ebx
0x6BDD4E: push    eax
0x6BDD4F: push    esi
0x6BDD50: push    ecx
0x6BDD51: mov     ecx, [esp+30h+arg_8]
0x6BDD55: mov     edx, ds:0B3D070h[ecx*4]
0x6BDD5C: fstp    [esp+30h+var_30]
0x6BDD5F: call    edx
0x6BDD61: mov     eax, [esp+30h+arg_10]
0x6BDD65: add     esp, 10h
0x6BDD68: mov     [eax], edi
0x6BDD6A: mov     al, byte ptr [esp+20h+arg_C]
0x6BDD6E: pop     edi
0x6BDD6F: pop     esi
0x6BDD70: pop     ebp
0x6BDD71: pop     ebx
0x6BDD72: add     esp, 10h
0x6BDD75: retn
0x6BDD76: fld     [esp+20h+var_10]
0x6BDD7A: jmp     loc_6BDCEF
0x6BDD7F: add     ecx, 1
0x6BDD82: add     [esp+20h+arg_C], 1
0x6BDD87: mov     ebx, [esp+20h+arg_4]
0x6BDD8B: jmp     short loc_6BDD27
0x6BDD8D: mov     ebx, [esp+20h+arg_4]
0x6BDD91: add     ecx, 2
0x6BDD94: add     [esp+20h+arg_C], 2
0x6BDD99: jmp     short loc_6BDD27
0x6BDD9B: mov     ebx, [esp+20h+arg_4]
0x6BDD9F: add     ecx, 3
0x6BDDA2: add     [esp+20h+arg_C], 3
0x6BDDA7: jmp     loc_6BDD27
0x6BDDAC: fstp    st
0x6BDDAE: mov     ecx, [esp+10h+arg_4]
0x6BDDB2: mov     al, [ecx+4]
0x6BDDB5: add     esp, 10h
0x6BDDB8: retn

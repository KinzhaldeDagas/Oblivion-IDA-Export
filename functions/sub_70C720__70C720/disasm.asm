0x70C720: sub     esp, 38h
0x70C723: mov     eax, [esp+38h+arg_0]
0x70C727: fld     dword ptr [eax+0Ch]
0x70C72A: mov     edx, [eax+4]
0x70C72D: fstp    [esp+38h+arg_0]
0x70C731: push    ebx
0x70C732: push    esi
0x70C733: mov     esi, ecx
0x70C735: cmp     byte ptr [esi+104h], 0
0x70C73C: mov     ecx, [eax]
0x70C73E: mov     [esp+40h+var_30], ecx
0x70C742: fld     [esp+40h+var_30]
0x70C746: fsub    dword ptr [esi+88h]
0x70C74C: mov     ecx, [eax+8]
0x70C74F: mov     [esp+40h+var_2C], edx
0x70C753: mov     [esp+40h+var_28], ecx
0x70C757: fstp    [esp+40h+var_24]
0x70C75B: mov     ebx, [esp+40h+arg_4]
0x70C75F: fld     [esp+40h+var_2C]
0x70C763: push    edi
0x70C764: fsub    dword ptr [esi+8Ch]
0x70C76A: mov     edi, [esp+44h+arg_8]
0x70C76E: fstp    [esp+44h+var_20]
0x70C772: fld     [esp+44h+var_28]
0x70C776: fsub    dword ptr [esi+90h]
0x70C77C: fstp    [esp+44h+var_1C]
0x70C780: fld     dword ptr [esi+100h]
0x70C786: fsub    dword ptr [esi+0FCh]
0x70C78C: fld1
0x70C78E: fdivrp  st(1), st
0x70C790: fstp    [esp+44h+var_34]
0x70C794: fld     dword ptr [esi+64h]
0x70C797: fstp    [esp+44h+var_18]
0x70C79B: fld     dword ptr [esi+70h]
0x70C79E: fstp    [esp+44h+var_14]
0x70C7A2: fld     dword ptr [esi+7Ch]
0x70C7A5: fstp    [esp+44h+var_10]
0x70C7A9: fld     [esp+44h+var_14]
0x70C7AD: fmul    [esp+44h+var_20]
0x70C7B1: fld     [esp+44h+var_18]
0x70C7B5: fmul    [esp+44h+var_24]
0x70C7B9: faddp   st(1), st
0x70C7BB: fld     [esp+44h+var_10]
0x70C7BF: fmul    [esp+44h+var_1C]
0x70C7C3: faddp   st(1), st
0x70C7C5: fstp    [esp+44h+var_38]
0x70C7C9: fld     [esp+44h+var_38]
0x70C7CD: fsub    dword ptr [esi+0FCh]
0x70C7D3: fstp    [esp+44h+var_38]
0x70C7D7: fld     [esp+44h+arg_0]
0x70C7DB: fldz
0x70C7DD: jz      short loc_70C7E6
0x70C7DF: fstp    st(1)
0x70C7E1: fst     dword ptr [ebx+8]
0x70C7E4: jmp     short loc_70C813
0x70C7E6: fstp    st
0x70C7E8: fld     [esp+44h+var_38]
0x70C7EC: fld     st
0x70C7EE: fsub    st, st(2)
0x70C7F0: fstp    [esp+44h+arg_4]
0x70C7F4: fld     [esp+44h+arg_4]
0x70C7F8: fld     [esp+44h+var_34]
0x70C7FC: fld     st
0x70C7FE: fmulp   st(2), st
0x70C800: fxch    st(1)
0x70C802: fstp    dword ptr [ebx+8]
0x70C805: fxch    st(1)
0x70C807: faddp   st(2), st
0x70C809: fxch    st(1)
0x70C80B: fstp    [esp+44h+arg_4]
0x70C80F: fmul    [esp+44h+arg_4]
0x70C813: fstp    dword ptr [edi+8]
0x70C816: lea     edx, [esp+44h+var_C]
0x70C81A: fld     dword ptr [esi+68h]
0x70C81D: push    edx
0x70C81E: fstp    [esp+48h+var_C]
0x70C822: lea     eax, [esp+48h+var_18]
0x70C826: fld     dword ptr [esi+74h]
0x70C829: push    eax
0x70C82A: fstp    [esp+4Ch+var_8]
0x70C82E: lea     ecx, [esp+4Ch+var_24]
0x70C832: fld     dword ptr [esi+80h]
0x70C838: fstp    [esp+4Ch+var_4]
0x70C83C: call    sub_4BF9E0
0x70C841: fld     dword ptr [eax]
0x70C843: fld     [esp+44h+arg_0]
0x70C847: fld     st
0x70C849: fmulp   st(2), st
0x70C84B: fxch    st(1)
0x70C84D: fstp    [esp+44h+var_C]
0x70C851: fld     dword ptr [eax+4]
0x70C854: fmul    st, st(1)
0x70C856: fstp    [esp+44h+var_8]
0x70C85A: fmul    dword ptr [eax+8]
0x70C85D: fstp    [esp+44h+var_4]
0x70C861: fld     [esp+44h+var_30]
0x70C865: fld     [esp+44h+var_C]
0x70C869: fld     st
0x70C86B: fsubp   st(2), st
0x70C86D: fxch    st(1)
0x70C86F: fstp    [esp+44h+var_18]
0x70C873: fld     [esp+44h+var_2C]
0x70C877: fld     [esp+44h+var_8]
0x70C87B: fld     st
0x70C87D: fsubp   st(2), st
0x70C87F: fxch    st(1)
0x70C881: fstp    [esp+44h+var_14]
0x70C885: fld     [esp+44h+var_28]
0x70C889: fld     [esp+44h+var_4]
0x70C88D: fld     st
0x70C88F: fsubp   st(2), st
0x70C891: fxch    st(1)
0x70C893: fstp    [esp+44h+var_10]
0x70C897: fld     dword ptr [esi+0E0h]
0x70C89D: fld     [esp+44h+var_14]
0x70C8A1: fld     st
0x70C8A3: fmulp   st(2), st
0x70C8A5: fld     dword ptr [esi+0DCh]
0x70C8AB: fld     [esp+44h+var_18]
0x70C8AF: fld     st
0x70C8B1: fmulp   st(2), st
0x70C8B3: fxch    st(3)
0x70C8B5: faddp   st(1), st
0x70C8B7: fld     [esp+44h+var_10]
0x70C8BB: fmul    dword ptr [esi+0E4h]
0x70C8C1: faddp   st(1), st
0x70C8C3: fadd    dword ptr [esi+0E8h]
0x70C8C9: fstp    [esp+44h+arg_4]
0x70C8CD: fld     [esp+44h+arg_4]
0x70C8D1: fld     [esp+44h+arg_C]
0x70C8D5: fcomp   st(1)
0x70C8D7: fnstsw  ax
0x70C8D9: test    ah, 5
0x70C8DC: jp      loc_70CC41
0x70C8E2: fld     dword ptr [esi+0ACh]
0x70C8E8: fmulp   st(3), st
0x70C8EA: fld     dword ptr [esi+0B0h]
0x70C8F0: fmulp   st(2), st
0x70C8F2: fxch    st(2)
0x70C8F4: faddp   st(1), st
0x70C8F6: fld     dword ptr [esi+0B4h]
0x70C8FC: fmul    [esp+44h+var_10]
0x70C900: faddp   st(1), st
0x70C902: fadd    dword ptr [esi+0B8h]
0x70C908: fdivrp  st(1), st
0x70C90A: fstp    dword ptr [ebx]
0x70C90C: fld     [esp+44h+var_30]
0x70C910: faddp   st(3), st
0x70C912: fxch    st(2)
0x70C914: fstp    [esp+44h+var_C]
0x70C918: fadd    [esp+44h+var_2C]
0x70C91C: fstp    [esp+44h+var_8]
0x70C920: fadd    [esp+44h+var_28]
0x70C924: fstp    [esp+44h+var_4]
0x70C928: fld     [esp+44h+var_C]
0x70C92C: fld     st
0x70C92E: fmul    dword ptr [esi+0DCh]
0x70C934: fld     dword ptr [esi+0E0h]
0x70C93A: fld     [esp+44h+var_8]
0x70C93E: fld     st
0x70C940: fmulp   st(2), st
0x70C942: fxch    st(2)
0x70C944: faddp   st(1), st
0x70C946: fld     [esp+44h+var_4]
0x70C94A: fld     st
0x70C94C: fmul    dword ptr [esi+0E4h]
0x70C952: faddp   st(2), st
0x70C954: fld     dword ptr [esi+0E8h]
0x70C95A: faddp   st(2), st
0x70C95C: fxch    st(1)
0x70C95E: fstp    [esp+44h+arg_4]
0x70C962: fld     [esp+44h+arg_4]
0x70C966: fld     [esp+44h+arg_C]
0x70C96A: fcomp   st(1)
0x70C96C: fnstsw  ax
0x70C96E: test    ah, 5
0x70C971: jp      loc_70CC02
0x70C977: fld     dword ptr [esi+0ACh]
0x70C97D: lea     ecx, [esp+44h+var_24]
0x70C981: fmulp   st(4), st
0x70C983: push    ecx
0x70C984: fld     dword ptr [esi+0B0h]
0x70C98A: lea     edx, [esp+48h+var_18]
0x70C98E: fmulp   st(3), st
0x70C990: push    edx
0x70C991: fxch    st(3)
0x70C993: lea     ecx, [esp+4Ch+var_C]
0x70C997: faddp   st(2), st
0x70C999: fmul    dword ptr [esi+0B4h]
0x70C99F: faddp   st(1), st
0x70C9A1: fadd    dword ptr [esi+0B8h]
0x70C9A7: fdivrp  st(1), st
0x70C9A9: fstp    dword ptr [edi]
0x70C9AB: fld     dword ptr [esi+6Ch]
0x70C9AE: fstp    [esp+4Ch+var_C]
0x70C9B2: fld     dword ptr [esi+78h]
0x70C9B5: fstp    [esp+4Ch+var_8]
0x70C9B9: fld     dword ptr [esi+84h]
0x70C9BF: fstp    [esp+4Ch+var_4]
0x70C9C3: call    sub_4BF9E0
0x70C9C8: fld     dword ptr [eax]
0x70C9CA: fld     [esp+44h+arg_0]
0x70C9CE: fld     st
0x70C9D0: fmulp   st(2), st
0x70C9D2: fxch    st(1)
0x70C9D4: fstp    [esp+44h+var_C]
0x70C9D8: fld     dword ptr [eax+4]
0x70C9DB: fmul    st, st(1)
0x70C9DD: fstp    [esp+44h+var_8]
0x70C9E1: fmul    dword ptr [eax+8]
0x70C9E4: fstp    [esp+44h+var_4]
0x70C9E8: fld     [esp+44h+var_30]
0x70C9EC: fld     [esp+44h+var_C]
0x70C9F0: fld     st
0x70C9F2: fsubp   st(2), st
0x70C9F4: fxch    st(1)
0x70C9F6: fstp    [esp+44h+var_18]
0x70C9FA: fld     [esp+44h+var_2C]
0x70C9FE: fld     [esp+44h+var_8]
0x70CA02: fld     st
0x70CA04: fsubp   st(2), st
0x70CA06: fxch    st(1)
0x70CA08: fstp    [esp+44h+var_14]
0x70CA0C: fld     [esp+44h+var_28]
0x70CA10: fld     [esp+44h+var_4]
0x70CA14: fld     st
0x70CA16: fsubp   st(2), st
0x70CA18: fxch    st(1)
0x70CA1A: fstp    [esp+44h+var_10]
0x70CA1E: fld     [esp+44h+var_18]
0x70CA22: fld     st
0x70CA24: fmul    dword ptr [esi+0DCh]
0x70CA2A: fld     dword ptr [esi+0E0h]
0x70CA30: fld     [esp+44h+var_14]
0x70CA34: fld     st
0x70CA36: fmulp   st(2), st
0x70CA38: fxch    st(2)
0x70CA3A: faddp   st(1), st
0x70CA3C: fld     [esp+44h+var_10]
0x70CA40: fmul    dword ptr [esi+0E4h]
0x70CA46: faddp   st(1), st
0x70CA48: fadd    dword ptr [esi+0E8h]
0x70CA4E: fstp    [esp+44h+arg_4]
0x70CA52: fld     [esp+44h+arg_4]
0x70CA56: fld     [esp+44h+arg_C]
0x70CA5A: fcomp   st(1)
0x70CA5C: fnstsw  ax
0x70CA5E: test    ah, 5
0x70CA61: jp      loc_70CC1E
0x70CA67: fld     dword ptr [esi+0BCh]
0x70CA6D: fmulp   st(3), st
0x70CA6F: fld     dword ptr [esi+0C0h]
0x70CA75: fmulp   st(2), st
0x70CA77: fxch    st(2)
0x70CA79: faddp   st(1), st
0x70CA7B: fld     dword ptr [esi+0C4h]
0x70CA81: fmul    [esp+44h+var_10]
0x70CA85: faddp   st(1), st
0x70CA87: fadd    dword ptr [esi+0C8h]
0x70CA8D: fdivrp  st(1), st
0x70CA8F: fstp    dword ptr [ebx+4]
0x70CA92: fld     [esp+44h+var_30]
0x70CA96: faddp   st(3), st
0x70CA98: fxch    st(2)
0x70CA9A: fstp    [esp+44h+var_C]
0x70CA9E: fadd    [esp+44h+var_2C]
0x70CAA2: fstp    [esp+44h+var_8]
0x70CAA6: fadd    [esp+44h+var_28]
0x70CAAA: fstp    [esp+44h+var_4]
0x70CAAE: fld     [esp+44h+var_C]
0x70CAB2: fld     st
0x70CAB4: fmul    dword ptr [esi+0DCh]
0x70CABA: fld     dword ptr [esi+0E0h]
0x70CAC0: fld     [esp+44h+var_8]
0x70CAC4: fld     st
0x70CAC6: fmulp   st(2), st
0x70CAC8: fxch    st(2)
0x70CACA: faddp   st(1), st
0x70CACC: fld     [esp+44h+var_4]
0x70CAD0: fld     st
0x70CAD2: fmul    dword ptr [esi+0E4h]
0x70CAD8: faddp   st(2), st
0x70CADA: fld     dword ptr [esi+0E8h]
0x70CAE0: faddp   st(2), st
0x70CAE2: fxch    st(1)
0x70CAE4: fstp    [esp+44h+arg_4]
0x70CAE8: fld     [esp+44h+arg_4]
0x70CAEC: fld     [esp+44h+arg_C]
0x70CAF0: fcomp   st(1)
0x70CAF2: fnstsw  ax
0x70CAF4: test    ah, 5
0x70CAF7: jp      loc_70CC02
0x70CAFD: fld     dword ptr [esi+0BCh]
0x70CB03: fmulp   st(4), st
0x70CB05: fld     dword ptr [esi+0C0h]
0x70CB0B: fmulp   st(3), st
0x70CB0D: fxch    st(3)
0x70CB0F: faddp   st(2), st
0x70CB11: fmul    dword ptr [esi+0C4h]
0x70CB17: faddp   st(1), st
0x70CB19: fadd    dword ptr [esi+0C8h]
0x70CB1F: fdivrp  st(1), st
0x70CB21: fstp    dword ptr [edi+4]
0x70CB24: fld     dword ptr ds:0A30634h
0x70CB2A: fcom    dword ptr [ebx]
0x70CB2C: fnstsw  ax
0x70CB2E: fld1
0x70CB30: test    ah, 41h
0x70CB33: jnz     short loc_70CB55
0x70CB35: fxch    st(1)
0x70CB37: fst     dword ptr [ebx]
0x70CB39: fcom    dword ptr [edi]
0x70CB3B: fnstsw  ax
0x70CB3D: test    ah, 41h
0x70CB40: jnz     short loc_70CB46
0x70CB42: fst     dword ptr [edi]
0x70CB44: jmp     short loc_70CB6D
0x70CB46: fxch    st(1)
0x70CB48: fcom    dword ptr [edi]
0x70CB4A: fnstsw  ax
0x70CB4C: test    ah, 5
0x70CB4F: jp      short loc_70CB6B
0x70CB51: fst     dword ptr [edi]
0x70CB53: jmp     short loc_70CB6B
0x70CB55: fcom    dword ptr [edi]
0x70CB57: fnstsw  ax
0x70CB59: test    ah, 5
0x70CB5C: jp      short loc_70CB6B
0x70CB5E: fst     dword ptr [edi]
0x70CB60: fcom    dword ptr [ebx]
0x70CB62: fnstsw  ax
0x70CB64: test    ah, 5
0x70CB67: jp      short loc_70CB6B
0x70CB69: fst     dword ptr [ebx]
0x70CB6B: fxch    st(1)
0x70CB6D: fcom    dword ptr [ebx+4]
0x70CB70: fnstsw  ax
0x70CB72: test    ah, 41h
0x70CB75: jnz     short loc_70CB9A
0x70CB77: fst     dword ptr [ebx+4]
0x70CB7A: fcom    dword ptr [edi+4]
0x70CB7D: fnstsw  ax
0x70CB7F: test    ah, 41h
0x70CB82: jnz     short loc_70CB89
0x70CB84: fstp    dword ptr [edi+4]
0x70CB87: jmp     short loc_70CBB6
0x70CB89: fstp    st
0x70CB8B: fcom    dword ptr [edi+4]
0x70CB8E: fnstsw  ax
0x70CB90: test    ah, 5
0x70CB93: jp      short loc_70CBB6
0x70CB95: fst     dword ptr [edi+4]
0x70CB98: jmp     short loc_70CBB6
0x70CB9A: fstp    st
0x70CB9C: fcom    dword ptr [edi+4]
0x70CB9F: fnstsw  ax
0x70CBA1: test    ah, 5
0x70CBA4: jp      short loc_70CBB6
0x70CBA6: fst     dword ptr [edi+4]
0x70CBA9: fcom    dword ptr [ebx+4]
0x70CBAC: fnstsw  ax
0x70CBAE: test    ah, 5
0x70CBB1: jp      short loc_70CBB6
0x70CBB3: fst     dword ptr [ebx+4]
0x70CBB6: fldz
0x70CBB8: fcom    dword ptr [ebx+8]
0x70CBBB: fnstsw  ax
0x70CBBD: test    ah, 41h
0x70CBC0: jnz     short loc_70CBDD
0x70CBC2: fst     dword ptr [ebx+8]
0x70CBC5: fcom    dword ptr [edi+8]
0x70CBC8: fnstsw  ax
0x70CBCA: test    ah, 41h
0x70CBCD: jnz     short loc_70CC49
0x70CBCF: fstp    st(1)
0x70CBD1: fstp    dword ptr [edi+8]
0x70CBD4: pop     edi
0x70CBD5: pop     esi
0x70CBD6: pop     ebx
0x70CBD7: add     esp, 38h
0x70CBDA: retn    10h
0x70CBDD: fstp    st
0x70CBDF: fcom    dword ptr [edi+8]
0x70CBE2: fnstsw  ax
0x70CBE4: test    ah, 5
0x70CBE7: jp      short loc_70CC59
0x70CBE9: fst     dword ptr [edi+8]
0x70CBEC: fcom    dword ptr [ebx+8]
0x70CBEF: fnstsw  ax
0x70CBF1: test    ah, 5
0x70CBF4: jp      short loc_70CC59
0x70CBF6: pop     edi
0x70CBF7: fstp    dword ptr [ebx+8]
0x70CBFA: pop     esi
0x70CBFB: pop     ebx
0x70CBFC: add     esp, 38h
0x70CBFF: retn    10h
0x70CC02: fstp    st(3)
0x70CC04: fstp    st(1)
0x70CC06: fstp    st
0x70CC08: fstp    st
0x70CC0A: fld     dword ptr ds:0A30634h
0x70CC10: fst     dword ptr [ebx+4]
0x70CC13: fstp    dword ptr [ebx]
0x70CC15: fld1
0x70CC17: fst     dword ptr [edi+4]
0x70CC1A: fst     dword ptr [edi]
0x70CC1C: jmp     short loc_70CBB6
0x70CC1E: fstp    st(5)
0x70CC20: fstp    st(3)
0x70CC22: fstp    st(1)
0x70CC24: fstp    st
0x70CC26: fstp    st
0x70CC28: fstp    st
0x70CC2A: fld     dword ptr ds:0A30634h
0x70CC30: fst     dword ptr [ebx+4]
0x70CC33: fstp    dword ptr [ebx]
0x70CC35: fld1
0x70CC37: fst     dword ptr [edi+4]
0x70CC3A: fst     dword ptr [edi]
0x70CC3C: jmp     loc_70CBB6
0x70CC41: fstp    st(5)
0x70CC43: fstp    st(3)
0x70CC45: fstp    st(1)
0x70CC47: jmp     short loc_70CC04
0x70CC49: fstp    st
0x70CC4B: fcom    dword ptr [edi+8]
0x70CC4E: fnstsw  ax
0x70CC50: test    ah, 5
0x70CC53: jnp     loc_70CBD1
0x70CC59: pop     edi
0x70CC5A: fstp    st
0x70CC5C: pop     esi
0x70CC5D: pop     ebx
0x70CC5E: add     esp, 38h
0x70CC61: retn    10h

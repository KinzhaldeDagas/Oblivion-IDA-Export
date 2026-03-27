0x96C6A0: sub     esp, 34h
0x96C6A3: mov     ecx, [esp+34h+arg_10]
0x96C6A7: fld     dword ptr [ecx]
0x96C6A9: push    ebx
0x96C6AA: mov     ebx, [esp+38h+arg_8]
0x96C6AE: fsub    dword ptr [ebx]
0x96C6B0: push    esi
0x96C6B1: mov     esi, [esp+3Ch+arg_4]
0x96C6B5: push    edi
0x96C6B6: fstp    [esp+40h+var_24]
0x96C6BA: mov     edi, [esp+40h+arg_C]
0x96C6BE: fld     dword ptr [ecx+4]
0x96C6C1: fsub    dword ptr [ebx+4]
0x96C6C4: fstp    [esp+40h+var_20]
0x96C6C8: fld     dword ptr [ecx+8]
0x96C6CB: fsub    dword ptr [ebx+8]
0x96C6CE: fstp    [esp+40h+var_1C]
0x96C6D2: fld     [esp+40h+var_20]
0x96C6D6: fld     st
0x96C6D8: fld     [esp+40h+var_24]
0x96C6DC: fld     st
0x96C6DE: fld     [esp+40h+var_1C]
0x96C6E2: fld     st
0x96C6E4: fld     st(2)
0x96C6E6: fmulp   st(3), st
0x96C6E8: fld     st(4)
0x96C6EA: fmulp   st(5), st
0x96C6EC: fxch    st(2)
0x96C6EE: faddp   st(4), st
0x96C6F0: fld     st(1)
0x96C6F2: fmulp   st(2), st
0x96C6F4: fxch    st(3)
0x96C6F6: faddp   st(1), st
0x96C6F8: fstp    [esp+40h+arg_8]
0x96C6FC: fld     dword ptr [edi+4]
0x96C6FF: fsub    dword ptr [esi+4]
0x96C702: fstp    [esp+40h+var_30]
0x96C706: fld     dword ptr [edi+8]
0x96C709: fsub    dword ptr [esi+8]
0x96C70C: fstp    [esp+40h+var_2C]
0x96C710: fld     dword ptr [edi+0Ch]
0x96C713: fsub    dword ptr [esi+0Ch]
0x96C716: fstp    [esp+40h+var_28]
0x96C71A: fld     [esp+40h+var_30]
0x96C71E: fld     st
0x96C720: fld     [esp+40h+var_2C]
0x96C724: fld     [esp+40h+var_28]
0x96C728: fld     st(1)
0x96C72A: fmulp   st(2), st
0x96C72C: fld     st(2)
0x96C72E: fmulp   st(3), st
0x96C730: fxch    st(1)
0x96C732: faddp   st(2), st
0x96C734: fmul    st, st
0x96C736: faddp   st(1), st
0x96C738: fstp    [esp+40h+arg_C]
0x96C73C: fld     dword ptr [edi+10h]
0x96C73F: fadd    dword ptr [esi+10h]
0x96C742: fstp    [esp+40h+arg_4]
0x96C746: fld     [esp+40h+arg_4]
0x96C74A: fmul    st, st
0x96C74C: fstp    [esp+40h+var_34]
0x96C750: fldz
0x96C752: fld     [esp+40h+arg_8]
0x96C756: fcom    st(1)
0x96C758: fnstsw  ax
0x96C75A: test    ah, 41h
0x96C75D: jnz     loc_96CAE0
0x96C763: fld     [esp+40h+var_2C]
0x96C767: fmulp   st(6), st
0x96C769: fxch    st(2)
0x96C76B: fmulp   st(3), st
0x96C76D: fxch    st(4)
0x96C76F: faddp   st(2), st
0x96C771: fld     [esp+40h+var_28]
0x96C775: fmulp   st(3), st
0x96C777: fxch    st(1)
0x96C779: faddp   st(2), st
0x96C77B: fxch    st(1)
0x96C77D: fstp    [esp+40h+arg_10]
0x96C781: fld     [esp+40h+arg_10]
0x96C785: fcom    st(2)
0x96C787: fnstsw  ax
0x96C789: test    ah, 41h
0x96C78C: jp      loc_96CAE6
0x96C792: fld     [esp+40h+arg_0]
0x96C796: fld     st
0x96C798: fchs
0x96C79A: fmul    st, st(3)
0x96C79C: fcomp   st(2)
0x96C79E: fnstsw  ax
0x96C7A0: fld     [esp+40h+arg_C]
0x96C7A4: test    ah, 41h
0x96C7A7: fld     [esp+40h+var_34]
0x96C7AB: jnp     short loc_96C7E3
0x96C7AD: fld     st(4)
0x96C7AF: fmul    st, st(3)
0x96C7B1: fld     st(4)
0x96C7B3: fadd    st, st
0x96C7B5: faddp   st(1), st
0x96C7B7: fmulp   st(3), st
0x96C7B9: fld     st(1)
0x96C7BB: faddp   st(3), st
0x96C7BD: fld     qword ptr ds:0AA3AF8h
0x96C7C3: fadd    st, st(1)
0x96C7C5: fcomp   st(3)
0x96C7C7: fnstsw  ax
0x96C7C9: fstp    st(2)
0x96C7CB: test    ah, 1
0x96C7CE: jz      short loc_96C7E5
0x96C7D0: fstp    st(4)
0x96C7D2: fstp    st(2)
0x96C7D4: fstp    st
0x96C7D6: fstp    st
0x96C7D8: pop     edi
0x96C7D9: fstp    st
0x96C7DB: pop     esi
0x96C7DC: xor     al, al
0x96C7DE: pop     ebx
0x96C7DF: add     esp, 34h
0x96C7E2: retn
0x96C7E3: fstp    st(2)
0x96C7E5: fld     st
0x96C7E7: fsubrp  st(2), st
0x96C7E9: fxch    st(1)
0x96C7EB: fstp    [esp+40h+arg_C]
0x96C7EF: fld     st(1)
0x96C7F1: fmulp   st(2), st
0x96C7F3: fld     [esp+40h+arg_C]
0x96C7F7: fld     st
0x96C7F9: fmulp   st(4), st
0x96C7FB: fxch    st(2)
0x96C7FD: fsubrp  st(3), st
0x96C7FF: fxch    st(2)
0x96C801: fstp    [esp+40h+arg_C]
0x96C805: fld     [esp+40h+arg_C]
0x96C809: fcom    st(3)
0x96C80B: fnstsw  ax
0x96C80D: test    ah, 1
0x96C810: jnz     loc_96CACF
0x96C816: fxch    st(1)
0x96C818: fcomp   st(3)
0x96C81A: fnstsw  ax
0x96C81C: test    ah, 41h
0x96C81F: jp      loc_96C923
0x96C825: cmp     [esp+40h+arg_1C], 0
0x96C82A: fstp    st
0x96C82C: mov     eax, [esp+40h+arg_14]
0x96C830: fxch    st(1)
0x96C832: fstp    dword ptr [eax]
0x96C834: mov     eax, [esp+40h+arg_18]
0x96C838: fld     dword ptr [esi+4]
0x96C83B: fadd    dword ptr [edi+4]
0x96C83E: fstp    [esp+40h+var_24]
0x96C842: fld     dword ptr [esi+8]
0x96C845: fadd    dword ptr [edi+8]
0x96C848: fstp    [esp+40h+var_20]
0x96C84C: fld     dword ptr [esi+0Ch]
0x96C84F: fadd    dword ptr [edi+0Ch]
0x96C852: fstp    [esp+40h+var_1C]
0x96C856: fld     [esp+40h+var_24]
0x96C85A: fld     qword ptr ds:0A2FAA0h
0x96C860: fmul    st(1), st
0x96C862: fxch    st(1)
0x96C864: fstp    [esp+40h+var_18]
0x96C868: mov     ecx, [esp+40h+var_18]
0x96C86C: fld     [esp+40h+var_20]
0x96C870: mov     [eax], ecx
0x96C872: fmul    st, st(1)
0x96C874: fstp    [esp+40h+var_14]
0x96C878: mov     edx, [esp+40h+var_14]
0x96C87C: mov     [eax+4], edx
0x96C87F: fmul    [esp+40h+var_1C]
0x96C883: fstp    [esp+40h+var_10]
0x96C887: mov     ecx, [esp+40h+var_10]
0x96C88B: mov     [eax+8], ecx
0x96C88E: jz      loc_96C918
0x96C894: fcomp   dword ptr ds:0AA3B44h
0x96C89A: mov     esi, [esp+40h+arg_20]
0x96C89E: fnstsw  ax
0x96C8A0: test    ah, 41h
0x96C8A3: jnz     short loc_96C8C4
0x96C8A5: mov     edx, [esp+40h+var_30]
0x96C8A9: mov     eax, [esp+40h+var_2C]
0x96C8AD: mov     ecx, [esp+40h+var_28]
0x96C8B1: mov     [esi], edx
0x96C8B3: mov     [esi+4], eax
0x96C8B6: mov     [esi+8], ecx
0x96C8B9: mov     ecx, esi
0x96C8BB: call    sub_43F350
0x96C8C0: fstp    st
0x96C8C2: jmp     short loc_96C8DD
0x96C8C4: mov     edx, ds:0B258D0h
0x96C8CA: mov     [esi], edx
0x96C8CC: mov     eax, ds:0B258D4h
0x96C8D1: mov     [esi+4], eax
0x96C8D4: mov     ecx, ds:0B258D8h
0x96C8DA: mov     [esi+8], ecx
0x96C8DD: fld     dword ptr [esi]
0x96C8DF: mov     eax, [esp+40h+arg_24]
0x96C8E3: fchs
0x96C8E5: pop     edi
0x96C8E6: fstp    [esp+3Ch+var_18]
0x96C8EA: mov     edx, [esp+3Ch+var_18]
0x96C8EE: fld     dword ptr [esi+4]
0x96C8F1: fchs
0x96C8F3: fstp    [esp+3Ch+var_14]
0x96C8F7: mov     ecx, [esp+3Ch+var_14]
0x96C8FB: fld     dword ptr [esi+8]
0x96C8FE: mov     [eax], edx
0x96C900: fchs
0x96C902: mov     [eax+4], ecx
0x96C905: fstp    [esp+3Ch+var_10]
0x96C909: mov     edx, [esp+3Ch+var_10]
0x96C90D: pop     esi
0x96C90E: mov     [eax+8], edx
0x96C911: mov     al, 1
0x96C913: pop     ebx
0x96C914: add     esp, 34h
0x96C917: retn
0x96C918: pop     edi
0x96C919: fstp    st
0x96C91B: pop     esi
0x96C91C: mov     al, 1
0x96C91E: pop     ebx
0x96C91F: add     esp, 34h
0x96C922: retn
0x96C923: fstp    st(2)
0x96C925: fstp    st
0x96C927: call    __CIsqrt
0x96C92C: fstp    [esp+40h+arg_C]
0x96C930: fld     [esp+40h+arg_C]
0x96C934: mov     ecx, [esp+40h+arg_14]
0x96C938: fadd    [esp+40h+arg_10]
0x96C93C: fdiv    [esp+40h+arg_8]
0x96C940: fchs
0x96C942: fstp    [esp+40h+arg_10]
0x96C946: fld     [esp+40h+arg_10]
0x96C94A: fst     dword ptr [ecx]
0x96C94C: fldz
0x96C94E: fcom    st(1)
0x96C950: fnstsw  ax
0x96C952: test    ah, 41h
0x96C955: jnz     short loc_96C95D
0x96C957: fstp    st(1)
0x96C959: fstp    dword ptr [ecx]
0x96C95B: jmp     short loc_96C974
0x96C95D: fstp    st
0x96C95F: fld     [esp+40h+arg_0]
0x96C963: fcom    st(1)
0x96C965: fnstsw  ax
0x96C967: fstp    st(1)
0x96C969: test    ah, 5
0x96C96C: jp      short loc_96C972
0x96C96E: fstp    dword ptr [ecx]
0x96C970: jmp     short loc_96C974
0x96C972: fstp    st
0x96C974: cmp     [esp+40h+arg_1C], 0
0x96C979: fld     dword ptr [ecx]
0x96C97B: fstp    [esp+40h+arg_10]
0x96C97F: mov     eax, [esp+40h+arg_18]
0x96C983: fld     [esp+40h+arg_10]
0x96C987: fld     st
0x96C989: fmul    [esp+40h+var_24]
0x96C98D: fstp    [esp+40h+var_18]
0x96C991: fld     [esp+40h+var_20]
0x96C995: fmul    st, st(1)
0x96C997: fstp    [esp+40h+var_14]
0x96C99B: fmul    [esp+40h+var_1C]
0x96C99F: fstp    [esp+40h+var_10]
0x96C9A3: fld     [esp+40h+var_18]
0x96C9A7: fadd    [esp+40h+var_30]
0x96C9AB: fstp    [esp+40h+var_24]
0x96C9AF: fld     [esp+40h+var_14]
0x96C9B3: fadd    [esp+40h+var_2C]
0x96C9B7: fstp    [esp+40h+var_20]
0x96C9BB: fld     [esp+40h+var_10]
0x96C9BF: fadd    [esp+40h+var_28]
0x96C9C3: fstp    [esp+40h+var_1C]
0x96C9C7: fld     dword ptr [esi+10h]
0x96C9CA: fdiv    [esp+40h+arg_4]
0x96C9CE: fstp    [esp+40h+arg_10]
0x96C9D2: fld     [esp+40h+var_24]
0x96C9D6: fld     [esp+40h+arg_10]
0x96C9DA: fld     st
0x96C9DC: fmulp   st(2), st
0x96C9DE: fxch    st(1)
0x96C9E0: fstp    [esp+40h+var_C]
0x96C9E4: fld     [esp+40h+var_20]
0x96C9E8: fmul    st, st(1)
0x96C9EA: fstp    [esp+40h+var_8]
0x96C9EE: fmul    [esp+40h+var_1C]
0x96C9F2: fstp    [esp+40h+var_4]
0x96C9F6: fld     dword ptr [ecx]
0x96C9F8: fstp    [esp+40h+arg_10]
0x96C9FC: fld     [esp+40h+arg_10]
0x96CA00: fld     st
0x96CA02: fmul    dword ptr [ebx]
0x96CA04: fstp    [esp+40h+var_18]
0x96CA08: fld     st
0x96CA0A: fmul    dword ptr [ebx+4]
0x96CA0D: fstp    [esp+40h+var_14]
0x96CA11: fmul    dword ptr [ebx+8]
0x96CA14: fstp    [esp+40h+var_10]
0x96CA18: fld     dword ptr [esi+4]
0x96CA1B: fadd    [esp+40h+var_18]
0x96CA1F: fstp    [esp+40h+var_30]
0x96CA23: fld     dword ptr [esi+8]
0x96CA26: fadd    [esp+40h+var_14]
0x96CA2A: fstp    [esp+40h+var_2C]
0x96CA2E: fld     dword ptr [esi+0Ch]
0x96CA31: fadd    [esp+40h+var_10]
0x96CA35: fstp    [esp+40h+var_28]
0x96CA39: fld     [esp+40h+var_30]
0x96CA3D: fadd    [esp+40h+var_C]
0x96CA41: fstp    [esp+40h+var_18]
0x96CA45: mov     ecx, [esp+40h+var_18]
0x96CA49: fld     [esp+40h+var_2C]
0x96CA4D: mov     [eax], ecx
0x96CA4F: fadd    [esp+40h+var_8]
0x96CA53: fstp    [esp+40h+var_14]
0x96CA57: mov     edx, [esp+40h+var_14]
0x96CA5B: fld     [esp+40h+var_28]
0x96CA5F: mov     [eax+4], edx
0x96CA62: fadd    [esp+40h+var_4]
0x96CA66: fstp    [esp+40h+var_10]
0x96CA6A: mov     ecx, [esp+40h+var_10]
0x96CA6E: mov     [eax+8], ecx
0x96CA71: jz      short loc_96CAC6
0x96CA73: mov     esi, [esp+40h+arg_20]
0x96CA77: mov     edx, [esp+40h+var_24]
0x96CA7B: mov     eax, [esp+40h+var_20]
0x96CA7F: mov     ecx, [esp+40h+var_1C]
0x96CA83: mov     [esi], edx
0x96CA85: mov     [esi+4], eax
0x96CA88: mov     [esi+8], ecx
0x96CA8B: mov     ecx, esi
0x96CA8D: call    sub_43F350
0x96CA92: fstp    st
0x96CA94: fld     dword ptr [esi]
0x96CA96: mov     eax, [esp+40h+arg_24]
0x96CA9A: fchs
0x96CA9C: fstp    [esp+40h+var_C]
0x96CAA0: mov     edx, [esp+40h+var_C]
0x96CAA4: fld     dword ptr [esi+4]
0x96CAA7: fchs
0x96CAA9: fstp    [esp+40h+var_8]
0x96CAAD: mov     ecx, [esp+40h+var_8]
0x96CAB1: fld     dword ptr [esi+8]
0x96CAB4: mov     [eax], edx
0x96CAB6: fchs
0x96CAB8: mov     [eax+4], ecx
0x96CABB: fstp    [esp+40h+var_4]
0x96CABF: mov     edx, [esp+40h+var_4]
0x96CAC3: mov     [eax+8], edx
0x96CAC6: pop     edi
0x96CAC7: pop     esi
0x96CAC8: mov     al, 1
0x96CACA: pop     ebx
0x96CACB: add     esp, 34h
0x96CACE: retn
0x96CACF: fstp    st(3)
0x96CAD1: pop     edi
0x96CAD2: fstp    st(2)
0x96CAD4: pop     esi
0x96CAD5: fstp    st(1)
0x96CAD7: xor     al, al
0x96CAD9: fstp    st
0x96CADB: pop     ebx
0x96CADC: add     esp, 34h
0x96CADF: retn
0x96CAE0: fstp    st
0x96CAE2: fstp    st(4)
0x96CAE4: fstp    st(1)
0x96CAE6: fstp    st(1)
0x96CAE8: fstp    st
0x96CAEA: fld     [esp+40h+arg_C]
0x96CAEE: fld     [esp+40h+var_34]
0x96CAF2: fcompp
0x96CAF4: fnstsw  ax
0x96CAF6: test    ah, 1
0x96CAF9: jnz     loc_96C7D8
0x96CAFF: mov     eax, [esp+40h+arg_14]
0x96CB03: fstp    dword ptr [eax]
0x96CB05: fld     dword ptr [ecx+4]
0x96CB08: fld     dword ptr [ecx]
0x96CB0A: fld     dword ptr [ecx+8]
0x96CB0D: fld     dword ptr [ebx+4]
0x96CB10: fld     dword ptr [ebx]
0x96CB12: fld     dword ptr [ebx+8]
0x96CB15: fld     st(5)
0x96CB17: fmulp   st(6), st
0x96CB19: fld     st(4)
0x96CB1B: fmulp   st(5), st
0x96CB1D: fxch    st(5)
0x96CB1F: faddp   st(4), st
0x96CB21: fld     st(2)
0x96CB23: fmulp   st(3), st
0x96CB25: fxch    st(3)
0x96CB27: faddp   st(2), st
0x96CB29: fxch    st(1)
0x96CB2B: fstp    [esp+40h+arg_10]
0x96CB2F: fld     [esp+40h+arg_10]
0x96CB33: fld     st(1)
0x96CB35: fmulp   st(2), st
0x96CB37: fld     st(2)
0x96CB39: fmulp   st(3), st
0x96CB3B: fxch    st(1)
0x96CB3D: faddp   st(2), st
0x96CB3F: fld     st(2)
0x96CB41: fmulp   st(3), st
0x96CB43: fxch    st(1)
0x96CB45: faddp   st(2), st
0x96CB47: fxch    st(1)
0x96CB49: fstp    [esp+40h+arg_10]
0x96CB4D: fld     [esp+40h+arg_10]
0x96CB51: fcompp
0x96CB53: fnstsw  ax
0x96CB55: test    ah, 5
0x96CB58: jp      loc_96CC1A
0x96CB5E: fld     dword ptr [edi+4]
0x96CB61: fsub    dword ptr [esi+4]
0x96CB64: fstp    [esp+40h+var_C]
0x96CB68: mov     ecx, [esp+40h+var_C]
0x96CB6C: fld     dword ptr [edi+8]
0x96CB6F: fsub    dword ptr [esi+8]
0x96CB72: fstp    [esp+40h+var_8]
0x96CB76: mov     edx, [esp+40h+var_8]
0x96CB7A: fld     dword ptr [edi+0Ch]
0x96CB7D: mov     edi, [esp+40h+arg_20]
0x96CB81: fsub    dword ptr [esi+0Ch]
0x96CB84: mov     [edi], ecx
0x96CB86: mov     [edi+4], edx
0x96CB89: mov     ecx, edi
0x96CB8B: fstp    [esp+40h+var_4]
0x96CB8F: mov     eax, [esp+40h+var_4]
0x96CB93: mov     [edi+8], eax
0x96CB96: call    sub_43F350
0x96CB9B: fstp    st
0x96CB9D: fld     dword ptr [esi+10h]
0x96CBA0: mov     eax, [esp+40h+arg_18]
0x96CBA4: fstp    [esp+40h+arg_10]
0x96CBA8: fld     dword ptr [edi]
0x96CBAA: fld     [esp+40h+arg_10]
0x96CBAE: fld     st
0x96CBB0: fmulp   st(2), st
0x96CBB2: fxch    st(1)
0x96CBB4: fstp    [esp+40h+var_C]
0x96CBB8: fld     dword ptr [edi+4]
0x96CBBB: fmul    st, st(1)
0x96CBBD: fstp    [esp+40h+var_8]
0x96CBC1: fmul    dword ptr [edi+8]
0x96CBC4: fstp    [esp+40h+var_4]
0x96CBC8: fld     dword ptr [esi+4]
0x96CBCB: fadd    [esp+40h+var_C]
0x96CBCF: fstp    [esp+40h+var_18]
0x96CBD3: mov     ecx, [esp+40h+var_18]
0x96CBD7: fld     dword ptr [esi+8]
0x96CBDA: fadd    [esp+40h+var_8]
0x96CBDE: fstp    [esp+40h+var_14]
0x96CBE2: mov     edx, [esp+40h+var_14]
0x96CBE6: fld     dword ptr [esi+0Ch]
0x96CBE9: mov     [eax], ecx
0x96CBEB: fadd    [esp+40h+var_4]
0x96CBEF: mov     [eax+4], edx
0x96CBF2: fstp    [esp+40h+var_10]
0x96CBF6: mov     ecx, [esp+40h+var_10]
0x96CBFA: mov     [eax+8], ecx
0x96CBFD: fld     dword ptr [edi]
0x96CBFF: mov     eax, [esp+40h+arg_24]
0x96CC03: fchs
0x96CC05: fstp    [esp+40h+var_C]
0x96CC09: fld     dword ptr [edi+4]
0x96CC0C: fchs
0x96CC0E: fstp    [esp+40h+var_8]
0x96CC12: fld     dword ptr [edi+8]
0x96CC15: jmp     loc_96CCCD
0x96CC1A: fld     dword ptr [esi+4]
0x96CC1D: fsub    dword ptr [edi+4]
0x96CC20: fstp    [esp+40h+var_C]
0x96CC24: mov     eax, [esp+40h+var_C]
0x96CC28: fld     dword ptr [esi+8]
0x96CC2B: fsub    dword ptr [edi+8]
0x96CC2E: fstp    [esp+40h+var_8]
0x96CC32: mov     ecx, [esp+40h+var_8]
0x96CC36: fld     dword ptr [esi+0Ch]
0x96CC39: mov     esi, [esp+40h+arg_24]
0x96CC3D: fsub    dword ptr [edi+0Ch]
0x96CC40: mov     [esi], eax
0x96CC42: mov     [esi+4], ecx
0x96CC45: mov     ecx, esi
0x96CC47: fstp    [esp+40h+var_4]
0x96CC4B: mov     edx, [esp+40h+var_4]
0x96CC4F: mov     [esi+8], edx
0x96CC52: call    sub_43F350
0x96CC57: fstp    st
0x96CC59: fld     dword ptr [edi+10h]
0x96CC5C: mov     eax, [esp+40h+arg_18]
0x96CC60: fstp    [esp+40h+arg_10]
0x96CC64: fld     [esp+40h+arg_10]
0x96CC68: fld     st
0x96CC6A: fmul    dword ptr [esi]
0x96CC6C: fstp    [esp+40h+var_C]
0x96CC70: fld     dword ptr [esi+4]
0x96CC73: fmul    st, st(1)
0x96CC75: fstp    [esp+40h+var_8]
0x96CC79: fmul    dword ptr [esi+8]
0x96CC7C: fstp    [esp+40h+var_4]
0x96CC80: fld     [esp+40h+var_C]
0x96CC84: fadd    dword ptr [edi+4]
0x96CC87: fstp    [esp+40h+var_18]
0x96CC8B: mov     ecx, [esp+40h+var_18]
0x96CC8F: fld     dword ptr [edi+8]
0x96CC92: fadd    [esp+40h+var_8]
0x96CC96: fstp    [esp+40h+var_14]
0x96CC9A: mov     edx, [esp+40h+var_14]
0x96CC9E: fld     dword ptr [edi+0Ch]
0x96CCA1: mov     [eax], ecx
0x96CCA3: fadd    [esp+40h+var_4]
0x96CCA7: mov     [eax+4], edx
0x96CCAA: fstp    [esp+40h+var_10]
0x96CCAE: mov     ecx, [esp+40h+var_10]
0x96CCB2: mov     [eax+8], ecx
0x96CCB5: fld     dword ptr [esi]
0x96CCB7: mov     eax, [esp+40h+arg_20]
0x96CCBB: fchs
0x96CCBD: fstp    [esp+40h+var_C]
0x96CCC1: fld     dword ptr [esi+4]
0x96CCC4: fchs
0x96CCC6: fstp    [esp+40h+var_8]
0x96CCCA: fld     dword ptr [esi+8]
0x96CCCD: mov     edx, [esp+40h+var_C]
0x96CCD1: fchs
0x96CCD3: mov     ecx, [esp+40h+var_8]
0x96CCD7: fstp    [esp+40h+var_4]
0x96CCDB: mov     [eax], edx
0x96CCDD: mov     edx, [esp+40h+var_4]
0x96CCE1: pop     edi
0x96CCE2: mov     [eax+4], ecx
0x96CCE5: pop     esi
0x96CCE6: mov     [eax+8], edx
0x96CCE9: mov     al, 1
0x96CCEB: pop     ebx
0x96CCEC: add     esp, 34h
0x96CCEF: retn

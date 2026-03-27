0x755790: sub     esp, 44h
0x755793: movzx   eax, word ptr [esp+44h+arg_C]
0x755798: push    ebx
0x755799: push    ebp
0x75579A: mov     ebp, [esp+4Ch+arg_8]
0x75579E: mov     edx, [ebp+1Ch]
0x7557A1: push    esi
0x7557A2: mov     esi, ecx
0x7557A4: lea     ecx, [eax+eax*2]
0x7557A7: push    edi
0x7557A8: fld     dword ptr [esi+5Ch]
0x7557AB: lea     edi, [edx+ecx*4]
0x7557AE: mov     edx, [ebp+5Ch]
0x7557B1: lea     ecx, ds:0[eax*8]
0x7557B8: fmul    dword ptr [edi+4]
0x7557BB: sub     ecx, eax
0x7557BD: fld     dword ptr [edi]
0x7557BF: xor     bl, bl
0x7557C1: fmul    dword ptr [esi+58h]
0x7557C4: lea     ecx, [edx+ecx*4]
0x7557C7: faddp   st(1), st
0x7557C9: fld     dword ptr [esi+60h]
0x7557CC: fmul    dword ptr [edi+8]
0x7557CF: faddp   st(1), st
0x7557D1: fstp    [esp+54h+arg_8]
0x7557D5: fld     [esp+54h+arg_8]
0x7557D9: fsub    dword ptr [esi+64h]
0x7557DC: fstp    [esp+54h+var_44]
0x7557E0: fld     dword ptr ds:0A86938h
0x7557E6: fld     [esp+54h+var_44]
0x7557EA: fcom    st(1)
0x7557EC: fnstsw  ax
0x7557EE: test    ah, 5
0x7557F1: jp      loc_755981
0x7557F7: fld     st
0x7557F9: fchs
0x7557FB: fcomp   st(2)
0x7557FD: fnstsw  ax
0x7557FF: test    ah, 5
0x755802: jp      loc_755981
0x755808: fstp    st(1)
0x75580A: lea     eax, [esi+38h]
0x75580D: fstp    st
0x75580F: push    eax
0x755810: fld     dword ptr [edi]
0x755812: lea     edx, [esp+58h+var_24]
0x755816: fsub    dword ptr [esi+68h]
0x755819: lea     ecx, [esi+74h]
0x75581C: push    edx
0x75581D: fstp    [esp+5Ch+var_3C]
0x755821: fld     dword ptr [edi+4]
0x755824: fsub    dword ptr [esi+6Ch]
0x755827: fstp    [esp+5Ch+var_38]
0x75582B: fld     dword ptr [edi+8]
0x75582E: fsub    dword ptr [esi+70h]
0x755831: fstp    [esp+5Ch+var_34]
0x755835: call    sub_7101F0
0x75583A: lea     eax, [esi+44h]
0x75583D: push    eax
0x75583E: lea     ecx, [esp+58h+var_18]
0x755842: push    ecx
0x755843: lea     ecx, [esi+74h]
0x755846: call    sub_7101F0
0x75584B: fld     [esp+54h+var_20]
0x75584F: fld     st
0x755851: fld     [esp+54h+var_38]
0x755855: fld     st
0x755857: fmulp   st(2), st
0x755859: fld     [esp+54h+var_3C]
0x75585D: fld     st
0x75585F: fld     [esp+54h+var_24]
0x755863: fld     st
0x755865: fmulp   st(2), st
0x755867: fxch    st(4)
0x755869: faddp   st(1), st
0x75586B: fld     [esp+54h+var_1C]
0x75586F: fld     st
0x755871: fmul    [esp+54h+var_34]
0x755875: faddp   st(2), st
0x755877: fxch    st(1)
0x755879: fstp    [esp+54h+arg_8]
0x75587D: fld     [esp+54h+arg_8]
0x755881: fstp    [esp+54h+arg_8]
0x755885: fld     [esp+54h+arg_8]
0x755889: fld     st
0x75588B: fmulp   st(5), st
0x75588D: fxch    st(4)
0x75588F: fstp    [esp+54h+var_30]
0x755893: fld     st(3)
0x755895: fmulp   st(5), st
0x755897: fxch    st(4)
0x755899: fstp    [esp+54h+var_2C]
0x75589D: fxch    st(3)
0x75589F: fmulp   st(2), st
0x7558A1: fxch    st(1)
0x7558A3: fstp    [esp+54h+var_28]
0x7558A7: fld     [esp+54h+var_14]
0x7558AB: fld     st
0x7558AD: fmulp   st(2), st
0x7558AF: fld     [esp+54h+var_18]
0x7558B3: fld     st
0x7558B5: fmulp   st(4), st
0x7558B7: fxch    st(2)
0x7558B9: faddp   st(3), st
0x7558BB: fld     [esp+54h+var_10]
0x7558BF: fld     st
0x7558C1: fmul    [esp+54h+var_34]
0x7558C5: faddp   st(4), st
0x7558C7: fxch    st(3)
0x7558C9: fstp    [esp+54h+arg_8]
0x7558CD: fld     [esp+54h+arg_8]
0x7558D1: fstp    [esp+54h+arg_8]
0x7558D5: fld     [esp+54h+arg_8]
0x7558D9: fld     st
0x7558DB: fmulp   st(3), st
0x7558DD: fxch    st(2)
0x7558DF: fstp    [esp+54h+var_3C]
0x7558E3: fmul    st, st(1)
0x7558E5: fstp    [esp+54h+var_38]
0x7558E9: fmulp   st(1), st
0x7558EB: fstp    [esp+54h+var_34]
0x7558EF: fld     [esp+54h+var_30]
0x7558F3: fld     [esp+54h+var_2C]
0x7558F7: fld     [esp+54h+var_28]
0x7558FB: fld     st(1)
0x7558FD: fmulp   st(2), st
0x7558FF: fld     st(2)
0x755901: fmulp   st(3), st
0x755903: fxch    st(1)
0x755905: faddp   st(2), st
0x755907: fmul    st, st
0x755909: faddp   st(1), st
0x75590B: fstp    [esp+54h+arg_8]
0x75590F: fld     [esp+54h+arg_8]
0x755913: fld     dword ptr [esi+50h]
0x755916: fcompp
0x755918: fnstsw  ax
0x75591A: test    ah, 41h
0x75591D: jnz     loc_755D5B
0x755923: fld     [esp+54h+var_3C]
0x755927: fld     [esp+54h+var_38]
0x75592B: fld     [esp+54h+var_34]
0x75592F: fld     st(1)
0x755931: fmulp   st(2), st
0x755933: fld     st(2)
0x755935: fmulp   st(3), st
0x755937: fxch    st(1)
0x755939: faddp   st(2), st
0x75593B: fmul    st, st
0x75593D: faddp   st(1), st
0x75593F: fstp    [esp+54h+arg_8]
0x755943: fld     [esp+54h+arg_8]
0x755947: fld     dword ptr [esi+54h]
0x75594A: fcompp
0x75594C: fnstsw  ax
0x75594E: test    ah, 41h
0x755951: jnz     loc_755D5B
0x755957: fld     [esp+54h+arg_0]
0x75595B: mov     edx, [esp+54h+arg_4]
0x75595F: fst     dword ptr [edx]
0x755961: fstp    dword ptr [esi+20h]
0x755964: mov     eax, [edi]
0x755966: mov     [esi+14h], eax
0x755969: mov     ecx, [edi+4]
0x75596C: mov     [esi+18h], ecx
0x75596F: mov     edx, [edi+8]
0x755972: pop     edi
0x755973: mov     [esi+1Ch], edx
0x755976: mov     eax, esi
0x755978: pop     esi
0x755979: pop     ebp
0x75597A: pop     ebx
0x75597B: add     esp, 44h
0x75597E: retn    10h
0x755981: mov     eax, [esp+54h+arg_4]
0x755985: fld     dword ptr [eax]
0x755987: fsub    [esp+54h+arg_0]
0x75598B: fstp    [esp+54h+arg_8]
0x75598F: fld     [esp+54h+arg_8]
0x755993: fld     st
0x755995: fmul    dword ptr [ecx]
0x755997: fstp    [esp+54h+var_30]
0x75599B: fld     st
0x75599D: fmul    dword ptr [ecx+4]
0x7559A0: fstp    [esp+54h+var_2C]
0x7559A4: fld     dword ptr [ecx+8]
0x7559A7: fmul    st, st(1)
0x7559A9: fstp    [esp+54h+var_28]
0x7559AD: fld     dword ptr [esi+5Ch]
0x7559B0: fmul    [esp+54h+var_2C]
0x7559B4: fld     dword ptr [esi+58h]
0x7559B7: fmul    [esp+54h+var_30]
0x7559BB: faddp   st(1), st
0x7559BD: fld     dword ptr [esi+60h]
0x7559C0: fmul    [esp+54h+var_28]
0x7559C4: faddp   st(1), st
0x7559C6: fstp    [esp+54h+arg_8]
0x7559CA: fld     [esp+54h+arg_8]
0x7559CE: fld     st
0x7559D0: fadd    st, st(3)
0x7559D2: fstp    [esp+54h+arg_8]
0x7559D6: fld     [esp+54h+arg_8]
0x7559DA: fabs
0x7559DC: fstp    [esp+54h+var_40]
0x7559E0: fld     [esp+54h+var_40]
0x7559E4: fcomp   st(4)
0x7559E6: fnstsw  ax
0x7559E8: fstp    st(3)
0x7559EA: test    ah, 5
0x7559ED: jp      short loc_7559F5
0x7559EF: fldz
0x7559F1: fstp    [esp+54h+arg_8]
0x7559F5: fld     [esp+54h+arg_8]
0x7559F9: fmul    st, st(2)
0x7559FB: fcomp   qword ptr ds:0A2FC68h
0x755A01: fnstsw  ax
0x755A03: test    ah, 5
0x755A06: jp      loc_755D55
0x755A0C: test    byte ptr ds:0B41020h, 1
0x755A13: fld     st(1)
0x755A15: fchs
0x755A17: fmulp   st(1), st
0x755A19: fdivrp  st(2), st
0x755A1B: fxch    st(1)
0x755A1D: fstp    [esp+54h+var_40]
0x755A21: fld     [esp+54h+var_40]
0x755A25: fld     st
0x755A27: fmul    dword ptr [ecx]
0x755A29: fstp    [esp+54h+var_30]
0x755A2D: fld     st
0x755A2F: fmul    dword ptr [ecx+4]
0x755A32: fstp    [esp+54h+var_2C]
0x755A36: fmul    dword ptr [ecx+8]
0x755A39: fstp    [esp+54h+var_28]
0x755A3D: fld     dword ptr [edi]
0x755A3F: fadd    [esp+54h+var_30]
0x755A43: fstp    [esp+54h+var_3C]
0x755A47: fld     [esp+54h+var_2C]
0x755A4B: fadd    dword ptr [edi+4]
0x755A4E: fstp    [esp+54h+var_38]
0x755A52: fld     [esp+54h+var_28]
0x755A56: fadd    dword ptr [edi+8]
0x755A59: fstp    [esp+54h+var_34]
0x755A5D: jnz     short loc_755A8B
0x755A5F: or      dword ptr ds:0B41020h, 1
0x755A66: fstp    st
0x755A68: fld     qword ptr ds:0A3D0C0h
0x755A6E: fld     qword ptr ds:0A86940h
0x755A74: call    __CIpow
0x755A79: fstp    [esp+54h+arg_8]
0x755A7D: fld     [esp+54h+arg_8]
0x755A81: fstp    dword ptr ds:0B4101Ch
0x755A87: fld     [esp+54h+var_44]
0x755A8B: fld     dword ptr [esi+5Ch]
0x755A8E: fld     [esp+54h+var_38]
0x755A92: fld     st
0x755A94: fmulp   st(2), st
0x755A96: fld     dword ptr [esi+58h]
0x755A99: fld     [esp+54h+var_3C]
0x755A9D: fld     st
0x755A9F: fmulp   st(2), st
0x755AA1: fxch    st(3)
0x755AA3: faddp   st(1), st
0x755AA5: fld     dword ptr [esi+60h]
0x755AA8: fld     [esp+54h+var_34]
0x755AAC: fld     st
0x755AAE: fmulp   st(2), st
0x755AB0: fxch    st(2)
0x755AB2: faddp   st(1), st
0x755AB4: fstp    [esp+54h+arg_8]
0x755AB8: fld     [esp+54h+arg_8]
0x755ABC: fsub    dword ptr [esi+64h]
0x755ABF: fstp    [esp+54h+arg_8]
0x755AC3: fld     [esp+54h+arg_8]
0x755AC7: fmul    st, st(4)
0x755AC9: fcomp   qword ptr ds:0A2FC68h
0x755ACF: fnstsw  ax
0x755AD1: test    ah, 5
0x755AD4: jp      loc_755D4E
0x755ADA: fld     st(2)
0x755ADC: fabs
0x755ADE: fstp    [esp+54h+arg_8]
0x755AE2: fld     [esp+54h+arg_8]
0x755AE6: fstp    [esp+54h+arg_8]
0x755AEA: fld     st(1)
0x755AEC: fabs
0x755AEE: fstp    [esp+54h+var_44]
0x755AF2: fld     [esp+54h+var_44]
0x755AF6: fld     [esp+54h+arg_8]
0x755AFA: fcom    st(1)
0x755AFC: fnstsw  ax
0x755AFE: test    ah, 5
0x755B01: jp      short loc_755B0F
0x755B03: fstp    st
0x755B05: fstp    [esp+54h+arg_8]
0x755B09: fld     [esp+54h+arg_8]
0x755B0D: jmp     short loc_755B11
0x755B0F: fstp    st(1)
0x755B11: fld     st(1)
0x755B13: fabs
0x755B15: fstp    [esp+54h+arg_8]
0x755B19: fld     [esp+54h+arg_8]
0x755B1D: fcom    st(1)
0x755B1F: fnstsw  ax
0x755B21: test    ah, 41h
0x755B24: jnz     short loc_755B32
0x755B26: fstp    st(1)
0x755B28: fstp    [esp+54h+arg_8]
0x755B2C: fld     [esp+54h+arg_8]
0x755B30: jmp     short loc_755B34
0x755B32: fstp    st
0x755B34: fldz
0x755B36: fcomp   st(5)
0x755B38: fnstsw  ax
0x755B3A: fstp    st(4)
0x755B3C: test    ah, 41h
0x755B3F: fld     dword ptr ds:0B4101Ch
0x755B45: fmulp   st(4), st
0x755B47: fxch    st(3)
0x755B49: fstp    [esp+54h+arg_8]
0x755B4D: jnz     loc_755D10
0x755B53: fld     [esp+54h+arg_8]
0x755B57: fld     st
0x755B59: fmul    dword ptr [esi+58h]
0x755B5C: fstp    [esp+54h+var_30]
0x755B60: fld     dword ptr [esi+5Ch]
0x755B63: fmul    st, st(1)
0x755B65: fstp    [esp+54h+var_2C]
0x755B69: fmul    dword ptr [esi+60h]
0x755B6C: fstp    [esp+54h+var_28]
0x755B70: fld     [esp+54h+var_30]
0x755B74: fsubp   st(2), st
0x755B76: fxch    st(1)
0x755B78: fstp    [esp+54h+var_3C]
0x755B7C: fsub    [esp+54h+var_2C]
0x755B80: fstp    [esp+54h+var_38]
0x755B84: fsub    [esp+54h+var_28]
0x755B88: fstp    [esp+54h+var_34]
0x755B8C: fld     [esp+54h+var_34]
0x755B90: fld     [esp+54h+var_38]
0x755B94: fld     [esp+54h+var_3C]
0x755B98: fxch    st(1)
0x755B9A: fld     dword ptr [esi+68h]
0x755B9D: lea     ecx, [esi+38h]
0x755BA0: fsubp   st(2), st
0x755BA2: push    ecx
0x755BA3: fxch    st(1)
0x755BA5: lea     edx, [esp+58h+var_18]
0x755BA9: lea     edi, [esi+74h]
0x755BAC: fstp    [esp+58h+var_30]
0x755BB0: push    edx
0x755BB1: mov     ecx, edi
0x755BB3: fsub    dword ptr [esi+6Ch]
0x755BB6: fstp    [esp+5Ch+var_2C]
0x755BBA: fsub    dword ptr [esi+70h]
0x755BBD: fstp    [esp+5Ch+var_28]
0x755BC1: call    sub_7101F0
0x755BC6: lea     eax, [esi+44h]
0x755BC9: push    eax
0x755BCA: lea     ecx, [esp+58h+var_C]
0x755BCE: push    ecx
0x755BCF: mov     ecx, edi
0x755BD1: call    sub_7101F0
0x755BD6: fld     [esp+54h+var_30]
0x755BDA: fld     st
0x755BDC: fld     [esp+54h+var_18]
0x755BE0: fld     st
0x755BE2: fmulp   st(2), st
0x755BE4: fld     [esp+54h+var_14]
0x755BE8: fld     st
0x755BEA: fld     [esp+54h+var_2C]
0x755BEE: fld     st
0x755BF0: fmulp   st(2), st
0x755BF2: fxch    st(4)
0x755BF4: faddp   st(1), st
0x755BF6: fld     [esp+54h+var_10]
0x755BFA: fld     st
0x755BFC: fmul    [esp+54h+var_28]
0x755C00: faddp   st(2), st
0x755C02: fxch    st(1)
0x755C04: fstp    [esp+54h+arg_8]
0x755C08: fld     [esp+54h+arg_8]
0x755C0C: fstp    [esp+54h+arg_8]
0x755C10: fld     [esp+54h+arg_8]
0x755C14: fld     st
0x755C16: fmulp   st(4), st
0x755C18: fxch    st(3)
0x755C1A: fstp    [esp+54h+var_24]
0x755C1E: fld     st(2)
0x755C20: fmulp   st(2), st
0x755C22: fxch    st(1)
0x755C24: fstp    [esp+54h+var_20]
0x755C28: fmulp   st(1), st
0x755C2A: fstp    [esp+54h+var_1C]
0x755C2E: fld     [esp+54h+var_C]
0x755C32: fld     st
0x755C34: fmulp   st(3), st
0x755C36: fld     [esp+54h+var_8]
0x755C3A: fld     st
0x755C3C: fmulp   st(3), st
0x755C3E: fxch    st(3)
0x755C40: faddp   st(2), st
0x755C42: fld     [esp+54h+var_4]
0x755C46: fld     st
0x755C48: fmul    [esp+54h+var_28]
0x755C4C: faddp   st(3), st
0x755C4E: fxch    st(2)
0x755C50: fstp    [esp+54h+arg_8]
0x755C54: fld     [esp+54h+arg_8]
0x755C58: fstp    [esp+54h+arg_8]
0x755C5C: fld     [esp+54h+arg_8]
0x755C60: fld     st
0x755C62: fmulp   st(2), st
0x755C64: fxch    st(1)
0x755C66: fstp    [esp+54h+var_30]
0x755C6A: fld     st
0x755C6C: fmulp   st(3), st
0x755C6E: fxch    st(2)
0x755C70: fstp    [esp+54h+var_2C]
0x755C74: fmulp   st(1), st
0x755C76: fstp    [esp+54h+var_28]
0x755C7A: fld     [esp+54h+var_20]
0x755C7E: fld     [esp+54h+var_24]
0x755C82: fld     [esp+54h+var_1C]
0x755C86: fld     st(1)
0x755C88: fmulp   st(2), st
0x755C8A: fld     st(2)
0x755C8C: fmulp   st(3), st
0x755C8E: fxch    st(1)
0x755C90: faddp   st(2), st
0x755C92: fmul    st, st
0x755C94: faddp   st(1), st
0x755C96: fstp    [esp+54h+arg_8]
0x755C9A: fld     [esp+54h+arg_8]
0x755C9E: fld     dword ptr [esi+50h]
0x755CA1: fcompp
0x755CA3: fnstsw  ax
0x755CA5: test    ah, 41h
0x755CA8: jnz     loc_755D5B
0x755CAE: fld     [esp+54h+var_2C]
0x755CB2: fld     [esp+54h+var_30]
0x755CB6: fld     [esp+54h+var_28]
0x755CBA: fld     st(1)
0x755CBC: fmulp   st(2), st
0x755CBE: fld     st(2)
0x755CC0: fmulp   st(3), st
0x755CC2: fxch    st(1)
0x755CC4: faddp   st(2), st
0x755CC6: fmul    st, st
0x755CC8: faddp   st(1), st
0x755CCA: fstp    [esp+54h+arg_8]
0x755CCE: fld     [esp+54h+arg_8]
0x755CD2: fld     dword ptr [esi+54h]
0x755CD5: fcompp
0x755CD7: fnstsw  ax
0x755CD9: test    ah, 41h
0x755CDC: jnz     short loc_755D5B
0x755CDE: fld     [esp+54h+var_40]
0x755CE2: mov     edx, [esp+54h+arg_4]
0x755CE6: fadd    [esp+54h+arg_0]
0x755CEA: mov     eax, [esp+54h+var_3C]
0x755CEE: mov     ecx, [esp+54h+var_38]
0x755CF2: mov     bl, 1
0x755CF4: fstp    [esp+54h+arg_8]
0x755CF8: fld     [esp+54h+arg_8]
0x755CFC: fst     dword ptr [edx]
0x755CFE: mov     edx, [esp+54h+var_34]
0x755D02: mov     [esi+14h], eax
0x755D05: fstp    dword ptr [esi+20h]
0x755D08: mov     [esi+18h], ecx
0x755D0B: mov     [esi+1Ch], edx
0x755D0E: jmp     short loc_755D5B
0x755D10: fld     dword ptr [esi+58h]
0x755D13: fld     [esp+54h+arg_8]
0x755D17: fld     st
0x755D19: fmulp   st(2), st
0x755D1B: fxch    st(1)
0x755D1D: fstp    [esp+54h+var_30]
0x755D21: fld     dword ptr [esi+5Ch]
0x755D24: fmul    st, st(1)
0x755D26: fstp    [esp+54h+var_2C]
0x755D2A: fmul    dword ptr [esi+60h]
0x755D2D: fstp    [esp+54h+var_28]
0x755D31: fld     [esp+54h+var_30]
0x755D35: faddp   st(2), st
0x755D37: fxch    st(1)
0x755D39: fstp    [esp+54h+var_3C]
0x755D3D: fadd    [esp+54h+var_2C]
0x755D41: fstp    [esp+54h+var_38]
0x755D45: fadd    [esp+54h+var_28]
0x755D49: jmp     loc_755B88
0x755D4E: fstp    st(3)
0x755D50: jmp     loc_755B9A
0x755D55: fstp    st
0x755D57: fstp    st(1)
0x755D59: fstp    st
0x755D5B: mov     eax, [esp+54h+arg_C]
0x755D5F: fld     [esp+54h+arg_0]
0x755D63: mov     ecx, [esp+54h+arg_4]
0x755D67: push    eax; int
0x755D68: push    ebp; int
0x755D69: push    ecx; int
0x755D6A: push    ecx
0x755D6B: mov     ecx, esi
0x755D6D: fstp    [esp+64h+var_64]; float
0x755D70: call    sub_75ED20
0x755D75: test    eax, eax
0x755D77: jnz     short loc_755D81
0x755D79: neg     bl
0x755D7B: sbb     ebx, ebx
0x755D7D: and     ebx, esi
0x755D7F: mov     eax, ebx
0x755D81: pop     edi
0x755D82: pop     esi
0x755D83: pop     ebp
0x755D84: pop     ebx
0x755D85: add     esp, 44h
0x755D88: retn    10h

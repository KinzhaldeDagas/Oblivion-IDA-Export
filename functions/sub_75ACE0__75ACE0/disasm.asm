0x75ACE0: sub     esp, 48h
0x75ACE3: push    ebx
0x75ACE4: mov     ebx, [esp+4Ch+arg_4]
0x75ACE8: push    esi
0x75ACE9: push    edi
0x75ACEA: movzx   edi, word ptr [ebx+48h]
0x75ACEE: test    di, di
0x75ACF1: mov     esi, ecx
0x75ACF3: ja      short loc_75AD23
0x75ACF5: mov     eax, ds:0B3F9A8h
0x75ACFA: fldz
0x75ACFC: mov     [ebx+0Ch], eax
0x75ACFF: mov     ecx, ds:0B3F9ACh
0x75AD05: mov     [ebx+10h], ecx
0x75AD08: mov     edx, ds:0B3F9B0h
0x75AD0E: fstp    dword ptr [ebx+18h]
0x75AD11: mov     [ebx+14h], edx
0x75AD14: pop     edi
0x75AD15: mov     word ptr [esi+1Ah], 0
0x75AD1B: pop     esi
0x75AD1C: pop     ebx
0x75AD1D: add     esp, 48h
0x75AD20: retn    8
0x75AD23: mov     eax, [ebx]
0x75AD25: mov     edx, [eax+4]
0x75AD28: mov     ecx, ebx
0x75AD2A: call    edx
0x75AD2C: test    eax, eax
0x75AD2E: jz      short loc_75AD42
0x75AD30: cmp     eax, offset dword_B41C4C
0x75AD35: jz      loc_75AE07
0x75AD3B: mov     eax, [eax+4]
0x75AD3E: test    eax, eax
0x75AD40: jnz     short loc_75AD30
0x75AD42: cmp     word ptr [esi+18h], 0FFFFh
0x75AD47: jnz     short loc_75AD68
0x75AD49: movzx   ecx, word ptr [ebx+8]
0x75AD4D: mov     eax, 51EB851Fh
0x75AD52: imul    ecx
0x75AD54: sar     edx, 4
0x75AD57: mov     eax, edx
0x75AD59: shr     eax, 1Fh
0x75AD5C: lea     ecx, [edx+eax+1]
0x75AD60: push    ecx
0x75AD61: mov     ecx, esi
0x75AD63: call    sub_75A870
0x75AD68: movzx   ecx, di
0x75AD6B: movsx   edi, word ptr [esi+18h]
0x75AD6F: mov     eax, 51EB851Fh
0x75AD74: imul    ecx
0x75AD76: sar     edx, 4
0x75AD79: mov     eax, edx
0x75AD7B: shr     eax, 1Fh
0x75AD7E: lea     edx, [edx+eax+1]
0x75AD82: cmp     edi, edx
0x75AD84: mov     [esp+54h+var_34], ecx
0x75AD88: jl      short loc_75AD8C
0x75AD8A: mov     edi, edx
0x75AD8C: cmp     edi, 1
0x75AD8F: jg      short loc_75AD96
0x75AD91: mov     edi, 1
0x75AD96: mov     eax, [ebx+1Ch]
0x75AD99: fld     dword ptr [eax]
0x75AD9B: mov     ecx, [ebx+4Ch]
0x75AD9E: fstp    [esp+54h+arg_0]
0x75ADA2: push    ebp
0x75ADA3: fld     dword ptr [eax+4]
0x75ADA6: mov     ebp, [ebx+44h]
0x75ADA9: fstp    [esp+58h+var_48]
0x75ADAD: fld     dword ptr [eax+8]
0x75ADB0: fstp    [esp+58h+var_44]
0x75ADB4: fld     [esp+58h+arg_0]
0x75ADB8: mov     [esp+58h+arg_0], ecx
0x75ADBC: movzx   ecx, word ptr [esi+1Ah]
0x75ADC0: fst     [esp+58h+var_40]
0x75ADC4: cmp     ecx, [esp+58h+var_34]
0x75ADC8: fld     [esp+58h+var_48]
0x75ADCC: fst     [esp+58h+var_3C]
0x75ADD0: mov     [esp+58h+var_2C], ecx
0x75ADD4: fld     [esp+58h+var_44]
0x75ADD8: fst     [esp+58h+var_38]
0x75ADDC: jge     loc_75AF35
0x75ADE2: lea     edx, [ebp+ecx*4+0]
0x75ADE6: mov     [esp+58h+var_44], edx
0x75ADEA: lea     ebx, [edi+edi*2]
0x75ADED: lea     edx, [ecx+ecx*2]
0x75ADF0: add     ebx, ebx
0x75ADF2: lea     edx, [eax+edx*4]
0x75ADF5: mov     eax, [esp+58h+arg_0]
0x75ADF9: add     ebx, ebx
0x75ADFB: sub     eax, ebp
0x75ADFD: mov     ebp, [esp+58h+var_44]
0x75AE01: mov     [esp+58h+var_30], eax
0x75AE05: jmp     short loc_75AE24
0x75AE07: fld     [esp+54h+arg_0]
0x75AE0B: push    ebx
0x75AE0C: push    ecx
0x75AE0D: mov     ecx, esi
0x75AE0F: fstp    [esp+5Ch+var_5C]
0x75AE12: call    sub_75AA90
0x75AE17: pop     edi
0x75AE18: pop     esi
0x75AE19: pop     ebx
0x75AE1A: add     esp, 48h
0x75AE1D: retn    8
0x75AE20: mov     eax, [esp+58h+var_30]
0x75AE24: fld     dword ptr [eax+ebp]
0x75AE27: fmul    dword ptr [ebp+0]
0x75AE2A: fstp    [esp+58h+arg_0]
0x75AE2E: fld     dword ptr [edx]
0x75AE30: fld     [esp+58h+arg_0]
0x75AE34: fld     st
0x75AE36: fsubp   st(2), st
0x75AE38: fxch    st(1)
0x75AE3A: fstp    [esp+58h+arg_0]
0x75AE3E: fld     [esp+58h+arg_0]
0x75AE42: fcom    st(4)
0x75AE44: fnstsw  ax
0x75AE46: test    ah, 41h
0x75AE49: jz      short loc_75AE7A
0x75AE4B: fstp    st(4)
0x75AE4D: fxch    st(3)
0x75AE4F: fstp    [esp+58h+arg_0]
0x75AE53: fld     [esp+58h+arg_0]
0x75AE57: fxch    st(3)
0x75AE59: fld     st
0x75AE5B: fadd    dword ptr [edx]
0x75AE5D: fstp    [esp+58h+arg_0]
0x75AE61: fld     [esp+58h+var_40]
0x75AE65: fld     [esp+58h+arg_0]
0x75AE69: fcom    st(1)
0x75AE6B: fnstsw  ax
0x75AE6D: fstp    st(1)
0x75AE6F: test    ah, 5
0x75AE72: jnp     short loc_75AE7E
0x75AE74: fstp    [esp+58h+var_40]
0x75AE78: jmp     short loc_75AE80
0x75AE7A: fstp    st
0x75AE7C: jmp     short loc_75AE59
0x75AE7E: fstp    st
0x75AE80: fld     dword ptr [edx+4]
0x75AE83: fsub    st, st(1)
0x75AE85: fstp    [esp+58h+arg_0]
0x75AE89: fld     [esp+58h+arg_0]
0x75AE8D: fcom    st(3)
0x75AE8F: fnstsw  ax
0x75AE91: test    ah, 41h
0x75AE94: jz      short loc_75AEC6
0x75AE96: fstp    st(3)
0x75AE98: fxch    st(2)
0x75AE9A: fstp    [esp+58h+var_48]
0x75AE9E: fld     [esp+58h+var_48]
0x75AEA2: fxch    st(2)
0x75AEA4: fld     dword ptr [edx+4]
0x75AEA7: fadd    st, st(1)
0x75AEA9: fstp    [esp+58h+arg_0]
0x75AEAD: fld     [esp+58h+var_3C]
0x75AEB1: fld     [esp+58h+arg_0]
0x75AEB5: fcom    st(1)
0x75AEB7: fnstsw  ax
0x75AEB9: fstp    st(1)
0x75AEBB: test    ah, 5
0x75AEBE: jnp     short loc_75AECA
0x75AEC0: fstp    [esp+58h+var_3C]
0x75AEC4: jmp     short loc_75AECC
0x75AEC6: fstp    st
0x75AEC8: jmp     short loc_75AEA4
0x75AECA: fstp    st
0x75AECC: fld     dword ptr [edx+8]
0x75AECF: fsub    st, st(1)
0x75AED1: fstp    [esp+58h+arg_0]
0x75AED5: fld     [esp+58h+arg_0]
0x75AED9: fcom    st(2)
0x75AEDB: fnstsw  ax
0x75AEDD: test    ah, 41h
0x75AEE0: jz      short loc_75AF10
0x75AEE2: fstp    st(2)
0x75AEE4: fxch    st(1)
0x75AEE6: fstp    [esp+58h+var_44]
0x75AEEA: fld     [esp+58h+var_44]
0x75AEEE: fxch    st(1)
0x75AEF0: fadd    dword ptr [edx+8]
0x75AEF3: fstp    [esp+58h+arg_0]
0x75AEF7: fld     [esp+58h+var_38]
0x75AEFB: fld     [esp+58h+arg_0]
0x75AEFF: fcom    st(1)
0x75AF01: fnstsw  ax
0x75AF03: fstp    st(1)
0x75AF05: test    ah, 5
0x75AF08: jnp     short loc_75AF14
0x75AF0A: fstp    [esp+58h+var_38]
0x75AF0E: jmp     short loc_75AF16
0x75AF10: fstp    st
0x75AF12: jmp     short loc_75AEF0
0x75AF14: fstp    st
0x75AF16: lea     eax, ds:0[edi*4]
0x75AF1D: add     ecx, edi
0x75AF1F: add     edx, ebx
0x75AF21: add     ebp, eax
0x75AF23: cmp     ecx, [esp+58h+var_34]
0x75AF27: jl      loc_75AE20
0x75AF2D: mov     ecx, [esp+58h+var_2C]
0x75AF31: mov     ebx, [esp+58h+arg_4]
0x75AF35: fld     [esp+58h+var_40]
0x75AF39: shl     ecx, 4
0x75AF3C: fld     st
0x75AF3E: add     ecx, [esi+1Ch]
0x75AF41: fadd    st, st(4)
0x75AF43: fstp    [esp+58h+var_28]
0x75AF47: fld     [esp+58h+var_3C]
0x75AF4B: fld     st
0x75AF4D: fadd    st, st(4)
0x75AF4F: fstp    [esp+58h+var_24]
0x75AF53: fld     [esp+58h+var_38]
0x75AF57: fld     st
0x75AF59: fadd    st, st(4)
0x75AF5B: fstp    [esp+58h+var_20]
0x75AF5F: fld     [esp+58h+var_28]
0x75AF63: fld     qword ptr ds:0A2FAA0h
0x75AF69: fmul    st(1), st
0x75AF6B: fxch    st(1)
0x75AF6D: fstp    [esp+58h+var_1C]
0x75AF71: mov     eax, [esp+58h+var_1C]
0x75AF75: fld     [esp+58h+var_24]
0x75AF79: mov     [ecx], eax
0x75AF7B: fmul    st, st(1)
0x75AF7D: fstp    [esp+58h+var_18]
0x75AF81: mov     edx, [esp+58h+var_18]
0x75AF85: mov     [ecx+4], edx
0x75AF88: fmul    [esp+58h+var_20]
0x75AF8C: fstp    [esp+58h+var_14]
0x75AF90: mov     eax, [esp+58h+var_14]
0x75AF94: fxch    st(2)
0x75AF96: mov     [ecx+8], eax
0x75AF99: fsubrp  st(5), st
0x75AF9B: fxch    st(4)
0x75AF9D: fstp    [esp+58h+var_1C]
0x75AFA1: fxch    st(3)
0x75AFA3: fsubrp  st(2), st
0x75AFA5: fxch    st(1)
0x75AFA7: fstp    [esp+58h+var_18]
0x75AFAB: fsubp   st(1), st
0x75AFAD: fstp    [esp+58h+var_14]
0x75AFB1: fld     [esp+58h+var_18]
0x75AFB5: fld     [esp+58h+var_1C]
0x75AFB9: fld     [esp+58h+var_14]
0x75AFBD: fld     st(1)
0x75AFBF: fmulp   st(2), st
0x75AFC1: fld     st(2)
0x75AFC3: fmulp   st(3), st
0x75AFC5: fxch    st(1)
0x75AFC7: faddp   st(2), st
0x75AFC9: fmul    st, st
0x75AFCB: faddp   st(1), st
0x75AFCD: fstp    [esp+58h+arg_4]
0x75AFD1: fld     [esp+58h+arg_4]
0x75AFD5: call    __CIsqrt
0x75AFDA: fstp    [esp+58h+arg_4]
0x75AFDE: fld     [esp+58h+arg_4]
0x75AFE2: movzx   ecx, word ptr [esi+1Ah]
0x75AFE6: fmul    qword ptr ds:0A2FAA0h
0x75AFEC: mov     edx, [esi+1Ch]
0x75AFEF: shl     ecx, 4
0x75AFF2: fstp    [esp+58h+arg_4]
0x75AFF6: fld     [esp+58h+arg_4]
0x75AFFA: fstp    dword ptr [ecx+edx+0Ch]
0x75AFFE: movsx   eax, word ptr [esi+18h]
0x75B002: cmp     edi, eax
0x75B004: fldz
0x75B006: mov     edx, edi
0x75B008: jge     short loc_75B043
0x75B00A: mov     ecx, edi
0x75B00C: shl     ecx, 4
0x75B00F: mov     eax, [esi+1Ch]
0x75B012: mov     ebp, ds:0B3F9A8h
0x75B018: add     eax, ecx
0x75B01A: mov     [eax], ebp
0x75B01C: mov     ebp, ds:0B3F9ACh
0x75B022: mov     [eax+4], ebp
0x75B025: mov     ebp, ds:0B3F9B0h
0x75B02B: mov     [eax+8], ebp
0x75B02E: mov     eax, [esi+1Ch]
0x75B031: fst     dword ptr [eax+ecx+0Ch]
0x75B035: movsx   eax, word ptr [esi+18h]
0x75B039: add     edx, 1
0x75B03C: add     ecx, 10h
0x75B03F: cmp     edx, eax
0x75B041: jl      short loc_75B00F
0x75B043: movzx   ecx, word ptr [esi+1Ah]
0x75B047: mov     edx, [esi+1Ch]
0x75B04A: shl     ecx, 4
0x75B04D: cmp     edi, 1
0x75B050: lea     eax, [ecx+edx]
0x75B053: mov     ecx, [eax]
0x75B055: mov     [esp+58h+var_10], ecx
0x75B059: mov     edx, [eax+4]
0x75B05C: mov     [esp+58h+var_C], edx
0x75B060: mov     ecx, [eax+8]
0x75B063: mov     [esp+58h+var_8], ecx
0x75B067: fld     dword ptr [eax+0Ch]
0x75B06A: fstp    [esp+58h+var_4]
0x75B06E: jle     short loc_75B0A5
0x75B070: lea     edx, [edi-1]
0x75B073: mov     ebp, 10h
0x75B078: mov     [esp+58h+arg_4], edx
0x75B07C: mov     eax, [esi+1Ch]
0x75B07F: fcom    dword ptr [eax+ebp+0Ch]
0x75B083: lea     ecx, [eax+ebp]
0x75B086: fnstsw  ax
0x75B088: test    ah, 44h
0x75B08B: jnp     short loc_75B09B
0x75B08D: push    ecx
0x75B08E: fstp    st
0x75B090: lea     ecx, [esp+5Ch+var_10]
0x75B094: call    sub_72A6B0
0x75B099: fldz
0x75B09B: add     ebp, 10h
0x75B09E: sub     [esp+58h+arg_4], 1
0x75B0A3: jnz     short loc_75B07C
0x75B0A5: fld     [esp+58h+var_4]
0x75B0A9: mov     ecx, [esp+58h+var_10]
0x75B0AD: mov     edx, [esp+58h+var_C]
0x75B0B1: fst     dword ptr [ebx+18h]
0x75B0B4: mov     eax, [esp+58h+var_8]
0x75B0B8: fucompp
0x75B0BA: mov     [ebx+0Ch], ecx
0x75B0BD: mov     [ebx+10h], edx
0x75B0C0: mov     [ebx+14h], eax
0x75B0C3: fnstsw  ax
0x75B0C5: pop     ebp
0x75B0C6: test    ah, 44h
0x75B0C9: jp      short loc_75B0D8
0x75B0CB: mov     ecx, [ebx+44h]
0x75B0CE: fld     dword ptr [ecx]
0x75B0D0: mov     edx, [ebx+4Ch]
0x75B0D3: fmul    dword ptr [edx]
0x75B0D5: fstp    dword ptr [ebx+18h]
0x75B0D8: add     word ptr [esi+1Ah], 1
0x75B0DD: movzx   eax, word ptr [esi+1Ah]
0x75B0E1: movzx   eax, ax
0x75B0E4: cmp     eax, edi
0x75B0E6: jl      short loc_75B0EE
0x75B0E8: mov     word ptr [esi+1Ah], 0
0x75B0EE: pop     edi
0x75B0EF: pop     esi
0x75B0F0: pop     ebx
0x75B0F1: add     esp, 48h
0x75B0F4: retn    8

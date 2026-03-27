0x97ABE0: sub     esp, 64h
0x97ABE3: push    ebx
0x97ABE4: mov     bx, word ptr [esp+68h+arg_4]
0x97ABE9: push    ebp
0x97ABEA: push    esi
0x97ABEB: movzx   esi, bx
0x97ABEE: push    edi
0x97ABEF: mov     edi, ecx
0x97ABF1: xor     ecx, ecx
0x97ABF3: mov     eax, esi
0x97ABF5: mov     edx, 4
0x97ABFA: mul     edx
0x97ABFC: seto    cl
0x97ABFF: mov     dword ptr [edi], offset ??_7NiOBBNode@@6B@; const NiOBBNode::`vftable'
0x97AC05: mov     [esp+74h+var_50], edi
0x97AC09: mov     dword ptr [edi+7Ch], 0
0x97AC10: mov     [esp+74h+var_4C], esi
0x97AC14: neg     ecx
0x97AC16: or      ecx, eax
0x97AC18: push    ecx; Size
0x97AC19: call    FormHeapAlloc
0x97AC1E: mov     [esp+78h+var_5C], eax
0x97AC22: xor     ecx, ecx
0x97AC24: mov     eax, esi
0x97AC26: mov     edx, 0Ch
0x97AC2B: mul     edx
0x97AC2D: seto    cl
0x97AC30: neg     ecx
0x97AC32: or      ecx, eax
0x97AC34: push    ecx; Size
0x97AC35: call    FormHeapAlloc
0x97AC3A: add     esp, 8
0x97AC3D: xor     ebp, ebp
0x97AC3F: test    bx, bx
0x97AC42: mov     [esp+74h+var_58], eax
0x97AC46: jbe     loc_97ADFA
0x97AC4C: mov     [esp+74h+var_64], eax
0x97AC50: mov     eax, [esp+74h+var_5C]
0x97AC54: mov     [esp+74h+arg_4], eax
0x97AC58: mov     [esp+74h+var_60], esi
0x97AC5C: lea     esp, [esp+0]
0x97AC60: mov     eax, [esp+74h+arg_8]
0x97AC67: mov     ebx, [esp+74h+arg_C]
0x97AC6E: movzx   ecx, bp
0x97AC71: movzx   ecx, word ptr [eax+ecx*2]
0x97AC75: add     ebp, 1
0x97AC78: movzx   edx, bp
0x97AC7B: movzx   edi, word ptr [eax+edx*2]
0x97AC7F: add     ebp, 1
0x97AC82: movzx   edx, bp
0x97AC85: movzx   edx, word ptr [eax+edx*2]
0x97AC89: movzx   eax, cx
0x97AC8C: lea     eax, [eax+eax*2]
0x97AC8F: lea     esi, [ebx+eax*4]
0x97AC92: movzx   eax, di
0x97AC95: lea     ecx, [eax+eax*2]
0x97AC98: lea     edi, [ebx+ecx*4]
0x97AC9B: movzx   eax, dx
0x97AC9E: fld     dword ptr [edi]
0x97ACA0: fsub    dword ptr [esi]
0x97ACA2: lea     edx, [eax+eax*2]
0x97ACA5: lea     ebx, [ebx+edx*4]
0x97ACA8: add     ebp, 1
0x97ACAB: fstp    [esp+74h+var_3C]
0x97ACAF: fld     dword ptr [edi+4]
0x97ACB2: fsub    dword ptr [esi+4]
0x97ACB5: fstp    [esp+74h+var_38]
0x97ACB9: fld     dword ptr [edi+8]
0x97ACBC: fsub    dword ptr [esi+8]
0x97ACBF: fstp    [esp+74h+var_34]
0x97ACC3: fld     dword ptr [ebx]
0x97ACC5: fsub    dword ptr [esi]
0x97ACC7: fstp    [esp+74h+var_48]
0x97ACCB: fld     dword ptr [ebx+4]
0x97ACCE: fsub    dword ptr [esi+4]
0x97ACD1: fstp    [esp+74h+var_44]
0x97ACD5: fld     dword ptr [ebx+8]
0x97ACD8: fsub    dword ptr [esi+8]
0x97ACDB: fstp    [esp+74h+var_40]
0x97ACDF: fld     [esp+74h+var_40]
0x97ACE3: fld     [esp+74h+var_38]
0x97ACE7: fld     [esp+74h+var_34]
0x97ACEB: fld     [esp+74h+var_44]
0x97ACEF: fld     st(2)
0x97ACF1: fmul    st, st(4)
0x97ACF3: fld     st(1)
0x97ACF5: fmul    st, st(3)
0x97ACF7: fsubp   st(1), st
0x97ACF9: fstp    [esp+74h+var_30]
0x97ACFD: fld     [esp+74h+var_48]
0x97AD01: fld     [esp+74h+var_3C]
0x97AD05: fld     st(1)
0x97AD07: fmulp   st(4), st
0x97AD09: fld     st
0x97AD0B: fmulp   st(6), st
0x97AD0D: fxch    st(3)
0x97AD0F: fsubrp  st(5), st
0x97AD11: fxch    st(4)
0x97AD13: fstp    [esp+74h+var_2C]
0x97AD17: fmulp   st(1), st
0x97AD19: fxch    st(2)
0x97AD1B: fmulp   st(1), st
0x97AD1D: fsubp   st(1), st
0x97AD1F: fstp    [esp+74h+var_28]
0x97AD23: fld     [esp+74h+var_2C]
0x97AD27: fld     [esp+74h+var_30]
0x97AD2B: fld     [esp+74h+var_28]
0x97AD2F: fld     st(1)
0x97AD31: fmulp   st(2), st
0x97AD33: fld     st(2)
0x97AD35: fmulp   st(3), st
0x97AD37: fxch    st(1)
0x97AD39: faddp   st(2), st
0x97AD3B: fmul    st, st
0x97AD3D: faddp   st(1), st
0x97AD3F: fstp    [esp+74h+var_54]
0x97AD43: fld     [esp+74h+var_54]
0x97AD47: call    __CIsqrt
0x97AD4C: fstp    [esp+74h+var_54]
0x97AD50: fld     [esp+74h+var_54]
0x97AD54: mov     ecx, [esp+74h+arg_4]
0x97AD58: fmul    qword ptr ds:0A2FAA0h
0x97AD5E: fstp    dword ptr [ecx]
0x97AD60: mov     eax, [esp+74h+var_64]
0x97AD64: fld     dword ptr [esi]
0x97AD66: add     ecx, 4
0x97AD69: fadd    dword ptr [edi]
0x97AD6B: add     eax, 0Ch
0x97AD6E: sub     [esp+74h+var_60], 1
0x97AD73: mov     [esp+74h+arg_4], ecx
0x97AD77: fstp    [esp+74h+var_24]
0x97AD7B: mov     [esp+74h+var_64], eax
0x97AD7F: fld     dword ptr [esi+4]
0x97AD82: fadd    dword ptr [edi+4]
0x97AD85: fstp    [esp+74h+var_20]
0x97AD89: fld     dword ptr [esi+8]
0x97AD8C: fadd    dword ptr [edi+8]
0x97AD8F: fstp    [esp+74h+var_1C]
0x97AD93: fld     dword ptr [ebx]
0x97AD95: fadd    [esp+74h+var_24]
0x97AD99: fstp    [esp+74h+var_18]
0x97AD9D: fld     dword ptr [ebx+4]
0x97ADA0: fadd    [esp+74h+var_20]
0x97ADA4: fstp    [esp+74h+var_14]
0x97ADA8: fld     dword ptr [ebx+8]
0x97ADAB: fadd    [esp+74h+var_1C]
0x97ADAF: fstp    [esp+74h+var_10]
0x97ADB3: fld     [esp+74h+var_18]
0x97ADB7: fld     qword ptr ds:0A7C030h
0x97ADBD: fmul    st(1), st
0x97ADBF: fxch    st(1)
0x97ADC1: fstp    [esp+74h+var_C]
0x97ADC5: mov     edx, [esp+74h+var_C]
0x97ADC9: fld     [esp+74h+var_14]
0x97ADCD: mov     [eax-0Ch], edx
0x97ADD0: fmul    st, st(1)
0x97ADD2: fstp    [esp+74h+var_8]
0x97ADD6: mov     edx, [esp+74h+var_8]
0x97ADDA: mov     [eax-8], edx
0x97ADDD: fmul    [esp+74h+var_10]
0x97ADE1: fstp    [esp+74h+var_4]
0x97ADE5: mov     edx, [esp+74h+var_4]
0x97ADE9: mov     [eax-4], edx
0x97ADEC: jnz     loc_97AC60
0x97ADF2: mov     edi, [esp+74h+var_50]
0x97ADF6: mov     esi, [esp+74h+var_4C]
0x97ADFA: xor     ecx, ecx
0x97ADFC: mov     eax, esi
0x97ADFE: mov     edx, 4
0x97AE03: mul     edx
0x97AE05: seto    cl
0x97AE08: neg     ecx
0x97AE0A: or      ecx, eax
0x97AE0C: push    ecx; Size
0x97AE0D: call    FormHeapAlloc
0x97AE12: mov     ebp, eax
0x97AE14: add     esp, 4
0x97AE17: xor     eax, eax
0x97AE19: test    esi, esi
0x97AE1B: jle     short loc_97AE2B
0x97AE1D: lea     ecx, [ecx+0]
0x97AE20: mov     [ebp+eax*4+0], eax
0x97AE24: add     eax, 1
0x97AE27: cmp     eax, esi
0x97AE29: jl      short loc_97AE20
0x97AE2B: xor     ecx, ecx
0x97AE2D: mov     eax, esi
0x97AE2F: mov     edx, 4
0x97AE34: mul     edx
0x97AE36: seto    cl
0x97AE39: neg     ecx
0x97AE3B: or      ecx, eax
0x97AE3D: push    ecx; Size
0x97AE3E: call    FormHeapAlloc
0x97AE43: mov     ecx, [esp+78h+var_58]
0x97AE47: mov     edx, [esp+78h+arg_10]
0x97AE4E: add     esp, 4
0x97AE51: mov     ebx, eax
0x97AE53: mov     eax, [esp+74h+arg_14]
0x97AE5A: push    eax
0x97AE5B: mov     eax, [esp+78h+arg_C]
0x97AE62: push    ebx
0x97AE63: push    ebp
0x97AE64: add     esi, 0FFFFFFFFh
0x97AE67: push    esi
0x97AE68: mov     esi, [esp+84h+var_5C]
0x97AE6C: push    0
0x97AE6E: push    ecx
0x97AE6F: mov     ecx, [esp+8Ch+arg_8]
0x97AE76: push    esi
0x97AE77: push    edx
0x97AE78: mov     edx, [esp+94h+arg_0]
0x97AE7F: push    eax
0x97AE80: push    ecx
0x97AE81: push    edx
0x97AE82: mov     ecx, edi
0x97AE84: call    sub_97A9D0
0x97AE89: push    ebx
0x97AE8A: call    FormHeapFree
0x97AE8F: push    ebp
0x97AE90: call    FormHeapFree
0x97AE95: mov     eax, [esp+7Ch+var_58]
0x97AE99: push    eax
0x97AE9A: call    FormHeapFree
0x97AE9F: push    esi
0x97AEA0: call    FormHeapFree
0x97AEA5: add     esp, 10h
0x97AEA8: mov     dword ptr [edi+88h], 0
0x97AEB2: mov     eax, edi
0x97AEB4: pop     edi
0x97AEB5: pop     esi
0x97AEB6: pop     ebp
0x97AEB7: pop     ebx
0x97AEB8: add     esp, 64h
0x97AEBB: retn    18h

0x6BBEE0: sub     esp, 28h
0x6BBEE3: mov     eax, [esp+28h+arg_C]
0x6BBEE7: fld     [esp+28h+arg_0]
0x6BBEEB: mov     edx, ds:0B3D250h[eax*4]
0x6BBEF2: push    ebx
0x6BBEF3: mov     ebx, [esp+2Ch+arg_4]
0x6BBEF7: push    esi
0x6BBEF8: mov     esi, ds:0B3D668h[eax*4]
0x6BBEFF: push    edi
0x6BBF00: mov     edi, [esp+34h+arg_8]
0x6BBF04: lea     ecx, [esp+34h+var_24]
0x6BBF08: push    ecx
0x6BBF09: push    edi
0x6BBF0A: push    ebx
0x6BBF0B: push    ecx
0x6BBF0C: fstp    [esp+44h+var_44]
0x6BBF0F: call    edx
0x6BBF11: fld     [esp+44h+arg_0]
0x6BBF15: add     esp, 10h
0x6BBF18: lea     eax, [esp+34h+var_18]
0x6BBF1C: push    eax
0x6BBF1D: push    edi
0x6BBF1E: push    ebx
0x6BBF1F: push    ecx
0x6BBF20: fstp    [esp+44h+var_44]
0x6BBF23: call    esi
0x6BBF25: fld     [esp+44h+var_20]
0x6BBF29: add     esp, 10h
0x6BBF2C: fld     [esp+34h+var_24]
0x6BBF30: fld     [esp+34h+var_1C]
0x6BBF34: fld     st(1)
0x6BBF36: fmulp   st(2), st
0x6BBF38: fld     st(2)
0x6BBF3A: fmulp   st(3), st
0x6BBF3C: fxch    st(1)
0x6BBF3E: faddp   st(2), st
0x6BBF40: fmul    st, st
0x6BBF42: faddp   st(1), st
0x6BBF44: fstp    [esp+34h+var_28]
0x6BBF48: fld     [esp+34h+var_28]
0x6BBF4C: call    __CIsqrt
0x6BBF51: fstp    [esp+34h+arg_C]
0x6BBF55: fld     [esp+34h+arg_C]
0x6BBF59: mov     esi, [esp+34h+arg_10]
0x6BBF5D: fld1
0x6BBF5F: fdivrp  st(1), st
0x6BBF61: fstp    [esp+34h+arg_C]
0x6BBF65: fld     [esp+34h+var_24]
0x6BBF69: fld     st
0x6BBF6B: fld     [esp+34h+arg_C]
0x6BBF6F: fld     st
0x6BBF71: fmulp   st(2), st
0x6BBF73: fxch    st(1)
0x6BBF75: fstp    [esp+34h+var_C]
0x6BBF79: mov     ecx, [esp+34h+var_C]
0x6BBF7D: fld     [esp+34h+var_20]
0x6BBF81: mov     [esi], ecx
0x6BBF83: fld     st
0x6BBF85: fmul    st, st(2)
0x6BBF87: fstp    [esp+34h+var_8]
0x6BBF8B: mov     edx, [esp+34h+var_8]
0x6BBF8F: fld     [esp+34h+var_1C]
0x6BBF93: mov     [esi+4], edx
0x6BBF96: fld     st
0x6BBF98: fmulp   st(3), st
0x6BBF9A: fxch    st(2)
0x6BBF9C: fstp    [esp+34h+var_4]
0x6BBFA0: mov     eax, [esp+34h+var_4]
0x6BBFA4: fld     [esp+34h+var_10]
0x6BBFA8: mov     [esi+8], eax
0x6BBFAB: fld     st
0x6BBFAD: fmul    st, st(2)
0x6BBFAF: fld     [esp+34h+var_14]
0x6BBFB3: fld     st
0x6BBFB5: fmul    st, st(5)
0x6BBFB7: fsubp   st(2), st
0x6BBFB9: fxch    st(1)
0x6BBFBB: fstp    [esp+34h+var_C]
0x6BBFBF: fld     [esp+34h+var_18]
0x6BBFC3: fld     st
0x6BBFC5: fmulp   st(5), st
0x6BBFC7: fld     st(5)
0x6BBFC9: fmulp   st(3), st
0x6BBFCB: fxch    st(4)
0x6BBFCD: fsubrp  st(2), st
0x6BBFCF: fxch    st(1)
0x6BBFD1: fstp    [esp+34h+var_8]
0x6BBFD5: fmulp   st(3), st
0x6BBFD7: fmulp   st(1), st
0x6BBFD9: fsubp   st(1), st
0x6BBFDB: fstp    [esp+34h+var_4]
0x6BBFDF: fld     [esp+34h+var_8]
0x6BBFE3: fld     [esp+34h+var_C]
0x6BBFE7: fld     [esp+34h+var_4]
0x6BBFEB: fld     st(1)
0x6BBFED: fmulp   st(2), st
0x6BBFEF: fld     st(2)
0x6BBFF1: fmulp   st(3), st
0x6BBFF3: fxch    st(1)
0x6BBFF5: faddp   st(2), st
0x6BBFF7: fmul    st, st
0x6BBFF9: faddp   st(1), st
0x6BBFFB: fstp    [esp+34h+arg_10]
0x6BBFFF: fld     [esp+34h+arg_10]
0x6BC003: call    __CIsqrt
0x6BC008: fstp    [esp+34h+arg_10]
0x6BC00C: fld     [esp+34h+arg_10]
0x6BC010: mov     ecx, [esp+34h+arg_1C]
0x6BC014: fld     [esp+34h+arg_C]
0x6BC018: fld     st
0x6BC01A: fmulp   st(2), st
0x6BC01C: fmulp   st(1), st
0x6BC01E: fstp    [esp+34h+arg_C]
0x6BC022: fld     [esp+34h+arg_C]
0x6BC026: fst     dword ptr [ecx]
0x6BC028: fabs
0x6BC02A: fstp    [esp+34h+arg_C]
0x6BC02E: fld     [esp+34h+arg_C]
0x6BC032: fld     dword ptr ds:0A372CCh
0x6BC038: fcom    st(1)
0x6BC03A: fnstsw  ax
0x6BC03C: fstp    st(1)
0x6BC03E: test    ah, 5
0x6BC041: jp      loc_6BC0FD
0x6BC047: fstp    st
0x6BC049: mov     edi, [esp+34h+arg_14]
0x6BC04D: fld     [esp+34h+var_14]
0x6BC051: fld     st
0x6BC053: fld     [esp+34h+var_20]
0x6BC057: fld     st
0x6BC059: fmulp   st(2), st
0x6BC05B: fld     [esp+34h+var_18]
0x6BC05F: fld     [esp+34h+var_24]
0x6BC063: fld     st
0x6BC065: fmulp   st(2), st
0x6BC067: fxch    st(3)
0x6BC069: faddp   st(1), st
0x6BC06B: fld     [esp+34h+var_10]
0x6BC06F: fld     st
0x6BC071: fld     [esp+34h+var_1C]
0x6BC075: fld     st
0x6BC077: fmulp   st(2), st
0x6BC079: fxch    st(3)
0x6BC07B: faddp   st(1), st
0x6BC07D: fstp    [esp+34h+arg_C]
0x6BC081: fld     [esp+34h+arg_C]
0x6BC085: fld     st
0x6BC087: fmulp   st(5), st
0x6BC089: fxch    st(4)
0x6BC08B: fstp    [esp+34h+var_24]
0x6BC08F: fld     st(3)
0x6BC091: fmulp   st(3), st
0x6BC093: fxch    st(2)
0x6BC095: fstp    [esp+34h+var_20]
0x6BC099: fmulp   st(2), st
0x6BC09B: fxch    st(1)
0x6BC09D: fstp    [esp+34h+var_1C]
0x6BC0A1: fld     [esp+34h+var_18]
0x6BC0A5: fld     [esp+34h+var_28]
0x6BC0A9: fld     st
0x6BC0AB: fmulp   st(2), st
0x6BC0AD: fxch    st(1)
0x6BC0AF: fstp    [esp+34h+var_C]
0x6BC0B3: fld     st
0x6BC0B5: fmulp   st(3), st
0x6BC0B7: fxch    st(2)
0x6BC0B9: fstp    [esp+34h+var_8]
0x6BC0BD: fmulp   st(1), st
0x6BC0BF: fstp    [esp+34h+var_4]
0x6BC0C3: fld     [esp+34h+var_C]
0x6BC0C7: fsub    [esp+34h+var_24]
0x6BC0CB: fstp    [esp+34h+var_18]
0x6BC0CF: mov     ecx, [esp+34h+var_18]
0x6BC0D3: fld     [esp+34h+var_8]
0x6BC0D7: mov     [edi], ecx
0x6BC0D9: fsub    [esp+34h+var_20]
0x6BC0DD: fstp    [esp+34h+var_14]
0x6BC0E1: mov     edx, [esp+34h+var_14]
0x6BC0E5: fld     [esp+34h+var_4]
0x6BC0E9: mov     [edi+4], edx
0x6BC0EC: fsub    [esp+34h+var_1C]
0x6BC0F0: fstp    [esp+34h+var_10]
0x6BC0F4: mov     eax, [esp+34h+var_10]
0x6BC0F8: mov     [edi+8], eax
0x6BC0FB: jmp     short loc_6BC159
0x6BC0FD: fldz
0x6BC0FF: fst     dword ptr [ecx]
0x6BC101: fld     dword ptr [esi]
0x6BC103: fabs
0x6BC105: fstp    [esp+34h+arg_C]
0x6BC109: fld     [esp+34h+arg_C]
0x6BC10D: fcomp   st(2)
0x6BC10F: fnstsw  ax
0x6BC111: test    ah, 41h
0x6BC114: jz      short loc_6BC144
0x6BC116: fld     dword ptr [esi+4]
0x6BC119: fabs
0x6BC11B: fstp    [esp+34h+arg_C]
0x6BC11F: fld     [esp+34h+arg_C]
0x6BC123: fcomp   st(2)
0x6BC125: fnstsw  ax
0x6BC127: fstp    st(1)
0x6BC129: test    ah, 41h
0x6BC12C: jz      short loc_6BC146
0x6BC12E: fld     dword ptr [esi+4]
0x6BC131: mov     edi, [esp+34h+arg_14]
0x6BC135: fstp    dword ptr [edi+8]
0x6BC138: fld     dword ptr [esi+8]
0x6BC13B: fchs
0x6BC13D: fstp    dword ptr [edi+4]
0x6BC140: fstp    dword ptr [edi]
0x6BC142: jmp     short loc_6BC159
0x6BC144: fstp    st(1)
0x6BC146: fld     dword ptr [esi+4]
0x6BC149: mov     edi, [esp+34h+arg_14]
0x6BC14D: fstp    dword ptr [edi]
0x6BC14F: fld     dword ptr [esi]
0x6BC151: fchs
0x6BC153: fstp    dword ptr [edi+4]
0x6BC156: fstp    dword ptr [edi+8]
0x6BC159: mov     ecx, edi
0x6BC15B: call    sub_43F350
0x6BC160: fstp    st
0x6BC162: fld     dword ptr [edi+8]
0x6BC165: mov     eax, [esp+34h+arg_18]
0x6BC169: fmul    dword ptr [esi+4]
0x6BC16C: fld     dword ptr [esi+8]
0x6BC16F: fmul    dword ptr [edi+4]
0x6BC172: fsubp   st(1), st
0x6BC174: fstp    [esp+34h+var_C]
0x6BC178: mov     ecx, [esp+34h+var_C]
0x6BC17C: fld     dword ptr [edi]
0x6BC17E: fmul    dword ptr [esi+8]
0x6BC181: fld     dword ptr [edi+8]
0x6BC184: fmul    dword ptr [esi]
0x6BC186: fsubp   st(1), st
0x6BC188: fstp    [esp+34h+var_8]
0x6BC18C: mov     edx, [esp+34h+var_8]
0x6BC190: fld     dword ptr [esi]
0x6BC192: fmul    dword ptr [edi+4]
0x6BC195: fld     dword ptr [edi]
0x6BC197: pop     edi
0x6BC198: fmul    dword ptr [esi+4]
0x6BC19B: mov     [eax], ecx
0x6BC19D: pop     esi
0x6BC19E: mov     [eax+4], edx
0x6BC1A1: fsubp   st(1), st
0x6BC1A3: pop     ebx
0x6BC1A4: fstp    [esp+28h+var_4]
0x6BC1A8: mov     ecx, [esp+28h+var_4]
0x6BC1AC: mov     [eax+8], ecx
0x6BC1AF: add     esp, 28h
0x6BC1B2: retn

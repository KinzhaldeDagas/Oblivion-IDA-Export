0x6EAA10: sub     esp, 1Ch
0x6EAA13: fld1
0x6EAA15: push    ebx
0x6EAA16: push    esi
0x6EAA17: fstp    [esp+24h+var_1C]
0x6EAA1B: mov     esi, ecx
0x6EAA1D: mov     byte ptr [esi+3Ch], 0
0x6EAA21: mov     eax, ds:0B3F9A8h
0x6EAA26: mov     [esi+30h], eax
0x6EAA29: mov     ecx, ds:0B3F9ACh
0x6EAA2F: mov     [esi+34h], ecx
0x6EAA32: mov     edx, ds:0B3F9B0h
0x6EAA38: xor     bl, bl
0x6EAA3A: cmp     [esi+0Dh], bl
0x6EAA3D: mov     [esi+38h], edx
0x6EAA40: jbe     loc_6EAB4D
0x6EAA46: push    ebp
0x6EAA47: mov     ebp, [esp+28h+arg_4]
0x6EAA4B: push    edi
0x6EAA4C: lea     esp, [esp+0]
0x6EAA50: fldz
0x6EAA52: movzx   eax, bl
0x6EAA55: lea     edi, [eax+eax*2]
0x6EAA58: mov     eax, [esi+14h]
0x6EAA5B: add     edi, edi
0x6EAA5D: add     edi, edi
0x6EAA5F: add     edi, edi
0x6EAA61: mov     ecx, [eax+edi]
0x6EAA64: test    ecx, ecx
0x6EAA66: lea     edx, [eax+edi]
0x6EAA69: jz      loc_6EAB3D
0x6EAA6F: fcom    dword ptr [edx+8]
0x6EAA72: fnstsw  ax
0x6EAA74: test    ah, 5
0x6EAA77: jp      loc_6EAB3D
0x6EAA7D: test    ecx, ecx
0x6EAA7F: fld     [esp+2Ch+arg_0]
0x6EAA83: fstp    [esp+2Ch+arg_4]
0x6EAA87: jz      short loc_6EAAB5
0x6EAA89: fcomp   dword ptr [edx+8]
0x6EAA8C: fnstsw  ax
0x6EAA8E: test    ah, 44h
0x6EAA91: jnp     short loc_6EAAB7
0x6EAA93: test    byte ptr [esi+0Ch], 1
0x6EAA97: jz      short loc_6EAAA0
0x6EAA99: fld     dword ptr [edx+14h]
0x6EAA9C: fstp    [esp+2Ch+arg_4]
0x6EAAA0: fld     [esp+2Ch+arg_4]
0x6EAAA4: fld     st
0x6EAAA6: fld     dword ptr ds:0A79F00h
0x6EAAAC: fucompp
0x6EAAAE: fnstsw  ax
0x6EAAB0: test    ah, 44h
0x6EAAB3: jp      short loc_6EAAC4
0x6EAAB5: fstp    st
0x6EAAB7: fld     [esp+2Ch+var_1C]
0x6EAABB: fsub    dword ptr [edx+8]
0x6EAABE: fstp    [esp+2Ch+var_1C]
0x6EAAC2: jmp     short loc_6EAB3F
0x6EAAC4: mov     edx, [ecx]
0x6EAAC6: mov     edx, [edx+54h]
0x6EAAC9: lea     eax, [esp+2Ch+var_C]
0x6EAACD: push    eax
0x6EAACE: push    ebp
0x6EAACF: push    ecx
0x6EAAD0: fstp    [esp+38h+var_38]
0x6EAAD3: call    edx
0x6EAAD5: test    al, al
0x6EAAD7: jz      short loc_6EAB2C
0x6EAAD9: mov     eax, [esi+14h]
0x6EAADC: fld     dword ptr [eax+edi+8]
0x6EAAE0: fstp    [esp+2Ch+arg_4]
0x6EAAE4: fld     [esp+2Ch+var_C]
0x6EAAE8: fld     [esp+2Ch+arg_4]
0x6EAAEC: fld     st
0x6EAAEE: fmulp   st(2), st
0x6EAAF0: fxch    st(1)
0x6EAAF2: fstp    [esp+2Ch+var_18]
0x6EAAF6: fld     [esp+2Ch+var_8]
0x6EAAFA: fmul    st, st(1)
0x6EAAFC: fstp    [esp+2Ch+var_14]
0x6EAB00: fmul    [esp+2Ch+var_4]
0x6EAB04: fstp    [esp+2Ch+var_10]
0x6EAB08: fld     dword ptr [esi+30h]
0x6EAB0B: fadd    [esp+2Ch+var_18]
0x6EAB0F: fstp    dword ptr [esi+30h]
0x6EAB12: fld     [esp+2Ch+var_14]
0x6EAB16: fadd    dword ptr [esi+34h]
0x6EAB19: fstp    dword ptr [esi+34h]
0x6EAB1C: fld     dword ptr [esi+38h]
0x6EAB1F: fadd    [esp+2Ch+var_10]
0x6EAB23: fstp    dword ptr [esi+38h]
0x6EAB26: mov     byte ptr [esi+3Ch], 1
0x6EAB2A: jmp     short loc_6EAB3F
0x6EAB2C: fld     [esp+2Ch+var_1C]
0x6EAB30: mov     ecx, [esi+14h]
0x6EAB33: fsub    dword ptr [ecx+edi+8]
0x6EAB37: fstp    [esp+2Ch+var_1C]
0x6EAB3B: jmp     short loc_6EAB3F
0x6EAB3D: fstp    st
0x6EAB3F: add     bl, 1
0x6EAB42: cmp     bl, [esi+0Dh]
0x6EAB45: jb      loc_6EAA50
0x6EAB4B: pop     edi
0x6EAB4C: pop     ebp
0x6EAB4D: cmp     byte ptr [esi+3Ch], 0
0x6EAB51: jnz     short loc_6EAB8C
0x6EAB53: mov     edx, ds:0B24FC8h
0x6EAB59: mov     [esi+30h], edx
0x6EAB5C: mov     eax, ds:0B24FCCh
0x6EAB61: mov     [esi+34h], eax
0x6EAB64: mov     ecx, ds:0B24FD0h
0x6EAB6A: mov     eax, [esp+24h+arg_8]
0x6EAB6E: mov     [esi+38h], ecx
0x6EAB71: mov     edx, [esi+30h]
0x6EAB74: mov     [eax], edx
0x6EAB76: mov     ecx, [esi+34h]
0x6EAB79: mov     [eax+4], ecx
0x6EAB7C: mov     edx, [esi+38h]
0x6EAB7F: pop     esi
0x6EAB80: mov     [eax+8], edx
0x6EAB83: xor     al, al
0x6EAB85: pop     ebx
0x6EAB86: add     esp, 1Ch
0x6EAB89: retn    0Ch
0x6EAB8C: fld     [esp+24h+var_1C]
0x6EAB90: mov     eax, [esp+24h+arg_8]
0x6EAB94: fld1
0x6EAB96: fdivrp  st(1), st
0x6EAB98: fstp    [esp+24h+arg_4]
0x6EAB9C: fld     dword ptr [esi+30h]
0x6EAB9F: fld     [esp+24h+arg_4]
0x6EABA3: fld     st
0x6EABA5: fmulp   st(2), st
0x6EABA7: fxch    st(1)
0x6EABA9: fstp    dword ptr [esi+30h]
0x6EABAC: fld     dword ptr [esi+34h]
0x6EABAF: fmul    st, st(1)
0x6EABB1: fstp    dword ptr [esi+34h]
0x6EABB4: fmul    dword ptr [esi+38h]
0x6EABB7: fstp    dword ptr [esi+38h]
0x6EABBA: mov     ecx, [esi+30h]
0x6EABBD: mov     [eax], ecx
0x6EABBF: mov     edx, [esi+34h]
0x6EABC2: mov     [eax+4], edx
0x6EABC5: mov     ecx, [esi+38h]
0x6EABC8: pop     esi
0x6EABC9: mov     [eax+8], ecx
0x6EABCC: mov     al, 1
0x6EABCE: pop     ebx
0x6EABCF: add     esp, 1Ch
0x6EABD2: retn    0Ch

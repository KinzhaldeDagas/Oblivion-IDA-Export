0x8CFC70: push    ebp
0x8CFC71: mov     ebp, esp
0x8CFC73: and     esp, 0FFFFFFF0h
0x8CFC76: sub     esp, 0C8h
0x8CFC7C: mov     eax, ds:0B30AACh
0x8CFC81: xor     eax, esp
0x8CFC83: mov     [esp+0C8h+var_4], eax
0x8CFC8A: fld1
0x8CFC8C: push    esi
0x8CFC8D: mov     esi, [ebp+arg_0]
0x8CFC90: fstp    dword ptr [esp+0CCh+var_90]
0x8CFC94: movaps  xmm0, xmmword ptr [esi+2C0h]
0x8CFC9B: mov     eax, [esi+1F4h]
0x8CFCA1: movaps  xmm1, xmmword ptr [esi+2B0h]
0x8CFCA8: movaps  [esp+0CCh+var_80], xmm0
0x8CFCAD: movaps  xmm0, xmmword ptr [esi+2E0h]
0x8CFCB4: movaps  [esp+0CCh+var_50], xmm0
0x8CFCB9: movaps  xmm0, xmmword ptr [esi+290h]
0x8CFCC0: push    edi
0x8CFCC1: lea     edi, [esi+2E0h]
0x8CFCC7: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CFCCB: movss   dword ptr [esp+0D0h+var_B0], xmm0
0x8CFCD1: movaps  xmm0, xmmword ptr [esi+290h]
0x8CFCD8: movss   [esp+0D0h+var_C0], xmm0
0x8CFCDE: movaps  xmm0, xmmword ptr [esi+290h]
0x8CFCE5: shufps  xmm0, xmm0, 55h ; 'U'
0x8CFCE9: movss   dword ptr [esp+0D0h+var_A0], xmm0
0x8CFCEF: fld     dword ptr [esp+0D0h+var_A0]
0x8CFCF3: movaps  xmm0, xmmword ptr [esi+280h]
0x8CFCFA: fstp    [esp+0D0h+var_40]
0x8CFD01: fld     [esp+0D0h+var_C0]
0x8CFD05: shr     eax, 8
0x8CFD08: test    al, 1
0x8CFD0A: fstp    [esp+0D0h+var_3C]
0x8CFD11: fld     dword ptr [esp+0D0h+var_B0]
0x8CFD15: movaps  [esp+0D0h+var_70], xmm1
0x8CFD1A: fstp    [esp+0D0h+var_38]
0x8CFD21: movaps  [esp+0D0h+var_20], xmm0
0x8CFD29: fldz
0x8CFD2B: fstp    [esp+0D0h+var_34]
0x8CFD32: fld     dword ptr ds:0A2FE7Ch
0x8CFD38: fstp    [esp+0D0h+var_30]
0x8CFD3F: jz      short loc_8CFD4F
0x8CFD41: movaps  xmm0, xmmword ptr [esi+230h]
0x8CFD48: movaps  [esp+0D0h+var_60], xmm0
0x8CFD4D: jmp     short loc_8CFD54
0x8CFD4F: movaps  [esp+0D0h+var_60], xmm1
0x8CFD54: lea     ecx, [esp+0D0h+var_90]
0x8CFD58: push    edi
0x8CFD59: push    ecx
0x8CFD5A: call    sub_91F430
0x8CFD5F: mov     ecx, [esi+8]
0x8CFD62: add     esp, 8
0x8CFD65: test    ecx, ecx
0x8CFD67: jz      short loc_8CFD70
0x8CFD69: call    sub_8AC070
0x8CFD6E: jmp     short loc_8CFD75
0x8CFD70: mov     eax, offset stru_BA7A40
0x8CFD75: movaps  xmm0, xmmword ptr [eax]
0x8CFD78: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CFD7C: movss   dword ptr [esp+0D0h+var_B0], xmm0
0x8CFD82: fld     dword ptr [esp+0D0h+var_B0]
0x8CFD86: fsub    dword ptr [esi+348h]
0x8CFD8C: fstp    [esp+0D0h+var_C4]
0x8CFD90: fld     dword ptr ds:0A3D65Ch
0x8CFD96: fcomp   dword ptr [esi+338h]
0x8CFD9C: fnstsw  ax
0x8CFD9E: test    ah, 41h
0x8CFDA1: jp      short loc_8CFDBD
0x8CFDA3: fld     dword ptr [esi+33Ch]
0x8CFDA9: fmul    qword ptr ds:0A2FAA0h
0x8CFDAF: fmul    dword ptr [esi+338h]
0x8CFDB5: fadd    [esp+0D0h+var_C4]
0x8CFDB9: fstp    [esp+0D0h+var_C4]
0x8CFDBD: mov     edx, [esi]
0x8CFDBF: mov     eax, [edx+58h]
0x8CFDC2: mov     ecx, esi
0x8CFDC4: call    eax
0x8CFDC6: mov     edx, [esi]
0x8CFDC8: mov     eax, [edx+58h]
0x8CFDCB: mov     ecx, esi
0x8CFDCD: call    eax
0x8CFDCF: movaps  xmm0, xmmword ptr [eax+20h]
0x8CFDD3: mov     edx, [esi]
0x8CFDD5: mov     eax, [edx+58h]
0x8CFDD8: mov     ecx, esi
0x8CFDDA: movaps  [esp+0D0h+var_A0], xmm0
0x8CFDDF: call    eax
0x8CFDE1: fld     [esp+0D0h+var_C4]
0x8CFDE5: fld     dword ptr [esi+318h]
0x8CFDEB: fcomp   st(1)
0x8CFDED: fnstsw  ax
0x8CFDEF: test    ah, 5
0x8CFDF2: jp      short loc_8CFE51
0x8CFDF4: or      dword ptr [esi+1F4h], 400h
0x8CFDFE: fstp    st
0x8CFE00: cmp     dword ptr [esi+2A0h], 1
0x8CFE07: jnz     short loc_8CFE15
0x8CFE09: mov     ecx, esi
0x8CFE0B: call    sub_890720
0x8CFE10: jmp     loc_8CFFF8
0x8CFE15: movaps  xmm0, xmmword ptr [edi]
0x8CFE18: fldz
0x8CFE1A: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CFE1E: movss   dword ptr [esp+0D0h+var_B0], xmm0
0x8CFE24: fcom    dword ptr [esp+0D0h+var_B0]
0x8CFE28: fnstsw  ax
0x8CFE2A: test    ah, 5
0x8CFE2D: jp      short loc_8CFE42
0x8CFE2F: fstp    dword ptr [esi+2E8h]
0x8CFE35: movss   xmm2, dword ptr [esi+2D8h]
0x8CFE3D: jmp     loc_8CFFC6
0x8CFE42: movss   xmm2, dword ptr [esi+2D8h]
0x8CFE4A: fstp    st
0x8CFE4C: jmp     loc_8CFFC6
0x8CFE51: fld     dword ptr ds:0A3D65Ch
0x8CFE57: fcomp   dword ptr [esi+338h]
0x8CFE5D: fnstsw  ax
0x8CFE5F: test    ah, 41h
0x8CFE62: jnz     loc_8CFF96
0x8CFE68: fld     dword ptr [esi+318h]
0x8CFE6E: fsub    qword ptr ds:0A3F3F0h
0x8CFE74: fcomp   st(1)
0x8CFE76: fnstsw  ax
0x8CFE78: test    ah, 5
0x8CFE7B: jp      short loc_8CFE87
0x8CFE7D: or      dword ptr [esi+1F4h], 400h
0x8CFE87: cmp     dword ptr [esi+2A0h], 1
0x8CFE8E: jnz     short loc_8CFEAC
0x8CFE90: mov     ecx, [esi+1F4h]
0x8CFE96: shr     ecx, 0Ah
0x8CFE99: test    cl, 1
0x8CFE9C: jz      short loc_8CFEAC
0x8CFE9E: mov     ecx, esi
0x8CFEA0: fstp    st
0x8CFEA2: call    sub_890720
0x8CFEA7: jmp     loc_8CFFF8
0x8CFEAC: fld     dword ptr [esi+318h]
0x8CFEB2: fsub    qword ptr ds:0A99EC0h
0x8CFEB8: fcompp
0x8CFEBA: fnstsw  ax
0x8CFEBC: test    ah, 41h
0x8CFEBF: jnz     loc_8CFFF8
0x8CFEC5: movaps  xmm2, xmmword ptr [esi+2B0h]
0x8CFECC: movaps  xmm1, xmmword ptr [edi]
0x8CFECF: movaps  xmm0, xmm2
0x8CFED2: mulps   xmm0, xmm1
0x8CFED5: movaps  xmm1, xmm0
0x8CFED8: shufps  xmm1, xmm0, 55h ; 'U'
0x8CFEDC: addss   xmm1, xmm0
0x8CFEE0: movaps  xmm3, xmm0
0x8CFEE3: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8CFEE7: addss   xmm3, xmm1
0x8CFEEB: movss   xmm1, dword ptr ds:0A99E34h
0x8CFEF3: movss   dword ptr [esp+0D0h+var_B0], xmm3
0x8CFEF9: xorps   xmm3, xmm3
0x8CFEFC: movss   xmm0, xmm1
0x8CFF00: subss   xmm0, dword ptr [esp+0D0h+var_B0]
0x8CFF06: movss   xmm3, xmm0
0x8CFF0A: movaps  xmm0, xmm3
0x8CFF0D: movaps  xmm3, xmm0
0x8CFF10: shufps  xmm3, xmm0, 0
0x8CFF14: movaps  xmm0, xmmword ptr [edi]
0x8CFF17: mulps   xmm3, xmm2
0x8CFF1A: addps   xmm3, xmm0
0x8CFF1D: movaps  xmmword ptr [edi], xmm3
0x8CFF20: movaps  xmm2, xmmword ptr [esi+2B0h]
0x8CFF27: movaps  xmm3, [esp+0D0h+var_50]
0x8CFF2F: movaps  xmm0, xmm2
0x8CFF32: mulps   xmm0, xmm3
0x8CFF35: movaps  xmm3, xmm0
0x8CFF38: shufps  xmm3, xmm0, 55h ; 'U'
0x8CFF3C: addss   xmm3, xmm0
0x8CFF40: shufps  xmm0, xmm0, 0AAh ; 'ª'
0x8CFF44: addss   xmm0, xmm3
0x8CFF48: movaps  xmm3, xmm0
0x8CFF4B: shufps  xmm3, xmm0, 0
0x8CFF4F: movaps  xmm0, xmmword ptr [edi]
0x8CFF52: mulps   xmm3, xmm2
0x8CFF55: addps   xmm3, xmm0
0x8CFF58: movaps  xmmword ptr [edi], xmm3
0x8CFF5B: mov     edx, [esi]
0x8CFF5D: subss   xmm1, dword ptr [esi+2D8h]
0x8CFF65: mov     eax, [edx+58h]
0x8CFF68: xorps   xmm0, xmm0
0x8CFF6B: movss   xmm0, xmm1
0x8CFF6F: mov     ecx, esi
0x8CFF71: movaps  [esp+0D0h+var_B0], xmm0
0x8CFF76: call    eax
0x8CFF78: movaps  xmm0, [esp+0D0h+var_B0]
0x8CFF7D: movaps  xmm1, xmm0
0x8CFF80: shufps  xmm1, xmm0, 0
0x8CFF84: movaps  xmm0, xmmword ptr [eax+20h]
0x8CFF88: mulps   xmm1, xmm0
0x8CFF8B: movaps  xmm0, xmmword ptr [edi]
0x8CFF8E: addps   xmm1, xmm0
0x8CFF91: movaps  xmmword ptr [edi], xmm1
0x8CFF94: jmp     short loc_8CFFF8
0x8CFF96: fstp    st
0x8CFF98: fld1
0x8CFF9A: fcomp   dword ptr [esi+328h]
0x8CFFA0: fnstsw  ax
0x8CFFA2: test    ah, 44h
0x8CFFA5: jnp     short loc_8CFFF8
0x8CFFA7: mov     eax, [esi+1F4h]
0x8CFFAD: mov     ecx, eax
0x8CFFAF: shr     ecx, 8
0x8CFFB2: test    cl, 1
0x8CFFB5: jnz     short loc_8CFFF8
0x8CFFB7: shr     eax, 9
0x8CFFBA: test    al, 1
0x8CFFBC: jnz     short loc_8CFFF8
0x8CFFBE: movss   xmm2, dword ptr ds:0A99EBCh
0x8CFFC6: movss   xmm0, dword ptr [esi+328h]
0x8CFFCE: xorps   xmm1, xmm1
0x8CFFD1: movss   xmm1, xmm0
0x8CFFD5: xorps   xmm0, xmm0
0x8CFFD8: movss   xmm0, xmm2
0x8CFFDC: movaps  xmm2, xmm1
0x8CFFDF: shufps  xmm2, xmm1, 0
0x8CFFE3: mulps   xmm2, [esp+0D0h+var_A0]
0x8CFFE8: shufps  xmm0, xmm0, 0
0x8CFFEC: mulps   xmm2, xmm0
0x8CFFEF: movaps  xmm0, xmmword ptr [edi]
0x8CFFF2: addps   xmm2, xmm0
0x8CFFF5: movaps  xmmword ptr [edi], xmm2
0x8CFFF8: mov     ecx, esi
0x8CFFFA: call    sub_890970
0x8CFFFF: cmp     dword ptr [esi+2A0h], 0
0x8D0006: jnz     short loc_8D000F
0x8D0008: mov     ecx, esi
0x8D000A: call    sub_890720
0x8D000F: mov     ecx, [esp+0D0h+var_4]
0x8D0016: pop     edi
0x8D0017: pop     esi
0x8D0018: xor     ecx, esp
0x8D001A: call    @__security_check_cookie@4; __security_check_cookie(x)
0x8D001F: mov     esp, ebp
0x8D0021: pop     ebp
0x8D0022: retn    4

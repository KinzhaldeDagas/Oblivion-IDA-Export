0x8F01A0: push    ebp
0x8F01A1: mov     ebp, esp
0x8F01A3: and     esp, 0FFFFFFF0h
0x8F01A6: sub     esp, 1Ch
0x8F01A9: xor     edx, edx
0x8F01AB: push    esi
0x8F01AC: mov     esi, ecx
0x8F01AE: mov     ecx, [ebp+arg_0]
0x8F01B1: mov     word ptr [esi+6], 1
0x8F01B7: mov     [esi+8], edx
0x8F01BA: mov     dword ptr [esi], offset off_A9B0EC
0x8F01C0: mov     eax, [ecx+10h]
0x8F01C3: mov     [esi+0Ch], eax
0x8F01C6: mov     eax, [ecx+14h]
0x8F01C9: mov     [esi+10h], eax
0x8F01CC: fild    dword ptr [ecx+14h]
0x8F01CF: fsub    dword ptr ds:0A2F948h
0x8F01D5: fld     dword ptr [ecx+1Ch]
0x8F01D8: fsub    dword ptr [ecx+18h]
0x8F01DB: fild    dword ptr [ecx+10h]
0x8F01DE: fsub    dword ptr ds:0A2F948h
0x8F01E4: fstp    dword ptr [esi+50h]
0x8F01E7: fstp    dword ptr [esi+54h]
0x8F01EA: fstp    dword ptr [esi+58h]
0x8F01ED: mov     [esi+5Ch], edx
0x8F01F0: movaps  xmm0, xmmword ptr [ecx]
0x8F01F3: movaps  xmm1, xmmword ptr [esi+50h]
0x8F01F7: mulps   xmm1, xmm0
0x8F01FA: movaps  xmmword ptr [esi+50h], xmm1
0x8F01FE: fld     dword ptr [ecx+18h]
0x8F0201: fcomp   dword ptr [ecx+1Ch]
0x8F0204: fnstsw  ax
0x8F0206: test    ah, 41h
0x8F0209: jnz     short loc_8F0218
0x8F020B: mov     eax, 0BF800000h
0x8F0210: mov     [esi+14h], eax
0x8F0213: mov     [esi+54h], eax
0x8F0216: jmp     short loc_8F022A
0x8F0218: fld     dword ptr [ecx+18h]
0x8F021B: fadd    dword ptr [ecx+1Ch]
0x8F021E: fmul    dword ptr [ecx+4]
0x8F0221: fmul    dword ptr ds:0A3D65Ch
0x8F0227: fstp    dword ptr [esi+14h]
0x8F022A: movaps  xmm0, xmmword ptr [ecx]
0x8F022D: fld     dword ptr ds:0A2F948h
0x8F0233: movaps  xmmword ptr [esi+20h], xmm0
0x8F0237: fdiv    dword ptr [ecx+8]
0x8F023A: fld     dword ptr ds:0A2F948h
0x8F0240: fdiv    dword ptr [ecx+4]
0x8F0243: fld     dword ptr ds:0A2F948h
0x8F0249: fdiv    dword ptr [ecx]
0x8F024B: fstp    dword ptr [esi+30h]
0x8F024E: fstp    dword ptr [esi+34h]
0x8F0251: fstp    dword ptr [esi+38h]
0x8F0254: mov     [esi+3Ch], edx
0x8F0257: call    sub_92B470
0x8F025C: fstp    [esp+20h+var_14]
0x8F0260: movss   xmm0, [esp+20h+var_14]
0x8F0266: movaps  xmm1, xmmword ptr [esi+20h]
0x8F026A: movaps  xmm2, xmm0
0x8F026D: shufps  xmm2, xmm0, 0
0x8F0271: mulps   xmm2, xmm1
0x8F0274: movaps  [esp+20h+var_10], xmm2
0x8F0279: mov     dword ptr [esp+20h+var_10+4], 0
0x8F0281: movaps  xmm0, [esp+20h+var_10]
0x8F0286: movaps  xmmword ptr [esi+40h], xmm0
0x8F028A: mov     eax, esi
0x8F028C: pop     esi
0x8F028D: mov     esp, ebp
0x8F028F: pop     ebp
0x8F0290: retn    4

0x8C1990: push    ebp
0x8C1991: mov     ebp, esp
0x8C1993: and     esp, 0FFFFFFF0h
0x8C1996: push    0FFFFFFFFh
0x8C1998: push    offset SEH_8C2D80
0x8C199D: mov     eax, large fs:0
0x8C19A3: push    eax
0x8C19A4: sub     esp, 8
0x8C19A7: push    ebx
0x8C19A8: push    esi
0x8C19A9: push    edi
0x8C19AA: mov     eax, ds:0B30AACh
0x8C19AF: xor     eax, esp
0x8C19B1: push    eax
0x8C19B2: lea     eax, [esp+24h+var_C]
0x8C19B6: mov     large fs:0, eax
0x8C19BC: mov     ebx, [ebp+arg_4]
0x8C19BF: mov     edi, ecx
0x8C19C1: mov     ecx, [ebp+arg_0]
0x8C19C4: test    ecx, ecx
0x8C19C6: mov     esi, [edi+4]
0x8C19C9: jnz     short loc_8C1A02
0x8C19CB: mov     ecx, ds:0BA7D98h
0x8C19D1: mov     eax, [ecx]
0x8C19D3: mov     edx, [eax+10h]
0x8C19D6: push    29h ; ')'
0x8C19D8: push    0A0h ; ' '
0x8C19DD: call    edx
0x8C19DF: mov     word ptr [eax+4], 0A0h ; ' '
0x8C19E5: mov     [esp+24h+var_14], eax
0x8C19E9: mov     ecx, eax
0x8C19EB: mov     [esp+24h+var_4], 0
0x8C19F3: call    sub_9117E0
0x8C19F8: mov     [esp+24h+var_4], 0FFFFFFFFh
0x8C1A00: mov     ecx, eax
0x8C1A02: movaps  xmm0, xmmword ptr [esi+10h]
0x8C1A06: movaps  xmmword ptr [ecx+10h], xmm0
0x8C1A0A: movaps  xmm0, xmmword ptr [esi+20h]
0x8C1A0E: movaps  xmmword ptr [ecx+20h], xmm0
0x8C1A12: movaps  xmm0, xmmword ptr [esi+30h]
0x8C1A16: movaps  xmmword ptr [ecx+30h], xmm0
0x8C1A1A: movaps  xmm0, xmmword ptr [esi+40h]
0x8C1A1E: movaps  xmmword ptr [ecx+40h], xmm0
0x8C1A22: movaps  xmm0, xmmword ptr [esi+50h]
0x8C1A26: movaps  xmmword ptr [ecx+50h], xmm0
0x8C1A2A: movaps  xmm0, xmmword ptr [esi+60h]
0x8C1A2E: movaps  xmmword ptr [ecx+60h], xmm0
0x8C1A32: movaps  xmm0, xmmword ptr [esi+70h]
0x8C1A36: movaps  xmmword ptr [ecx+70h], xmm0
0x8C1A3A: movaps  xmm0, xmmword ptr [esi+80h]
0x8C1A41: movaps  xmmword ptr [ecx+80h], xmm0
0x8C1A48: fld     dword ptr [esi+94h]
0x8C1A4E: fstp    dword ptr [ecx+94h]
0x8C1A54: fld     dword ptr [esi+90h]
0x8C1A5A: fstp    dword ptr [ecx+90h]
0x8C1A60: fld     dword ptr [esi+98h]
0x8C1A66: fstp    dword ptr [ecx+98h]
0x8C1A6C: fld     dword ptr [ebx+10h]
0x8C1A6F: fstp    [esp+24h+var_14]
0x8C1A73: fld1
0x8C1A75: fcomp   [esp+24h+var_14]
0x8C1A79: fnstsw  ax
0x8C1A7B: test    ah, 44h
0x8C1A7E: jnp     short loc_8C1AD5
0x8C1A80: movaps  xmm2, xmmword ptr [ecx+10h]
0x8C1A84: movss   xmm1, [esp+24h+var_14]
0x8C1A8A: xorps   xmm0, xmm0
0x8C1A8D: movss   xmm0, xmm1
0x8C1A91: movaps  xmm1, xmm0
0x8C1A94: shufps  xmm1, xmm0, 0
0x8C1A98: mulps   xmm1, xmm2
0x8C1A9B: movaps  xmmword ptr [ecx+10h], xmm1
0x8C1A9F: movaps  xmm2, xmmword ptr [ecx+20h]
0x8C1AA3: movaps  xmm1, xmm0
0x8C1AA6: shufps  xmm1, xmm0, 0
0x8C1AAA: mulps   xmm1, xmm2
0x8C1AAD: movaps  xmmword ptr [ecx+20h], xmm1
0x8C1AB1: movaps  xmm2, xmmword ptr [ecx+60h]
0x8C1AB5: movaps  xmm1, xmm0
0x8C1AB8: shufps  xmm1, xmm0, 0
0x8C1ABC: mulps   xmm1, xmm2
0x8C1ABF: movaps  xmmword ptr [ecx+60h], xmm1
0x8C1AC3: movaps  xmm1, xmm0
0x8C1AC6: shufps  xmm1, xmm0, 0
0x8C1ACA: movaps  xmm0, xmmword ptr [ecx+70h]
0x8C1ACE: mulps   xmm1, xmm0
0x8C1AD1: movaps  xmmword ptr [ecx+70h], xmm1
0x8C1AD5: push    ebx
0x8C1AD6: push    ecx
0x8C1AD7: mov     ecx, edi
0x8C1AD9: call    sub_8A07B0
0x8C1ADE: mov     ecx, [esp+24h+var_C]
0x8C1AE2: mov     large fs:0, ecx
0x8C1AE9: pop     ecx
0x8C1AEA: pop     edi
0x8C1AEB: pop     esi
0x8C1AEC: pop     ebx
0x8C1AED: mov     esp, ebp
0x8C1AEF: pop     ebp
0x8C1AF0: retn    8

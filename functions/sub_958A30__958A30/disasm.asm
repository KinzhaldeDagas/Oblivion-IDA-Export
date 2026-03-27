0x958A30: push    ebp
0x958A31: mov     ebp, esp
0x958A33: and     esp, 0FFFFFFF0h
0x958A36: sub     esp, 0Ch
0x958A39: mov     eax, [ecx+14h]
0x958A3C: movaps  xmm0, xmmword ptr [eax]
0x958A3F: mov     edx, [ebp+arg_0]
0x958A42: movaps  xmm1, xmmword ptr [edx]
0x958A45: subps   xmm1, xmm0
0x958A48: movaps  xmm0, xmmword ptr [ecx]
0x958A4B: mov     ecx, [ebp+arg_4]
0x958A4E: mulps   xmm0, xmm1
0x958A51: movaps  xmm1, xmm0
0x958A54: shufps  xmm1, xmm0, 55h ; 'U'
0x958A58: movaps  xmm2, xmm0
0x958A5B: lea     eax, [esp+0Ch+var_4]
0x958A5F: addss   xmm1, xmm0
0x958A63: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x958A67: addss   xmm2, xmm1
0x958A6B: movss   dword ptr [eax], xmm2
0x958A6F: fld     [esp+0Ch+var_4]
0x958A73: fcomp   dword ptr [ecx]
0x958A75: push    esi
0x958A76: mov     esi, [ebp+arg_8]
0x958A79: fld     [esp+10h+var_4]
0x958A7D: mov     edx, 1
0x958A82: fnstsw  ax
0x958A84: test    ah, 41h
0x958A87: jnz     short loc_958A9A
0x958A89: fcomp   dword ptr [esi]
0x958A8B: fnstsw  ax
0x958A8D: test    ah, 5
0x958A90: jp      short loc_958AB4
0x958A92: mov     eax, [esp+10h+var_4]
0x958A96: mov     [esi], eax
0x958A98: jmp     short loc_958AB4
0x958A9A: fadd    dword ptr ds:0AA3864h
0x958AA0: fcom    dword ptr [ecx]
0x958AA2: fnstsw  ax
0x958AA4: test    ah, 41h
0x958AA7: jnz     short loc_958AAD
0x958AA9: fstp    dword ptr [ecx]
0x958AAB: jmp     short loc_958AAF
0x958AAD: fstp    st
0x958AAF: mov     edx, 2
0x958AB4: fld     dword ptr [ecx]
0x958AB6: fcomp   dword ptr [esi]
0x958AB8: fnstsw  ax
0x958ABA: test    ah, 1
0x958ABD: mov     eax, 4
0x958AC2: jz      short loc_958AC6
0x958AC4: mov     eax, edx
0x958AC6: pop     esi
0x958AC7: mov     esp, ebp
0x958AC9: pop     ebp
0x958ACA: retn    0Ch

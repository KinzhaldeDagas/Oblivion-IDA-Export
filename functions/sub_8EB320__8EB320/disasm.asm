0x8EB320: push    ebp
0x8EB321: mov     ebp, esp
0x8EB323: and     esp, 0FFFFFFF0h
0x8EB326: push    ecx
0x8EB327: mov     eax, [ebp+arg_0]
0x8EB32A: fld     dword ptr [eax+8]
0x8EB32D: push    ebx
0x8EB32E: push    esi
0x8EB32F: fld     st
0x8EB331: push    edi
0x8EB332: mov     edi, ecx
0x8EB334: fmul    dword ptr [edi+0C8h]
0x8EB33A: fsubr   dword ptr ds:0A2F948h
0x8EB340: fld     dword ptr ds:0A2FAA8h
0x8EB346: fcomp   st(1)
0x8EB348: fnstsw  ax
0x8EB34A: test    ah, 41h
0x8EB34D: jnz     short loc_8EB357
0x8EB34F: fstp    st
0x8EB351: fld     dword ptr ds:0A2FAA8h
0x8EB357: movaps  xmm1, xmmword ptr [edi+0D0h]
0x8EB35E: fstp    [esp+10h+var_4]
0x8EB362: movss   xmm0, [esp+10h+var_4]
0x8EB368: movaps  xmm2, xmm0
0x8EB36B: shufps  xmm2, xmm0, 0
0x8EB36F: mulps   xmm2, xmm1
0x8EB372: movaps  xmmword ptr [edi+0D0h], xmm2
0x8EB379: fmul    dword ptr [edi+0CCh]
0x8EB37F: fsubr   dword ptr ds:0A2F948h
0x8EB385: fld     dword ptr ds:0A2FAA8h
0x8EB38B: fcomp   st(1)
0x8EB38D: fnstsw  ax
0x8EB38F: test    ah, 41h
0x8EB392: jnz     short loc_8EB39C
0x8EB394: fstp    st
0x8EB396: fld     dword ptr ds:0A2FAA8h
0x8EB39C: movaps  xmm1, xmmword ptr [edi+0E0h]
0x8EB3A3: fstp    [esp+10h+var_4]
0x8EB3A7: movss   xmm0, [esp+10h+var_4]
0x8EB3AD: mov     esi, [ebp+arg_4]
0x8EB3B0: movaps  xmm2, xmm0
0x8EB3B3: shufps  xmm2, xmm0, 0
0x8EB3B7: lea     ebx, [edi+10h]
0x8EB3BA: mulps   xmm2, xmm1
0x8EB3BD: lea     ecx, [esi+50h]
0x8EB3C0: push    ebx
0x8EB3C1: movaps  xmmword ptr [edi+0E0h], xmm2
0x8EB3C8: call    sub_8D2860
0x8EB3CD: mov     ecx, [ebp+arg_0]
0x8EB3D0: mov     byte ptr [esi], 0
0x8EB3D3: movaps  xmm0, xmmword ptr [edi+0F0h]
0x8EB3DA: movaps  xmmword ptr [esi+30h], xmm0
0x8EB3DE: movaps  xmm0, xmmword ptr [edi+0D0h]
0x8EB3E5: movaps  xmmword ptr [esi+10h], xmm0
0x8EB3E9: fld     dword ptr [ecx]
0x8EB3EB: fsub    dword ptr [ebx+4Ch]
0x8EB3EE: movaps  xmm1, xmmword ptr [ebx+50h]
0x8EB3F2: movaps  xmm3, xmmword ptr ds:0A6DFE0h
0x8EB3F9: fmul    dword ptr [ebx+5Ch]
0x8EB3FC: fstp    [esp+10h+var_4]
0x8EB400: movss   xmm0, [esp+10h+var_4]
0x8EB406: shufps  xmm0, xmm0, 0
0x8EB40A: subps   xmm3, xmm0
0x8EB40D: movaps  xmm2, xmm0
0x8EB410: mulps   xmm2, xmm1
0x8EB413: movaps  xmm1, xmmword ptr [ebx+40h]
0x8EB417: mulps   xmm3, xmm1
0x8EB41A: addps   xmm3, xmm2
0x8EB41D: movaps  xmmword ptr [esi+40h], xmm3
0x8EB421: movaps  xmm0, xmmword ptr [edi+0E0h]
0x8EB428: movaps  xmm2, xmmword ptr [esi+70h]
0x8EB42C: movaps  xmm3, xmmword ptr [esi+60h]
0x8EB430: movaps  xmm1, xmm0
0x8EB433: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8EB437: mulps   xmm2, xmm1
0x8EB43A: movaps  xmm1, xmm0
0x8EB43D: shufps  xmm1, xmm0, 55h ; 'U'
0x8EB441: mulps   xmm3, xmm1
0x8EB444: movaps  xmm1, xmm0
0x8EB447: shufps  xmm1, xmm0, 0
0x8EB44B: movaps  xmm0, xmmword ptr [esi+50h]
0x8EB44F: mulps   xmm0, xmm1
0x8EB452: addps   xmm0, xmm3
0x8EB455: addps   xmm0, xmm2
0x8EB458: movaps  xmmword ptr [esi+20h], xmm0
0x8EB45C: mov     byte ptr [esi+0Ch], 0
0x8EB460: movzx   edx, word ptr [edi+0BCh]
0x8EB467: mov     [esi+8], edx
0x8EB46A: movzx   eax, word ptr [edi+0BEh]
0x8EB471: mov     [esi+4], eax
0x8EB474: pop     edi
0x8EB475: lea     eax, [esi+80h]
0x8EB47B: pop     esi
0x8EB47C: pop     ebx
0x8EB47D: mov     esp, ebp
0x8EB47F: pop     ebp
0x8EB480: retn    8

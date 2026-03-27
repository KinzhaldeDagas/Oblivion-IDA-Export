0x8F3880: push    ebp
0x8F3881: mov     ebp, esp
0x8F3883: and     esp, 0FFFFFFF0h
0x8F3886: sub     esp, 0B4h
0x8F388C: push    ebx
0x8F388D: push    esi
0x8F388E: mov     esi, large fs:2Ch
0x8F3895: push    edi
0x8F3896: mov     edi, ds:0BA9DE4h
0x8F389C: mov     eax, [esi+edi*4]
0x8F389F: mov     edx, [eax+1A8h]
0x8F38A5: mov     ebx, ecx
0x8F38A7: mov     ecx, [eax+1A4h]
0x8F38AD: cmp     ecx, edx
0x8F38AF: jnb     short loc_8F38D6
0x8F38B1: mov     ecx, [eax+1A4h]
0x8F38B7: mov     dword ptr [ecx], offset aTtrccapsule; "TtrcCapsule"
0x8F38BD: rdtsc
0x8F38BF: mov     [esp+0C0h+var_B0], eax
0x8F38C3: mov     edx, [esp+0C0h+var_B0]
0x8F38C7: mov     eax, [esi+edi*4]
0x8F38CA: mov     [ecx+4], edx
0x8F38CD: add     ecx, 0Ch
0x8F38D0: mov     [eax+1A4h], ecx
0x8F38D6: lea     edx, [esp+0C0h+var_90]
0x8F38DA: push    edx
0x8F38DB: lea     eax, [ebx+20h]
0x8F38DE: push    eax
0x8F38DF: mov     eax, [ebp+arg_4]
0x8F38E2: lea     ecx, [ebx+10h]
0x8F38E5: push    ecx
0x8F38E6: push    eax
0x8F38E7: call    sub_8F37A0
0x8F38EC: mov     ecx, [ebp+arg_4]
0x8F38EF: movaps  xmm6, xmmword ptr [ecx]
0x8F38F2: movaps  xmm1, [esp+0D0h+var_90]
0x8F38F7: movaps  xmm0, xmm6
0x8F38FA: subps   xmm0, xmm1
0x8F38FD: mulps   xmm0, xmm0
0x8F3900: movaps  xmm1, xmm0
0x8F3903: shufps  xmm1, xmm0, 55h ; 'U'
0x8F3907: movaps  xmm2, xmm0
0x8F390A: addss   xmm1, xmm0
0x8F390E: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F3912: movaps  xmm0, xmm2
0x8F3915: addss   xmm0, xmm1
0x8F3919: movaps  [esp+0D0h+var_A0], xmm0
0x8F391E: sqrtss  xmm0, xmm0
0x8F3922: movss   dword ptr [esp+0D0h+var_A0], xmm0
0x8F3928: movaps  xmm0, [esp+0D0h+var_A0]
0x8F392D: lea     edx, [esp+0D0h+var_B0]
0x8F3931: movss   dword ptr [edx], xmm0
0x8F3935: fld     [esp+0D0h+var_B0]
0x8F3939: fcomp   dword ptr [ebx+0Ch]
0x8F393C: add     esp, 10h
0x8F393F: fnstsw  ax
0x8F3941: test    ah, 5
0x8F3944: jnp     loc_8F3E1B
0x8F394A: movaps  xmm1, xmmword ptr [ebx+10h]
0x8F394E: movaps  xmm7, xmmword ptr [ecx+10h]
0x8F3952: movaps  xmm0, xmmword ptr [ebx+20h]
0x8F3956: lea     edx, [esp+0C0h+var_50]
0x8F395A: push    edx
0x8F395B: lea     edx, [esp+0C4h+var_10]
0x8F3962: push    edx
0x8F3963: lea     edx, [esp+0C8h+var_A8]
0x8F3967: push    edx
0x8F3968: lea     edx, [esp+0CCh+var_A4]
0x8F396C: push    edx
0x8F396D: lea     edx, [esp+0D0h+var_AC]
0x8F3971: push    edx
0x8F3972: lea     edx, [esp+0D4h+var_A0]
0x8F3976: push    edx
0x8F3977: lea     eax, [ebx+10h]
0x8F397A: push    eax
0x8F397B: lea     eax, [esp+0DCh+var_70]
0x8F397F: push    eax
0x8F3980: movaps  [esp+0E0h+var_90], xmm0
0x8F3985: movaps  [esp+0E0h+var_60], xmm7
0x8F398D: subps   xmm0, xmm1
0x8F3990: subps   xmm7, xmm6
0x8F3993: push    ecx
0x8F3994: mov     [esp+0E4h+var_AC], 7F7FFFFFh
0x8F399C: movaps  [esp+0E4h+var_70], xmm7
0x8F39A1: movaps  [esp+0E4h+var_80], xmm1
0x8F39A6: movaps  [esp+0E4h+var_A0], xmm0
0x8F39AB: call    sub_8F35D0
0x8F39B0: fld     dword ptr [ebx+0Ch]
0x8F39B3: fld     st
0x8F39B5: add     esp, 24h
0x8F39B8: fmul    st, st(1)
0x8F39BA: fld     [esp+0C0h+var_AC]
0x8F39BE: fcompp
0x8F39C0: fnstsw  ax
0x8F39C2: fstp    st
0x8F39C4: test    ah, 41h
0x8F39C7: jz      loc_8F3E1B
0x8F39CD: movaps  xmm3, [esp+0C0h+var_A0]
0x8F39D2: movaps  xmm0, xmm3
0x8F39D5: mulps   xmm0, xmm3
0x8F39D8: movaps  xmm1, xmm0
0x8F39DB: shufps  xmm1, xmm0, 55h ; 'U'
0x8F39DF: movaps  xmm2, xmm0
0x8F39E2: addss   xmm1, xmm0
0x8F39E6: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F39EA: lea     ecx, [esp+0C0h+var_B0]
0x8F39EE: addss   xmm2, xmm1
0x8F39F2: movss   dword ptr [ecx], xmm2
0x8F39F6: fld     [esp+0C0h+var_B0]
0x8F39FA: fcomp   dword ptr ds:0A9B288h
0x8F3A00: fnstsw  ax
0x8F3A02: test    ah, 41h
0x8F3A05: jnz     loc_8F3A8D
0x8F3A0B: movaps  xmm1, xmm0
0x8F3A0E: shufps  xmm1, xmm0, 55h ; 'U'
0x8F3A12: addss   xmm1, xmm0
0x8F3A16: movaps  xmm2, xmm0
0x8F3A19: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8F3A1D: movaps  xmm0, xmm2
0x8F3A20: addss   xmm0, xmm1
0x8F3A24: movaps  [esp+0C0h+var_A0], xmm0
0x8F3A29: rsqrtss xmm1, xmm0
0x8F3A2D: movss   dword ptr [esp+0C0h+var_A0], xmm1
0x8F3A33: movaps  xmm1, [esp+0C0h+var_A0]
0x8F3A38: movaps  xmm2, xmm0
0x8F3A3B: mulss   xmm2, xmm1
0x8F3A3F: mulss   xmm2, xmm1
0x8F3A43: mov     [esp+0C0h+var_B0], 40400000h
0x8F3A4B: movss   xmm4, [esp+0C0h+var_B0]
0x8F3A51: subss   xmm4, xmm2
0x8F3A55: mov     [esp+0C0h+var_B0], 3F000000h
0x8F3A5D: movss   xmm2, [esp+0C0h+var_B0]
0x8F3A63: mulss   xmm2, xmm1
0x8F3A67: movaps  xmm1, xmm2
0x8F3A6A: mulss   xmm1, xmm4
0x8F3A6E: movaps  xmm2, xmm1
0x8F3A71: shufps  xmm2, xmm1, 0
0x8F3A75: lea     edx, [esp+0C0h+var_B0]
0x8F3A79: mulss   xmm0, xmm2
0x8F3A7D: movaps  xmm1, xmm2
0x8F3A80: movss   dword ptr [edx], xmm0
0x8F3A84: fld     [esp+0C0h+var_B0]
0x8F3A88: mulps   xmm1, xmm3
0x8F3A8B: jmp     short loc_8F3A96
0x8F3A8D: fld     dword ptr ds:0A2FAA8h
0x8F3A93: xorps   xmm1, xmm1
0x8F3A96: movaps  xmm0, xmm7
0x8F3A99: mulps   xmm0, xmm1
0x8F3A9C: movaps  xmm2, xmm0
0x8F3A9F: shufps  xmm2, xmm0, 55h ; 'U'
0x8F3AA3: addss   xmm2, xmm0
0x8F3AA7: movaps  xmm3, xmm0
0x8F3AAA: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F3AAE: addss   xmm3, xmm2
0x8F3AB2: lea     eax, [esp+0C0h+var_B0]
0x8F3AB6: movss   dword ptr [eax], xmm3
0x8F3ABA: fld     [esp+0C0h+var_B0]
0x8F3ABE: fchs
0x8F3AC0: mov     edx, [ebp+arg_8]
0x8F3AC3: fstp    [esp+0C0h+var_B0]
0x8F3AC7: movss   xmm0, [esp+0C0h+var_B0]
0x8F3ACD: fld     dword ptr [ebx+0Ch]
0x8F3AD0: movaps  xmm2, xmm0
0x8F3AD3: fld     st
0x8F3AD5: shufps  xmm2, xmm0, 0
0x8F3AD9: fmulp   st(1), st
0x8F3ADB: mulps   xmm2, xmm1
0x8F3ADE: addps   xmm7, xmm2
0x8F3AE1: movaps  xmm0, xmm7
0x8F3AE4: fsub    [esp+0C0h+var_AC]
0x8F3AE8: mulps   xmm0, xmm0
0x8F3AEB: movaps  xmm2, xmm0
0x8F3AEE: shufps  xmm2, xmm0, 55h ; 'U'
0x8F3AF2: fsqrt
0x8F3AF4: addss   xmm2, xmm0
0x8F3AF8: movaps  xmm3, xmm0
0x8F3AFB: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F3AFF: movaps  xmm0, xmm3
0x8F3B02: addss   xmm0, xmm2
0x8F3B06: movaps  [esp+0C0h+var_A0], xmm0
0x8F3B0B: rsqrtss xmm2, xmm0
0x8F3B0F: mov     [esp+0C0h+var_B0], 40400000h
0x8F3B17: movss   xmm3, [esp+0C0h+var_B0]
0x8F3B1D: movss   dword ptr [esp+0C0h+var_A0], xmm2
0x8F3B23: movaps  xmm2, [esp+0C0h+var_A0]
0x8F3B28: mov     [esp+0C0h+var_B0], 3F000000h
0x8F3B30: movss   xmm4, [esp+0C0h+var_B0]
0x8F3B36: movaps  [esp+0C0h+var_50], xmm4
0x8F3B3B: mulss   xmm0, xmm2
0x8F3B3F: movaps  [esp+0C0h+var_A0], xmm3
0x8F3B44: mulss   xmm0, xmm2
0x8F3B48: subss   xmm3, xmm0
0x8F3B4C: mulss   xmm4, xmm2
0x8F3B50: lea     ecx, [esp+0C0h+var_B0]
0x8F3B54: mulss   xmm4, xmm3
0x8F3B58: movss   dword ptr [ecx], xmm4
0x8F3B5C: fmul    [esp+0C0h+var_B0]
0x8F3B60: fsubr   [esp+0C0h+var_A4]
0x8F3B64: fst     [esp+0C0h+var_A4]
0x8F3B68: fcomp   dword ptr [edx+14h]
0x8F3B6B: fnstsw  ax
0x8F3B6D: test    ah, 1
0x8F3B70: jz      loc_8F3E19
0x8F3B76: movaps  xmm3, [esp+0C0h+var_80]
0x8F3B7B: mov     ecx, [esp+0C0h+var_A4]
0x8F3B7F: movaps  xmm0, xmm3
0x8F3B82: mulps   xmm0, xmm1
0x8F3B85: movaps  xmm2, xmm0
0x8F3B88: shufps  xmm2, xmm0, 55h ; 'U'
0x8F3B8C: addss   xmm2, xmm0
0x8F3B90: movaps  xmm4, xmm0
0x8F3B93: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8F3B97: addss   xmm4, xmm2
0x8F3B9B: mov     [esp+0C0h+var_AC], ecx
0x8F3B9F: movss   xmm0, [esp+0C0h+var_AC]
0x8F3BA5: shufps  xmm0, xmm0, 0
0x8F3BA9: lea     eax, [esp+0C0h+var_B0]
0x8F3BAD: movaps  xmm2, xmm0
0x8F3BB0: movss   dword ptr [eax], xmm4
0x8F3BB4: movaps  xmm4, [esp+0C0h+var_60]
0x8F3BB9: mulps   xmm2, xmm4
0x8F3BBC: movaps  xmm5, xmm2
0x8F3BBF: movaps  xmm2, xmmword ptr ds:0A6DFE0h
0x8F3BC6: movaps  xmm7, xmm2
0x8F3BC9: subps   xmm7, xmm0
0x8F3BCC: movaps  xmm0, xmm7
0x8F3BCF: mulps   xmm0, xmm6
0x8F3BD2: addps   xmm0, xmm5
0x8F3BD5: movaps  [esp+0C0h+var_70], xmm0
0x8F3BDA: mulps   xmm0, xmm1
0x8F3BDD: movaps  xmm5, xmm0
0x8F3BE0: shufps  xmm5, xmm0, 55h ; 'U'
0x8F3BE4: movaps  xmm7, xmm0
0x8F3BE7: addss   xmm5, xmm0
0x8F3BEB: shufps  xmm7, xmm0, 0AAh ; 'ª'
0x8F3BEF: lea     edx, [esp+0C0h+var_AC]
0x8F3BF3: addss   xmm7, xmm5
0x8F3BF7: movss   dword ptr [edx], xmm7
0x8F3BFB: fld     [esp+0C0h+var_AC]
0x8F3BFF: fsub    [esp+0C0h+var_B0]
0x8F3C03: fstp    [esp+0C0h+var_AC]
0x8F3C07: fld     [esp+0C0h+var_A4]
0x8F3C0B: fcomp   dword ptr ds:0A2FAA8h
0x8F3C11: fnstsw  ax
0x8F3C13: test    ah, 1
0x8F3C16: jnz     loc_8F3D41
0x8F3C1C: fld     [esp+0C0h+var_AC]
0x8F3C20: fcomp   dword ptr ds:0A2FAA8h
0x8F3C26: fnstsw  ax
0x8F3C28: test    ah, 41h
0x8F3C2B: jnz     loc_8F3D41
0x8F3C31: fld     [esp+0C0h+var_AC]
0x8F3C35: fcomp   st(1)
0x8F3C37: fnstsw  ax
0x8F3C39: test    ah, 5
0x8F3C3C: jp      loc_8F3D41
0x8F3C42: fld     [esp+0C0h+var_AC]
0x8F3C46: push    ecx
0x8F3C47: fdiv    st, st(1)
0x8F3C49: lea     ecx, [esp+0C4h+var_60]
0x8F3C4D: fstp    [esp+0C4h+var_C4]
0x8F3C50: fstp    st
0x8F3C52: call    sub_535AA0
0x8F3C57: movaps  xmm0, [esp+0C0h+var_60]
0x8F3C5C: shufps  xmm0, xmm0, 0
0x8F3C60: movaps  xmm1, xmm0
0x8F3C63: mulps   xmm1, [esp+0C0h+var_90]
0x8F3C68: movaps  xmm2, xmm1
0x8F3C6B: movaps  xmm1, xmmword ptr ds:0A6DFE0h
0x8F3C72: subps   xmm1, xmm0
0x8F3C75: mulps   xmm1, [esp+0C0h+var_80]
0x8F3C7A: addps   xmm1, xmm2
0x8F3C7D: mov     eax, [ebp+arg_8]
0x8F3C80: mov     ecx, [esp+0C0h+var_A4]
0x8F3C84: movaps  xmm0, xmm1
0x8F3C87: movaps  xmm1, [esp+0C0h+var_70]
0x8F3C8C: subps   xmm1, xmm0
0x8F3C8F: movaps  xmm0, xmm1
0x8F3C92: mulps   xmm0, xmm1
0x8F3C95: movaps  xmm2, xmm0
0x8F3C98: shufps  xmm2, xmm0, 55h ; 'U'
0x8F3C9C: addss   xmm2, xmm0
0x8F3CA0: movaps  xmm3, xmm0
0x8F3CA3: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8F3CA7: movaps  xmm0, xmm3
0x8F3CAA: addss   xmm0, xmm2
0x8F3CAE: movaps  [esp+0C0h+var_80], xmm0
0x8F3CB3: rsqrtss xmm2, xmm0
0x8F3CB7: movss   dword ptr [esp+0C0h+var_80], xmm2
0x8F3CBD: movaps  xmm2, [esp+0C0h+var_80]
0x8F3CC2: mulss   xmm0, xmm2
0x8F3CC6: mulss   xmm0, xmm2
0x8F3CCA: movaps  xmm3, xmm0
0x8F3CCD: movaps  xmm0, [esp+0C0h+var_A0]
0x8F3CD2: subss   xmm0, xmm3
0x8F3CD6: movaps  xmm3, xmm0
0x8F3CD9: movaps  xmm0, [esp+0C0h+var_50]
0x8F3CDE: mulss   xmm0, xmm2
0x8F3CE2: mulss   xmm0, xmm3
0x8F3CE6: movaps  xmm2, xmm0
0x8F3CE9: shufps  xmm2, xmm0, 0
0x8F3CED: mov     [eax+14h], ecx
0x8F3CF0: mov     dword ptr [eax+10h], 0FFFFFFFFh
0x8F3CF7: mulps   xmm2, xmm1
0x8F3CFA: movaps  xmmword ptr [eax], xmm2
0x8F3CFD: mov     eax, [esi+edi*4]
0x8F3D00: mov     edx, [eax+1A4h]
0x8F3D06: cmp     edx, [eax+1A8h]
0x8F3D0C: jnb     short loc_8F3D32
0x8F3D0E: mov     esi, eax
0x8F3D10: mov     ecx, [esi+1A4h]
0x8F3D16: mov     dword ptr [ecx], offset aEt; "Et"
0x8F3D1C: rdtsc
0x8F3D1E: mov     [esp+0C0h+var_B0], eax
0x8F3D22: mov     eax, [esp+0C0h+var_B0]
0x8F3D26: mov     [ecx+4], eax
0x8F3D29: add     ecx, 0Ch
0x8F3D2C: mov     [esi+1A4h], ecx
0x8F3D32: mov     eax, [ebp+arg_0]
0x8F3D35: mov     byte ptr [eax], 1
0x8F3D38: pop     edi
0x8F3D39: pop     esi
0x8F3D3A: pop     ebx
0x8F3D3B: mov     esp, ebp
0x8F3D3D: pop     ebp
0x8F3D3E: retn    0Ch
0x8F3D41: movaps  xmm0, xmm6
0x8F3D44: mulps   xmm0, xmm1
0x8F3D47: movaps  xmm1, xmm0
0x8F3D4A: shufps  xmm1, xmm0, 55h ; 'U'
0x8F3D4E: addss   xmm1, xmm0
0x8F3D52: movaps  xmm5, xmm0
0x8F3D55: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F3D59: addss   xmm5, xmm1
0x8F3D5D: lea     ecx, [esp+0C0h+var_A8]
0x8F3D61: movss   dword ptr [ecx], xmm5
0x8F3D65: fld     [esp+0C0h+var_A8]
0x8F3D69: fsub    [esp+0C0h+var_B0]
0x8F3D6D: movaps  xmm1, [esp+0C0h+var_90]
0x8F3D72: lea     edx, [esp+0C0h+var_A8]
0x8F3D76: fdiv    st, st(1)
0x8F3D78: fstp    [esp+0C0h+var_A8]
0x8F3D7C: movss   xmm0, [esp+0C0h+var_A8]
0x8F3D82: shufps  xmm0, xmm0, 0
0x8F3D86: subps   xmm2, xmm0
0x8F3D89: fstp    st
0x8F3D8B: movaps  xmm5, xmm0
0x8F3D8E: mulps   xmm2, xmm3
0x8F3D91: mulps   xmm5, xmm1
0x8F3D94: addps   xmm2, xmm5
0x8F3D97: movaps  xmm0, xmm6
0x8F3D9A: subps   xmm0, xmm2
0x8F3D9D: mulps   xmm0, xmm0
0x8F3DA0: movaps  xmm2, xmm0
0x8F3DA3: shufps  xmm2, xmm0, 55h ; 'U'
0x8F3DA7: movaps  xmm5, xmm0
0x8F3DAA: addss   xmm2, xmm0
0x8F3DAE: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8F3DB2: movaps  xmm0, xmm5
0x8F3DB5: addss   xmm0, xmm2
0x8F3DB9: movaps  [esp+0C0h+var_90], xmm0
0x8F3DBE: sqrtss  xmm0, xmm0
0x8F3DC2: movss   dword ptr [esp+0C0h+var_90], xmm0
0x8F3DC8: movaps  xmm0, [esp+0C0h+var_90]
0x8F3DCD: movss   dword ptr [edx], xmm0
0x8F3DD1: fld     [esp+0C0h+var_A8]
0x8F3DD5: fcomp   dword ptr [ebx+0Ch]
0x8F3DD8: fnstsw  ax
0x8F3DDA: test    ah, 41h
0x8F3DDD: jnz     short loc_8F3DF0
0x8F3DDF: fld     [esp+0C0h+var_A4]
0x8F3DE3: fcomp   dword ptr ds:0A2FAA8h
0x8F3DE9: fnstsw  ax
0x8F3DEB: test    ah, 5
0x8F3DEE: jnp     short loc_8F3E1B
0x8F3DF0: fld     [esp+0C0h+var_AC]
0x8F3DF4: xor     eax, eax
0x8F3DF6: fcomp   dword ptr ds:0A2FAA8h
0x8F3DFC: mov     [esp+0C0h+var_20], eax
0x8F3E03: mov     [esp+0C0h+var_1C], eax
0x8F3E0A: fnstsw  ax
0x8F3E0C: test    ah, 41h
0x8F3E0F: jp      short loc_8F3E5F
0x8F3E11: subps   xmm6, xmm3
0x8F3E14: subps   xmm4, xmm3
0x8F3E17: jmp     short loc_8F3E65
0x8F3E19: fstp    st
0x8F3E1B: mov     eax, [esi+edi*4]
0x8F3E1E: mov     ecx, [eax+1A4h]
0x8F3E24: cmp     ecx, [eax+1A8h]
0x8F3E2A: jnb     short loc_8F3E50
0x8F3E2C: mov     esi, eax
0x8F3E2E: mov     ecx, [esi+1A4h]
0x8F3E34: mov     dword ptr [ecx], offset aEt; "Et"
0x8F3E3A: rdtsc
0x8F3E3C: mov     [esp+0C0h+var_A8], eax
0x8F3E40: mov     edx, [esp+0C0h+var_A8]
0x8F3E44: mov     [ecx+4], edx
0x8F3E47: add     ecx, 0Ch
0x8F3E4A: mov     [esi+1A4h], ecx
0x8F3E50: mov     eax, [ebp+arg_0]
0x8F3E53: mov     byte ptr [eax], 0
0x8F3E56: pop     edi
0x8F3E57: pop     esi
0x8F3E58: pop     ebx
0x8F3E59: mov     esp, ebp
0x8F3E5B: pop     ebp
0x8F3E5C: retn    0Ch
0x8F3E5F: subps   xmm6, xmm1
0x8F3E62: subps   xmm4, xmm1
0x8F3E65: mov     eax, [ebx+0Ch]
0x8F3E68: push    eax
0x8F3E69: lea     ecx, [esp+0C4h+var_A0]
0x8F3E6D: movaps  [esp+0C4h+var_40], xmm6
0x8F3E75: movaps  [esp+0C4h+var_30], xmm4
0x8F3E7D: call    sub_8ED410
0x8F3E82: mov     eax, [esi+edi*4]
0x8F3E85: mov     ecx, [eax+1A4h]
0x8F3E8B: cmp     ecx, [eax+1A8h]
0x8F3E91: jnb     short loc_8F3EB7
0x8F3E93: mov     esi, eax
0x8F3E95: mov     ecx, [esi+1A4h]
0x8F3E9B: mov     dword ptr [ecx], offset aEt; "Et"
0x8F3EA1: rdtsc
0x8F3EA3: mov     [esp+0C0h+var_A8], eax
0x8F3EA7: mov     edx, [esp+0C0h+var_A8]
0x8F3EAB: mov     [ecx+4], edx
0x8F3EAE: add     ecx, 0Ch
0x8F3EB1: mov     [esi+1A4h], ecx
0x8F3EB7: mov     eax, [ebp+arg_8]
0x8F3EBA: mov     esi, [ebp+arg_0]
0x8F3EBD: push    eax
0x8F3EBE: lea     ecx, [esp+0C4h+var_40]
0x8F3EC5: push    ecx
0x8F3EC6: push    esi
0x8F3EC7: lea     ecx, [esp+0CCh+var_A0]
0x8F3ECB: call    sub_8ED4E0
0x8F3ED0: pop     edi
0x8F3ED1: mov     eax, esi
0x8F3ED3: pop     esi
0x8F3ED4: pop     ebx
0x8F3ED5: mov     esp, ebp
0x8F3ED7: pop     ebp
0x8F3ED8: retn    0Ch

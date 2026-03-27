0x8FB040: push    ebp
0x8FB041: mov     ebp, esp
0x8FB043: and     esp, 0FFFFFFF0h
0x8FB046: sub     esp, 64h
0x8FB049: mov     ecx, large fs:2Ch
0x8FB050: mov     edx, ds:0BA9DE4h
0x8FB056: mov     eax, [ecx+edx*4]
0x8FB059: push    ebx
0x8FB05A: push    esi
0x8FB05B: mov     esi, [eax+1A4h]
0x8FB061: push    edi
0x8FB062: cmp     esi, [eax+1A8h]
0x8FB068: jnb     short loc_8FB08E
0x8FB06A: mov     esi, eax
0x8FB06C: mov     ecx, [esi+1A4h]
0x8FB072: mov     dword ptr [ecx], offset aTtspherebox; "TtSphereBox"
0x8FB078: rdtsc
0x8FB07A: mov     [esp+70h+var_54], eax
0x8FB07E: mov     eax, [esp+70h+var_54]
0x8FB082: mov     [ecx+4], eax
0x8FB085: add     ecx, 0Ch
0x8FB088: mov     [esi+1A4h], ecx
0x8FB08E: mov     edi, [ebp+arg_0]
0x8FB091: mov     ebx, [edi+8]
0x8FB094: mov     esi, [ebp+arg_4]
0x8FB097: mov     ecx, [esi+8]
0x8FB09A: add     ebx, 30h ; '0'
0x8FB09D: push    ebx
0x8FB09E: push    ecx
0x8FB09F: lea     ecx, [esp+78h+var_40]
0x8FB0A3: mov     [esp+78h+var_10], edi
0x8FB0A7: mov     [esp+78h+var_C], esi
0x8FB0AB: call    sub_88FD10
0x8FB0B0: movaps  xmm1, xmmword ptr ds:0A372D0h
0x8FB0B7: movaps  xmm3, [esp+70h+var_40]
0x8FB0BC: mov     ecx, [esi]
0x8FB0BE: mov     edi, [edi]
0x8FB0C0: movaps  xmm0, xmm3
0x8FB0C3: andps   xmm0, xmm1
0x8FB0C6: movaps  xmm1, xmmword ptr [ecx+10h]
0x8FB0CA: movaps  xmm2, xmm0
0x8FB0CD: minps   xmm2, xmm1
0x8FB0D0: subps   xmm2, xmm0
0x8FB0D3: movmskps edx, xmm2
0x8FB0D6: test    dl, 7
0x8FB0D9: movaps  [esp+70h+var_50], xmm0
0x8FB0DE: jz      loc_8FB1D3
0x8FB0E4: fld     dword ptr [ecx+0Ch]
0x8FB0E7: mov     ecx, [ebp+arg_8]
0x8FB0EA: fadd    dword ptr [edi+0Ch]
0x8FB0ED: movaps  xmm0, xmm2
0x8FB0F0: mulps   xmm0, xmm2
0x8FB0F3: movaps  xmm1, xmm0
0x8FB0F6: shufps  xmm1, xmm0, 55h ; 'U'
0x8FB0FA: addss   xmm1, xmm0
0x8FB0FE: movaps  xmm4, xmm0
0x8FB101: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8FB105: movaps  xmm0, xmm4
0x8FB108: addss   xmm0, xmm1
0x8FB10C: movaps  [esp+70h+var_50], xmm0
0x8FB111: rsqrtss xmm1, xmm0
0x8FB115: movss   dword ptr [esp+70h+var_50], xmm1
0x8FB11B: movaps  xmm1, [esp+70h+var_50]
0x8FB120: movaps  xmm4, xmm0
0x8FB123: mulss   xmm4, xmm1
0x8FB127: mulss   xmm4, xmm1
0x8FB12B: mov     [esp+70h+var_54], 40400000h
0x8FB133: movss   xmm5, [esp+70h+var_54]
0x8FB139: subss   xmm5, xmm4
0x8FB13D: mov     [esp+70h+var_54], 3F000000h
0x8FB145: movss   xmm4, [esp+70h+var_54]
0x8FB14B: mulss   xmm4, xmm1
0x8FB14F: movaps  xmm1, xmm4
0x8FB152: mulss   xmm1, xmm5
0x8FB156: lea     eax, [esp+70h+var_54]
0x8FB15A: shufps  xmm1, xmm1, 0
0x8FB15E: mulss   xmm0, xmm1
0x8FB162: movss   dword ptr [eax], xmm0
0x8FB166: fsubr   [esp+70h+var_54]
0x8FB16A: fld     st
0x8FB16C: fcomp   dword ptr [ecx+8]
0x8FB16F: fnstsw  ax
0x8FB171: test    ah, 41h
0x8FB174: jz      loc_8FB2CE
0x8FB17A: movaps  xmm0, xmmword ptr ds:0A965C0h
0x8FB181: mov     esi, [esi+8]
0x8FB184: movaps  xmm4, xmmword ptr ds:0A965C0h
0x8FB18B: andps   xmm3, xmm0
0x8FB18E: mulps   xmm1, xmm2
0x8FB191: movaps  xmm2, xmmword ptr [esi+20h]
0x8FB195: xorps   xmm1, xmm3
0x8FB198: movaps  xmm3, xmmword ptr [esi+10h]
0x8FB19C: movaps  xmm0, xmm1
0x8FB19F: xorps   xmm0, xmm4
0x8FB1A2: movaps  xmm1, xmm0
0x8FB1A5: shufps  xmm1, xmm0, 0AAh ; 'ª'
0x8FB1A9: mulps   xmm2, xmm1
0x8FB1AC: movaps  xmm1, xmm0
0x8FB1AF: shufps  xmm1, xmm0, 55h ; 'U'
0x8FB1B3: mulps   xmm3, xmm1
0x8FB1B6: movaps  xmm1, xmm0
0x8FB1B9: shufps  xmm1, xmm0, 0
0x8FB1BD: movaps  xmm0, xmmword ptr [esi]
0x8FB1C0: mulps   xmm0, xmm1
0x8FB1C3: addps   xmm0, xmm3
0x8FB1C6: addps   xmm0, xmm2
0x8FB1C9: movaps  [esp+70h+var_20], xmm0
0x8FB1CE: jmp     loc_8FB295
0x8FB1D3: fld     dword ptr [esp+70h+var_50]
0x8FB1D7: mov     edx, [esi+8]
0x8FB1DA: fsub    dword ptr [ecx+10h]
0x8FB1DD: fstp    [esp+70h+var_58]
0x8FB1E1: fld     dword ptr [esp+70h+var_50+4]
0x8FB1E5: fsub    dword ptr [ecx+14h]
0x8FB1E8: fstp    [esp+70h+var_54]
0x8FB1EC: fld     dword ptr [esp+70h+var_50+8]
0x8FB1F0: fsub    dword ptr [ecx+18h]
0x8FB1F3: fld     [esp+70h+var_58]
0x8FB1F7: fcomp   [esp+70h+var_54]
0x8FB1FB: fnstsw  ax
0x8FB1FD: test    ah, 41h
0x8FB200: jnz     short loc_8FB229
0x8FB202: fld     [esp+70h+var_58]
0x8FB206: fcomp   st(1)
0x8FB208: fnstsw  ax
0x8FB20A: test    ah, 41h
0x8FB20D: jnz     short loc_8FB254
0x8FB20F: movaps  xmm0, xmmword ptr [edx]
0x8FB212: fstp    st
0x8FB214: fld     dword ptr [esp+70h+var_20+0Ch]
0x8FB218: movaps  [esp+70h+var_20], xmm0
0x8FB21D: fstp    dword ptr [esp+70h+var_20+0Ch]
0x8FB221: xor     eax, eax
0x8FB223: fld     [esp+70h+var_58]
0x8FB227: jmp     short loc_8FB26A
0x8FB229: fld     [esp+70h+var_54]
0x8FB22D: fcomp   st(1)
0x8FB22F: fnstsw  ax
0x8FB231: test    ah, 41h
0x8FB234: jnz     short loc_8FB254
0x8FB236: movaps  xmm0, xmmword ptr [edx+10h]
0x8FB23A: fstp    st
0x8FB23C: fld     dword ptr [esp+70h+var_20+0Ch]
0x8FB240: movaps  [esp+70h+var_20], xmm0
0x8FB245: fstp    dword ptr [esp+70h+var_20+0Ch]
0x8FB249: mov     eax, 1
0x8FB24E: fld     [esp+70h+var_54]
0x8FB252: jmp     short loc_8FB26A
0x8FB254: movaps  xmm0, xmmword ptr [edx+20h]
0x8FB258: fld     dword ptr [esp+70h+var_20+0Ch]
0x8FB25C: movaps  [esp+70h+var_20], xmm0
0x8FB261: fstp    dword ptr [esp+70h+var_20+0Ch]
0x8FB265: mov     eax, 2
0x8FB26A: fld     dword ptr [esp+eax*4+70h+var_40]
0x8FB26E: movaps  xmm0, [esp+70h+var_20]
0x8FB273: fcomp   dword ptr ds:0A2FAA8h
0x8FB279: fnstsw  ax
0x8FB27B: test    ah, 5
0x8FB27E: jp      short loc_8FB28F
0x8FB280: movaps  xmm1, xmmword ptr ds:0A965C0h
0x8FB287: xorps   xmm0, xmm1
0x8FB28A: movaps  [esp+70h+var_20], xmm0
0x8FB28F: fsub    dword ptr [ecx+0Ch]
0x8FB292: fsub    dword ptr [edi+0Ch]
0x8FB295: mov     ecx, [ebp+arg_C]
0x8FB298: fld     st
0x8FB29A: mov     eax, [ecx]
0x8FB29C: fchs
0x8FB29E: fsub    dword ptr [edi+0Ch]
0x8FB2A1: lea     edx, [esp+70h+var_30]
0x8FB2A5: push    edx
0x8FB2A6: fstp    [esp+74h+var_54]
0x8FB2AA: movss   xmm1, [esp+74h+var_54]
0x8FB2B0: movaps  xmm2, xmm1
0x8FB2B3: shufps  xmm2, xmm1, 0
0x8FB2B7: mulps   xmm2, xmm0
0x8FB2BA: movaps  xmm0, xmmword ptr [ebx]
0x8FB2BD: fstp    dword ptr [esp+74h+var_20+0Ch]
0x8FB2C1: addps   xmm0, xmm2
0x8FB2C4: movaps  [esp+74h+var_30], xmm0
0x8FB2C9: call    dword ptr [eax+4]
0x8FB2CC: jmp     short loc_8FB2D0
0x8FB2CE: fstp    st
0x8FB2D0: mov     ecx, large fs:2Ch
0x8FB2D7: mov     edx, ds:0BA9DE4h
0x8FB2DD: mov     eax, [ecx+edx*4]
0x8FB2E0: mov     esi, [eax+1A4h]
0x8FB2E6: cmp     esi, [eax+1A8h]
0x8FB2EC: jnb     short loc_8FB312
0x8FB2EE: mov     esi, eax
0x8FB2F0: mov     ecx, [esi+1A4h]
0x8FB2F6: mov     dword ptr [ecx], offset aEt; "Et"
0x8FB2FC: rdtsc
0x8FB2FE: mov     [esp+70h+var_54], eax
0x8FB302: mov     eax, [esp+70h+var_54]
0x8FB306: mov     [ecx+4], eax
0x8FB309: add     ecx, 0Ch
0x8FB30C: mov     [esi+1A4h], ecx
0x8FB312: pop     edi
0x8FB313: pop     esi
0x8FB314: pop     ebx
0x8FB315: mov     esp, ebp
0x8FB317: pop     ebp
0x8FB318: retn

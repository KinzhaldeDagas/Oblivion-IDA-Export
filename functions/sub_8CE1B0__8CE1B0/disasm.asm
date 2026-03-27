0x8CE1B0: push    ebp
0x8CE1B1: mov     ebp, esp
0x8CE1B3: and     esp, 0FFFFFFF0h
0x8CE1B6: sub     esp, 44h
0x8CE1B9: mov     edx, ds:0BA9DE4h
0x8CE1BF: push    ebx
0x8CE1C0: push    esi
0x8CE1C1: push    edi
0x8CE1C2: mov     edi, large fs:2Ch
0x8CE1C9: mov     eax, [edi+edx*4]
0x8CE1CC: mov     esi, [eax+1A4h]
0x8CE1D2: cmp     esi, [eax+1A8h]
0x8CE1D8: jnb     short loc_8CE1FE
0x8CE1DA: mov     ebx, eax
0x8CE1DC: mov     esi, [ebx+1A4h]
0x8CE1E2: mov     dword ptr [esi], offset aTtrcbox; "TtrcBox"
0x8CE1E8: rdtsc
0x8CE1EA: mov     [esp+50h+var_34], eax
0x8CE1EE: mov     eax, [esp+50h+var_34]
0x8CE1F2: mov     [esi+4], eax
0x8CE1F5: add     esi, 0Ch
0x8CE1F8: mov     [ebx+1A4h], esi
0x8CE1FE: mov     edx, [ecx+0Ch]
0x8CE201: movaps  xmm0, xmmword ptr [ecx+10h]
0x8CE205: movaps  xmm2, xmmword ptr ds:0A965C0h
0x8CE20C: mov     esi, [ebp+arg_4]
0x8CE20F: mov     [esp+50h+var_34], edx
0x8CE213: movss   xmm1, [esp+50h+var_34]
0x8CE219: shufps  xmm1, xmm1, 0
0x8CE21D: addps   xmm0, xmm1
0x8CE220: movaps  xmm1, xmm0
0x8CE223: xorps   xmm1, xmm2
0x8CE226: movaps  xmm2, xmmword ptr [esi]
0x8CE229: movaps  xmm3, xmm0
0x8CE22C: cmpleps xmm3, xmm2
0x8CE230: cmpleps xmm2, xmm1
0x8CE234: movmskps ebx, xmm2
0x8CE237: movaps  xmm2, xmmword ptr [esi+10h]
0x8CE23B: cmpleps xmm0, xmm2
0x8CE23F: movmskps ecx, xmm3
0x8CE242: movmskps eax, xmm0
0x8CE245: cmpleps xmm2, xmm1
0x8CE249: and     ecx, 7
0x8CE24C: and     eax, 7
0x8CE24F: movmskps edx, xmm2
0x8CE252: and     edx, 7
0x8CE255: and     ebx, 7
0x8CE258: test    ecx, eax
0x8CE25A: movaps  [esp+50h+var_10], xmm1
0x8CE25F: mov     [esp+50h+var_30], edx
0x8CE263: jnz     loc_8CE3FC
0x8CE269: test    ebx, edx
0x8CE26B: jnz     loc_8CE3FC
0x8CE271: mov     edx, ebx
0x8CE273: or      edx, ecx
0x8CE275: jz      loc_8CE3FC
0x8CE27B: fld     dword ptr ds:0A2F948h
0x8CE281: or      eax, ecx
0x8CE283: mov     edx, eax
0x8CE285: mov     eax, [ebp+arg_8]
0x8CE288: mov     edi, ecx
0x8CE28A: mov     ecx, [eax+14h]
0x8CE28D: mov     [esp+50h+var_2C], 1
0x8CE295: mov     [esp+50h+var_28], 2
0x8CE29D: mov     [esp+50h+var_24], 4
0x8CE2A5: mov     [esp+50h+var_3C], 0
0x8CE2AD: mov     [esp+50h+var_38], ecx
0x8CE2B1: mov     [esp+50h+var_34], 1
0x8CE2B9: lea     esp, [esp+0]
0x8CE2C0: mov     ecx, 8
0x8CE2C5: mov     eax, [esp+ecx+50h+var_2C]
0x8CE2C9: test    edx, eax
0x8CE2CB: jz      short loc_8CE32F
0x8CE2CD: test    edi, eax
0x8CE2CF: fld     dword ptr [esp+ecx+50h+var_10]
0x8CE2D3: fld     st(1)
0x8CE2D5: fmul    dword ptr [ecx+esi]
0x8CE2D8: fadd    st, st(1)
0x8CE2DA: fld     st(2)
0x8CE2DC: fmul    dword ptr [ecx+esi+10h]
0x8CE2E0: faddp   st(2), st
0x8CE2E2: fxch    st(1)
0x8CE2E4: fsubr   st, st(1)
0x8CE2E6: fdivp   st(1), st
0x8CE2E8: jz      short loc_8CE307
0x8CE2EA: fcom    [esp+50h+var_3C]
0x8CE2EE: fnstsw  ax
0x8CE2F0: test    ah, 1
0x8CE2F3: jnz     short loc_8CE31A
0x8CE2F5: fstp    [esp+50h+var_3C]
0x8CE2F9: xorps   xmm0, xmm0
0x8CE2FC: movaps  [esp+50h+var_20], xmm0
0x8CE301: fst     dword ptr [esp+ecx+50h+var_20]
0x8CE305: jmp     short loc_8CE31C
0x8CE307: fld     [esp+50h+var_38]
0x8CE30B: fcomp   st(1)
0x8CE30D: fnstsw  ax
0x8CE30F: test    ah, 5
0x8CE312: jnp     short loc_8CE31A
0x8CE314: fstp    [esp+50h+var_38]
0x8CE318: jmp     short loc_8CE31C
0x8CE31A: fstp    st
0x8CE31C: fld     [esp+50h+var_38]
0x8CE320: fcomp   [esp+50h+var_3C]
0x8CE324: fnstsw  ax
0x8CE326: test    ah, 5
0x8CE329: jnp     loc_8CE3BF
0x8CE32F: sub     ecx, 4
0x8CE332: jns     short loc_8CE2C5
0x8CE334: mov     edx, [esp+50h+var_30]
0x8CE338: fstp    st
0x8CE33A: mov     eax, [esp+50h+var_34]
0x8CE33E: fld     dword ptr ds:0A30634h
0x8CE344: or      edx, ebx
0x8CE346: dec     eax
0x8CE347: mov     edi, ebx
0x8CE349: mov     [esp+50h+var_34], eax
0x8CE34D: jns     loc_8CE2C0
0x8CE353: mov     eax, [ebp+arg_8]
0x8CE356: fstp    st
0x8CE358: mov     ecx, [esp+50h+var_3C]
0x8CE35C: movaps  xmm0, [esp+50h+var_20]
0x8CE361: mov     edx, ds:0BA9DE4h
0x8CE367: mov     [eax+14h], ecx
0x8CE36A: mov     ecx, large fs:2Ch
0x8CE371: movaps  xmmword ptr [eax], xmm0
0x8CE374: mov     dword ptr [eax+10h], 0FFFFFFFFh
0x8CE37B: mov     eax, [ecx+edx*4]
0x8CE37E: mov     esi, [eax+1A4h]
0x8CE384: cmp     esi, [eax+1A8h]
0x8CE38A: jnb     short loc_8CE3B0
0x8CE38C: mov     esi, eax
0x8CE38E: mov     ecx, [esi+1A4h]
0x8CE394: mov     dword ptr [ecx], offset aEt; "Et"
0x8CE39A: rdtsc
0x8CE39C: mov     [esp+50h+var_30], eax
0x8CE3A0: mov     edx, [esp+50h+var_30]
0x8CE3A4: mov     [ecx+4], edx
0x8CE3A7: add     ecx, 0Ch
0x8CE3AA: mov     [esi+1A4h], ecx
0x8CE3B0: mov     eax, [ebp+arg_0]
0x8CE3B3: mov     byte ptr [eax], 1
0x8CE3B6: pop     edi
0x8CE3B7: pop     esi
0x8CE3B8: pop     ebx
0x8CE3B9: mov     esp, ebp
0x8CE3BB: pop     ebp
0x8CE3BC: retn    0Ch
0x8CE3BF: mov     ecx, large fs:2Ch
0x8CE3C6: fstp    st
0x8CE3C8: mov     edx, ds:0BA9DE4h
0x8CE3CE: mov     eax, [ecx+edx*4]
0x8CE3D1: mov     esi, [eax+1A4h]
0x8CE3D7: cmp     esi, [eax+1A8h]
0x8CE3DD: jnb     short loc_8CE437
0x8CE3DF: mov     esi, eax
0x8CE3E1: mov     ecx, [esi+1A4h]
0x8CE3E7: mov     dword ptr [ecx], offset aEt; "Et"
0x8CE3ED: rdtsc
0x8CE3EF: mov     [esp+50h+var_30], eax
0x8CE3F3: mov     edx, [esp+50h+var_30]
0x8CE3F7: mov     [ecx+4], edx
0x8CE3FA: jmp     short loc_8CE42E
0x8CE3FC: mov     ecx, ds:0BA9DE4h
0x8CE402: mov     eax, [edi+ecx*4]
0x8CE405: mov     edx, [eax+1A4h]
0x8CE40B: cmp     edx, [eax+1A8h]
0x8CE411: jnb     short loc_8CE437
0x8CE413: mov     esi, eax
0x8CE415: mov     ecx, [esi+1A4h]
0x8CE41B: mov     dword ptr [ecx], offset aEt; "Et"
0x8CE421: rdtsc
0x8CE423: mov     [esp+50h+var_30], eax
0x8CE427: mov     eax, [esp+50h+var_30]
0x8CE42B: mov     [ecx+4], eax
0x8CE42E: add     ecx, 0Ch
0x8CE431: mov     [esi+1A4h], ecx
0x8CE437: mov     eax, [ebp+arg_0]
0x8CE43A: pop     edi
0x8CE43B: pop     esi
0x8CE43C: mov     byte ptr [eax], 0
0x8CE43F: pop     ebx
0x8CE440: mov     esp, ebp
0x8CE442: pop     ebp
0x8CE443: retn    0Ch

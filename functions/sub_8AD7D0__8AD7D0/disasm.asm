0x8AD7D0: push    ebp
0x8AD7D1: mov     ebp, esp
0x8AD7D3: and     esp, 0FFFFFFF0h
0x8AD7D6: sub     esp, 134h
0x8AD7DC: mov     edx, ds:0BA9DE4h
0x8AD7E2: push    ebx
0x8AD7E3: push    esi
0x8AD7E4: mov     esi, ecx
0x8AD7E6: mov     ecx, large fs:2Ch
0x8AD7ED: mov     eax, [ecx+edx*4]
0x8AD7F0: mov     ebx, [eax+1A8h]
0x8AD7F6: push    edi
0x8AD7F7: mov     edi, [eax+1A4h]
0x8AD7FD: cmp     edi, ebx
0x8AD7FF: jnb     short loc_8AD82C
0x8AD801: mov     edi, eax
0x8AD803: mov     ecx, [edi+1A4h]
0x8AD809: mov     dword ptr [ecx], offset aLtupdatecharac; "LtupdateCharacter"
0x8AD80F: mov     dword ptr [ecx+0Ch], offset aCast_0; "Cast"
0x8AD816: rdtsc
0x8AD818: mov     [esp+140h+var_114], eax
0x8AD81C: mov     eax, [esp+140h+var_114]
0x8AD820: mov     [ecx+4], eax
0x8AD823: add     ecx, 10h
0x8AD826: mov     [edi+1A4h], ecx
0x8AD82C: mov     eax, [ebp+arg_0]
0x8AD82F: fld     dword ptr [eax+8]
0x8AD832: mov     ecx, [esi+30h]
0x8AD835: mov     edx, [ecx+1Ch]
0x8AD838: fst     [esp+140h+var_130]
0x8AD83C: fld     dword ptr [esi+5Ch]
0x8AD83F: movaps  xmm0, xmmword ptr [edx+30h]
0x8AD843: fadd    dword ptr [esi+58h]
0x8AD846: movaps  [esp+140h+var_110], xmm0
0x8AD84B: mov     [esp+140h+var_E0], 3C23D70Ah
0x8AD853: mov     [esp+140h+var_114], 0
0x8AD85B: fstp    [esp+140h+var_E0+4]
0x8AD85F: fcomp   dword ptr ds:0A97BCCh
0x8AD865: fnstsw  ax
0x8AD867: test    ah, 41h
0x8AD86A: jnz     loc_8AE071
0x8AD870: jmp     short loc_8AD880
0x8AD872: movaps  xmm0, [esp+140h+var_110]
0x8AD877: jmp     short loc_8AD880
0x8AD879: align 10h
0x8AD880: mov     ecx, [esp+140h+var_114]
0x8AD884: cmp     ecx, ds:0B2EFB8h
0x8AD88A: jge     loc_8AE071
0x8AD890: mov     ecx, large fs:2Ch
0x8AD897: mov     edx, ds:0BA9DE4h
0x8AD89D: mov     eax, [ecx+edx*4]
0x8AD8A0: mov     edi, [eax+1A4h]
0x8AD8A6: cmp     edi, [eax+1A8h]
0x8AD8AC: jnb     short loc_8AD8DD
0x8AD8AE: mov     edi, eax
0x8AD8B0: mov     ecx, [edi+1A4h]
0x8AD8B6: mov     dword ptr [ecx], offset aStinitialcast; "StInitialCast"
0x8AD8BC: rdtsc
0x8AD8BE: mov     [esp+140h+var_C0], eax
0x8AD8C5: mov     edx, [esp+140h+var_C0]
0x8AD8CC: mov     [ecx+4], edx
0x8AD8CF: movaps  xmm0, [esp+140h+var_110]
0x8AD8D4: add     ecx, 0Ch
0x8AD8D7: mov     [edi+1A4h], ecx
0x8AD8DD: mov     ebx, [ebp+arg_C]
0x8AD8E0: movaps  xmm1, xmmword ptr [esi+20h]
0x8AD8E4: mov     edi, [ebp+arg_8]
0x8AD8E7: push    ebx
0x8AD8E8: xor     eax, eax
0x8AD8EA: mov     [edi+14h], eax
0x8AD8ED: mov     ecx, 7F7FFFFFh
0x8AD8F2: mov     [edi+4], ecx
0x8AD8F5: push    edi
0x8AD8F6: lea     edx, [esp+148h+var_F0]
0x8AD8FA: mov     [ebx+14h], eax
0x8AD8FD: mov     [ebx+4], ecx
0x8AD900: mov     ecx, [esi+30h]
0x8AD903: push    edx
0x8AD904: addps   xmm0, xmm1
0x8AD907: lea     edx, [esp+14Ch+var_110]
0x8AD90B: movaps  [esp+14Ch+var_F0], xmm0
0x8AD910: mov     eax, [ecx]
0x8AD912: push    edx
0x8AD913: call    dword ptr [eax+30h]
0x8AD916: mov     eax, [edi+14h]
0x8AD919: test    eax, eax
0x8AD91B: jle     short loc_8AD937
0x8AD91D: mov     ecx, edi
0x8AD91F: call    sub_8AF890
0x8AD924: mov     ecx, [edi+10h]
0x8AD927: lea     eax, [esi+20h]
0x8AD92A: push    eax
0x8AD92B: mov     eax, [edi+14h]
0x8AD92E: push    eax
0x8AD92F: push    ecx
0x8AD930: mov     ecx, esi
0x8AD932: call    sub_8ABD40
0x8AD937: mov     edx, ds:0BA9DE4h
0x8AD93D: mov     ecx, large fs:2Ch
0x8AD944: mov     eax, [ecx+edx*4]
0x8AD947: mov     edx, [eax+1A4h]
0x8AD94D: cmp     edx, [eax+1A8h]
0x8AD953: jnb     short loc_8AD987
0x8AD955: mov     eax, ds:0BA9DE4h
0x8AD95A: mov     eax, [ecx+eax*4]
0x8AD95D: mov     ecx, [eax+1A4h]
0x8AD963: mov     [esp+140h+var_134], eax
0x8AD967: mov     dword ptr [ecx], offset aStupdatemanifo; "StUpdateManifold"
0x8AD96D: rdtsc
0x8AD96F: mov     [esp+140h+var_C8], eax
0x8AD973: mov     edx, [esp+140h+var_C8]
0x8AD977: mov     eax, [esp+140h+var_134]
0x8AD97B: mov     [ecx+4], edx
0x8AD97E: add     ecx, 0Ch
0x8AD981: mov     [eax+1A4h], ecx
0x8AD987: mov     edx, [esi]
0x8AD989: push    edi
0x8AD98A: push    ebx
0x8AD98B: mov     ecx, esi
0x8AD98D: call    dword ptr [edx+8]
0x8AD990: mov     eax, [esi+64h]
0x8AD993: mov     ecx, [esi+78h]
0x8AD996: lea     edi, [eax+ecx+0Ah]
0x8AD99A: mov     ecx, ds:0BA9DE4h
0x8AD9A0: mov     eax, large fs:2Ch
0x8AD9A6: mov     eax, [eax+ecx*4]
0x8AD9A9: mov     ecx, [eax+19Ch]
0x8AD9AF: xor     edx, edx
0x8AD9B1: cmp     ecx, edx
0x8AD9B3: mov     dword ptr [esp+140h+var_124], edx
0x8AD9B7: mov     dword ptr [esp+140h+var_124+4], edx
0x8AD9BB: mov     dword ptr [esp+140h+var_124+8], 80000000h
0x8AD9C3: mov     [esp+140h+var_128], eax
0x8AD9C7: jnz     short loc_8AD9CF
0x8AD9C9: mov     ecx, ds:0BA7D9Ch
0x8AD9CF: mov     edx, [ecx+20h]
0x8AD9D2: mov     eax, edi
0x8AD9D4: shl     eax, 6
0x8AD9D7: add     eax, 10h
0x8AD9DA: and     eax, 0FFFFFFF0h
0x8AD9DD: lea     ebx, [edx+eax]
0x8AD9E0: cmp     ebx, [ecx+2Ch]
0x8AD9E3: ja      short loc_8AD9EC
0x8AD9E5: mov     [ecx+20h], ebx
0x8AD9E8: mov     eax, edx
0x8AD9EA: jmp     short loc_8AD9F2
0x8AD9EC: mov     edx, [ecx]
0x8AD9EE: push    eax
0x8AD9EF: call    dword ptr [edx+0Ch]
0x8AD9F2: mov     dword ptr [esp+140h+var_124], eax
0x8AD9F6: mov     dword ptr [esp+140h+var_124+0Ch], eax
0x8AD9FA: mov     eax, [esi+78h]
0x8AD9FD: or      edi, 80000000h
0x8ADA03: xor     ebx, ebx
0x8ADA05: test    eax, eax
0x8ADA07: mov     dword ptr [esp+140h+var_124+8], edi
0x8ADA0B: mov     dword ptr [esp+140h+var_124+4], eax
0x8ADA0F: jle     short loc_8ADA81
0x8ADA11: xor     eax, eax
0x8ADA13: mov     [esp+140h+var_134], eax
0x8ADA17: mov     [esp+140h+var_12C], eax
0x8ADA1B: jmp     short loc_8ADA20
0x8ADA1D: align 10h
0x8ADA20: mov     ecx, [ebp+arg_0]
0x8ADA23: fld     dword ptr [ecx+8]
0x8ADA26: mov     edx, [esp+140h+var_12C]
0x8ADA2A: fsub    [esp+140h+var_130]
0x8ADA2E: mov     eax, [esi]
0x8ADA30: push    ecx
0x8ADA31: mov     ecx, dword ptr [esp+144h+var_124]
0x8ADA35: add     edx, ecx
0x8ADA37: fstp    dword ptr [esp+144h+var_144]
0x8ADA3A: mov     ecx, [esp+144h+var_134]
0x8ADA3E: push    edx
0x8ADA3F: mov     edx, [esi+74h]
0x8ADA42: add     edx, ecx
0x8ADA44: push    edx
0x8ADA45: mov     ecx, esi
0x8ADA47: call    dword ptr [eax+0Ch]
0x8ADA4A: lea     eax, [esi+40h]
0x8ADA4D: push    eax; int
0x8ADA4E: mov     eax, [esi+0A4h]
0x8ADA54: push    eax; float
0x8ADA55: lea     edi, [esp+148h+var_124]
0x8ADA59: mov     eax, ebx
0x8ADA5B: call    sub_8AC3C0
0x8ADA60: mov     edx, [esp+148h+var_12C]
0x8ADA64: mov     ecx, [esp+148h+var_134]
0x8ADA68: mov     eax, [esi+78h]
0x8ADA6B: add     esp, 8
0x8ADA6E: inc     ebx
0x8ADA6F: add     edx, 40h ; '@'
0x8ADA72: add     ecx, 30h ; '0'
0x8ADA75: cmp     ebx, eax
0x8ADA77: mov     [esp+140h+var_12C], edx
0x8ADA7B: mov     [esp+140h+var_134], ecx
0x8ADA7F: jl      short loc_8ADA20
0x8ADA81: mov     eax, dword ptr [esp+140h+var_124+8]
0x8ADA85: mov     edx, dword ptr [esp+140h+var_124+4]
0x8ADA89: mov     ecx, [esi+64h]
0x8ADA8C: and     eax, 3FFFFFFFh
0x8ADA91: mov     edi, eax
0x8ADA93: sub     edi, edx
0x8ADA95: cmp     edi, ecx
0x8ADA97: jge     short loc_8ADAB7
0x8ADA99: add     ecx, edx
0x8ADA9B: cmp     eax, ecx
0x8ADA9D: jge     short loc_8ADAB7
0x8ADA9F: add     eax, eax
0x8ADAA1: cmp     ecx, eax
0x8ADAA3: jl      short loc_8ADAA7
0x8ADAA5: mov     eax, ecx
0x8ADAA7: push    40h ; '@'
0x8ADAA9: push    eax
0x8ADAAA: lea     ecx, [esp+148h+var_124]
0x8ADAAE: push    ecx
0x8ADAAF: call    sub_8A6E40
0x8ADAB4: add     esp, 0Ch
0x8ADAB7: mov     edx, ds:0BA9DE4h
0x8ADABD: mov     eax, large fs:2Ch
0x8ADAC3: mov     eax, [eax+edx*4]
0x8ADAC6: mov     ecx, [eax+1A4h]
0x8ADACC: cmp     ecx, [eax+1A8h]
0x8ADAD2: mov     ebx, [esp+140h+var_128]
0x8ADAD6: jnb     short loc_8ADAFA
0x8ADAD8: mov     ecx, [ebx+1A4h]
0x8ADADE: mov     dword ptr [ecx], offset aStslexmove; "StSlexMove"
0x8ADAE4: rdtsc
0x8ADAE6: mov     [esp+140h+var_C4], eax
0x8ADAEA: mov     edx, [esp+140h+var_C4]
0x8ADAEE: mov     [ecx+4], edx
0x8ADAF1: add     ecx, 0Ch
0x8ADAF4: mov     [ebx+1A4h], ecx
0x8ADAFA: mov     ecx, dword ptr [esp+140h+var_124+4]
0x8ADAFE: mov     edi, [esi+64h]
0x8ADB01: add     edi, ecx
0x8ADB03: mov     ecx, [ebx+19Ch]
0x8ADB09: test    ecx, ecx
0x8ADB0B: mov     [esp+140h+var_BC], 34000000h
0x8ADB16: movss   xmm0, [esp+140h+var_BC]
0x8ADB1F: xorps   xmm2, xmm2
0x8ADB22: shufps  xmm0, xmm0, 0
0x8ADB26: mov     [esp+140h+anonymous_0], 0
0x8ADB31: mov     [esp+140h+var_3C], 3F800000h
0x8ADB3C: mov     [esp+140h+var_38], 0
0x8ADB47: mov     [esp+140h+var_34], 0
0x8ADB52: movaps  [esp+140h+var_50], xmm0
0x8ADB5A: movaps  [esp+140h+var_20], xmm2
0x8ADB62: movaps  xmmword ptr [esp+140h+var_78+8], xmm2
0x8ADB6A: jnz     short loc_8ADB72
0x8ADB6C: mov     ecx, ds:0BA7D9Ch
0x8ADB72: mov     edx, [ecx+20h]
0x8ADB75: lea     eax, [edi+1]
0x8ADB78: shl     eax, 4
0x8ADB7B: and     eax, 0FFFFFFF0h
0x8ADB7E: lea     ebx, [edx+eax]
0x8ADB81: cmp     ebx, [ecx+2Ch]
0x8ADB84: ja      short loc_8ADB8F
0x8ADB86: mov     [ecx+20h], ebx
0x8ADB89: mov     [esp+140h+var_12C], edx
0x8ADB8D: jmp     short loc_8ADBA1
0x8ADB8F: mov     edx, [ecx]
0x8ADB91: push    eax
0x8ADB92: call    dword ptr [edx+0Ch]
0x8ADB95: movaps  xmm2, [esp+140h+var_20]
0x8ADB9D: mov     [esp+140h+var_12C], eax
0x8ADBA1: movaps  xmm0, xmmword ptr [esi+10h]
0x8ADBA5: fld     dword ptr ds:0A2FAA8h
0x8ADBAB: mov     eax, dword ptr [esp+140h+var_124]
0x8ADBAF: mov     ecx, dword ptr [esp+140h+var_124+4]
0x8ADBB3: mov     edx, [esp+140h+var_130]
0x8ADBB7: movaps  [esp+140h+var_60], xmm0
0x8ADBBF: movaps  xmm0, xmmword ptr [esi+10h]
0x8ADBC3: mulps   xmm0, xmm0
0x8ADBC6: mov     dword ptr [esp+140h+var_28], eax
0x8ADBCD: movaps  xmm1, xmm0
0x8ADBD0: shufps  xmm1, xmm0, 55h ; 'U'
0x8ADBD4: movaps  xmm3, xmm0
0x8ADBD7: lea     eax, [esp+140h+var_A8]
0x8ADBDE: addss   xmm1, xmm0
0x8ADBE2: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8ADBE6: addss   xmm3, xmm1
0x8ADBEA: movss   dword ptr [eax], xmm3
0x8ADBEE: fld     [esp+140h+var_A8]
0x8ADBF5: fucompp
0x8ADBF7: or      edi, 80000000h
0x8ADBFD: mov     [esp+140h+var_8], edi
0x8ADC04: mov     dword ptr [esp+140h+var_28+4], ecx
0x8ADC0B: mov     [esp+140h+var_30], edx
0x8ADC12: fnstsw  ax
0x8ADC14: test    ah, 44h
0x8ADC17: jp      short loc_8ADC29
0x8ADC19: mov     [esp+140h+var_2C], 0
0x8ADC24: jmp     loc_8ADCBE
0x8ADC29: movaps  xmm0, xmmword ptr [esi+10h]
0x8ADC2D: mulps   xmm0, xmm0
0x8ADC30: movaps  xmm1, xmm0
0x8ADC33: shufps  xmm1, xmm0, 55h ; 'U'
0x8ADC37: addss   xmm1, xmm0
0x8ADC3B: movaps  xmm3, xmm0
0x8ADC3E: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8ADC42: movaps  xmm0, xmm3
0x8ADC45: addss   xmm0, xmm1
0x8ADC49: movaps  [esp+140h+var_20], xmm0
0x8ADC51: rsqrtss xmm1, xmm0
0x8ADC55: movss   dword ptr [esp+140h+var_20], xmm1
0x8ADC5E: movaps  xmm1, [esp+140h+var_20]
0x8ADC66: mulss   xmm0, xmm1
0x8ADC6A: mulss   xmm0, xmm1
0x8ADC6E: mov     [esp+140h+var_B0], 40400000h
0x8ADC79: movss   xmm3, [esp+140h+var_B0]
0x8ADC82: subss   xmm3, xmm0
0x8ADC86: mov     [esp+140h+var_CC], 3F000000h
0x8ADC8E: movss   xmm0, [esp+140h+var_CC]
0x8ADC94: mulss   xmm0, xmm1
0x8ADC98: lea     ecx, [esp+140h+var_AC]
0x8ADC9F: mulss   xmm0, xmm3
0x8ADCA3: movss   dword ptr [ecx], xmm0
0x8ADCA7: fld     [esp+140h+var_AC]
0x8ADCAE: fmul    dword ptr [esi+58h]
0x8ADCB1: fmul    dword ptr ds:0A3D65Ch
0x8ADCB7: fstp    [esp+140h+var_2C]
0x8ADCBE: mov     edx, [esi+68h]
0x8ADCC1: movaps  xmm0, xmmword ptr [esi+40h]
0x8ADCC5: mov     edi, [esi+84h]
0x8ADCCB: dec     edi
0x8ADCCC: movaps  xmmword ptr [esp+140h+anonymous_0], xmm0
0x8ADCD4: mov     [esp+140h+var_B8], edx
0x8ADCDB: movss   xmm0, [esp+140h+var_B8]
0x8ADCE4: shufps  xmm0, xmm0, 0
0x8ADCE8: movaps  xmmword ptr [esp+140h+var_78+8], xmm2
0x8ADCF0: movaps  [esp+140h+var_50], xmm0
0x8ADCF8: js      short loc_8ADD1A
0x8ADCFA: lea     ebx, [esi+74h]
0x8ADCFD: lea     ecx, [ecx+0]
0x8ADD00: mov     eax, [esi+80h]
0x8ADD06: mov     ecx, [eax+edi*4]
0x8ADD09: mov     edx, [ecx]
0x8ADD0B: lea     eax, [esp+140h+var_78+8]
0x8ADD12: push    eax
0x8ADD13: push    ebx
0x8ADD14: call    dword ptr [edx+4]
0x8ADD17: dec     edi
0x8ADD18: jns     short loc_8ADD00
0x8ADD1A: mov     ecx, [esp+140h+var_12C]
0x8ADD1E: lea     edx, [esp+140h+var_A0]
0x8ADD25: push    edx
0x8ADD26: lea     eax, [esp+144h+var_78+8]
0x8ADD2D: push    eax
0x8ADD2E: mov     [esp+148h+var_7C], ecx
0x8ADD35: call    sub_8EC790
0x8ADD3A: mov     edi, large fs:2Ch
0x8ADD41: mov     ebx, ds:0BA9DE4h
0x8ADD47: mov     eax, [edi+ebx*4]
0x8ADD4A: mov     ecx, [eax+1A4h]
0x8ADD50: mov     edx, [eax+1A8h]
0x8ADD56: add     esp, 8
0x8ADD59: cmp     ecx, edx
0x8ADD5B: jnb     short loc_8ADD8D
0x8ADD5D: mov     edx, [esp+140h+var_128]
0x8ADD61: mov     ecx, [edx+1A4h]
0x8ADD67: mov     dword ptr [ecx], offset aStapplysurf; "StApplySurf"
0x8ADD6D: rdtsc
0x8ADD6F: mov     [esp+140h+var_B4], eax
0x8ADD76: mov     eax, [esp+140h+var_B4]
0x8ADD7D: mov     edx, [esp+140h+var_128]
0x8ADD81: mov     [ecx+4], eax
0x8ADD84: add     ecx, 0Ch
0x8ADD87: mov     [edx+1A4h], ecx
0x8ADD8D: mov     eax, [ebp+arg_4]
0x8ADD90: mov     ecx, [ebp+arg_0]
0x8ADD93: push    eax
0x8ADD94: push    ecx
0x8ADD95: mov     ecx, esi
0x8ADD97: call    sub_8AC6A0
0x8ADD9C: mov     eax, [edi+ebx*4]
0x8ADD9F: mov     edx, [eax+1A4h]
0x8ADDA5: cmp     edx, [eax+1A8h]
0x8ADDAB: jnb     short loc_8ADDD9
0x8ADDAD: mov     edi, [esp+140h+var_128]
0x8ADDB1: mov     ecx, [edi+1A4h]
0x8ADDB7: mov     dword ptr [ecx], offset aStcastmove; "StCastMove"
0x8ADDBD: rdtsc
0x8ADDBF: mov     [esp+140h+var_A4], eax
0x8ADDC6: mov     eax, [esp+140h+var_A4]
0x8ADDCD: mov     [ecx+4], eax
0x8ADDD0: add     ecx, 0Ch
0x8ADDD3: mov     [edi+1A4h], ecx
0x8ADDD9: movaps  xmm0, xmmword ptr ds:0A372D0h
0x8ADDE0: movaps  xmm1, [esp+140h+var_A0]
0x8ADDE8: movaps  xmm2, xmmword ptr [esi+20h]
0x8ADDEC: subps   xmm2, xmm1
0x8ADDEF: andps   xmm2, xmm0
0x8ADDF2: mov     [esp+140h+var_F8], 3A83126Fh
0x8ADDFA: movss   xmm0, [esp+140h+var_F8]
0x8ADE00: shufps  xmm0, xmm0, 0
0x8ADE04: cmpltps xmm0, xmm2
0x8ADE08: movmskps ecx, xmm0
0x8ADE0B: and     cl, 7
0x8ADE0E: neg     cl
0x8ADE10: sbb     cl, cl
0x8ADE12: inc     cl
0x8ADE14: mov     [esp+140h+var_F1], cl
0x8ADE18: jnz     loc_8AE0E2
0x8ADE1E: mov     edi, [ebp+arg_8]
0x8ADE21: movaps  xmm0, [esp+140h+var_110]
0x8ADE26: push    0
0x8ADE28: push    edi
0x8ADE29: lea     eax, [esp+148h+var_F0]
0x8ADE2D: mov     dword ptr [edi+14h], 0
0x8ADE34: mov     dword ptr [edi+4], 7F7FFFFFh
0x8ADE3B: mov     ecx, [esi+30h]
0x8ADE3E: push    eax
0x8ADE3F: addps   xmm0, xmm1
0x8ADE42: lea     eax, [esp+14Ch+var_110]
0x8ADE46: movaps  [esp+14Ch+var_F0], xmm0
0x8ADE4B: mov     edx, [ecx]
0x8ADE4D: push    eax
0x8ADE4E: call    dword ptr [edx+30h]
0x8ADE51: mov     eax, [edi+14h]
0x8ADE54: test    eax, eax
0x8ADE56: jle     loc_8AE0DA
0x8ADE5C: mov     ecx, edi
0x8ADE5E: call    sub_8AF890
0x8ADE63: mov     edx, [edi+14h]
0x8ADE66: mov     eax, [edi+10h]
0x8ADE69: lea     ecx, [esp+140h+var_A0]
0x8ADE70: push    ecx
0x8ADE71: push    edx
0x8ADE72: push    eax
0x8ADE73: mov     ecx, esi
0x8ADE75: call    sub_8ABD40
0x8ADE7A: mov     ebx, [edi+10h]
0x8ADE7D: push    ebx
0x8ADE7E: mov     ecx, esi
0x8ADE80: call    sub_8AC640
0x8ADE85: cmp     eax, 0FFFFFFFFh
0x8ADE88: jnz     loc_8ADF0F
0x8ADE8E: mov     eax, [esi+84h]
0x8ADE94: dec     eax
0x8ADE95: mov     [esp+140h+var_134], eax
0x8ADE99: js      short loc_8ADEB9
0x8ADE9B: jmp     short loc_8ADEA0
0x8ADE9D: align 10h
0x8ADEA0: mov     ecx, [esi+80h]
0x8ADEA6: mov     edx, [esp+140h+var_134]
0x8ADEAA: mov     ecx, [ecx+edx*4]
0x8ADEAD: mov     eax, [ecx]
0x8ADEAF: push    ebx
0x8ADEB0: call    dword ptr [eax+8]
0x8ADEB3: dec     [esp+140h+var_134]
0x8ADEB7: jns     short loc_8ADEA0
0x8ADEB9: mov     ecx, [esi+7Ch]
0x8ADEBC: mov     eax, [esi+78h]
0x8ADEBF: and     ecx, 3FFFFFFFh
0x8ADEC5: cmp     eax, ecx
0x8ADEC7: jnz     short loc_8ADED7
0x8ADEC9: lea     eax, [esi+74h]
0x8ADECC: push    30h ; '0'
0x8ADECE: push    eax
0x8ADECF: call    sub_8A6EE0
0x8ADED4: add     esp, 8
0x8ADED7: mov     ecx, [esi+78h]
0x8ADEDA: mov     edx, [esi+74h]
0x8ADEDD: lea     eax, [ecx+ecx*2]
0x8ADEE0: shl     eax, 4
0x8ADEE3: add     eax, edx
0x8ADEE5: inc     ecx
0x8ADEE6: mov     [esi+78h], ecx
0x8ADEE9: movaps  xmm0, xmmword ptr [ebx]
0x8ADEEC: movaps  xmmword ptr [eax], xmm0
0x8ADEEF: movaps  xmm0, xmmword ptr [ebx+10h]
0x8ADEF3: movaps  xmmword ptr [eax+10h], xmm0
0x8ADEF7: mov     edx, [ebx+20h]
0x8ADEFA: mov     [eax+20h], edx
0x8ADEFD: mov     ecx, [ebx+24h]
0x8ADF00: mov     [eax+24h], ecx
0x8ADF03: mov     edx, [ebx+28h]
0x8ADF06: mov     [eax+28h], edx
0x8ADF09: mov     ecx, [ebx+2Ch]
0x8ADF0C: mov     [eax+2Ch], ecx
0x8ADF0F: mov     edx, [edi+10h]
0x8ADF12: push    edx
0x8ADF13: mov     ecx, esi
0x8ADF15: call    sub_8AC640
0x8ADF1A: cmp     eax, 0FFFFFFFFh
0x8ADF1D: jz      short loc_8ADF84
0x8ADF1F: nop
0x8ADF20: mov     ebx, [edi+14h]
0x8ADF23: dec     ebx
0x8ADF24: mov     eax, ebx
0x8ADF26: xor     ecx, ecx
0x8ADF28: test    eax, eax
0x8ADF2A: mov     [edi+14h], ebx
0x8ADF2D: jle     short loc_8ADF69
0x8ADF2F: xor     edx, edx
0x8ADF31: mov     eax, [edi+10h]
0x8ADF34: movaps  xmm0, xmmword ptr [eax+edx+30h]
0x8ADF39: add     eax, edx
0x8ADF3B: movaps  xmmword ptr [eax], xmm0
0x8ADF3E: movaps  xmm0, xmmword ptr [eax+40h]
0x8ADF42: movaps  xmmword ptr [eax+10h], xmm0
0x8ADF46: mov     ebx, [eax+50h]
0x8ADF49: mov     [eax+20h], ebx
0x8ADF4C: mov     ebx, [eax+54h]
0x8ADF4F: mov     [eax+24h], ebx
0x8ADF52: mov     ebx, [eax+58h]
0x8ADF55: mov     [eax+28h], ebx
0x8ADF58: mov     ebx, [eax+5Ch]
0x8ADF5B: mov     [eax+2Ch], ebx
0x8ADF5E: mov     eax, [edi+14h]
0x8ADF61: inc     ecx
0x8ADF62: add     edx, 30h ; '0'
0x8ADF65: cmp     ecx, eax
0x8ADF67: jl      short loc_8ADF31
0x8ADF69: mov     eax, [edi+14h]
0x8ADF6C: test    eax, eax
0x8ADF6E: jle     loc_8AE0DA
0x8ADF74: mov     ecx, [edi+10h]
0x8ADF77: push    ecx
0x8ADF78: mov     ecx, esi
0x8ADF7A: call    sub_8AC640
0x8ADF7F: cmp     eax, 0FFFFFFFFh
0x8ADF82: jnz     short loc_8ADF20
0x8ADF84: lea     edx, [esp+140h+var_110]
0x8ADF88: push    edx
0x8ADF89: lea     eax, [esp+144h+var_F0]
0x8ADF8D: push    eax
0x8ADF8E: push    edi
0x8ADF8F: lea     ecx, [esp+14Ch+var_A0]
0x8ADF96: push    ecx
0x8ADF97: mov     ecx, esi
0x8ADF99: call    sub_8AC530
0x8ADF9E: fsubr   [esp+140h+var_130]
0x8ADFA2: movaps  xmm1, [esp+140h+var_A0]
0x8ADFAA: mov     ebx, [esp+140h+var_128]
0x8ADFAE: fstp    [esp+140h+var_130]
0x8ADFB2: movaps  xmmword ptr [esi+20h], xmm1
0x8ADFB6: mov     ecx, [ebx+19Ch]
0x8ADFBC: test    ecx, ecx
0x8ADFBE: jnz     short loc_8ADFC6
0x8ADFC0: mov     ecx, ds:0BA7D9Ch
0x8ADFC6: mov     edi, [esp+140h+var_12C]
0x8ADFCA: cmp     edi, [ecx+28h]
0x8ADFCD: mov     [ecx+20h], edi
0x8ADFD0: jnz     short loc_8ADFD8
0x8ADFD2: mov     edx, [ecx]
0x8ADFD4: push    edi
0x8ADFD5: call    dword ptr [edx+10h]
0x8ADFD8: mov     eax, [esp+140h+var_8]
0x8ADFDF: test    eax, eax
0x8ADFE1: js      short loc_8AE004
0x8ADFE3: mov     ecx, [ebx+19Ch]
0x8ADFE9: test    ecx, ecx
0x8ADFEB: jnz     short loc_8ADFF3
0x8ADFED: mov     ecx, ds:0BA7D9Ch
0x8ADFF3: and     eax, 3FFFFFFFh
0x8ADFF8: push    14h
0x8ADFFA: shl     eax, 4
0x8ADFFD: push    eax
0x8ADFFE: push    edi
0x8ADFFF: call    sub_8A75D0
0x8AE004: mov     ecx, [ebx+19Ch]
0x8AE00A: test    ecx, ecx
0x8AE00C: mov     eax, dword ptr [esp+140h+var_124+0Ch]
0x8AE010: jnz     short loc_8AE018
0x8AE012: mov     ecx, ds:0BA7D9Ch
0x8AE018: cmp     eax, [ecx+28h]
0x8AE01B: mov     [ecx+20h], eax
0x8AE01E: jnz     short loc_8AE026
0x8AE020: mov     edx, [ecx]
0x8AE022: push    eax
0x8AE023: call    dword ptr [edx+10h]
0x8AE026: mov     eax, dword ptr [esp+140h+var_124+8]
0x8AE02A: test    eax, eax
0x8AE02C: js      short loc_8AE053
0x8AE02E: mov     ecx, [ebx+19Ch]
0x8AE034: test    ecx, ecx
0x8AE036: jnz     short loc_8AE03E
0x8AE038: mov     ecx, ds:0BA7D9Ch
0x8AE03E: and     eax, 3FFFFFFFh
0x8AE043: push    14h
0x8AE045: shl     eax, 6
0x8AE048: push    eax
0x8AE049: mov     eax, dword ptr [esp+148h+var_124]
0x8AE04D: push    eax
0x8AE04E: call    sub_8A75D0
0x8AE053: fld     [esp+140h+var_130]
0x8AE057: mov     eax, [esp+140h+var_114]
0x8AE05B: fcomp   dword ptr ds:0A97BCCh
0x8AE061: inc     eax
0x8AE062: mov     [esp+140h+var_114], eax
0x8AE066: fnstsw  ax
0x8AE068: test    ah, 41h
0x8AE06B: jz      loc_8AD872
0x8AE071: mov     ecx, [esp+140h+var_E0+4]
0x8AE075: movaps  xmm0, [esp+140h+anonymous_1]
0x8AE07D: push    ecx; float
0x8AE07E: mov     ecx, [esi+30h]
0x8AE081: lea     edx, [esp+144h+var_110]
0x8AE085: push    edx; int
0x8AE086: movaps  xmmword ptr [esi+10h], xmm0
0x8AE08A: call    sub_8ABAC0
0x8AE08F: mov     ecx, large fs:2Ch
0x8AE096: mov     edx, ds:0BA9DE4h
0x8AE09C: mov     eax, [ecx+edx*4]
0x8AE09F: mov     esi, [eax+1A4h]
0x8AE0A5: cmp     esi, [eax+1A8h]
0x8AE0AB: jnb     short loc_8AE0D1
0x8AE0AD: mov     esi, eax
0x8AE0AF: mov     ecx, [esi+1A4h]
0x8AE0B5: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8AE0BB: rdtsc
0x8AE0BD: mov     [esp+140h+var_F8], eax
0x8AE0C1: mov     eax, [esp+140h+var_F8]
0x8AE0C5: mov     [ecx+4], eax
0x8AE0C8: add     ecx, 0Ch
0x8AE0CB: mov     [esi+1A4h], ecx
0x8AE0D1: pop     edi
0x8AE0D2: pop     esi
0x8AE0D3: pop     ebx
0x8AE0D4: mov     esp, ebp
0x8AE0D6: pop     ebp
0x8AE0D7: retn    10h
0x8AE0DA: movaps  xmm1, [esp+140h+var_A0]
0x8AE0E2: movaps  xmm0, [esp+140h+var_110]
0x8AE0E7: fld     [esp+140h+var_130]
0x8AE0EB: fsub    [esp+140h+var_80]
0x8AE0F2: addps   xmm0, xmm1
0x8AE0F5: movaps  [esp+140h+var_110], xmm0
0x8AE0FA: jmp     loc_8ADFAA

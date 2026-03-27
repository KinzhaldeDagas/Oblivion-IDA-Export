0x91A000: push    ebp
0x91A001: mov     ebp, esp
0x91A003: and     esp, 0FFFFFFF0h
0x91A006: sub     esp, 0C4h
0x91A00C: push    ebx
0x91A00D: mov     ebx, large fs:2Ch
0x91A014: push    esi
0x91A015: mov     esi, ecx
0x91A017: mov     ecx, ds:0BA9DE4h
0x91A01D: mov     eax, [ebx+ecx*4]
0x91A020: mov     edx, [eax+1A4h]
0x91A026: push    edi
0x91A027: cmp     edx, [eax+1A8h]
0x91A02D: mov     [esp+0D0h+var_B4], esi
0x91A031: jnb     short loc_91A05B
0x91A033: mov     esi, eax
0x91A035: mov     edi, [esi+1A4h]
0x91A03B: mov     dword ptr [edi], offset aTthkrigidbodyi; "TthkRigidBodyInertiaViewer"
0x91A041: rdtsc
0x91A043: mov     [esp+0D0h+var_C0], eax
0x91A047: mov     eax, [esp+0D0h+var_C0]
0x91A04B: mov     [edi+4], eax
0x91A04E: add     edi, 0Ch
0x91A051: mov     [esi+1A4h], edi
0x91A057: mov     esi, [esp+0D0h+var_B4]
0x91A05B: mov     eax, [ebx+ecx*4]
0x91A05E: mov     edx, [eax+1A4h]
0x91A064: cmp     edx, [eax+1A8h]
0x91A06A: jnb     short loc_91A090
0x91A06C: mov     ecx, eax
0x91A06E: mov     edi, [ecx+1A4h]
0x91A074: mov     dword ptr [edi], offset aTtgetprops; "TtgetProps"
0x91A07A: rdtsc
0x91A07C: mov     [esp+0D0h+var_C0], eax
0x91A080: mov     eax, [esp+0D0h+var_C0]
0x91A084: mov     [edi+4], eax
0x91A087: add     edi, 0Ch
0x91A08A: mov     [ecx+1A4h], edi
0x91A090: mov     edx, [esi+8]
0x91A093: mov     ebx, [esi+14h]
0x91A096: add     esi, 10h
0x91A099: cmp     edx, ebx
0x91A09B: mov     [esp+0D0h+var_BC], edx
0x91A09F: jge     short loc_91A0C6
0x91A0A1: mov     eax, edx
0x91A0A3: mov     edi, eax
0x91A0A5: imul    edi, 70h ; 'p'
0x91A0A8: sub     ebx, eax
0x91A0AA: lea     ebx, [ebx+0]
0x91A0B0: mov     ecx, [esi]
0x91A0B2: mov     edx, [ecx+edi]
0x91A0B5: add     ecx, edi
0x91A0B7: push    0
0x91A0B9: call    dword ptr [edx]
0x91A0BB: add     edi, 70h ; 'p'
0x91A0BE: dec     ebx
0x91A0BF: jnz     short loc_91A0B0
0x91A0C1: jmp     loc_91A1E9
0x91A0C6: mov     eax, [esi+8]
0x91A0C9: mov     [esp+0D0h+var_B8], eax
0x91A0CD: and     eax, 3FFFFFFFh
0x91A0D2: cmp     edx, eax
0x91A0D4: jle     loc_91A1B4
0x91A0DA: mov     ecx, [esp+0D0h+var_BC]
0x91A0DE: add     eax, eax
0x91A0E0: cmp     ecx, eax
0x91A0E2: jl      short loc_91A0E6
0x91A0E4: mov     eax, ecx
0x91A0E6: test    eax, eax
0x91A0E8: mov     ecx, [esi]
0x91A0EA: mov     [esp+0D0h+var_A0], ecx
0x91A0EE: mov     dword ptr [esi], 0
0x91A0F4: mov     dword ptr [esi+4], 0
0x91A0FB: mov     dword ptr [esi+8], 80000000h
0x91A102: jle     short loc_91A11A
0x91A104: xor     edx, edx
0x91A106: test    eax, eax
0x91A108: setl    dl
0x91A10B: push    70h ; 'p'
0x91A10D: dec     edx
0x91A10E: and     eax, edx
0x91A110: push    eax
0x91A111: push    esi
0x91A112: call    sub_8A6E40
0x91A117: add     esp, 0Ch
0x91A11A: test    ebx, ebx
0x91A11C: mov     edi, [esi]
0x91A11E: jle     short loc_91A150
0x91A120: mov     eax, [esp+0D0h+var_A0]
0x91A124: sub     eax, edi
0x91A126: mov     [esp+0D0h+var_A4], eax
0x91A12A: mov     [esp+0D0h+var_C0], ebx
0x91A12E: mov     edi, edi
0x91A130: test    edi, edi
0x91A132: jz      short loc_91A142
0x91A134: mov     eax, [esp+0D0h+var_A4]
0x91A138: add     eax, edi
0x91A13A: push    eax
0x91A13B: mov     ecx, edi
0x91A13D: call    sub_919F20
0x91A142: mov     eax, [esp+0D0h+var_C0]
0x91A146: add     edi, 70h ; 'p'
0x91A149: dec     eax
0x91A14A: mov     [esp+0D0h+var_C0], eax
0x91A14E: jnz     short loc_91A130
0x91A150: test    ebx, ebx
0x91A152: mov     [esi+4], ebx
0x91A155: jle     short loc_91A176
0x91A157: mov     edi, [esp+0D0h+var_A0]
0x91A15B: mov     [esp+0D0h+var_C0], ebx
0x91A15F: nop
0x91A160: mov     edx, [edi]
0x91A162: push    0
0x91A164: mov     ecx, edi
0x91A166: call    dword ptr [edx]
0x91A168: mov     eax, [esp+0D0h+var_C0]
0x91A16C: add     edi, 70h ; 'p'
0x91A16F: dec     eax
0x91A170: mov     [esp+0D0h+var_C0], eax
0x91A174: jnz     short loc_91A160
0x91A176: mov     edx, [esp+0D0h+var_B8]
0x91A17A: test    edx, edx
0x91A17C: js      short loc_91A1B4
0x91A17E: mov     eax, large fs:2Ch
0x91A184: mov     ecx, ds:0BA9DE4h
0x91A18A: mov     eax, [eax+ecx*4]
0x91A18D: mov     eax, [eax+19Ch]
0x91A193: test    eax, eax
0x91A195: jnz     short loc_91A19C
0x91A197: mov     eax, ds:0BA7D9Ch
0x91A19C: mov     ecx, [esp+0D0h+var_A0]
0x91A1A0: and     edx, 3FFFFFFFh
0x91A1A6: imul    edx, 70h ; 'p'
0x91A1A9: push    14h
0x91A1AB: push    edx
0x91A1AC: push    ecx
0x91A1AD: mov     ecx, eax
0x91A1AF: call    sub_8A75D0
0x91A1B4: mov     ecx, [esp+0D0h+var_BC]
0x91A1B8: cmp     ebx, ecx
0x91A1BA: mov     eax, [esi]
0x91A1BC: jge     short loc_91A1E9
0x91A1BE: mov     edi, ebx
0x91A1C0: imul    edi, 70h ; 'p'
0x91A1C3: add     edi, eax
0x91A1C5: mov     eax, ecx
0x91A1C7: sub     eax, ebx
0x91A1C9: mov     [esp+0D0h+var_C0], eax
0x91A1CD: lea     ecx, [ecx+0]
0x91A1D0: test    edi, edi
0x91A1D2: jz      short loc_91A1DB
0x91A1D4: mov     ecx, edi
0x91A1D6: call    sub_949D00
0x91A1DB: mov     eax, [esp+0D0h+var_C0]
0x91A1DF: add     edi, 70h ; 'p'
0x91A1E2: dec     eax
0x91A1E3: mov     [esp+0D0h+var_C0], eax
0x91A1E7: jnz     short loc_91A1D0
0x91A1E9: mov     edx, [esp+0D0h+var_BC]
0x91A1ED: mov     eax, [esp+0D0h+var_B4]
0x91A1F1: mov     [esi+4], edx
0x91A1F4: mov     ecx, [eax+8]
0x91A1F7: xor     edi, edi
0x91A1F9: cmp     ecx, edi
0x91A1FB: mov     [esp+0D0h+var_BC], edi
0x91A1FF: jle     loc_91A3D3
0x91A205: xor     ebx, ebx
0x91A207: jmp     short loc_91A210
0x91A209: align 10h
0x91A210: mov     ecx, [esp+0D0h+var_B4]
0x91A214: mov     edx, [ecx+4]
0x91A217: mov     eax, [edx+edi*4]
0x91A21A: mov     ecx, [eax+50h]
0x91A21D: call    sub_89DA90
0x91A222: fstp    [esp+0D0h+var_C0]
0x91A226: fld     dword ptr ds:0A2FAA8h
0x91A22C: fld     [esp+0D0h+var_C0]
0x91A230: fucompp
0x91A232: fnstsw  ax
0x91A234: test    ah, 44h
0x91A237: jnp     loc_91A3C3
0x91A23D: mov     ecx, [esp+0D0h+var_B4]
0x91A241: mov     edx, [ecx+4]
0x91A244: mov     eax, [edx+edi*4]
0x91A247: mov     ecx, [eax+50h]
0x91A24A: mov     edx, [ecx]
0x91A24C: lea     eax, [esp+0D0h+var_80]
0x91A250: push    eax
0x91A251: call    dword ptr [edx+28h]
0x91A254: fld     dword ptr ds:0A2F948h
0x91A25A: fdiv    [esp+0D0h+var_C0]
0x91A25E: fstp    [esp+0D0h+var_C0]
0x91A262: fld     [esp+0D0h+var_80]
0x91A266: fsub    [esp+0D0h+var_6C]
0x91A26A: fadd    dword ptr [esp+0D0h+var_58]
0x91A26E: fmul    [esp+0D0h+var_C0]
0x91A272: fmul    dword ptr ds:0A5977Ch
0x91A278: fst     [esp+0D0h+var_A4]
0x91A27C: fcomp   dword ptr ds:0A2FAA8h
0x91A282: fnstsw  ax
0x91A284: test    ah, 5
0x91A287: jp      short loc_91A291
0x91A289: fld     dword ptr ds:0A2FAA8h
0x91A28F: jmp     short loc_91A297
0x91A291: fld     [esp+0D0h+var_A4]
0x91A295: fsqrt
0x91A297: fld     [esp+0D0h+var_80]
0x91A29B: fmul    [esp+0D0h+var_C0]
0x91A29F: fmul    dword ptr ds:0A2F918h
0x91A2A5: fsub    [esp+0D0h+var_A4]
0x91A2A9: fcom    dword ptr ds:0A2FAA8h
0x91A2AF: fnstsw  ax
0x91A2B1: test    ah, 5
0x91A2B4: jp      short loc_91A2C0
0x91A2B6: fstp    st
0x91A2B8: fld     dword ptr ds:0A2FAA8h
0x91A2BE: jmp     short loc_91A2C2
0x91A2C0: fsqrt
0x91A2C2: fld     dword ptr [esp+0D0h+var_58]
0x91A2C6: fmul    [esp+0D0h+var_C0]
0x91A2CA: fmul    dword ptr ds:0A2F918h
0x91A2D0: fsub    [esp+0D0h+var_A4]
0x91A2D4: fcom    dword ptr ds:0A2FAA8h
0x91A2DA: fnstsw  ax
0x91A2DC: test    ah, 5
0x91A2DF: jp      short loc_91A2EB
0x91A2E1: fstp    st
0x91A2E3: fld     dword ptr ds:0A2FAA8h
0x91A2E9: jmp     short loc_91A2ED
0x91A2EB: fsqrt
0x91A2ED: fmul    dword ptr ds:0A9D394h
0x91A2F3: mov     ecx, [esp+0D0h+var_B4]
0x91A2F7: mov     edx, [ecx+4]
0x91A2FA: mov     [esp+0D0h+var_98+4], 0
0x91A302: fstp    [esp+0D0h+var_A0]
0x91A306: lea     ecx, [edx+edi*4]
0x91A309: fxch    st(1)
0x91A30B: fmul    dword ptr ds:0A9D394h
0x91A311: fstp    [esp+0D0h+var_9C]
0x91A315: fmul    dword ptr ds:0A9D394h
0x91A31B: fstp    [esp+0D0h+var_98]
0x91A31F: mov     eax, [ecx]
0x91A321: mov     eax, [eax+50h]
0x91A324: movaps  xmm0, xmmword ptr [eax+10h]
0x91A328: add     eax, 10h
0x91A32B: movaps  xmmword ptr [esp+0D0h+var_48+8], xmm0
0x91A333: movaps  xmm0, xmmword ptr [eax+10h]
0x91A337: movaps  [esp+0D0h+anonymous_0], xmm0
0x91A33F: movaps  xmm0, xmmword ptr [eax+20h]
0x91A343: movaps  [esp+0D0h+anonymous_1], xmm0
0x91A34B: movaps  xmm0, xmmword ptr [eax+30h]
0x91A34F: movaps  [esp+0D0h+anonymous_2], xmm0
0x91A357: mov     ecx, [ecx]
0x91A359: mov     edx, [ecx+50h]
0x91A35C: movaps  xmm0, xmmword ptr [edx+90h]
0x91A363: lea     eax, [esp+0D0h+var_58+8]
0x91A36A: push    eax
0x91A36B: lea     ecx, [esp+0D4h+var_48+8]
0x91A372: push    ecx
0x91A373: lea     ecx, [esp+0D8h+var_98+8]
0x91A377: movaps  [esp+0D8h+var_58+8], xmm0
0x91A37F: call    sub_88FE00
0x91A384: mov     ecx, [esi]
0x91A386: mov     eax, [esp+0D0h+var_BC]
0x91A38A: movaps  xmm1, [esp+0D0h+anonymous_2]
0x91A392: movaps  xmm0, xmmword ptr [esp+0D0h+var_98+8]
0x91A397: add     ecx, ebx
0x91A399: inc     eax
0x91A39A: lea     edx, [esp+0D0h+var_48+8]
0x91A3A1: mov     [esp+0D0h+var_BC], eax
0x91A3A5: push    edx
0x91A3A6: lea     eax, [esp+0D4h+var_A0]
0x91A3AA: addps   xmm0, xmm1
0x91A3AD: push    eax
0x91A3AE: movaps  xmmword ptr [esp+0D8h+var_98+8], xmm0
0x91A3B3: movaps  [esp+0D8h+anonymous_2], xmm0
0x91A3BB: add     ebx, 70h ; 'p'
0x91A3BE: call    sub_949D50
0x91A3C3: mov     ecx, [esp+0D0h+var_B4]
0x91A3C7: mov     eax, [ecx+8]
0x91A3CA: inc     edi
0x91A3CB: cmp     edi, eax
0x91A3CD: jl      loc_91A210
0x91A3D3: mov     edi, large fs:2Ch
0x91A3DA: mov     ebx, ds:0BA9DE4h
0x91A3E0: mov     eax, [edi+ebx*4]
0x91A3E3: mov     edx, [eax+1A4h]
0x91A3E9: cmp     edx, [eax+1A8h]
0x91A3EF: jnb     short loc_91A416
0x91A3F1: mov     ecx, [eax+1A4h]
0x91A3F7: mov     dword ptr [ecx], offset aEt; "Et"
0x91A3FD: rdtsc
0x91A3FF: mov     [esp+0D0h+var_B8], eax
0x91A403: mov     eax, [esp+0D0h+var_B8]
0x91A407: mov     [ecx+4], eax
0x91A40A: mov     eax, [edi+ebx*4]
0x91A40D: add     ecx, 0Ch
0x91A410: mov     [eax+1A4h], ecx
0x91A416: mov     eax, [edi+ebx*4]
0x91A419: mov     ecx, [eax+1A4h]
0x91A41F: cmp     ecx, [eax+1A8h]
0x91A425: jnb     short loc_91A44B
0x91A427: mov     edi, eax
0x91A429: mov     ecx, [edi+1A4h]
0x91A42F: mov     dword ptr [ecx], offset aTtsendprops; "TtsendProps"
0x91A435: rdtsc
0x91A437: mov     [esp+0D0h+var_B8], eax
0x91A43B: mov     edx, [esp+0D0h+var_B8]
0x91A43F: mov     [ecx+4], edx
0x91A442: add     ecx, 0Ch
0x91A445: mov     [edi+1A4h], ecx
0x91A44B: mov     ebx, [esi+4]
0x91A44E: mov     ecx, [esp+0D0h+var_BC]
0x91A452: cmp     ecx, ebx
0x91A454: jge     short loc_91A477
0x91A456: mov     edi, ecx
0x91A458: imul    edi, 70h ; 'p'
0x91A45B: sub     ebx, ecx
0x91A45D: lea     ecx, [ecx+0]
0x91A460: mov     eax, [esi]
0x91A462: mov     edx, [eax+edi]
0x91A465: lea     ecx, [eax+edi]
0x91A468: push    0
0x91A46A: call    dword ptr [edx]
0x91A46C: add     edi, 70h ; 'p'
0x91A46F: dec     ebx
0x91A470: jnz     short loc_91A460
0x91A472: jmp     loc_91A5E9
0x91A477: mov     eax, [esi+8]
0x91A47A: mov     [esp+0D0h+var_B8], eax
0x91A47E: and     eax, 3FFFFFFFh
0x91A483: cmp     ecx, eax
0x91A485: jle     loc_91A5B4
0x91A48B: mov     ecx, [esp+0D0h+var_BC]
0x91A48F: add     eax, eax
0x91A491: cmp     ecx, eax
0x91A493: jl      short loc_91A497
0x91A495: mov     eax, ecx
0x91A497: test    eax, eax
0x91A499: mov     ecx, [esi]
0x91A49B: mov     [esp+0D0h+var_A0], ecx
0x91A49F: mov     dword ptr [esi], 0
0x91A4A5: mov     dword ptr [esi+4], 0
0x91A4AC: mov     dword ptr [esi+8], 80000000h
0x91A4B3: jle     short loc_91A4CB
0x91A4B5: xor     edx, edx
0x91A4B7: test    eax, eax
0x91A4B9: setl    dl
0x91A4BC: push    70h ; 'p'
0x91A4BE: dec     edx
0x91A4BF: and     eax, edx
0x91A4C1: push    eax
0x91A4C2: push    esi
0x91A4C3: call    sub_8A6E40
0x91A4C8: add     esp, 0Ch
0x91A4CB: test    ebx, ebx
0x91A4CD: mov     edi, [esi]
0x91A4CF: jle     short loc_91A550
0x91A4D1: mov     edx, [esp+0D0h+var_A0]
0x91A4D5: lea     ecx, [edx+40h]
0x91A4D8: lea     eax, [edi+20h]
0x91A4DB: sub     edx, edi
0x91A4DD: mov     [esp+0D0h+var_C0], ebx
0x91A4E1: lea     edi, [eax-20h]
0x91A4E4: test    edi, edi
0x91A4E6: jz      short loc_91A53F
0x91A4E8: mov     dword ptr [eax-20h], offset ??_7hkReferencedObject@@6B@; const hkReferencedObject::`vftable'
0x91A4EF: mov     di, [ecx-3Ch]
0x91A4F3: mov     [eax-1Ch], di
0x91A4F7: mov     di, [ecx-3Ah]
0x91A4FB: mov     dword ptr [eax-20h], offset off_A9B2F4
0x91A502: mov     [eax-1Ah], di
0x91A506: movaps  xmm0, xmmword ptr [ecx-30h]
0x91A50A: movaps  xmmword ptr [eax-10h], xmm0
0x91A50E: movaps  xmm0, xmmword ptr [edx+eax]
0x91A512: movaps  xmmword ptr [eax], xmm0
0x91A515: movaps  xmm0, xmmword ptr [ecx-10h]
0x91A519: movaps  xmmword ptr [eax+10h], xmm0
0x91A51D: movaps  xmm0, xmmword ptr [ecx]
0x91A520: movaps  xmmword ptr [eax+20h], xmm0
0x91A524: mov     edi, [ecx+10h]
0x91A527: mov     [eax+30h], edi
0x91A52A: mov     edi, [ecx+14h]
0x91A52D: mov     [eax+34h], edi
0x91A530: mov     dword ptr [eax-20h], offset off_A9D378
0x91A537: movaps  xmm0, xmmword ptr [ecx+20h]
0x91A53B: movaps  xmmword ptr [eax+40h], xmm0
0x91A53F: mov     edi, [esp+0D0h+var_C0]
0x91A543: add     eax, 70h ; 'p'
0x91A546: add     ecx, 70h ; 'p'
0x91A549: dec     edi
0x91A54A: mov     [esp+0D0h+var_C0], edi
0x91A54E: jnz     short loc_91A4E1
0x91A550: test    ebx, ebx
0x91A552: mov     [esi+4], ebx
0x91A555: jle     short loc_91A576
0x91A557: mov     edi, [esp+0D0h+var_A0]
0x91A55B: mov     [esp+0D0h+var_C0], ebx
0x91A55F: nop
0x91A560: mov     eax, [edi]
0x91A562: push    0
0x91A564: mov     ecx, edi
0x91A566: call    dword ptr [eax]
0x91A568: mov     eax, [esp+0D0h+var_C0]
0x91A56C: add     edi, 70h ; 'p'
0x91A56F: dec     eax
0x91A570: mov     [esp+0D0h+var_C0], eax
0x91A574: jnz     short loc_91A560
0x91A576: mov     edx, [esp+0D0h+var_B8]
0x91A57A: test    edx, edx
0x91A57C: js      short loc_91A5B4
0x91A57E: mov     eax, ds:0BA9DE4h
0x91A583: mov     ecx, large fs:2Ch
0x91A58A: mov     ecx, [ecx+eax*4]
0x91A58D: mov     eax, [ecx+19Ch]
0x91A593: test    eax, eax
0x91A595: jnz     short loc_91A59C
0x91A597: mov     eax, ds:0BA7D9Ch
0x91A59C: and     edx, 3FFFFFFFh
0x91A5A2: imul    edx, 70h ; 'p'
0x91A5A5: push    14h
0x91A5A7: push    edx
0x91A5A8: mov     edx, [esp+0D8h+var_A0]
0x91A5AC: push    edx
0x91A5AD: mov     ecx, eax
0x91A5AF: call    sub_8A75D0
0x91A5B4: mov     ecx, [esp+0D0h+var_BC]
0x91A5B8: cmp     ebx, ecx
0x91A5BA: mov     eax, [esi]
0x91A5BC: jge     short loc_91A5E9
0x91A5BE: mov     edi, ebx
0x91A5C0: imul    edi, 70h ; 'p'
0x91A5C3: add     edi, eax
0x91A5C5: mov     eax, ecx
0x91A5C7: sub     eax, ebx
0x91A5C9: mov     [esp+0D0h+var_C0], eax
0x91A5CD: lea     ecx, [ecx+0]
0x91A5D0: test    edi, edi
0x91A5D2: jz      short loc_91A5DB
0x91A5D4: mov     ecx, edi
0x91A5D6: call    sub_949D00
0x91A5DB: mov     eax, [esp+0D0h+var_C0]
0x91A5DF: add     edi, 70h ; 'p'
0x91A5E2: dec     eax
0x91A5E3: mov     [esp+0D0h+var_C0], eax
0x91A5E7: jnz     short loc_91A5D0
0x91A5E9: mov     eax, [esp+0D0h+var_BC]
0x91A5ED: mov     ebx, [esp+0D0h+var_B4]
0x91A5F1: mov     [esi+4], eax
0x91A5F4: mov     edi, [ebx+14h]
0x91A5F7: xor     eax, eax
0x91A5F9: test    edi, edi
0x91A5FB: mov     [esp+0D0h+var_B0], eax
0x91A5FF: mov     [esp+0D0h+var_AC], eax
0x91A603: mov     [esp+0D0h+var_A8], 80000000h
0x91A60B: jle     short loc_91A625
0x91A60D: test    edi, edi
0x91A60F: setl    al
0x91A612: push    4
0x91A614: lea     ecx, [esp+0D4h+var_B0]
0x91A618: dec     eax
0x91A619: and     eax, edi
0x91A61B: push    eax
0x91A61C: push    ecx
0x91A61D: call    sub_8A6E40
0x91A622: add     esp, 0Ch
0x91A625: mov     eax, [ebx+14h]
0x91A628: dec     eax
0x91A629: mov     [esp+0D0h+var_AC], edi
0x91A62D: js      short loc_91A647
0x91A62F: mov     ecx, eax
0x91A631: imul    ecx, 70h ; 'p'
0x91A634: mov     edx, [esi]
0x91A636: mov     edi, [esp+0D0h+var_B0]
0x91A63A: add     edx, ecx
0x91A63C: mov     [edi+eax*4], edx
0x91A63F: dec     eax
0x91A640: sub     ecx, 70h ; 'p'
0x91A643: test    eax, eax
0x91A645: jge     short loc_91A634
0x91A647: mov     eax, [esp+0D0h+var_B4]
0x91A64B: mov     ecx, [eax-14h]
0x91A64E: mov     eax, ds:0BA841Ch
0x91A653: mov     edx, [ecx]
0x91A655: push    eax
0x91A656: push    0FFFF00FFh
0x91A65B: lea     eax, [esp+0D8h+var_B0]
0x91A65F: push    eax
0x91A660: call    dword ptr [edx+24h]
0x91A663: mov     esi, large fs:2Ch
0x91A66A: mov     edi, ds:0BA9DE4h
0x91A670: mov     eax, [esi+edi*4]
0x91A673: mov     ecx, [eax+1A4h]
0x91A679: cmp     ecx, [eax+1A8h]
0x91A67F: jnb     short loc_91A6A5
0x91A681: mov     ebx, eax
0x91A683: mov     ecx, [ebx+1A4h]
0x91A689: mov     dword ptr [ecx], offset aEt; "Et"
0x91A68F: rdtsc
0x91A691: mov     [esp+0D0h+var_B8], eax
0x91A695: mov     edx, [esp+0D0h+var_B8]
0x91A699: mov     [ecx+4], edx
0x91A69C: add     ecx, 0Ch
0x91A69F: mov     [ebx+1A4h], ecx
0x91A6A5: mov     eax, [esi+edi*4]
0x91A6A8: mov     ecx, [eax+1A4h]
0x91A6AE: cmp     ecx, [eax+1A8h]
0x91A6B4: jnb     short loc_91A6DA
0x91A6B6: mov     ebx, eax
0x91A6B8: mov     ecx, [ebx+1A4h]
0x91A6BE: mov     dword ptr [ecx], offset aEt; "Et"
0x91A6C4: rdtsc
0x91A6C6: mov     [esp+0D0h+var_B8], eax
0x91A6CA: mov     edx, [esp+0D0h+var_B8]
0x91A6CE: mov     [ecx+4], edx
0x91A6D1: add     ecx, 0Ch
0x91A6D4: mov     [ebx+1A4h], ecx
0x91A6DA: mov     eax, [esp+0D0h+var_A8]
0x91A6DE: test    eax, eax
0x91A6E0: js      short loc_91A70A
0x91A6E2: mov     ecx, [esi+edi*4]
0x91A6E5: mov     ecx, [ecx+19Ch]
0x91A6EB: test    ecx, ecx
0x91A6ED: jnz     short loc_91A6F5
0x91A6EF: mov     ecx, ds:0BA7D9Ch
0x91A6F5: mov     edx, [esp+0D0h+var_B0]
0x91A6F9: and     eax, 3FFFFFFFh
0x91A6FE: push    14h
0x91A700: shl     eax, 2
0x91A703: push    eax
0x91A704: push    edx
0x91A705: call    sub_8A75D0
0x91A70A: pop     edi
0x91A70B: pop     esi
0x91A70C: pop     ebx
0x91A70D: mov     esp, ebp
0x91A70F: pop     ebp
0x91A710: retn    8

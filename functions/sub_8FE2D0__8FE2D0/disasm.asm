0x8FE2D0: push    ebp
0x8FE2D1: mov     ebp, esp
0x8FE2D3: and     esp, 0FFFFFFF0h
0x8FE2D6: sub     esp, 1D4h
0x8FE2DC: push    ebx
0x8FE2DD: push    esi
0x8FE2DE: mov     esi, large fs:2Ch
0x8FE2E5: push    edi
0x8FE2E6: mov     edi, ds:0BA9DE4h
0x8FE2EC: mov     eax, [esi+edi*4]
0x8FE2EF: mov     ecx, [eax+1A4h]
0x8FE2F5: cmp     ecx, [eax+1A8h]
0x8FE2FB: jnb     short loc_8FE321
0x8FE2FD: mov     ebx, eax
0x8FE2FF: mov     ecx, [ebx+1A4h]
0x8FE305: mov     dword ptr [ecx], offset aTtpredgskf3; "TtPredGskf3"
0x8FE30B: rdtsc
0x8FE30D: mov     [esp+1E0h+var_1C4], eax
0x8FE311: mov     edx, [esp+1E0h+var_1C4]
0x8FE315: mov     [ecx+4], edx
0x8FE318: add     ecx, 0Ch
0x8FE31B: mov     [ebx+1A4h], ecx
0x8FE321: mov     eax, [esi+edi*4]
0x8FE324: mov     ecx, [eax+1A4h]
0x8FE32A: cmp     ecx, [eax+1A8h]
0x8FE330: jnb     short loc_8FE35D
0x8FE332: mov     esi, eax
0x8FE334: mov     ecx, [esi+1A4h]
0x8FE33A: mov     dword ptr [ecx], offset aLtintern; "Ltintern"
0x8FE340: mov     dword ptr [ecx+0Ch], offset aInit; "init"
0x8FE347: rdtsc
0x8FE349: mov     [esp+1E0h+var_1C4], eax
0x8FE34D: mov     edx, [esp+1E0h+var_1C4]
0x8FE351: mov     [ecx+4], edx
0x8FE354: add     ecx, 10h
0x8FE357: mov     [esi+1A4h], ecx
0x8FE35D: mov     edi, [ebp+arg_0]
0x8FE360: mov     eax, [edi+50h]
0x8FE363: mov     ebx, [ebp+arg_4]
0x8FE366: mov     cl, [ebx+4]
0x8FE369: mov     edx, [ebp+arg_8]
0x8FE36C: mov     [esp+1E0h+var_1C0], eax
0x8FE370: and     cl, 1
0x8FE373: mov     byte ptr [esp+1E0h+var_180], cl
0x8FE377: lea     eax, [edi+4]
0x8FE37A: mov     [esp+1E0h+var_194], eax
0x8FE37E: mov     eax, [ebx+4]
0x8FE381: mov     ecx, eax
0x8FE383: shr     ecx, 1
0x8FE385: and     cl, 1
0x8FE388: mov     byte ptr [esp+1E0h+var_180+1], cl
0x8FE38C: mov     ecx, eax
0x8FE38E: shr     eax, 3
0x8FE391: and     al, 1
0x8FE393: mov     [esp+1E0h+var_1B7], al
0x8FE397: xor     eax, eax
0x8FE399: mov     [esp+1E0h+var_178], eax
0x8FE39D: mov     [esp+1E0h+var_174], eax
0x8FE3A1: lea     eax, [esp+1E0h+var_190]
0x8FE3A5: push    eax
0x8FE3A6: shr     ecx, 2
0x8FE3A9: push    edx
0x8FE3AA: and     cl, 1
0x8FE3AD: push    edi
0x8FE3AE: lea     esi, [edx+0Ch]
0x8FE3B1: mov     [esp+1ECh+var_198], edi
0x8FE3B5: mov     [esp+1ECh+var_1B8], cl
0x8FE3B9: call    sub_8FF1C0
0x8FE3BE: add     esp, 0Ch
0x8FE3C1: xor     edi, edi
0x8FE3C3: mov     al, byte ptr [esp+edi+1E0h+var_180]
0x8FE3C7: test    al, al
0x8FE3C9: jz      loc_8FE523
0x8FE3CF: mov     eax, [esp+edi*4+1E0h+var_198]
0x8FE3D3: mov     ecx, [eax]
0x8FE3D5: mov     ecx, [ecx]
0x8FE3D7: movaps  xmm0, xmmword ptr [ecx+20h]
0x8FE3DB: movaps  xmm1, xmmword ptr [ecx+30h]
0x8FE3DF: subps   xmm1, xmm0
0x8FE3E2: movaps  xmm0, xmm1
0x8FE3E5: mulps   xmm0, xmm1
0x8FE3E8: movaps  xmm2, xmm0
0x8FE3EB: shufps  xmm2, xmm0, 55h ; 'U'
0x8FE3EF: addss   xmm2, xmm0
0x8FE3F3: movaps  xmm3, xmm0
0x8FE3F6: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8FE3FA: movaps  xmm0, xmm3
0x8FE3FD: addss   xmm0, xmm2
0x8FE401: movaps  [esp+1E0h+var_150], xmm0
0x8FE409: rsqrtss xmm2, xmm0
0x8FE40D: movss   dword ptr [esp+1E0h+var_150], xmm2
0x8FE416: movaps  xmm2, [esp+1E0h+var_150]
0x8FE41E: mulss   xmm0, xmm2
0x8FE422: mulss   xmm0, xmm2
0x8FE426: mov     [esp+1E0h+var_1C4], 40400000h
0x8FE42E: movss   xmm3, [esp+1E0h+var_1C4]
0x8FE434: subss   xmm3, xmm0
0x8FE438: mov     [esp+1E0h+var_1BC], 3F000000h
0x8FE440: movss   xmm0, [esp+1E0h+var_1BC]
0x8FE446: mulss   xmm0, xmm2
0x8FE44A: mulss   xmm0, xmm3
0x8FE44E: movaps  xmm2, xmm0
0x8FE451: shufps  xmm2, xmm0, 0
0x8FE455: mulps   xmm2, xmm1
0x8FE458: movaps  [esp+1E0h+var_1B0], xmm2
0x8FE45D: mov     eax, [eax]
0x8FE45F: mov     ecx, [eax+8]
0x8FE462: lea     edx, [esp+1E0h+var_1B0]
0x8FE466: push    edx
0x8FE467: push    ecx
0x8FE468: lea     ecx, [esp+1E8h+var_1B0]
0x8FE46C: call    sub_88FE00
0x8FE471: movaps  xmm1, [esp+1E0h+var_190]
0x8FE476: movaps  xmm0, [esp+1E0h+var_1B0]
0x8FE47B: mov     al, [esp+edi+1E0h+var_1B8]
0x8FE47F: test    al, al
0x8FE481: mulps   xmm0, xmm1
0x8FE484: movaps  xmm1, xmm0
0x8FE487: shufps  xmm1, xmm0, 55h ; 'U'
0x8FE48B: movaps  xmm2, xmm0
0x8FE48E: addss   xmm1, xmm0
0x8FE492: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8FE496: lea     edx, [esp+1E0h+var_1C8]
0x8FE49A: addss   xmm2, xmm1
0x8FE49E: movss   dword ptr [edx], xmm2
0x8FE4A2: fld     [esp+1E0h+var_1C8]
0x8FE4A6: fabs
0x8FE4A8: jz      short loc_8FE4E4
0x8FE4AA: fcomp   dword ptr ds:0A643B0h
0x8FE4B0: fnstsw  ax
0x8FE4B2: test    ah, 41h
0x8FE4B5: jnz     short loc_8FE523
0x8FE4B7: mov     ecx, edi
0x8FE4B9: mov     eax, 4
0x8FE4BE: shl     eax, cl
0x8FE4C0: mov     ecx, [ebx+4]
0x8FE4C3: mov     [esp+edi+1E0h+var_1B8], 0
0x8FE4C8: not     eax
0x8FE4CA: and     ecx, eax
0x8FE4CC: mov     [ebx+4], ecx
0x8FE4CF: mov     ecx, [ebp+arg_0]
0x8FE4D2: mov     edx, [ecx+0Ch]
0x8FE4D5: push    edx
0x8FE4D6: push    esi
0x8FE4D7: call    sub_939B60
0x8FE4DC: mov     al, [esi+2]
0x8FE4DF: mov     [ebx+2], al
0x8FE4E2: jmp     short loc_8FE51A
0x8FE4E4: fcomp   dword ptr ds:0A9B9F8h
0x8FE4EA: fnstsw  ax
0x8FE4EC: test    ah, 5
0x8FE4EF: jp      short loc_8FE523
0x8FE4F1: mov     eax, [ebx+4]
0x8FE4F4: mov     ecx, edi
0x8FE4F6: mov     edx, 4
0x8FE4FB: shl     edx, cl
0x8FE4FD: mov     [esp+edi+1E0h+var_1B8], 1
0x8FE502: or      eax, edx
0x8FE504: mov     [ebx+4], eax
0x8FE507: mov     eax, [ebp+arg_0]
0x8FE50A: mov     ecx, [eax+0Ch]
0x8FE50D: push    ecx
0x8FE50E: push    esi
0x8FE50F: call    sub_939B60
0x8FE514: mov     dl, [esi+2]
0x8FE517: mov     [ebx+2], dl
0x8FE51A: add     esp, 8
0x8FE51D: mov     dword ptr [esi], 0
0x8FE523: inc     edi
0x8FE524: cmp     edi, 2
0x8FE527: jl      loc_8FE3C3
0x8FE52D: mov     edx, [ebp+arg_0]
0x8FE530: mov     eax, [edx+8]
0x8FE533: mov     edi, [eax+28h]
0x8FE536: mov     al, [edi+10h]
0x8FE539: test    al, al
0x8FE53B: mov     ebx, [ebp+arg_C]
0x8FE53E: jz      loc_8FE757
0x8FE544: mov     ecx, [edx]
0x8FE546: mov     eax, [ecx+0Ch]
0x8FE549: test    eax, eax
0x8FE54B: jz      short loc_8FE559
0x8FE54D: lea     ecx, [ecx+0]
0x8FE550: mov     ecx, eax
0x8FE552: mov     eax, [ecx+0Ch]
0x8FE555: test    eax, eax
0x8FE557: jnz     short loc_8FE550
0x8FE559: mov     ecx, [ecx+20h]
0x8FE55C: lea     eax, [edx+4]
0x8FE55F: mov     [esp+1E0h+var_1BC], ecx
0x8FE563: mov     ecx, [eax]
0x8FE565: mov     eax, [ecx+0Ch]
0x8FE568: test    eax, eax
0x8FE56A: jz      short loc_8FE579
0x8FE56C: lea     esp, [esp+0]
0x8FE570: mov     ecx, eax
0x8FE572: mov     eax, [ecx+0Ch]
0x8FE575: test    eax, eax
0x8FE577: jnz     short loc_8FE570
0x8FE579: fld     dword ptr [ecx+20h]
0x8FE57C: fld     [esp+1E0h+var_1BC]
0x8FE580: fcomp   st(1)
0x8FE582: fnstsw  ax
0x8FE584: test    ah, 5
0x8FE587: jp      short loc_8FE595
0x8FE589: mov     edx, [esp+1E0h+var_1BC]
0x8FE58D: fstp    st
0x8FE58F: mov     [esp+1E0h+var_1C8], edx
0x8FE593: jmp     short loc_8FE599
0x8FE595: fstp    [esp+1E0h+var_1C8]
0x8FE599: fld     dword ptr [ebx+0Ch]
0x8FE59C: fld     [esp+1E0h+var_1C8]
0x8FE5A0: fmul    dword ptr [edi+18h]
0x8FE5A3: fadd    st, st(1)
0x8FE5A5: fld     [esp+1E0h+var_1C8]
0x8FE5A9: fmul    dword ptr [edi+14h]
0x8FE5AC: fst     [esp+1E0h+var_1C4]
0x8FE5B0: fcomp   st(1)
0x8FE5B2: fnstsw  ax
0x8FE5B4: test    ah, 5
0x8FE5B7: jp      short loc_8FE5C5
0x8FE5B9: mov     eax, [esp+1E0h+var_1C4]
0x8FE5BD: fstp    st
0x8FE5BF: mov     [esp+1E0h+var_1BC], eax
0x8FE5C3: jmp     short loc_8FE5C9
0x8FE5C5: fstp    [esp+1E0h+var_1BC]
0x8FE5C9: fld     [esp+1E0h+var_1C0]
0x8FE5CD: fcomp   [esp+1E0h+var_1BC]
0x8FE5D1: fnstsw  ax
0x8FE5D3: test    ah, 1
0x8FE5D6: jz      loc_8FE755
0x8FE5DC: fld     [esp+1E0h+var_1C8]
0x8FE5E0: fmul    dword ptr [edi+28h]
0x8FE5E3: faddp   st(1), st
0x8FE5E5: fld     [esp+1E0h+var_1C8]
0x8FE5E9: fmul    dword ptr [edi+24h]
0x8FE5EC: fst     [esp+1E0h+var_1C4]
0x8FE5F0: fcomp   st(1)
0x8FE5F2: fnstsw  ax
0x8FE5F4: test    ah, 5
0x8FE5F7: jp      short loc_8FE605
0x8FE5F9: mov     ecx, [esp+1E0h+var_1C4]
0x8FE5FD: fstp    st
0x8FE5FF: mov     [esp+1E0h+var_1C0], ecx
0x8FE603: jmp     short loc_8FE609
0x8FE605: fstp    [esp+1E0h+var_1C0]
0x8FE609: mov     ecx, large fs:2Ch
0x8FE610: mov     edx, ds:0BA9DE4h
0x8FE616: mov     eax, [ecx+edx*4]
0x8FE619: mov     edi, [eax+1A4h]
0x8FE61F: cmp     edi, [eax+1A8h]
0x8FE625: jnb     short loc_8FE64B
0x8FE627: mov     edi, eax
0x8FE629: mov     ecx, [edi+1A4h]
0x8FE62F: mov     dword ptr [ecx], offset aSttoi; "Sttoi"
0x8FE635: rdtsc
0x8FE637: mov     [esp+1E0h+var_1C4], eax
0x8FE63B: mov     edx, [esp+1E0h+var_1C4]
0x8FE63F: mov     [ecx+4], edx
0x8FE642: add     ecx, 0Ch
0x8FE645: mov     [edi+1A4h], ecx
0x8FE64B: mov     eax, [ebp+arg_10]
0x8FE64E: mov     ecx, [ebp+arg_8]
0x8FE651: mov     edx, [esp+1E0h+var_1C0]
0x8FE655: push    eax; int
0x8FE656: mov     eax, [esp+1E4h+var_1BC]
0x8FE65A: push    ebx; int
0x8FE65B: push    ecx; int
0x8FE65C: mov     ecx, [esp+1ECh+var_1C8]
0x8FE660: push    edx; int
0x8FE661: mov     edx, [ebp+arg_0]
0x8FE664: push    eax; int
0x8FE665: push    ecx; float
0x8FE666: push    edx; int
0x8FE667: call    sub_93DE40
0x8FE66C: add     esp, 1Ch
0x8FE66F: mov     ecx, large fs:2Ch
0x8FE676: mov     edx, ds:0BA9DE4h
0x8FE67C: mov     eax, [ecx+edx*4]
0x8FE67F: mov     edi, [eax+1A4h]
0x8FE685: cmp     edi, [eax+1A8h]
0x8FE68B: jnb     short loc_8FE6B1
0x8FE68D: mov     edi, eax
0x8FE68F: mov     ecx, [edi+1A4h]
0x8FE695: mov     dword ptr [ecx], offset aStprocess; "Stprocess"
0x8FE69B: rdtsc
0x8FE69D: mov     [esp+1E0h+var_1C4], eax
0x8FE6A1: mov     edx, [esp+1E0h+var_1C4]
0x8FE6A5: mov     [ecx+4], edx
0x8FE6A8: add     ecx, 0Ch
0x8FE6AB: mov     [edi+1A4h], ecx
0x8FE6B1: mov     [esp+1E0h+var_1C8], 0
0x8FE6B9: lea     ebx, [esp+1E0h+var_164]
0x8FE6BD: lea     ecx, [ecx+0]
0x8FE6C0: mov     eax, [esp+1E0h+var_1C8]
0x8FE6C4: mov     cl, [esp+eax+1E0h+var_1B8]
0x8FE6C8: test    cl, cl
0x8FE6CA: jz      loc_8FEA46
0x8FE6D0: mov     ecx, [esp+eax*4+1E0h+var_198]
0x8FE6D4: mov     edx, [ecx]
0x8FE6D6: mov     ecx, ds:0BA7D98h
0x8FE6DC: mov     eax, [ecx]
0x8FE6DE: mov     edi, [edx]
0x8FE6E0: push    24h ; '$'
0x8FE6E2: push    30h ; '0'
0x8FE6E4: call    dword ptr [eax+10h]
0x8FE6E7: mov     word ptr [eax+4], 30h ; '0'
0x8FE6ED: mov     ecx, [edi+0Ch]
0x8FE6F0: mov     [esp+1E0h+var_1C4], ecx
0x8FE6F4: mov     ecx, edi
0x8FE6F6: mov     [esp+1E0h+var_1C0], eax
0x8FE6FA: call    sub_8F2260
0x8FE6FF: fadd    [esp+1E0h+var_1C4]
0x8FE703: push    ecx
0x8FE704: mov     ecx, [esp+1E4h+var_1C0]
0x8FE708: fadd    dword ptr ds:0A58FF8h
0x8FE70E: lea     edx, [edi+30h]
0x8FE711: add     edi, 20h ; ' '
0x8FE714: fstp    [esp+1E4h+var_1E4]
0x8FE717: push    edx
0x8FE718: push    edi
0x8FE719: call    sub_8F3490
0x8FE71E: lea     ecx, [ebx-0Ch]
0x8FE721: test    ecx, ecx
0x8FE723: mov     ecx, [esp+1E0h+var_1C8]
0x8FE727: jz      short loc_8FE737
0x8FE729: mov     edx, [esp+ecx*4+1E0h+var_198]
0x8FE72D: mov     edx, [edx]
0x8FE72F: mov     edi, [edx+8]
0x8FE732: mov     [ebx], edx
0x8FE734: mov     [ebx-4], edi
0x8FE737: mov     edx, [ebx]
0x8FE739: mov     edx, [edx+4]
0x8FE73C: mov     [ebx-8], edx
0x8FE73F: lea     edx, [ebx-0Ch]
0x8FE742: mov     [edx], eax
0x8FE744: mov     eax, [esp+ecx*4+1E0h+var_198]
0x8FE748: mov     edi, [eax]
0x8FE74A: mov     [esp+ecx*4+1E0h+var_178], edi
0x8FE74E: mov     [eax], edx
0x8FE750: jmp     loc_8FEA52
0x8FE755: fstp    st
0x8FE757: fld     [esp+1E0h+var_1C0]
0x8FE75B: fcomp   dword ptr [edi+0Ch]
0x8FE75E: fnstsw  ax
0x8FE760: test    ah, 41h
0x8FE763: jnz     loc_8FE66F
0x8FE769: mov     eax, [esp+1E0h+var_1C0]
0x8FE76D: mov     [ebx+0Ch], eax
0x8FE770: mov     al, [esi+2]
0x8FE773: test    al, al
0x8FE775: jz      loc_8FEEE6
0x8FE77B: mov     ecx, large fs:2Ch
0x8FE782: mov     edx, ds:0BA9DE4h
0x8FE788: mov     eax, [ecx+edx*4]
0x8FE78B: mov     edi, [eax+1A4h]
0x8FE791: cmp     edi, [eax+1A8h]
0x8FE797: jnb     short loc_8FE7BD
0x8FE799: mov     edi, eax
0x8FE79B: mov     ecx, [edi+1A4h]
0x8FE7A1: mov     dword ptr [ecx], offset aStgetpoints; "StgetPoints"
0x8FE7A7: rdtsc
0x8FE7A9: mov     [esp+1E0h+var_1C4], eax
0x8FE7AD: mov     edx, [esp+1E0h+var_1C4]
0x8FE7B1: mov     [ecx+4], edx
0x8FE7B4: add     ecx, 0Ch
0x8FE7B7: mov     [edi+1A4h], ecx
0x8FE7BD: mov     [esp+1E0h+var_1C8], 0
0x8FE7C5: lea     ebx, [esp+1E0h+var_164]
0x8FE7C9: lea     esp, [esp+0]
0x8FE7D0: mov     eax, [esp+1E0h+var_1C8]
0x8FE7D4: mov     cl, [esp+eax+1E0h+var_1B8]
0x8FE7D8: test    cl, cl
0x8FE7DA: jz      loc_8FE862
0x8FE7E0: mov     ecx, [esp+eax*4+1E0h+var_198]
0x8FE7E4: mov     edx, [ecx]
0x8FE7E6: mov     ecx, ds:0BA7D98h
0x8FE7EC: mov     eax, [ecx]
0x8FE7EE: mov     edi, [edx]
0x8FE7F0: push    24h ; '$'
0x8FE7F2: push    30h ; '0'
0x8FE7F4: call    dword ptr [eax+10h]
0x8FE7F7: mov     word ptr [eax+4], 30h ; '0'
0x8FE7FD: mov     ecx, [edi+0Ch]
0x8FE800: mov     [esp+1E0h+var_1C4], ecx
0x8FE804: mov     ecx, edi
0x8FE806: mov     [esp+1E0h+var_1C0], eax
0x8FE80A: call    sub_8F2260
0x8FE80F: fadd    [esp+1E0h+var_1C4]
0x8FE813: push    ecx
0x8FE814: mov     ecx, [esp+1E4h+var_1C0]
0x8FE818: fadd    dword ptr ds:0A58FF8h
0x8FE81E: lea     edx, [edi+30h]
0x8FE821: add     edi, 20h ; ' '
0x8FE824: fstp    [esp+1E4h+var_1E4]
0x8FE827: push    edx
0x8FE828: push    edi
0x8FE829: call    sub_8F3490
0x8FE82E: lea     ecx, [ebx-0Ch]
0x8FE831: test    ecx, ecx
0x8FE833: mov     ecx, [esp+1E0h+var_1C8]
0x8FE837: jz      short loc_8FE847
0x8FE839: mov     edx, [esp+ecx*4+1E0h+var_198]
0x8FE83D: mov     edx, [edx]
0x8FE83F: mov     edi, [edx+8]
0x8FE842: mov     [ebx], edx
0x8FE844: mov     [ebx-4], edi
0x8FE847: mov     edx, [ebx]
0x8FE849: mov     edx, [edx+4]
0x8FE84C: mov     [ebx-8], edx
0x8FE84F: lea     edx, [ebx-0Ch]
0x8FE852: mov     [edx], eax
0x8FE854: mov     eax, [esp+ecx*4+1E0h+var_198]
0x8FE858: mov     edi, [eax]
0x8FE85A: mov     [esp+ecx*4+1E0h+var_178], edi
0x8FE85E: mov     [eax], edx
0x8FE860: jmp     short loc_8FE86E
0x8FE862: mov     ecx, [esp+1E0h+var_1C8]
0x8FE866: mov     [esp+eax*4+1E0h+var_178], 0
0x8FE86E: inc     ecx
0x8FE86F: add     ebx, 10h
0x8FE872: cmp     ecx, 2
0x8FE875: mov     [esp+1E0h+var_1C8], ecx
0x8FE879: jl      loc_8FE7D0
0x8FE87F: mov     eax, [ebp+arg_0]
0x8FE882: mov     edx, [eax+4]
0x8FE885: mov     ebx, [eax]
0x8FE887: mov     eax, [eax+8]
0x8FE88A: mov     ecx, [eax+8]
0x8FE88D: mov     [esp+1E0h+var_8], ecx
0x8FE894: mov     edi, [edx]
0x8FE896: mov     ecx, [ebx]
0x8FE898: mov     [esp+1E0h+var_1C4], edx
0x8FE89C: mov     edx, [ecx+0Ch]
0x8FE89F: mov     [esp+1E0h+var_10], edx
0x8FE8A6: mov     eax, [edi+0Ch]
0x8FE8A9: mov     edx, [ebp+arg_C]
0x8FE8AC: movaps  xmm0, xmmword ptr [edx]
0x8FE8AF: mov     [esp+1E0h+var_C], eax
0x8FE8B6: fld     [esp+1E0h+var_C]
0x8FE8BD: fadd    [esp+1E0h+var_10]
0x8FE8C4: mov     al, [esi+2]
0x8FE8C7: test    al, al
0x8FE8C9: movaps  [esp+1E0h+var_20], xmm0
0x8FE8D1: fadd    [esp+1E0h+var_8]
0x8FE8D8: fld     st
0x8FE8DA: fmul    st, st(1)
0x8FE8DC: fstp    [esp+1E0h+var_4]
0x8FE8E3: fstp    st
0x8FE8E5: jz      loc_8FE9EE
0x8FE8EB: movzx   eax, al
0x8FE8EE: lea     edx, [esi+eax*8+4]
0x8FE8F2: mov     eax, [ecx]
0x8FE8F4: mov     [esp+1E0h+var_1C0], edx
0x8FE8F8: lea     edx, [esp+1E0h+var_120]
0x8FE8FF: push    edx
0x8FE900: movzx   edx, byte ptr [esi]
0x8FE903: push    edx
0x8FE904: mov     edx, [esp+1E8h+var_1C0]
0x8FE908: push    edx
0x8FE909: call    dword ptr [eax+28h]
0x8FE90C: mov     eax, [ebx+8]
0x8FE90F: movzx   edx, byte ptr [esi]
0x8FE912: movaps  xmm1, xmmword ptr [eax]
0x8FE915: movaps  xmm2, xmmword ptr [eax+10h]
0x8FE919: movaps  xmm3, xmmword ptr [eax+20h]
0x8FE91D: movaps  xmm4, xmmword ptr [eax+30h]
0x8FE921: mov     ebx, edx
0x8FE923: lea     ecx, [esp+1E0h+var_120]
0x8FE92A: lea     ebx, [ebx+0]
0x8FE930: movaps  xmm0, xmmword ptr [ecx]
0x8FE933: movaps  xmm5, xmm0
0x8FE936: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FE93A: movaps  xmm6, xmm3
0x8FE93D: mulps   xmm6, xmm5
0x8FE940: movaps  xmm5, xmm0
0x8FE943: shufps  xmm5, xmm0, 55h ; 'U'
0x8FE947: movaps  xmm7, xmm2
0x8FE94A: mulps   xmm7, xmm5
0x8FE94D: movaps  xmm5, xmm0
0x8FE950: shufps  xmm5, xmm0, 0
0x8FE954: movaps  xmm0, xmm1
0x8FE957: mulps   xmm0, xmm5
0x8FE95A: addps   xmm6, xmm4
0x8FE95D: addps   xmm0, xmm7
0x8FE960: addps   xmm0, xmm6
0x8FE963: movaps  xmmword ptr [ecx], xmm0
0x8FE966: add     ecx, 10h
0x8FE969: dec     ebx
0x8FE96A: test    ebx, ebx
0x8FE96C: jg      short loc_8FE930
0x8FE96E: movzx   ecx, byte ptr [esi+1]
0x8FE972: mov     eax, edx
0x8FE974: shl     eax, 4
0x8FE977: lea     ebx, [esp+eax+1E0h+var_120]
0x8FE97E: mov     eax, [edi]
0x8FE980: push    ebx
0x8FE981: push    ecx
0x8FE982: mov     ecx, [esp+1E8h+var_1C0]
0x8FE986: lea     edx, [ecx+edx*2]
0x8FE989: push    edx
0x8FE98A: mov     ecx, edi
0x8FE98C: call    dword ptr [eax+28h]
0x8FE98F: mov     eax, [esp+1E0h+var_1C4]
0x8FE993: mov     eax, [eax+8]
0x8FE996: movzx   edx, byte ptr [esi+1]
0x8FE99A: movaps  xmm1, xmmword ptr [eax]
0x8FE99D: movaps  xmm2, xmmword ptr [eax+10h]
0x8FE9A1: movaps  xmm3, xmmword ptr [eax+20h]
0x8FE9A5: movaps  xmm4, xmmword ptr [eax+30h]
0x8FE9A9: mov     ecx, ebx
0x8FE9AB: jmp     short loc_8FE9B0
0x8FE9AD: align 10h
0x8FE9B0: movaps  xmm0, xmmword ptr [ecx]
0x8FE9B3: movaps  xmm5, xmm0
0x8FE9B6: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FE9BA: movaps  xmm6, xmm3
0x8FE9BD: mulps   xmm6, xmm5
0x8FE9C0: movaps  xmm5, xmm0
0x8FE9C3: shufps  xmm5, xmm0, 55h ; 'U'
0x8FE9C7: movaps  xmm7, xmm2
0x8FE9CA: mulps   xmm7, xmm5
0x8FE9CD: movaps  xmm5, xmm0
0x8FE9D0: shufps  xmm5, xmm0, 0
0x8FE9D4: movaps  xmm0, xmm1
0x8FE9D7: mulps   xmm0, xmm5
0x8FE9DA: addps   xmm6, xmm4
0x8FE9DD: addps   xmm0, xmm7
0x8FE9E0: addps   xmm0, xmm6
0x8FE9E3: movaps  xmmword ptr [ecx], xmm0
0x8FE9E6: add     ecx, 10h
0x8FE9E9: dec     edx
0x8FE9EA: test    edx, edx
0x8FE9EC: jg      short loc_8FE9B0
0x8FE9EE: mov     ecx, [ebp+arg_0]
0x8FE9F1: mov     edx, [ecx+0Ch]
0x8FE9F4: mov     edi, [ebp+arg_10]
0x8FE9F7: push    edx
0x8FE9F8: push    edi
0x8FE9F9: push    0
0x8FE9FB: lea     eax, [esp+1ECh+var_120]
0x8FEA02: push    eax
0x8FEA03: push    esi
0x8FEA04: call    sub_939BB0
0x8FEA09: mov     al, [esi+2]
0x8FEA0C: add     esp, 14h
0x8FEA0F: test    al, al
0x8FEA11: jz      loc_8FEEE6
0x8FEA17: mov     ecx, [edi+3040h]
0x8FEA1D: test    ecx, ecx
0x8FEA1F: jz      loc_8FEEE6
0x8FEA25: mov     ecx, [ecx+4]
0x8FEA28: movzx   eax, al
0x8FEA2B: lea     edx, [eax+eax*2]
0x8FEA2E: mov     eax, [edi]
0x8FEA30: shl     edx, 4
0x8FEA33: sub     eax, edx
0x8FEA35: mov     [ecx], eax
0x8FEA37: mov     edi, [edi+3040h]
0x8FEA3D: add     dword ptr [edi+4], 4
0x8FEA41: jmp     loc_8FEEE6
0x8FEA46: mov     ecx, [esp+1E0h+var_1C8]
0x8FEA4A: mov     [esp+eax*4+1E0h+var_178], 0
0x8FEA52: inc     ecx
0x8FEA53: add     ebx, 10h
0x8FEA56: cmp     ecx, 2
0x8FEA59: mov     [esp+1E0h+var_1C8], ecx
0x8FEA5D: jl      loc_8FE6C0
0x8FEA63: mov     edi, [ebp+arg_8]
0x8FEA66: mov     al, [esp+1E0h+var_1B8]
0x8FEA6A: test    al, al
0x8FEA6C: mov     ebx, edi
0x8FEA6E: mov     [esp+1E0h+var_1C0], ebx
0x8FEA72: jnz     short loc_8FEA80
0x8FEA74: mov     cl, [esp+1E0h+var_1B7]
0x8FEA78: test    cl, cl
0x8FEA7A: jz      loc_8FEB3C
0x8FEA80: test    al, al
0x8FEA82: mov     ecx, [edi]
0x8FEA84: mov     edx, [edi+4]
0x8FEA87: mov     dword ptr [esp+1E0h+var_1B0], ecx
0x8FEA8B: mov     ecx, [edi+8]
0x8FEA8E: lea     ebx, [esp+1E0h+var_1B0]
0x8FEA92: mov     [esp+1E0h+var_1C0], ebx
0x8FEA96: mov     dword ptr [esp+1E0h+var_1B0+4], edx
0x8FEA9A: mov     dword ptr [esp+1E0h+var_1B0+8], ecx
0x8FEA9E: jz      short loc_8FEAE7
0x8FEAA0: xor     edx, edx
0x8FEAA2: mov     dl, byte ptr [esp+1E0h+var_1B0]
0x8FEAA6: shr     dl, 7
0x8FEAA9: mov     eax, 1
0x8FEAAE: and     edx, 1
0x8FEAB1: sub     eax, edx
0x8FEAB3: shl     eax, 4
0x8FEAB6: mov     word ptr [esp+1E0h+var_1B0], ax
0x8FEABB: mov     al, cl
0x8FEABD: cmp     al, 1
0x8FEABF: jle     short loc_8FEAEB
0x8FEAC1: cmp     al, 3
0x8FEAC3: mov     word ptr [esp+1E0h+var_1B0], 10h
0x8FEACA: mov     word ptr [esp+1E0h+var_1B0+2], 0
0x8FEAD1: jnz     short loc_8FEAEB
0x8FEAD3: mov     ecx, dword ptr [esp+1E0h+var_1B0+4]
0x8FEAD7: mov     al, 2
0x8FEAD9: shr     ecx, 10h
0x8FEADC: mov     byte ptr [esp+1E0h+var_1B0+8], al
0x8FEAE0: mov     word ptr [esp+1E0h+var_1B0+4], cx
0x8FEAE5: jmp     short loc_8FEAEB
0x8FEAE7: mov     al, byte ptr [esp+1E0h+var_1B0+8]
0x8FEAEB: mov     cl, [esp+1E0h+var_1B7]
0x8FEAEF: test    cl, cl
0x8FEAF1: jz      short loc_8FEB3C
0x8FEAF3: movsx   eax, al
0x8FEAF6: lea     eax, [esp+eax*2+1E0h+var_1B0]
0x8FEAFA: xor     edx, edx
0x8FEAFC: mov     dl, [eax]
0x8FEAFE: shr     dl, 7
0x8FEB01: mov     ecx, 1
0x8FEB06: and     edx, 1
0x8FEB09: sub     ecx, edx
0x8FEB0B: shl     ecx, 4
0x8FEB0E: mov     [eax], cx
0x8FEB11: cmp     byte ptr [esp+1E0h+var_1B0+9], 1
0x8FEB16: jle     short loc_8FEB3C
0x8FEB18: movsx   edx, byte ptr [esp+1E0h+var_1B0+8]
0x8FEB1D: mov     word ptr [esp+edx*2+1E0h+var_1B0], 10h
0x8FEB24: movsx   eax, byte ptr [esp+1E0h+var_1B0+8]
0x8FEB29: mov     word ptr [esp+eax*2+1E0h+var_1B0+2], 0
0x8FEB30: cmp     byte ptr [esp+1E0h+var_1B0+9], 3
0x8FEB35: jnz     short loc_8FEB3C
0x8FEB37: mov     byte ptr [esp+1E0h+var_1B0+9], 2
0x8FEB3C: mov     edi, [ebp+arg_0]
0x8FEB3F: mov     eax, [edi]
0x8FEB41: mov     ecx, [eax]
0x8FEB43: mov     edx, [edi+4]
0x8FEB46: mov     [esp+1E0h+var_12C], ecx
0x8FEB4D: mov     ecx, [edx]
0x8FEB4F: mov     [esp+1E0h+var_128], ecx
0x8FEB56: mov     ecx, [edi+8]
0x8FEB59: lea     edx, [edi+10h]
0x8FEB5C: mov     [esp+1E0h+var_134], edx
0x8FEB63: mov     eax, [eax+8]
0x8FEB66: mov     [esp+1E0h+var_130], eax
0x8FEB6D: mov     edx, [ecx+8]
0x8FEB70: mov     ecx, [ebp+arg_C]
0x8FEB73: lea     eax, [esp+1E0h+var_150]
0x8FEB7A: push    eax
0x8FEB7B: push    ecx
0x8FEB7C: mov     [esp+1E8h+var_124], edx
0x8FEB83: lea     edx, [esp+1E8h+var_134]
0x8FEB8A: push    ebx
0x8FEB8B: push    edx
0x8FEB8C: call    sub_93D4A0
0x8FEB91: add     esp, 10h
0x8FEB94: cmp     eax, 1
0x8FEB97: jnz     short loc_8FEBB6
0x8FEB99: mov     al, [esi+2]
0x8FEB9C: test    al, al
0x8FEB9E: jz      loc_8FEEDB
0x8FEBA4: mov     eax, [edi+0Ch]
0x8FEBA7: push    eax
0x8FEBA8: push    esi
0x8FEBA9: call    sub_939B60
0x8FEBAE: add     esp, 8
0x8FEBB1: jmp     loc_8FEEDB
0x8FEBB6: push    ebx
0x8FEBB7: push    esi
0x8FEBB8: call    sub_93A620
0x8FEBBD: mov     edx, [ebp+arg_10]
0x8FEBC0: movzx   ecx, al
0x8FEBC3: mov     eax, [edx]
0x8FEBC5: mov     [esp+1E8h+var_1C8], eax
0x8FEBC9: mov     al, [esi+2]
0x8FEBCC: movzx   edx, al
0x8FEBCF: add     esp, 8
0x8FEBD2: cmp     edx, ecx
0x8FEBD4: mov     [esp+1E0h+var_1C4], ecx
0x8FEBD8: mov     [esp+1E0h+var_1BC], edx
0x8FEBDC: jle     loc_8FED7C
0x8FEBE2: test    al, al
0x8FEBE4: mov     ebx, [edi+8]
0x8FEBE7: mov     ebx, [ebx+8]
0x8FEBEA: mov     ecx, [edi]
0x8FEBEC: mov     edx, [edi+4]
0x8FEBEF: mov     [esp+1E0h+var_8], ebx
0x8FEBF6: mov     ebx, [edx]
0x8FEBF8: mov     [esp+1E0h+var_180], edx
0x8FEBFC: mov     [esp+1E0h+var_19C], ecx
0x8FEC00: mov     ecx, [ecx]
0x8FEC02: mov     edx, [ecx+0Ch]
0x8FEC05: mov     [esp+1E0h+var_10], edx
0x8FEC0C: mov     edx, [ebx+0Ch]
0x8FEC0F: mov     [esp+1E0h+var_C], edx
0x8FEC16: fld     [esp+1E0h+var_C]
0x8FEC1D: fadd    [esp+1E0h+var_10]
0x8FEC24: mov     edx, [ebp+arg_C]
0x8FEC27: movaps  xmm0, xmmword ptr [edx]
0x8FEC2A: movaps  [esp+1E0h+var_20], xmm0
0x8FEC32: fadd    [esp+1E0h+var_8]
0x8FEC39: fld     st
0x8FEC3B: fmul    st, st(1)
0x8FEC3D: fstp    [esp+1E0h+var_4]
0x8FEC44: fstp    st
0x8FEC46: jz      loc_8FED5E
0x8FEC4C: mov     eax, [esp+1E0h+var_1BC]
0x8FEC50: lea     edx, [esi+eax*8+4]
0x8FEC54: mov     eax, [ecx]
0x8FEC56: mov     [esp+1E0h+var_1BC], edx
0x8FEC5A: lea     edx, [esp+1E0h+var_120]
0x8FEC61: push    edx
0x8FEC62: movzx   edx, byte ptr [esi]
0x8FEC65: push    edx
0x8FEC66: mov     edx, [esp+1E8h+var_1BC]
0x8FEC6A: push    edx
0x8FEC6B: call    dword ptr [eax+28h]
0x8FEC6E: mov     eax, [esp+1E0h+var_19C]
0x8FEC72: mov     eax, [eax+8]
0x8FEC75: movzx   edx, byte ptr [esi]
0x8FEC78: movaps  xmm1, xmmword ptr [eax]
0x8FEC7B: movaps  xmm2, xmmword ptr [eax+10h]
0x8FEC7F: movaps  xmm3, xmmword ptr [eax+20h]
0x8FEC83: movaps  xmm4, xmmword ptr [eax+30h]
0x8FEC87: mov     [esp+1E0h+var_19C], edx
0x8FEC8B: lea     ecx, [esp+1E0h+var_120]
0x8FEC92: mov     eax, edx
0x8FEC94: movaps  xmm0, xmmword ptr [ecx]
0x8FEC97: movaps  xmm5, xmm0
0x8FEC9A: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FEC9E: movaps  xmm6, xmm3
0x8FECA1: mulps   xmm6, xmm5
0x8FECA4: movaps  xmm5, xmm0
0x8FECA7: shufps  xmm5, xmm0, 55h ; 'U'
0x8FECAB: movaps  xmm7, xmm2
0x8FECAE: mulps   xmm7, xmm5
0x8FECB1: movaps  xmm5, xmm0
0x8FECB4: shufps  xmm5, xmm0, 0
0x8FECB8: movaps  xmm0, xmm1
0x8FECBB: mulps   xmm0, xmm5
0x8FECBE: addps   xmm6, xmm4
0x8FECC1: addps   xmm0, xmm7
0x8FECC4: addps   xmm0, xmm6
0x8FECC7: movaps  xmmword ptr [ecx], xmm0
0x8FECCA: add     ecx, 10h
0x8FECCD: dec     eax
0x8FECCE: test    eax, eax
0x8FECD0: jg      short loc_8FEC94
0x8FECD2: mov     ecx, edx
0x8FECD4: shl     ecx, 4
0x8FECD7: lea     eax, [esp+ecx+1E0h+var_120]
0x8FECDE: mov     ecx, [ebx]
0x8FECE0: push    eax
0x8FECE1: mov     dword ptr [esp+1E4h+var_1B8], eax
0x8FECE5: movzx   eax, byte ptr [esi+1]
0x8FECE9: push    eax
0x8FECEA: mov     eax, [esp+1E8h+var_1BC]
0x8FECEE: lea     edx, [eax+edx*2]
0x8FECF1: mov     eax, ecx
0x8FECF3: push    edx
0x8FECF4: mov     ecx, ebx
0x8FECF6: call    dword ptr [eax+28h]
0x8FECF9: mov     eax, [esp+1E0h+var_180]
0x8FECFD: mov     eax, [eax+8]
0x8FED00: movzx   edx, byte ptr [esi+1]
0x8FED04: mov     ecx, dword ptr [esp+1E0h+var_1B8]
0x8FED08: movaps  xmm1, xmmword ptr [eax]
0x8FED0B: movaps  xmm2, xmmword ptr [eax+10h]
0x8FED0F: movaps  xmm3, xmmword ptr [eax+20h]
0x8FED13: movaps  xmm4, xmmword ptr [eax+30h]
0x8FED17: jmp     short loc_8FED20
0x8FED19: align 10h
0x8FED20: movaps  xmm0, xmmword ptr [ecx]
0x8FED23: movaps  xmm5, xmm0
0x8FED26: shufps  xmm5, xmm0, 0AAh ; 'ª'
0x8FED2A: movaps  xmm6, xmm3
0x8FED2D: mulps   xmm6, xmm5
0x8FED30: movaps  xmm5, xmm0
0x8FED33: shufps  xmm5, xmm0, 55h ; 'U'
0x8FED37: movaps  xmm7, xmm2
0x8FED3A: mulps   xmm7, xmm5
0x8FED3D: movaps  xmm5, xmm0
0x8FED40: shufps  xmm5, xmm0, 0
0x8FED44: movaps  xmm0, xmm1
0x8FED47: mulps   xmm0, xmm5
0x8FED4A: addps   xmm6, xmm4
0x8FED4D: addps   xmm0, xmm7
0x8FED50: addps   xmm0, xmm6
0x8FED53: movaps  xmmword ptr [ecx], xmm0
0x8FED56: add     ecx, 10h
0x8FED59: dec     edx
0x8FED5A: test    edx, edx
0x8FED5C: jg      short loc_8FED20
0x8FED5E: mov     ecx, [edi+0Ch]
0x8FED61: mov     edx, [ebp+arg_10]
0x8FED64: mov     eax, [esp+1E0h+var_1C4]
0x8FED68: push    ecx
0x8FED69: push    edx
0x8FED6A: push    eax
0x8FED6B: lea     ecx, [esp+1ECh+var_120]
0x8FED72: push    ecx
0x8FED73: push    esi
0x8FED74: call    sub_939BB0
0x8FED79: add     esp, 14h
0x8FED7C: mov     eax, [ebp+arg_10]
0x8FED7F: mov     ebx, [eax]
0x8FED81: movaps  xmm0, [esp+1E0h+var_150]
0x8FED89: mov     edx, [ebp+arg_C]
0x8FED8C: mov     ecx, [esp+1E0h+var_1C4]
0x8FED90: test    ecx, ecx
0x8FED92: movaps  xmmword ptr [ebx], xmm0
0x8FED95: movaps  xmm0, xmmword ptr [edx]
0x8FED98: movaps  xmmword ptr [ebx+10h], xmm0
0x8FED9C: jz      short loc_8FEDAE
0x8FED9E: mov     cx, [esi+6]
0x8FEDA2: mov     [ebx+20h], cx
0x8FEDA6: add     dword ptr [eax], 30h ; '0'
0x8FEDA9: jmp     loc_8FEEBB
0x8FEDAE: mov     eax, [esp+1E0h+var_1C0]
0x8FEDB2: movsx   edx, byte ptr [eax+9]
0x8FEDB6: movsx   eax, byte ptr [eax+8]
0x8FEDBA: mov     ecx, [edi+8]
0x8FEDBD: add     edx, eax
0x8FEDBF: cmp     edx, 4
0x8FEDC2: mov     eax, [ecx+28h]
0x8FEDC5: jnz     short loc_8FEDCC
0x8FEDC7: fld     dword ptr [eax+4]
0x8FEDCA: jmp     short loc_8FEDCF
0x8FEDCC: fld     dword ptr [eax+8]
0x8FEDCF: mov     edx, [ebp+arg_C]
0x8FEDD2: fcomp   dword ptr [edx+0Ch]
0x8FEDD5: fnstsw  ax
0x8FEDD7: test    ah, 41h
0x8FEDDA: jnz     loc_8FEEBB
0x8FEDE0: mov     eax, [edi+0Ch]
0x8FEDE3: mov     edx, [esp+1E0h+var_1C8]
0x8FEDE7: push    1
0x8FEDE9: push    eax
0x8FEDEA: mov     eax, [esp+1E8h+var_1C0]
0x8FEDEE: push    edx
0x8FEDEF: mov     edx, [edi]
0x8FEDF1: push    ebx
0x8FEDF2: push    eax
0x8FEDF3: push    ecx
0x8FEDF4: mov     ecx, [edi+4]
0x8FEDF7: push    ecx
0x8FEDF8: push    edx
0x8FEDF9: push    esi
0x8FEDFA: call    sub_93AB40
0x8FEDFF: add     esp, 24h
0x8FEE02: cmp     eax, 4
0x8FEE05: jnz     loc_8FEE8F
0x8FEE0B: cmp     word ptr [ebx+20h], 0FFFFh
0x8FEE11: mov     eax, [ebp+arg_10]
0x8FEE14: jz      short loc_8FEE1E
0x8FEE16: add     dword ptr [eax], 30h ; '0'
0x8FEE19: jmp     loc_8FEEBB
0x8FEE1E: mov     ecx, [eax+3040h]
0x8FEE24: test    ecx, ecx
0x8FEE26: mov     ecx, [edi+0Ch]
0x8FEE29: mov     edx, [ecx]
0x8FEE2B: jz      short loc_8FEE59
0x8FEE2D: push    1
0x8FEE2F: call    dword ptr [edx+0Ch]
0x8FEE32: test    eax, eax
0x8FEE34: jnz     short loc_8FEE72
0x8FEE36: mov     edx, [ebp+arg_10]
0x8FEE39: mov     ecx, [edx+3040h]
0x8FEE3F: mov     eax, [ecx]
0x8FEE41: lea     edi, [eax+0Ch]
0x8FEE44: mov     [ecx], edi
0x8FEE46: mov     ecx, [ebp+arg_4]
0x8FEE49: mov     [eax+4], ecx
0x8FEE4C: mov     ecx, [ebp+arg_8]
0x8FEE4F: mov     [eax], ebx
0x8FEE51: mov     [eax+8], ecx
0x8FEE54: add     dword ptr [edx], 30h ; '0'
0x8FEE57: jmp     short loc_8FEEBB
0x8FEE59: mov     eax, [edi+8]
0x8FEE5C: push    ebx
0x8FEE5D: push    eax
0x8FEE5E: mov     eax, [edi+4]
0x8FEE61: push    eax
0x8FEE62: mov     eax, [edi]
0x8FEE64: push    eax
0x8FEE65: call    dword ptr [edx+8]
0x8FEE68: cmp     ax, 0FFFFh
0x8FEE6C: mov     [ebx+20h], ax
0x8FEE70: jnz     short loc_8FEE83
0x8FEE72: push    0
0x8FEE74: push    esi
0x8FEE75: call    sub_939B00
0x8FEE7A: mov     ebx, [esp+1E8h+var_1C8]
0x8FEE7E: add     esp, 8
0x8FEE81: jmp     short loc_8FEEBB
0x8FEE83: mov     edx, [ebp+arg_10]
0x8FEE86: mov     [esi+6], ax
0x8FEE8A: add     dword ptr [edx], 30h ; '0'
0x8FEE8D: jmp     short loc_8FEEBB
0x8FEE8F: cmp     eax, 5
0x8FEE92: jnz     short loc_8FEE9A
0x8FEE94: mov     ebx, [esp+1E0h+var_1C8]
0x8FEE98: jmp     short loc_8FEEBB
0x8FEE9A: cmp     eax, 6
0x8FEE9D: jnz     short loc_8FEEAF
0x8FEE9F: mov     eax, [ebp+arg_10]
0x8FEEA2: mov     ecx, [eax]
0x8FEEA4: mov     ebx, [esp+1E0h+var_1C8]
0x8FEEA8: add     ecx, 0FFFFFFD0h
0x8FEEAB: mov     [eax], ecx
0x8FEEAD: jmp     short loc_8FEEBB
0x8FEEAF: lea     ebx, [eax+eax*2]
0x8FEEB2: mov     eax, [esp+1E0h+var_1C8]
0x8FEEB6: shl     ebx, 4
0x8FEEB9: add     ebx, eax
0x8FEEBB: mov     ecx, [ebp+arg_10]
0x8FEEBE: mov     eax, [ecx+3040h]
0x8FEEC4: test    eax, eax
0x8FEEC6: jz      short loc_8FEEDB
0x8FEEC8: cmp     ebx, [ecx]
0x8FEECA: jnb     short loc_8FEEDB
0x8FEECC: mov     edx, [eax+4]
0x8FEECF: mov     [edx], ebx
0x8FEED1: mov     eax, [ecx+3040h]
0x8FEED7: add     dword ptr [eax+4], 4
0x8FEEDB: mov     eax, [ebp+arg_C]
0x8FEEDE: movaps  xmm0, [esp+1E0h+var_190]
0x8FEEE3: movaps  xmmword ptr [eax], xmm0
0x8FEEE6: xor     edi, edi
0x8FEEE8: mov     eax, [esp+edi+1E0h+var_178]
0x8FEEEC: test    eax, eax
0x8FEEEE: jz      short loc_8FEF16
0x8FEEF0: mov     ebx, [esp+edi+1E0h+var_198]
0x8FEEF4: mov     ecx, [ebx]
0x8FEEF6: mov     ecx, [ecx]
0x8FEEF8: cmp     word ptr [ecx+4], 0
0x8FEEFD: jz      short loc_8FEF10
0x8FEEFF: dec     word ptr [ecx+6]
0x8FEF03: cmp     word ptr [ecx+6], 0
0x8FEF08: jnz     short loc_8FEF10
0x8FEF0A: mov     edx, [ecx]
0x8FEF0C: push    1
0x8FEF0E: call    dword ptr [edx]
0x8FEF10: mov     eax, [esp+edi+1E0h+var_178]
0x8FEF14: mov     [ebx], eax
0x8FEF16: add     edi, 4
0x8FEF19: cmp     edi, 8
0x8FEF1C: jl      short loc_8FEEE8
0x8FEF1E: mov     al, [esi+2]
0x8FEF21: mov     ecx, [ebp+arg_4]
0x8FEF24: mov     edi, large fs:2Ch
0x8FEF2B: mov     ebx, ds:0BA9DE4h
0x8FEF31: mov     [ecx+2], al
0x8FEF34: mov     eax, [edi+ebx*4]
0x8FEF37: mov     edx, [eax+1A4h]
0x8FEF3D: cmp     edx, [eax+1A8h]
0x8FEF43: jnb     short loc_8FEF6A
0x8FEF45: mov     ecx, [eax+1A4h]
0x8FEF4B: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8FEF51: rdtsc
0x8FEF53: mov     dword ptr [esp+1E0h+var_1B8], eax
0x8FEF57: mov     eax, dword ptr [esp+1E0h+var_1B8]
0x8FEF5B: mov     [ecx+4], eax
0x8FEF5E: mov     eax, [edi+ebx*4]
0x8FEF61: add     ecx, 0Ch
0x8FEF64: mov     [eax+1A4h], ecx
0x8FEF6A: mov     eax, [edi+ebx*4]
0x8FEF6D: mov     ecx, [eax+1A4h]
0x8FEF73: cmp     ecx, [eax+1A8h]
0x8FEF79: jnb     short loc_8FEF9F
0x8FEF7B: mov     edi, eax
0x8FEF7D: mov     ecx, [edi+1A4h]
0x8FEF83: mov     dword ptr [ecx], offset aEt; "Et"
0x8FEF89: rdtsc
0x8FEF8B: mov     dword ptr [esp+1E0h+var_1B8], eax
0x8FEF8F: mov     edx, dword ptr [esp+1E0h+var_1B8]
0x8FEF93: mov     [ecx+4], edx
0x8FEF96: add     ecx, 0Ch
0x8FEF99: mov     [edi+1A4h], ecx
0x8FEF9F: movzx   ecx, byte ptr [esi+1]
0x8FEFA3: movzx   eax, byte ptr [esi+2]
0x8FEFA7: movzx   edx, byte ptr [esi]
0x8FEFAA: lea     eax, [ecx+eax*4]
0x8FEFAD: mov     ecx, [ebp+arg_8]
0x8FEFB0: add     eax, edx
0x8FEFB2: lea     eax, [eax+eax+1Fh]
0x8FEFB6: pop     edi
0x8FEFB7: and     eax, 0FFFFFFF0h
0x8FEFBA: pop     esi
0x8FEFBB: add     eax, ecx
0x8FEFBD: pop     ebx
0x8FEFBE: mov     esp, ebp
0x8FEFC0: pop     ebp
0x8FEFC1: retn

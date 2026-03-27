0x8AE100: push    ebp
0x8AE101: mov     ebp, esp
0x8AE103: and     esp, 0FFFFFFF0h
0x8AE106: sub     esp, 0D4h
0x8AE10C: push    ebx
0x8AE10D: mov     ebx, large fs:2Ch
0x8AE114: push    esi
0x8AE115: mov     esi, ecx
0x8AE117: mov     ecx, ds:0BA9DE4h
0x8AE11D: mov     eax, [ebx+ecx*4]
0x8AE120: mov     edx, [eax+1A4h]
0x8AE126: push    edi
0x8AE127: cmp     edx, [eax+1A8h]
0x8AE12D: jnb     short loc_8AE153
0x8AE12F: mov     edi, eax
0x8AE131: mov     ecx, [edi+1A4h]
0x8AE137: mov     dword ptr [ecx], offset aTtchecksupport; "TtcheckSupport"
0x8AE13D: rdtsc
0x8AE13F: mov     [esp+0E0h+var_CC], eax
0x8AE143: mov     eax, [esp+0E0h+var_CC]
0x8AE147: mov     [ecx+4], eax
0x8AE14A: add     ecx, 0Ch
0x8AE14D: mov     [edi+1A4h], ecx
0x8AE153: mov     ecx, [ebp+arg_8]
0x8AE156: push    ecx
0x8AE157: mov     ecx, esi
0x8AE159: call    sub_8AD070
0x8AE15E: mov     edx, [esi+64h]
0x8AE161: mov     eax, [esi+78h]
0x8AE164: mov     ecx, ds:0BA9DE4h
0x8AE16A: lea     edi, [edx+eax+0Ah]
0x8AE16E: mov     eax, [ebx+ecx*4]
0x8AE171: mov     ecx, [eax+19Ch]
0x8AE177: xor     edx, edx
0x8AE179: cmp     ecx, edx
0x8AE17B: mov     dword ptr [esp+0E0h+var_C4], edx
0x8AE17F: mov     dword ptr [esp+0E0h+var_C4+4], edx
0x8AE183: mov     [esp+0E0h+var_BC], 80000000h
0x8AE18B: mov     [esp+0E0h+var_B4], eax
0x8AE18F: jnz     short loc_8AE197
0x8AE191: mov     ecx, ds:0BA7D9Ch
0x8AE197: mov     edx, [ecx+20h]
0x8AE19A: mov     eax, edi
0x8AE19C: shl     eax, 6
0x8AE19F: add     eax, 10h
0x8AE1A2: and     eax, 0FFFFFFF0h
0x8AE1A5: lea     ebx, [edx+eax]
0x8AE1A8: cmp     ebx, [ecx+2Ch]
0x8AE1AB: ja      short loc_8AE1B4
0x8AE1AD: mov     [ecx+20h], ebx
0x8AE1B0: mov     eax, edx
0x8AE1B2: jmp     short loc_8AE1BA
0x8AE1B4: mov     edx, [ecx]
0x8AE1B6: push    eax
0x8AE1B7: call    dword ptr [edx+0Ch]
0x8AE1BA: mov     dword ptr [esp+0E0h+var_C4], eax
0x8AE1BE: mov     [esp+0E0h+var_B8], eax
0x8AE1C2: mov     eax, [esi+78h]
0x8AE1C5: or      edi, 80000000h
0x8AE1CB: xor     ebx, ebx
0x8AE1CD: test    eax, eax
0x8AE1CF: mov     [esp+0E0h+var_BC], edi
0x8AE1D3: mov     dword ptr [esp+0E0h+var_C4+4], eax
0x8AE1D7: jle     short loc_8AE23C
0x8AE1D9: xor     eax, eax
0x8AE1DB: mov     [esp+0E0h+var_CC], eax
0x8AE1DF: mov     [esp+0E0h+var_C8], eax
0x8AE1E3: mov     edx, dword ptr [esp+0E0h+var_C4]
0x8AE1E7: mov     ecx, [esp+0E0h+var_C8]
0x8AE1EB: mov     eax, [esi]
0x8AE1ED: add     ecx, edx
0x8AE1EF: mov     edx, [esp+0E0h+var_CC]
0x8AE1F3: push    0
0x8AE1F5: push    ecx
0x8AE1F6: mov     ecx, [esi+74h]
0x8AE1F9: add     ecx, edx
0x8AE1FB: push    ecx
0x8AE1FC: mov     ecx, esi
0x8AE1FE: call    dword ptr [eax+0Ch]
0x8AE201: mov     edx, [esi+0A4h]
0x8AE207: lea     eax, [esi+40h]
0x8AE20A: push    eax; int
0x8AE20B: push    edx; float
0x8AE20C: lea     edi, [esp+0E8h+var_C4]
0x8AE210: mov     eax, ebx
0x8AE212: call    sub_8AC3C0
0x8AE217: mov     edx, [esp+0E8h+var_C8]
0x8AE21B: mov     ecx, [esp+0E8h+var_CC]
0x8AE21F: mov     eax, [esi+78h]
0x8AE222: add     esp, 8
0x8AE225: inc     ebx
0x8AE226: add     edx, 40h ; '@'
0x8AE229: add     ecx, 30h ; '0'
0x8AE22C: cmp     ebx, eax
0x8AE22E: mov     [esp+0E0h+var_C8], edx
0x8AE232: mov     [esp+0E0h+var_CC], ecx
0x8AE236: jl      short loc_8AE1E3
0x8AE238: mov     eax, dword ptr [esp+0E0h+var_C4+4]
0x8AE23C: mov     ecx, [esp+0E0h+var_BC]
0x8AE240: mov     edx, [esi+64h]
0x8AE243: and     ecx, 3FFFFFFFh
0x8AE249: mov     edi, ecx
0x8AE24B: sub     edi, eax
0x8AE24D: cmp     edi, edx
0x8AE24F: jge     short loc_8AE274
0x8AE251: add     edx, eax
0x8AE253: cmp     ecx, edx
0x8AE255: jge     short loc_8AE274
0x8AE257: lea     eax, [ecx+ecx]
0x8AE25A: cmp     edx, eax
0x8AE25C: jl      short loc_8AE260
0x8AE25E: mov     eax, edx
0x8AE260: push    40h ; '@'
0x8AE262: push    eax
0x8AE263: lea     eax, [esp+0E8h+var_C4]
0x8AE267: push    eax
0x8AE268: call    sub_8A6E40
0x8AE26D: mov     eax, dword ptr [esp+0ECh+var_C4+4]
0x8AE271: add     esp, 0Ch
0x8AE274: mov     edi, [esi+64h]
0x8AE277: mov     ecx, [esp+0E0h+var_B4]
0x8AE27B: mov     ecx, [ecx+19Ch]
0x8AE281: add     edi, eax
0x8AE283: xor     eax, eax
0x8AE285: cmp     ecx, eax
0x8AE287: mov     [esp+0E0h+var_A0], eax
0x8AE28B: mov     [esp+0E0h+var_9C], eax
0x8AE28F: mov     dword ptr [esp+0E0h+var_98], 80000000h
0x8AE297: jnz     short loc_8AE29F
0x8AE299: mov     ecx, ds:0BA7D9Ch
0x8AE29F: mov     edx, [ecx+20h]
0x8AE2A2: lea     eax, [edi+1]
0x8AE2A5: shl     eax, 4
0x8AE2A8: and     eax, 0FFFFFFF0h
0x8AE2AB: lea     ebx, [edx+eax]
0x8AE2AE: cmp     ebx, [ecx+2Ch]
0x8AE2B1: ja      short loc_8AE2BA
0x8AE2B3: mov     [ecx+20h], ebx
0x8AE2B6: mov     eax, edx
0x8AE2B8: jmp     short loc_8AE2C0
0x8AE2BA: mov     edx, [ecx]
0x8AE2BC: push    eax
0x8AE2BD: call    dword ptr [edx+0Ch]
0x8AE2C0: mov     ecx, [esp+0E0h+var_B4]
0x8AE2C4: mov     ebx, dword ptr [esp+0E0h+var_C4+4]
0x8AE2C8: mov     ecx, [ecx+19Ch]
0x8AE2CE: or      edi, 80000000h
0x8AE2D4: mov     dword ptr [esp+0E0h+var_98], edi
0x8AE2D8: mov     edi, [esi+64h]
0x8AE2DB: mov     [esp+0E0h+var_A0], eax
0x8AE2DF: mov     dword ptr [esp+0E0h+var_98+4], eax
0x8AE2E3: xor     eax, eax
0x8AE2E5: add     edi, ebx
0x8AE2E7: cmp     ecx, eax
0x8AE2E9: mov     dword ptr [esp+0E0h+var_B0], eax
0x8AE2ED: mov     dword ptr [esp+0E0h+var_B0+4], eax
0x8AE2F1: mov     dword ptr [esp+0E0h+var_B0+8], 80000000h
0x8AE2F9: jnz     short loc_8AE301
0x8AE2FB: mov     ecx, ds:0BA7D9Ch
0x8AE301: mov     eax, [ecx+20h]
0x8AE304: lea     edx, [edi+1]
0x8AE307: shl     edx, 4
0x8AE30A: and     edx, 0FFFFFFF0h
0x8AE30D: lea     ebx, [eax+edx]
0x8AE310: cmp     ebx, [ecx+2Ch]
0x8AE313: ja      short loc_8AE31A
0x8AE315: mov     [ecx+20h], ebx
0x8AE318: jmp     short loc_8AE320
0x8AE31A: mov     eax, [ecx]
0x8AE31C: push    edx
0x8AE31D: call    dword ptr [eax+0Ch]
0x8AE320: mov     edx, dword ptr [esp+0E0h+var_C4]
0x8AE324: xorps   xmm0, xmm0
0x8AE327: mov     dword ptr [esp+0E0h+var_40+8], edx
0x8AE32E: mov     edx, [ebp+arg_0]
0x8AE331: movaps  [esp+0E0h+var_98+8], xmm0
0x8AE336: movaps  xmmword ptr [esp+0E0h+var_88+8], xmm0
0x8AE33B: movaps  xmm0, xmmword ptr [edx]
0x8AE33E: mov     edx, [esi+68h]
0x8AE341: or      edi, 80000000h
0x8AE347: movaps  [esp+0E0h+anonymous_0], xmm0
0x8AE34C: movaps  xmm0, xmmword ptr [esi+40h]
0x8AE350: mov     ecx, edi
0x8AE352: mov     edi, [esi+84h]
0x8AE358: dec     edi
0x8AE359: movaps  [esp+0E0h+var_50], xmm0
0x8AE361: mov     [esp+0E0h+var_CC], edx
0x8AE365: movss   xmm0, [esp+0E0h+var_CC]
0x8AE36B: mov     edx, [esp+0E0h+var_A0]
0x8AE36F: mov     dword ptr [esp+0E0h+var_B0], eax
0x8AE373: mov     dword ptr [esp+0E0h+var_B0+0Ch], eax
0x8AE377: mov     eax, dword ptr [esp+0E0h+var_C4+4]
0x8AE37B: shufps  xmm0, xmm0, 0
0x8AE37F: mov     dword ptr [esp+0E0h+var_B0+8], ecx
0x8AE383: mov     dword ptr [esp+0E0h+var_40+0Ch], eax
0x8AE38A: mov     dword ptr [esp+0E0h+var_40], 3C888889h
0x8AE395: mov     dword ptr [esp+0E0h+var_40+4], 3C888889h
0x8AE3A0: movaps  [esp+0E0h+anonymous_1], xmm0
0x8AE3A8: mov     [esp+0E0h+var_C], edx
0x8AE3AF: js      short loc_8AE3D6
0x8AE3B1: lea     ebx, [esi+74h]
0x8AE3B4: mov     eax, [esi+80h]
0x8AE3BA: mov     ecx, [eax+edi*4]
0x8AE3BD: mov     edx, [ecx]
0x8AE3BF: lea     eax, [esp+0E0h+var_88+8]
0x8AE3C3: push    eax
0x8AE3C4: push    ebx
0x8AE3C5: call    dword ptr [edx+4]
0x8AE3C8: dec     edi
0x8AE3C9: jns     short loc_8AE3B4
0x8AE3CB: mov     ecx, dword ptr [esp+0E0h+var_B0+8]
0x8AE3CF: mov     eax, dword ptr [esp+0E0h+var_40+0Ch]
0x8AE3D6: and     ecx, 3FFFFFFFh
0x8AE3DC: cmp     ecx, eax
0x8AE3DE: mov     edi, eax
0x8AE3E0: jge     short loc_8AE401
0x8AE3E2: add     ecx, ecx
0x8AE3E4: cmp     eax, ecx
0x8AE3E6: jge     short loc_8AE3EA
0x8AE3E8: mov     eax, ecx
0x8AE3EA: push    10h
0x8AE3EC: push    eax
0x8AE3ED: lea     ecx, [esp+0E8h+var_B0]
0x8AE3F1: push    ecx
0x8AE3F2: call    sub_8A6E40
0x8AE3F7: mov     eax, dword ptr [esp+0ECh+var_40+0Ch]
0x8AE3FE: add     esp, 0Ch
0x8AE401: mov     ecx, dword ptr [esp+0E0h+var_98]
0x8AE405: and     ecx, 3FFFFFFFh
0x8AE40B: cmp     ecx, eax
0x8AE40D: mov     dword ptr [esp+0E0h+var_B0+4], edi
0x8AE411: mov     edi, eax
0x8AE413: jge     short loc_8AE434
0x8AE415: add     ecx, ecx
0x8AE417: cmp     eax, ecx
0x8AE419: jge     short loc_8AE41D
0x8AE41B: mov     eax, ecx
0x8AE41D: push    10h
0x8AE41F: push    eax
0x8AE420: lea     edx, [esp+0E8h+var_A0]
0x8AE424: push    edx
0x8AE425: call    sub_8A6E40
0x8AE42A: mov     eax, dword ptr [esp+0ECh+var_40+0Ch]
0x8AE431: add     esp, 0Ch
0x8AE434: mov     ecx, [esp+0E0h+var_BC]
0x8AE438: and     ecx, 3FFFFFFFh
0x8AE43E: cmp     ecx, eax
0x8AE440: mov     [esp+0E0h+var_9C], edi
0x8AE444: mov     edi, eax
0x8AE446: jge     short loc_8AE467
0x8AE448: add     ecx, ecx
0x8AE44A: cmp     eax, ecx
0x8AE44C: jge     short loc_8AE450
0x8AE44E: mov     eax, ecx
0x8AE450: push    40h ; '@'
0x8AE452: push    eax
0x8AE453: lea     eax, [esp+0E8h+var_C4]
0x8AE457: push    eax
0x8AE458: call    sub_8A6E40
0x8AE45D: mov     eax, dword ptr [esp+0ECh+var_40+0Ch]
0x8AE464: add     esp, 0Ch
0x8AE467: xor     edx, edx
0x8AE469: test    eax, eax
0x8AE46B: mov     dword ptr [esp+0E0h+var_C4+4], edi
0x8AE46F: jle     short loc_8AE4AC
0x8AE471: movaps  xmm0, [esp+0E0h+var_98+8]
0x8AE476: xor     eax, eax
0x8AE478: xor     ecx, ecx
0x8AE47A: lea     ebx, [ebx+0]
0x8AE480: mov     edi, dword ptr [esp+0E0h+var_C4]
0x8AE484: movaps  xmm1, xmmword ptr [eax+edi+10h]
0x8AE489: mov     edi, dword ptr [esp+0E0h+var_B0]
0x8AE48D: movaps  xmmword ptr [ecx+edi], xmm1
0x8AE491: mov     edi, dword ptr [esp+0E0h+var_C4]
0x8AE495: movaps  xmmword ptr [eax+edi+10h], xmm0
0x8AE49A: mov     edi, dword ptr [esp+0E0h+var_40+0Ch]
0x8AE4A1: inc     edx
0x8AE4A2: add     ecx, 10h
0x8AE4A5: add     eax, 40h ; '@'
0x8AE4A8: cmp     edx, edi
0x8AE4AA: jl      short loc_8AE480
0x8AE4AC: lea     ecx, [esp+0E0h+var_30]
0x8AE4B3: push    ecx
0x8AE4B4: lea     edx, [esp+0E4h+var_88+8]
0x8AE4B8: push    edx
0x8AE4B9: call    sub_8EC790
0x8AE4BE: mov     edx, [ebp+arg_4]
0x8AE4C1: movaps  xmm0, [esp+0E8h+var_98+8]
0x8AE4C6: mov     eax, [ebp+arg_0]
0x8AE4C9: movaps  xmm2, [esp+0E8h+var_20]
0x8AE4D1: movaps  xmmword ptr [edx+20h], xmm0
0x8AE4D5: movaps  xmmword ptr [edx+10h], xmm0
0x8AE4D9: movaps  xmm3, xmmword ptr [eax]
0x8AE4DC: movaps  xmm0, xmmword ptr ds:0A372D0h
0x8AE4E3: movaps  xmm1, xmm2
0x8AE4E6: subps   xmm1, xmm3
0x8AE4E9: andps   xmm1, xmm0
0x8AE4EC: mov     [esp+0E8h+var_CC], 3A83126Fh
0x8AE4F4: movss   xmm0, [esp+0E8h+var_CC]
0x8AE4FA: shufps  xmm0, xmm0, 0
0x8AE4FE: cmpltps xmm0, xmm1
0x8AE502: add     esp, 8
0x8AE505: movmskps ecx, xmm0
0x8AE508: test    cl, 7
0x8AE50B: jz      loc_8AE74D
0x8AE511: movaps  xmm0, xmm2
0x8AE514: mulps   xmm0, xmm2
0x8AE517: movaps  xmm1, xmm0
0x8AE51A: shufps  xmm1, xmm0, 55h ; 'U'
0x8AE51E: movaps  xmm4, xmm0
0x8AE521: lea     eax, [esp+0E0h+var_CC]
0x8AE525: addss   xmm1, xmm0
0x8AE529: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8AE52D: addss   xmm4, xmm1
0x8AE531: movss   dword ptr [eax], xmm4
0x8AE535: fld     [esp+0E0h+var_CC]
0x8AE539: fcomp   dword ptr ds:0A37080h
0x8AE53F: fnstsw  ax
0x8AE541: test    ah, 5
0x8AE544: jnp     loc_8AE608
0x8AE54A: movaps  xmm1, xmm0
0x8AE54D: fld     dword ptr [esi+0A4h]
0x8AE553: shufps  xmm1, xmm0, 55h ; 'U'
0x8AE557: addss   xmm1, xmm0
0x8AE55B: movaps  xmm4, xmm0
0x8AE55E: shufps  xmm4, xmm0, 0AAh ; 'ª'
0x8AE562: movaps  xmm0, xmm4
0x8AE565: addss   xmm0, xmm1
0x8AE569: movaps  [esp+0E0h+var_98+8], xmm0
0x8AE56E: rsqrtss xmm1, xmm0
0x8AE572: movss   dword ptr [esp+0E0h+var_98+8], xmm1
0x8AE578: movaps  xmm1, [esp+0E0h+var_98+8]
0x8AE57D: mulss   xmm0, xmm1
0x8AE581: mulss   xmm0, xmm1
0x8AE585: mov     [esp+0E0h+var_CC], 40400000h
0x8AE58D: movss   xmm4, [esp+0E0h+var_CC]
0x8AE593: subss   xmm4, xmm0
0x8AE597: mov     [esp+0E0h+var_CC], 3F000000h
0x8AE59F: movss   xmm0, [esp+0E0h+var_CC]
0x8AE5A5: mulss   xmm0, xmm1
0x8AE5A9: mulss   xmm0, xmm4
0x8AE5AD: movaps  xmm1, xmm0
0x8AE5B0: shufps  xmm1, xmm0, 0
0x8AE5B4: movaps  xmm0, xmm1
0x8AE5B7: mulps   xmm0, xmm2
0x8AE5BA: movaps  [esp+0E0h+var_20], xmm0
0x8AE5C2: mulps   xmm0, xmm3
0x8AE5C5: movaps  xmm1, xmm0
0x8AE5C8: shufps  xmm1, xmm0, 55h ; 'U'
0x8AE5CC: movaps  xmm2, xmm0
0x8AE5CF: addss   xmm1, xmm0
0x8AE5D3: shufps  xmm2, xmm0, 0AAh ; 'ª'
0x8AE5D7: lea     ecx, [esp+0E0h+var_CC]
0x8AE5DB: addss   xmm2, xmm1
0x8AE5DF: movss   dword ptr [ecx], xmm2
0x8AE5E3: fld     [esp+0E0h+var_CC]
0x8AE5E7: fmul    [esp+0E0h+var_CC]
0x8AE5EB: fsubr   dword ptr ds:0A2F948h
0x8AE5F1: fld     st(1)
0x8AE5F3: fmul    st, st(2)
0x8AE5F5: fcompp
0x8AE5F7: fnstsw  ax
0x8AE5F9: fstp    st
0x8AE5FB: test    ah, 41h
0x8AE5FE: jnz     short loc_8AE608
0x8AE600: mov     dword ptr [edx], 1
0x8AE606: jmp     short loc_8AE60E
0x8AE608: mov     dword ptr [edx], 2
0x8AE60E: mov     eax, dword ptr [esp+0E0h+var_40+0Ch]
0x8AE615: test    eax, eax
0x8AE617: mov     [esp+0E0h+var_C8], 0
0x8AE61F: jle     loc_8AE74D
0x8AE625: mov     ecx, dword ptr [esp+0E0h+var_B0]
0x8AE629: mov     ebx, [esp+0E0h+var_A0]
0x8AE62D: mov     esi, dword ptr [esp+0E0h+var_C4]
0x8AE631: sub     ebx, ecx
0x8AE633: mov     edi, eax
0x8AE635: cmp     byte ptr [ebx+ecx], 0
0x8AE639: jz      short loc_8AE69B
0x8AE63B: mov     eax, [ebp+arg_0]
0x8AE63E: movaps  xmm2, xmmword ptr [eax]
0x8AE641: movaps  xmm1, xmmword ptr [esi]
0x8AE644: movaps  xmm0, xmm1
0x8AE647: mulps   xmm0, xmm2
0x8AE64A: movaps  xmm2, xmm0
0x8AE64D: shufps  xmm2, xmm0, 55h ; 'U'
0x8AE651: movaps  xmm3, xmm0
0x8AE654: lea     eax, [esp+0E0h+var_CC]
0x8AE658: addss   xmm2, xmm0
0x8AE65C: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8AE660: addss   xmm3, xmm2
0x8AE664: movss   dword ptr [eax], xmm3
0x8AE668: fld     [esp+0E0h+var_CC]
0x8AE66C: fcomp   dword ptr ds:0A97C9Ch
0x8AE672: fnstsw  ax
0x8AE674: test    ah, 5
0x8AE677: jp      short loc_8AE69B
0x8AE679: movaps  xmm0, xmmword ptr [edx+10h]
0x8AE67D: mov     eax, [esp+0E0h+var_C8]
0x8AE681: addps   xmm0, xmm1
0x8AE684: movaps  xmmword ptr [edx+10h], xmm0
0x8AE688: movaps  xmm0, xmmword ptr [ecx]
0x8AE68B: movaps  xmm1, xmmword ptr [edx+20h]
0x8AE68F: inc     eax
0x8AE690: addps   xmm1, xmm0
0x8AE693: movaps  xmmword ptr [edx+20h], xmm1
0x8AE697: mov     [esp+0E0h+var_C8], eax
0x8AE69B: add     esi, 40h ; '@'
0x8AE69E: add     ecx, 10h
0x8AE6A1: dec     edi
0x8AE6A2: jnz     short loc_8AE635
0x8AE6A4: mov     eax, [esp+0E0h+var_C8]
0x8AE6A8: test    eax, eax
0x8AE6AA: jle     loc_8AE74D
0x8AE6B0: fild    [esp+0E0h+var_C8]
0x8AE6B4: movaps  xmm1, xmmword ptr [edx+10h]
0x8AE6B8: movaps  xmm0, xmm1
0x8AE6BB: mulps   xmm0, xmm1
0x8AE6BE: fdivr   dword ptr ds:0A2F948h
0x8AE6C4: movaps  xmm2, xmm0
0x8AE6C7: shufps  xmm2, xmm0, 55h ; 'U'
0x8AE6CB: addss   xmm2, xmm0
0x8AE6CF: movaps  xmm3, xmm0
0x8AE6D2: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8AE6D6: movaps  xmm0, xmm3
0x8AE6D9: addss   xmm0, xmm2
0x8AE6DD: movaps  [esp+0E0h+var_98+8], xmm0
0x8AE6E2: rsqrtss xmm2, xmm0
0x8AE6E6: movss   dword ptr [esp+0E0h+var_98+8], xmm2
0x8AE6EC: movaps  xmm2, [esp+0E0h+var_98+8]
0x8AE6F1: mulss   xmm0, xmm2
0x8AE6F5: mulss   xmm0, xmm2
0x8AE6F9: mov     [esp+0E0h+var_CC], 40400000h
0x8AE701: movss   xmm3, [esp+0E0h+var_CC]
0x8AE707: subss   xmm3, xmm0
0x8AE70B: mov     [esp+0E0h+var_CC], 3F000000h
0x8AE713: movss   xmm0, [esp+0E0h+var_CC]
0x8AE719: mulss   xmm0, xmm2
0x8AE71D: mulss   xmm0, xmm3
0x8AE721: movaps  xmm2, xmm0
0x8AE724: shufps  xmm2, xmm0, 0
0x8AE728: mulps   xmm2, xmm1
0x8AE72B: movaps  xmmword ptr [edx+10h], xmm2
0x8AE72F: movaps  xmm1, xmmword ptr [edx+20h]
0x8AE733: fstp    [esp+0E0h+var_CC]
0x8AE737: movss   xmm0, [esp+0E0h+var_CC]
0x8AE73D: movaps  xmm2, xmm0
0x8AE740: shufps  xmm2, xmm0, 0
0x8AE744: mulps   xmm2, xmm1
0x8AE747: movaps  xmmword ptr [edx+20h], xmm2
0x8AE74B: jmp     short loc_8AE753
0x8AE74D: mov     dword ptr [edx], 0
0x8AE753: mov     ecx, large fs:2Ch
0x8AE75A: mov     edx, ds:0BA9DE4h
0x8AE760: mov     eax, [ecx+edx*4]
0x8AE763: mov     ecx, [eax+1A4h]
0x8AE769: cmp     ecx, [eax+1A8h]
0x8AE76F: mov     esi, [esp+0E0h+var_B4]
0x8AE773: jnb     short loc_8AE797
0x8AE775: mov     ecx, [esi+1A4h]
0x8AE77B: mov     dword ptr [ecx], offset aEt; "Et"
0x8AE781: rdtsc
0x8AE783: mov     [esp+0E0h+var_CC], eax
0x8AE787: mov     edx, [esp+0E0h+var_CC]
0x8AE78B: mov     [ecx+4], edx
0x8AE78E: add     ecx, 0Ch
0x8AE791: mov     [esi+1A4h], ecx
0x8AE797: mov     ecx, [esi+19Ch]
0x8AE79D: test    ecx, ecx
0x8AE79F: mov     eax, dword ptr [esp+0E0h+var_B0+0Ch]
0x8AE7A3: jnz     short loc_8AE7AB
0x8AE7A5: mov     ecx, ds:0BA7D9Ch
0x8AE7AB: cmp     eax, [ecx+28h]
0x8AE7AE: mov     [ecx+20h], eax
0x8AE7B1: jnz     short loc_8AE7B9
0x8AE7B3: mov     edx, [ecx]
0x8AE7B5: push    eax
0x8AE7B6: call    dword ptr [edx+10h]
0x8AE7B9: mov     eax, dword ptr [esp+0E0h+var_B0+8]
0x8AE7BD: test    eax, eax
0x8AE7BF: js      short loc_8AE7E6
0x8AE7C1: mov     ecx, [esi+19Ch]
0x8AE7C7: test    ecx, ecx
0x8AE7C9: jnz     short loc_8AE7D1
0x8AE7CB: mov     ecx, ds:0BA7D9Ch
0x8AE7D1: and     eax, 3FFFFFFFh
0x8AE7D6: push    14h
0x8AE7D8: shl     eax, 4
0x8AE7DB: push    eax
0x8AE7DC: mov     eax, dword ptr [esp+0E8h+var_B0]
0x8AE7E0: push    eax
0x8AE7E1: call    sub_8A75D0
0x8AE7E6: mov     ecx, [esi+19Ch]
0x8AE7EC: test    ecx, ecx
0x8AE7EE: mov     eax, dword ptr [esp+0E0h+var_98+4]
0x8AE7F2: jnz     short loc_8AE7FA
0x8AE7F4: mov     ecx, ds:0BA7D9Ch
0x8AE7FA: cmp     eax, [ecx+28h]
0x8AE7FD: mov     [ecx+20h], eax
0x8AE800: jnz     short loc_8AE808
0x8AE802: mov     edx, [ecx]
0x8AE804: push    eax
0x8AE805: call    dword ptr [edx+10h]
0x8AE808: mov     eax, dword ptr [esp+0E0h+var_98]
0x8AE80C: test    eax, eax
0x8AE80E: js      short loc_8AE835
0x8AE810: mov     ecx, [esi+19Ch]
0x8AE816: test    ecx, ecx
0x8AE818: jnz     short loc_8AE820
0x8AE81A: mov     ecx, ds:0BA7D9Ch
0x8AE820: and     eax, 3FFFFFFFh
0x8AE825: push    14h
0x8AE827: shl     eax, 4
0x8AE82A: push    eax
0x8AE82B: mov     eax, [esp+0E8h+var_A0]
0x8AE82F: push    eax
0x8AE830: call    sub_8A75D0
0x8AE835: mov     ecx, [esi+19Ch]
0x8AE83B: test    ecx, ecx
0x8AE83D: mov     eax, [esp+0E0h+var_B8]
0x8AE841: jnz     short loc_8AE849
0x8AE843: mov     ecx, ds:0BA7D9Ch
0x8AE849: cmp     eax, [ecx+28h]
0x8AE84C: mov     [ecx+20h], eax
0x8AE84F: jnz     short loc_8AE857
0x8AE851: mov     edx, [ecx]
0x8AE853: push    eax
0x8AE854: call    dword ptr [edx+10h]
0x8AE857: mov     eax, [esp+0E0h+var_BC]
0x8AE85B: test    eax, eax
0x8AE85D: js      short loc_8AE884
0x8AE85F: mov     ecx, [esi+19Ch]
0x8AE865: test    ecx, ecx
0x8AE867: jnz     short loc_8AE86F
0x8AE869: mov     ecx, ds:0BA7D9Ch
0x8AE86F: and     eax, 3FFFFFFFh
0x8AE874: push    14h
0x8AE876: shl     eax, 6
0x8AE879: push    eax
0x8AE87A: mov     eax, dword ptr [esp+0E8h+var_C4]
0x8AE87E: push    eax
0x8AE87F: call    sub_8A75D0
0x8AE884: pop     edi
0x8AE885: pop     esi
0x8AE886: pop     ebx
0x8AE887: mov     esp, ebp
0x8AE889: pop     ebp
0x8AE88A: retn    0Ch

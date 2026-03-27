0x8AC1E0: push    ebp
0x8AC1E1: mov     ebp, esp
0x8AC1E3: and     esp, 0FFFFFFF0h
0x8AC1E6: sub     esp, 14h
0x8AC1E9: push    ebx
0x8AC1EA: push    esi
0x8AC1EB: push    edi
0x8AC1EC: mov     edi, [ebp+arg_0]
0x8AC1EF: mov     esi, ecx
0x8AC1F1: mov     ecx, [edi+48h]
0x8AC1F4: call    sub_8BC720
0x8AC1F9: mov     ecx, [esi+30h]
0x8AC1FC: xor     ebx, ebx
0x8AC1FE: cmp     ecx, ebx
0x8AC200: jz      short loc_8AC207
0x8AC202: call    sub_8BC730
0x8AC207: movaps  xmm0, xmmword ptr [edi+10h]
0x8AC20B: movaps  xmmword ptr [esi+10h], xmm0
0x8AC20F: mov     eax, [edi+20h]
0x8AC212: mov     [esi+34h], eax
0x8AC215: mov     ecx, [edi+24h]
0x8AC218: mov     [esi+38h], ecx
0x8AC21B: mov     edx, [edi+28h]
0x8AC21E: mov     [esi+5Ch], edx
0x8AC221: mov     eax, [edi+40h]
0x8AC224: mov     [esi+50h], eax
0x8AC227: mov     ecx, [edi+44h]
0x8AC22A: mov     [esi+54h], ecx
0x8AC22D: mov     edx, [edi+4Ch]
0x8AC230: mov     [esi+58h], edx
0x8AC233: mov     eax, [edi+48h]
0x8AC236: mov     [esi+30h], eax
0x8AC239: mov     ecx, [edi+50h]
0x8AC23C: mov     [esi+60h], ecx
0x8AC23F: mov     edx, [edi+54h]
0x8AC242: mov     [esi+64h], edx
0x8AC245: mov     eax, [edi+58h]
0x8AC248: mov     [esi+68h], eax
0x8AC24B: mov     ecx, [edi+5Ch]
0x8AC24E: mov     [esi+6Ch], ecx
0x8AC251: mov     edx, [edi+60h]
0x8AC254: mov     [esi+70h], edx
0x8AC257: fld     dword ptr [edi+64h]
0x8AC25A: fcos
0x8AC25C: mov     [esp+20h+var_14], 40400000h
0x8AC264: fstp    dword ptr [esi+0A4h]
0x8AC26A: mov     eax, [edi+68h]
0x8AC26D: mov     [esi+0A8h], eax
0x8AC273: movaps  xmm0, xmmword ptr [edi+30h]
0x8AC277: movaps  xmmword ptr [esi+40h], xmm0
0x8AC27B: movaps  xmm1, xmmword ptr [esi+40h]
0x8AC27F: movaps  xmm0, xmm1
0x8AC282: mulps   xmm0, xmm1
0x8AC285: movaps  xmm2, xmm0
0x8AC288: shufps  xmm2, xmm0, 55h ; 'U'
0x8AC28C: addss   xmm2, xmm0
0x8AC290: movaps  xmm3, xmm0
0x8AC293: shufps  xmm3, xmm0, 0AAh ; 'ª'
0x8AC297: movaps  xmm0, xmm3
0x8AC29A: movss   xmm3, [esp+20h+var_14]
0x8AC2A0: addss   xmm0, xmm2
0x8AC2A4: movaps  [esp+20h+var_10], xmm0
0x8AC2A9: rsqrtss xmm2, xmm0
0x8AC2AD: movss   dword ptr [esp+20h+var_10], xmm2
0x8AC2B3: movaps  xmm2, [esp+20h+var_10]
0x8AC2B8: mulss   xmm0, xmm2
0x8AC2BC: mulss   xmm0, xmm2
0x8AC2C0: subss   xmm3, xmm0
0x8AC2C4: mov     [esp+20h+var_14], 3F000000h
0x8AC2CC: movss   xmm0, [esp+20h+var_14]
0x8AC2D2: mulss   xmm0, xmm2
0x8AC2D6: mulss   xmm0, xmm3
0x8AC2DA: movaps  xmm2, xmm0
0x8AC2DD: shufps  xmm2, xmm0, 0
0x8AC2E1: mulps   xmm2, xmm1
0x8AC2E4: movaps  xmmword ptr [esi+40h], xmm2
0x8AC2E8: mov     ecx, [esi+30h]
0x8AC2EB: cmp     [ecx+8], ebx
0x8AC2EE: jz      short loc_8AC304
0x8AC2F0: cmp     ecx, ebx
0x8AC2F2: jz      short loc_8AC304
0x8AC2F4: fld     dword ptr [esi+5Ch]
0x8AC2F7: push    ecx
0x8AC2F8: fadd    dword ptr [esi+58h]
0x8AC2FB: fstp    [esp+24h+var_24]; float
0x8AC2FE: push    edi; int
0x8AC2FF: call    sub_8ABAC0
0x8AC304: mov     eax, [esi+90h]
0x8AC30A: xor     edi, edi
0x8AC30C: cmp     eax, ebx
0x8AC30E: xorps   xmm0, xmm0
0x8AC311: movaps  xmmword ptr [esi+20h], xmm0
0x8AC315: jle     short loc_8AC33C
0x8AC317: lea     ebx, [esi+8]
0x8AC31A: lea     ebx, [ebx+0]
0x8AC320: mov     ecx, [esi+8Ch]
0x8AC326: mov     ecx, [ecx+edi*4]
0x8AC329: push    ebx
0x8AC32A: call    sub_8A6300
0x8AC32F: mov     eax, [esi+90h]
0x8AC335: inc     edi
0x8AC336: cmp     edi, eax
0x8AC338: jl      short loc_8AC320
0x8AC33A: xor     ebx, ebx
0x8AC33C: mov     eax, [esi+9Ch]
0x8AC342: xor     edi, edi
0x8AC344: cmp     eax, ebx
0x8AC346: mov     [esi+90h], ebx
0x8AC34C: jle     short loc_8AC36D
0x8AC34E: lea     ebx, [esi+0Ch]
0x8AC351: mov     edx, [esi+98h]
0x8AC357: mov     ecx, [edx+edi*4]
0x8AC35A: push    ebx
0x8AC35B: call    sub_8DE670
0x8AC360: mov     eax, [esi+9Ch]
0x8AC366: inc     edi
0x8AC367: cmp     edi, eax
0x8AC369: jl      short loc_8AC351
0x8AC36B: xor     ebx, ebx
0x8AC36D: mov     edx, [esi+30h]
0x8AC370: mov     [esi+9Ch], ebx
0x8AC376: mov     [esi+78h], ebx
0x8AC379: mov     ecx, [edx+48h]
0x8AC37C: xor     eax, eax
0x8AC37E: cmp     ecx, ebx
0x8AC380: jle     short loc_8AC395
0x8AC382: mov     edx, [edx+44h]
0x8AC385: cmp     dword ptr [edx], 1300h
0x8AC38B: jz      short loc_8AC3AC
0x8AC38D: inc     eax
0x8AC38E: add     edx, 10h
0x8AC391: cmp     eax, ecx
0x8AC393: jl      short loc_8AC385
0x8AC395: sub     esp, 8
0x8AC398: mov     eax, esp
0x8AC39A: mov     [eax], esi
0x8AC39C: mov     [eax+4], ebx
0x8AC39F: mov     ecx, [esi+30h]
0x8AC3A2: push    1300h
0x8AC3A7: call    sub_8BC750
0x8AC3AC: pop     edi
0x8AC3AD: pop     esi
0x8AC3AE: pop     ebx
0x8AC3AF: mov     esp, ebp
0x8AC3B1: pop     ebp
0x8AC3B2: retn    4

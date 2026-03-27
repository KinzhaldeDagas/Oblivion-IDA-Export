0x8B21F0: push    ebp
0x8B21F1: mov     ebp, esp
0x8B21F3: and     esp, 0FFFFFFF0h
0x8B21F6: sub     esp, 64h
0x8B21F9: push    ebx
0x8B21FA: mov     ebx, [ebp+arg_0]
0x8B21FD: push    esi
0x8B21FE: push    edi
0x8B21FF: mov     edi, [ebp+arg_4]
0x8B2202: mov     edx, [ebp+arg_8]
0x8B2205: lea     eax, [edi+edx]
0x8B2208: sar     eax, 1
0x8B220A: lea     eax, [eax+eax*2]
0x8B220D: shl     eax, 4
0x8B2210: fld     dword ptr [eax+ebx+14h]
0x8B2214: mov     esi, edi
0x8B2216: fstp    [esp+70h+var_4C]
0x8B221A: lea     ebx, [ebx+0]
0x8B2220: lea     ecx, [esi+esi*2]
0x8B2223: shl     ecx, 4
0x8B2226: lea     ecx, [ecx+ebx+14h]
0x8B222A: lea     ebx, [ebx+0]
0x8B2230: fld     dword ptr [ecx]
0x8B2232: fcomp   [esp+70h+var_4C]
0x8B2236: fnstsw  ax
0x8B2238: test    ah, 5
0x8B223B: jp      short loc_8B2243
0x8B223D: inc     esi
0x8B223E: add     ecx, 30h ; '0'
0x8B2241: jmp     short loc_8B2230
0x8B2243: lea     eax, [edx+edx*2]
0x8B2246: shl     eax, 4
0x8B2249: lea     ecx, [eax+ebx+14h]
0x8B224D: lea     ecx, [ecx+0]
0x8B2250: fld     [esp+70h+var_4C]
0x8B2254: fcomp   dword ptr [ecx]
0x8B2256: fnstsw  ax
0x8B2258: test    ah, 5
0x8B225B: jp      short loc_8B2263
0x8B225D: dec     edx
0x8B225E: sub     ecx, 30h ; '0'
0x8B2261: jmp     short loc_8B2250
0x8B2263: cmp     edx, esi
0x8B2265: jl      short loc_8B22C6
0x8B2267: jz      short loc_8B22BC
0x8B2269: lea     ecx, [edx+edx*2]
0x8B226C: shl     ecx, 4
0x8B226F: mov     edi, [ecx+ebx+10h]
0x8B2273: fld     dword ptr [ecx+ebx+14h]
0x8B2277: movaps  xmm0, xmmword ptr [ecx+ebx]
0x8B227B: lea     eax, [ecx+ebx]
0x8B227E: mov     ecx, [eax+20h]
0x8B2281: mov     [esp+70h+var_10], ecx
0x8B2285: lea     ecx, [esi+esi*2]
0x8B2288: shl     ecx, 4
0x8B228B: movaps  xmm1, xmmword ptr [ecx+ebx]
0x8B228F: add     ecx, ebx
0x8B2291: movaps  xmmword ptr [eax], xmm1
0x8B2294: mov     ebx, [ecx+10h]
0x8B2297: mov     [eax+10h], ebx
0x8B229A: mov     ebx, [ecx+14h]
0x8B229D: mov     [eax+14h], ebx
0x8B22A0: mov     ebx, [ecx+20h]
0x8B22A3: mov     [eax+20h], ebx
0x8B22A6: fstp    dword ptr [ecx+14h]
0x8B22A9: mov     eax, [esp+70h+var_10]
0x8B22AD: mov     ebx, [ebp+arg_0]
0x8B22B0: mov     [ecx+10h], edi
0x8B22B3: mov     edi, [ebp+arg_4]
0x8B22B6: movaps  xmmword ptr [ecx], xmm0
0x8B22B9: mov     [ecx+20h], eax
0x8B22BC: dec     edx
0x8B22BD: inc     esi
0x8B22BE: cmp     esi, edx
0x8B22C0: jle     loc_8B2220
0x8B22C6: cmp     edi, edx
0x8B22C8: jge     short loc_8B22D9
0x8B22CA: mov     ecx, [ebp+arg_C]
0x8B22CD: push    ecx
0x8B22CE: push    edx
0x8B22CF: push    edi
0x8B22D0: push    ebx
0x8B22D1: call    sub_8B21F0
0x8B22D6: add     esp, 10h
0x8B22D9: cmp     esi, [ebp+arg_8]
0x8B22DC: jge     short loc_8B22E8
0x8B22DE: mov     edi, esi
0x8B22E0: mov     [ebp+arg_4], edi
0x8B22E3: jmp     loc_8B2202
0x8B22E8: pop     edi
0x8B22E9: pop     esi
0x8B22EA: pop     ebx
0x8B22EB: mov     esp, ebp
0x8B22ED: pop     ebp
0x8B22EE: retn

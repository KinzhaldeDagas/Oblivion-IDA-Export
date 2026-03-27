0x4C0290: sub     esp, 18h
0x4C0293: push    ebx
0x4C0294: mov     ebx, ecx
0x4C0296: cmp     dword ptr [ebx+24h], 0
0x4C029A: mov     [esp+1Ch+var_C], ebx
0x4C029E: jz      loc_4C052B
0x4C02A4: push    ebp
0x4C02A5: push    esi
0x4C02A6: mov     ebp, 30h ; '0'
0x4C02AB: push    edi
0x4C02AC: mov     [esp+28h+var_14], 0
0x4C02B4: mov     [esp+28h+var_8], ebp
0x4C02B8: jmp     short loc_4C02C8
0x4C02BA: align 10h
0x4C02C0: mov     ebx, [esp+28h+var_C]
0x4C02C4: mov     ebp, [esp+28h+var_8]
0x4C02C8: xor     esi, esi
0x4C02CA: lea     ebx, [ebx+0]
0x4C02D0: mov     eax, [ebx+24h]
0x4C02D3: mov     ecx, [eax+ebp]
0x4C02D6: cmp     dword ptr [ecx+esi*4], 0
0x4C02DA: lea     edi, [ecx+esi*4]
0x4C02DD: jz      short loc_4C030D
0x4C02DF: mov     edx, [esp+28h+var_14]
0x4C02E3: push    esi
0x4C02E4: push    edx
0x4C02E5: mov     ecx, ebx
0x4C02E7: call    sub_4BF550
0x4C02EC: fdiv    qword ptr ds:0A45EA8h
0x4C02F2: fstp    [esp+28h+var_4]
0x4C02F6: fld     [esp+28h+var_4]
0x4C02FA: fcomp   dword ptr ds:0A37080h
0x4C0300: fnstsw  ax
0x4C0302: test    ah, 5
0x4C0305: jp      short loc_4C030D
0x4C0307: mov     dword ptr [edi], 0
0x4C030D: add     esi, 1
0x4C0310: cmp     esi, 8
0x4C0313: jl      short loc_4C02D0
0x4C0315: mov     eax, [ebx+24h]
0x4C0318: mov     eax, [eax+ebp]
0x4C031B: mov     edi, 8
0x4C0320: xor     esi, esi
0x4C0322: cmp     dword ptr [eax+esi*4], 0
0x4C0326: jnz     short loc_4C0348
0x4C0328: cmp     esi, edi
0x4C032A: jnb     short loc_4C0348
0x4C032C: mov     ecx, [esp+28h+var_14]
0x4C0330: push    esi
0x4C0331: push    ecx
0x4C0332: mov     ecx, ebx
0x4C0334: call    sub_4BF2F0
0x4C0339: mov     edx, [ebx+24h]
0x4C033C: mov     eax, [edx+ebp]
0x4C033F: sub     edi, 1
0x4C0342: cmp     dword ptr [eax+esi*4], 0
0x4C0346: jz      short loc_4C0328
0x4C0348: add     esi, 1
0x4C034B: cmp     esi, edi
0x4C034D: jb      short loc_4C0322
0x4C034F: push    1
0x4C0351: lea     esi, ds:4[edi*4]
0x4C0358: push    esi
0x4C0359: mov     ecx, offset FormHeap
0x4C035E: call    j_MemoryHeap_Alloc
0x4C0363: push    esi
0x4C0364: mov     ebx, eax
0x4C0366: push    0
0x4C0368: push    ebx
0x4C0369: call    __memset
0x4C036E: fld1
0x4C0370: fld1
0x4C0372: add     esp, 0Ch
0x4C0375: fldz
0x4C0377: mov     [esp+28h+var_10], 0
0x4C037F: jmp     short loc_4C0383
0x4C0381: fxch    st(1)
0x4C0383: xor     eax, eax
0x4C0385: fst     [esp+28h+var_18]
0x4C0389: test    edi, edi
0x4C038B: jbe     short loc_4C0406
0x4C038D: mov     dl, byte ptr [esp+28h+var_14]
0x4C0391: fst     [esp+28h+var_4]
0x4C0395: cmp     dl, 4
0x4C0398: jnb     short loc_4C03DA
0x4C039A: movzx   ebp, word ptr [esp+28h+var_10]
0x4C039F: cmp     bp, 121h
0x4C03A4: jnb     short loc_4C03DA
0x4C03A6: movzx   esi, ax
0x4C03A9: cmp     si, 8
0x4C03AD: jnb     short loc_4C03DA
0x4C03AF: mov     ecx, [esp+28h+var_C]
0x4C03B3: mov     ecx, [ecx+24h]
0x4C03B6: test    ecx, ecx
0x4C03B8: jz      short loc_4C03DA
0x4C03BA: movzx   edx, dl
0x4C03BD: cmp     dword ptr [ecx+edx*4+40h], 0
0x4C03C2: lea     ecx, [ecx+edx*4+40h]
0x4C03C6: jz      short loc_4C03DA
0x4C03C8: mov     ecx, [ecx]
0x4C03CA: movzx   edx, bp
0x4C03CD: mov     edx, [ecx+edx*4]
0x4C03D0: movzx   esi, si
0x4C03D3: fld     dword ptr [edx+esi*4]
0x4C03D6: fstp    [esp+28h+var_4]
0x4C03DA: fld     [esp+28h+var_4]
0x4C03DE: add     eax, 1
0x4C03E1: cmp     eax, edi
0x4C03E3: fld     dword ptr [ebx+eax*4-4]
0x4C03E7: fadd    st, st(1)
0x4C03E9: fstp    dword ptr [ebx+eax*4-4]
0x4C03ED: fadd    [esp+28h+var_18]
0x4C03F1: fstp    [esp+28h+var_18]
0x4C03F5: jb      short loc_4C038D
0x4C03F7: fxch    st(1)
0x4C03F9: fcom    [esp+28h+var_18]
0x4C03FD: fnstsw  ax
0x4C03FF: test    ah, 41h
0x4C0402: jnz     short loc_4C0414
0x4C0404: fxch    st(1)
0x4C0406: fld     [esp+28h+var_18]
0x4C040A: fsubr   st, st(3)
0x4C040C: fadd    dword ptr [ebx+edi*4]
0x4C040F: fstp    dword ptr [ebx+edi*4]
0x4C0412: fxch    st(1)
0x4C0414: mov     eax, [esp+28h+var_10]
0x4C0418: add     eax, 1
0x4C041B: cmp     eax, 121h
0x4C0420: mov     [esp+28h+var_10], eax
0x4C0424: jl      loc_4C0381
0x4C042A: fstp    st(1)
0x4C042C: or      ebp, 0FFFFFFFFh
0x4C042F: fstp    st
0x4C0431: xor     ecx, ecx
0x4C0433: cmp     edi, 4
0x4C0436: fstp    st
0x4C0438: fld     dword ptr [ebx+edi*4]
0x4C043B: fstp    [esp+28h+var_18]
0x4C043F: jl      loc_4C04C4
0x4C0445: mov     esi, 2
0x4C044A: lea     edx, [ebx+8]
0x4C044D: lea     ecx, [ecx+0]
0x4C0450: fld     dword ptr [edx-8]
0x4C0453: fld     [esp+28h+var_18]
0x4C0457: fcompp
0x4C0459: fnstsw  ax
0x4C045B: test    ah, 5
0x4C045E: jp      short loc_4C0469
0x4C0460: fld     dword ptr [edx-8]
0x4C0463: mov     ebp, ecx
0x4C0465: fstp    [esp+28h+var_18]
0x4C0469: fld     dword ptr [edx-4]
0x4C046C: fld     [esp+28h+var_18]
0x4C0470: fcompp
0x4C0472: fnstsw  ax
0x4C0474: test    ah, 5
0x4C0477: jp      short loc_4C0483
0x4C0479: fld     dword ptr [edx-4]
0x4C047C: lea     ebp, [esi-1]
0x4C047F: fstp    [esp+28h+var_18]
0x4C0483: fld     dword ptr [edx]
0x4C0485: fld     [esp+28h+var_18]
0x4C0489: fcompp
0x4C048B: fnstsw  ax
0x4C048D: test    ah, 5
0x4C0490: jp      short loc_4C049A
0x4C0492: fld     dword ptr [edx]
0x4C0494: mov     ebp, esi
0x4C0496: fstp    [esp+28h+var_18]
0x4C049A: fld     dword ptr [edx+4]
0x4C049D: fld     [esp+28h+var_18]
0x4C04A1: fcompp
0x4C04A3: fnstsw  ax
0x4C04A5: test    ah, 5
0x4C04A8: jp      short loc_4C04B4
0x4C04AA: fld     dword ptr [edx+4]
0x4C04AD: lea     ebp, [esi+1]
0x4C04B0: fstp    [esp+28h+var_18]
0x4C04B4: add     ecx, 4
0x4C04B7: lea     eax, [edi-3]
0x4C04BA: add     edx, 10h
0x4C04BD: add     esi, 4
0x4C04C0: cmp     ecx, eax
0x4C04C2: jb      short loc_4C0450
0x4C04C4: cmp     ecx, edi
0x4C04C6: jnb     short loc_4C04F0
0x4C04C8: jmp     short loc_4C04D0
0x4C04CA: align 10h
0x4C04D0: fld     dword ptr [ebx+ecx*4]
0x4C04D3: fld     [esp+28h+var_18]
0x4C04D7: fcompp
0x4C04D9: fnstsw  ax
0x4C04DB: test    ah, 5
0x4C04DE: jp      short loc_4C04E9
0x4C04E0: fld     dword ptr [ebx+ecx*4]
0x4C04E3: mov     ebp, ecx
0x4C04E5: fstp    [esp+28h+var_18]
0x4C04E9: add     ecx, 1
0x4C04EC: cmp     ecx, edi
0x4C04EE: jb      short loc_4C04D0
0x4C04F0: cmp     ebp, 0FFFFFFFFh
0x4C04F3: jz      short loc_4C0504
0x4C04F5: mov     eax, [esp+28h+var_14]
0x4C04F9: mov     ecx, [esp+28h+var_C]
0x4C04FD: push    ebp; float
0x4C04FE: push    eax; float
0x4C04FF: call    sub_4BF440
0x4C0504: push    ebx; void *
0x4C0505: mov     ecx, offset FormHeap
0x4C050A: call    MemoryHeap_Free_checked
0x4C050F: mov     eax, [esp+28h+var_8]
0x4C0513: add     [esp+28h+var_14], 1
0x4C0518: add     eax, 4
0x4C051B: cmp     eax, 40h ; '@'
0x4C051E: mov     [esp+28h+var_8], eax
0x4C0522: jl      loc_4C02C0
0x4C0528: pop     edi
0x4C0529: pop     esi
0x4C052A: pop     ebp
0x4C052B: pop     ebx
0x4C052C: add     esp, 18h
0x4C052F: retn

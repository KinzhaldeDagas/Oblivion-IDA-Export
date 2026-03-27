0x777240: sub     esp, 2Ch
0x777243: cmp     [esp+2Ch+arg_4], 0
0x777249: mov     [esp+2Ch+var_28], ecx
0x77724D: jz      loc_7774AC
0x777253: cmp     [esp+2Ch+arg_8], 0
0x777258: jz      loc_7774AC
0x77725E: push    ebx
0x77725F: push    esi
0x777260: mov     esi, [esp+34h+arg_C]
0x777264: test    esi, esi
0x777266: push    edi
0x777267: mov     edi, 4
0x77726C: mov     ebx, 10h
0x777271: jz      short loc_777281
0x777273: mov     [esp+38h+var_24], ebx
0x777277: mov     edi, 44h ; 'D'
0x77727C: mov     ebx, 14h
0x777281: cmp     [esp+38h+arg_10], 0
0x777286: jz      short loc_777295
0x777288: or      edi, 100h
0x77728E: mov     [esp+38h+var_1C], ebx
0x777292: add     ebx, 8
0x777295: push    ebp
0x777296: mov     ebp, [esp+3Ch+arg_0]
0x77729A: push    edi
0x77729B: mov     ecx, ebp
0x77729D: call    sub_7780A0
0x7772A2: cmp     dword ptr [ebp+1Ch], 0
0x7772A6: jbe     short loc_7772AD
0x7772A8: mov     eax, [ebp+20h]
0x7772AB: mov     [eax], ebx
0x7772AD: cmp     [esp+3Ch+arg_1C], 0
0x7772B2: mov     byte ptr [esp+3Ch+arg_C], 1
0x7772B7: jz      short loc_7772C8
0x7772B9: mov     ecx, [esp+3Ch+arg_18]
0x7772BD: mov     [esp+3Ch+arg_0], ecx
0x7772C1: mov     byte ptr [esp+3Ch+arg_C], 0
0x7772C6: jmp     short loc_777347
0x7772C8: mov     eax, [esp+3Ch+arg_18]
0x7772CC: test    eax, eax
0x7772CE: jz      short loc_777309
0x7772D0: mov     eax, [eax+8]
0x7772D3: test    eax, eax
0x7772D5: jz      short loc_777309
0x7772D7: mov     edx, [eax]
0x7772D9: mov     edx, [edx+34h]
0x7772DC: lea     ecx, [esp+3Ch+var_18]
0x7772E0: push    ecx
0x7772E1: push    eax
0x7772E2: call    edx
0x7772E4: cmp     dword ptr [esp+3Ch+var_18], 64h ; 'd'
0x7772E9: jnz     short loc_777309
0x7772EB: cmp     [esp+3Ch+var_4], edi
0x7772EF: jnz     short loc_777309
0x7772F1: movzx   eax, [esp+3Ch+arg_4]
0x7772F6: imul    eax, ebx
0x7772F9: cmp     [esp+3Ch+var_8], eax
0x7772FD: jb      short loc_777309
0x7772FF: mov     eax, [esp+3Ch+arg_18]
0x777303: mov     [esp+3Ch+arg_0], eax
0x777307: jmp     short loc_77732A
0x777309: mov     ecx, [esp+3Ch+var_28]
0x77730D: push    0
0x77730F: push    ebp
0x777310: call    NiGeometryBufferData__RefreshVBChips
0x777315: test    al, al
0x777317: jz      loc_777492
0x77731D: push    0
0x77731F: mov     ecx, ebp
0x777321: call    sub_761AC0
0x777326: mov     [esp+3Ch+arg_0], eax
0x77732A: mov     ecx, [eax+10h]
0x77732D: mov     edx, [eax+14h]
0x777330: mov     edi, [eax+0Ch]
0x777333: mov     eax, [eax+8]
0x777336: push    ecx; int
0x777337: mov     ecx, [esp+40h+var_28]
0x77733B: push    edx; Size
0x77733C: push    edi; int
0x77733D: push    eax; int
0x77733E: call    sub_776C90
0x777343: mov     [esp+3Ch+arg_1C], eax
0x777347: test    [esp+3Ch+arg_14], 1
0x77734C: mov     bp, [esp+3Ch+arg_4]
0x777351: jz      short loc_777390
0x777353: test    bp, bp
0x777356: jbe     short loc_777390
0x777358: mov     ecx, [esp+3Ch+arg_1C]
0x77735C: fldz
0x77735E: fld1
0x777360: add     ecx, 0Ch
0x777363: movzx   edx, bp
0x777366: mov     edi, [esp+3Ch+arg_8]
0x77736A: fxch    st(1)
0x77736C: mov     eax, [edi]
0x77736E: mov     [ecx-0Ch], eax
0x777371: mov     eax, [edi+4]
0x777374: mov     [ecx-8], eax
0x777377: fst     dword ptr [ecx-4]
0x77737A: fxch    st(1)
0x77737C: add     edi, 8
0x77737F: fst     dword ptr [ecx]
0x777381: add     ecx, ebx
0x777383: sub     edx, 1
0x777386: mov     [esp+3Ch+arg_8], edi
0x77738A: jnz     short loc_777366
0x77738C: fstp    st(1)
0x77738E: fstp    st
0x777390: test    esi, esi
0x777392: jz      loc_777441
0x777398: test    [esp+3Ch+arg_14], 4
0x77739D: jz      loc_777441
0x7773A3: mov     ecx, [esp+3Ch+var_24]
0x7773A7: mov     edx, [esp+3Ch+arg_1C]
0x7773AB: add     edx, ecx
0x7773AD: test    bp, bp
0x7773B0: jbe     loc_777441
0x7773B6: movzx   eax, bp
0x7773B9: lea     esp, [esp+0]
0x7773C0: fld     dword ptr [esi+0Ch]
0x7773C3: fmul    qword ptr ds:0A3DDD8h
0x7773C9: fstp    [esp+3Ch+var_20]
0x7773CD: fld     [esp+3Ch+var_20]
0x7773D1: fistp   [esp+3Ch+arg_18]
0x7773D5: fld     dword ptr [esi]
0x7773D7: mov     ecx, [esp+3Ch+arg_18]
0x7773DB: fmul    qword ptr ds:0A3DDD8h
0x7773E1: fstp    [esp+3Ch+var_20]
0x7773E5: fld     [esp+3Ch+var_20]
0x7773E9: fistp   [esp+3Ch+arg_8]
0x7773ED: fld     dword ptr [esi+4]
0x7773F0: mov     edi, [esp+3Ch+arg_8]
0x7773F4: fmul    qword ptr ds:0A3DDD8h
0x7773FA: fstp    [esp+3Ch+var_20]
0x7773FE: fld     [esp+3Ch+var_20]
0x777402: fistp   [esp+3Ch+var_2C]
0x777406: fld     dword ptr [esi+8]
0x777409: mov     ebp, [esp+3Ch+var_2C]
0x77740D: fmul    qword ptr ds:0A3DDD8h
0x777413: fstp    [esp+3Ch+var_20]
0x777417: fld     [esp+3Ch+var_20]
0x77741B: fistp   [esp+3Ch+var_24]
0x77741F: shl     ecx, 8
0x777422: or      ecx, edi
0x777424: shl     ecx, 8
0x777427: or      ecx, ebp
0x777429: shl     ecx, 8
0x77742C: or      ecx, [esp+3Ch+var_24]
0x777430: add     esi, 10h
0x777433: mov     [edx], ecx
0x777435: add     edx, ebx
0x777437: sub     eax, 1
0x77743A: jnz     short loc_7773C0
0x77743C: mov     bp, [esp+3Ch+arg_4]
0x777441: mov     edx, [esp+3Ch+arg_10]
0x777445: test    edx, edx
0x777447: jz      short loc_777476
0x777449: test    [esp+3Ch+arg_14], 2
0x77744E: jz      short loc_777476
0x777450: mov     eax, [esp+3Ch+var_1C]
0x777454: mov     ecx, [esp+3Ch+arg_1C]
0x777458: add     eax, ecx
0x77745A: test    bp, bp
0x77745D: jbe     short loc_777476
0x77745F: movzx   ecx, bp
0x777462: mov     esi, [edx]
0x777464: mov     [eax], esi
0x777466: mov     esi, [edx+4]
0x777469: mov     [eax+4], esi
0x77746C: add     eax, ebx
0x77746E: add     edx, 8
0x777471: sub     ecx, 1
0x777474: jnz     short loc_777462
0x777476: cmp     byte ptr [esp+3Ch+arg_C], 0
0x77747B: jz      short loc_77749E
0x77747D: mov     edx, [esp+3Ch+arg_0]
0x777481: mov     eax, [edx+8]
0x777484: mov     ecx, [esp+3Ch+var_28]
0x777488: push    eax
0x777489: call    sub_776D80
0x77748E: test    al, al
0x777490: jnz     short loc_77749E
0x777492: pop     ebp
0x777493: pop     edi
0x777494: pop     esi
0x777495: xor     eax, eax
0x777497: pop     ebx
0x777498: add     esp, 2Ch
0x77749B: retn    20h ; ' '
0x77749E: mov     eax, [esp+3Ch+arg_0]
0x7774A2: pop     ebp
0x7774A3: pop     edi
0x7774A4: pop     esi
0x7774A5: pop     ebx
0x7774A6: add     esp, 2Ch
0x7774A9: retn    20h ; ' '
0x7774AC: mov     eax, [esp+2Ch+arg_18]
0x7774B0: add     esp, 2Ch
0x7774B3: retn    20h ; ' '

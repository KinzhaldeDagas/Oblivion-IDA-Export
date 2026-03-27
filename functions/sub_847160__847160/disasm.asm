0x847160: push    0FFFFFFFFh
0x847162: push    offset SEH_851250
0x847167: mov     eax, large fs:0
0x84716D: push    eax
0x84716E: sub     esp, 1Ch
0x847171: push    ebx
0x847172: push    ebp
0x847173: push    esi
0x847174: push    edi
0x847175: mov     eax, ds:0B30AACh
0x84717A: xor     eax, esp
0x84717C: push    eax
0x84717D: lea     eax, [esp+3Ch+var_C]
0x847181: mov     large fs:0, eax
0x847187: mov     [esp+3Ch+var_24], ecx
0x84718B: mov     eax, ds:0B42EB8h
0x847190: mov     esi, ds:0B45B68h
0x847196: movzx   ebx, byte ptr [eax+9]
0x84719A: mov     ecx, [esi+24h]
0x84719D: mov     ebp, [esp+3Ch+arg_C]
0x8471A1: mov     edi, [ecx]
0x8471A3: mov     edx, [ebp+0]
0x8471A6: mov     eax, [edx+88h]
0x8471AC: push    ebx
0x8471AD: mov     ecx, ebp
0x8471AF: mov     [esp+40h+var_28], edi
0x8471B3: call    eax
0x8471B5: mov     edi, [edi+4]
0x8471B8: cmp     edi, eax
0x8471BA: mov     [esp+3Ch+arg_C], eax
0x8471BE: jz      short loc_8471F9
0x8471C0: test    edi, edi
0x8471C2: jz      short loc_8471E4
0x8471C4: lea     ecx, [edi+4]
0x8471C7: push    ecx; lpAddend
0x8471C8: call    dword ptr ds:0A2807Ch
0x8471CE: test    eax, eax
0x8471D0: jnz     short loc_8471E0
0x8471D2: test    edi, edi
0x8471D4: jz      short loc_8471E0
0x8471D6: mov     edx, [edi]
0x8471D8: mov     eax, [edx]
0x8471DA: push    1
0x8471DC: mov     ecx, edi
0x8471DE: call    eax
0x8471E0: mov     eax, [esp+3Ch+arg_C]
0x8471E4: test    eax, eax
0x8471E6: mov     ecx, [esp+3Ch+var_28]
0x8471EA: mov     [ecx+4], eax
0x8471ED: jz      short loc_8471F9
0x8471EF: add     eax, 4
0x8471F2: push    eax; lpAddend
0x8471F3: call    dword ptr ds:0A28078h
0x8471F9: mov     edx, [esp+3Ch+var_28]
0x8471FD: mov     ecx, [esp+3Ch+var_24]
0x847201: push    ebp
0x847202: push    edx
0x847203: call    sub_848FA0
0x847208: mov     eax, [esi+24h]
0x84720B: mov     edi, [eax+4]
0x84720E: mov     ecx, [esp+3Ch+var_24]
0x847212: push    ebx
0x847213: push    ebp
0x847214: mov     [esp+44h+var_28], edi
0x847218: call    sub_848FD0
0x84721D: mov     edi, [edi+4]
0x847220: cmp     edi, eax
0x847222: mov     [esp+3Ch+arg_C], eax
0x847226: jz      short loc_847261
0x847228: test    edi, edi
0x84722A: jz      short loc_84724C
0x84722C: lea     ecx, [edi+4]
0x84722F: push    ecx; lpAddend
0x847230: call    dword ptr ds:0A2807Ch
0x847236: test    eax, eax
0x847238: jnz     short loc_847248
0x84723A: test    edi, edi
0x84723C: jz      short loc_847248
0x84723E: mov     edx, [edi]
0x847240: mov     eax, [edx]
0x847242: push    1
0x847244: mov     ecx, edi
0x847246: call    eax
0x847248: mov     eax, [esp+3Ch+arg_C]
0x84724C: test    eax, eax
0x84724E: mov     ecx, [esp+3Ch+var_28]
0x847252: mov     [ecx+4], eax
0x847255: jz      short loc_847261
0x847257: add     eax, 4
0x84725A: push    eax; lpAddend
0x84725B: call    dword ptr ds:0A28078h
0x847261: mov     edx, [esp+3Ch+var_28]
0x847265: mov     edi, [esp+3Ch+var_24]
0x847269: push    ebp
0x84726A: push    edx
0x84726B: mov     ecx, edi
0x84726D: call    sub_848FA0
0x847272: fld1
0x847274: cmp     ebx, 4
0x847277: fldz
0x847279: jnz     short loc_847283
0x84727B: fxch    st(1)
0x84727D: fst     [esp+3Ch+var_20]
0x847281: jmp     short loc_8472A5
0x847283: cmp     ebx, 3
0x847286: fst     [esp+3Ch+var_20]
0x84728A: jnz     short loc_8472A3
0x84728C: fstp    st(1)
0x84728E: fld1
0x847290: fst     [esp+3Ch+var_28]
0x847294: fxch    st(1)
0x847296: cmp     ebx, 1
0x847299: fst     [esp+3Ch+var_24]
0x84729D: jnz     short loc_8472B8
0x84729F: fstp    st
0x8472A1: jmp     short loc_8472BA
0x8472A3: fxch    st(1)
0x8472A5: cmp     ebx, 2
0x8472A8: fxch    st(1)
0x8472AA: fst     [esp+3Ch+var_28]
0x8472AE: jnz     short loc_847296
0x8472B0: fxch    st(1)
0x8472B2: fstp    [esp+3Ch+var_24]
0x8472B6: jmp     short loc_8472BA
0x8472B8: fstp    st(1)
0x8472BA: fstp    [esp+3Ch+arg_C]
0x8472BE: sub     esp, 10h
0x8472C1: fld     [esp+4Ch+arg_C]
0x8472C5: mov     eax, esp
0x8472C7: fstp    [esp+4Ch+var_1C]
0x8472CB: mov     ecx, [esp+4Ch+var_1C]
0x8472CF: fld     [esp+4Ch+var_24]
0x8472D3: mov     [eax], ecx
0x8472D5: fstp    [esp+4Ch+var_18]
0x8472D9: mov     edx, [esp+4Ch+var_18]
0x8472DD: fld     [esp+4Ch+var_28]
0x8472E1: mov     [eax+4], edx
0x8472E4: fstp    [esp+4Ch+var_14]
0x8472E8: mov     ecx, [esp+4Ch+var_14]
0x8472EC: fld     [esp+4Ch+var_20]
0x8472F0: mov     [eax+8], ecx
0x8472F3: fstp    [esp+4Ch+var_10]
0x8472F7: mov     edx, [esp+4Ch+var_10]
0x8472FB: push    0
0x8472FD: mov     [eax+0Ch], edx
0x847300: call    sub_7ECAE0
0x847305: add     esp, 14h
0x847308: cmp     ebx, 8
0x84730B: jnz     short loc_847317
0x84730D: fld1
0x84730F: fst     [esp+3Ch+var_28]
0x847313: fldz
0x847315: jmp     short loc_847339
0x847317: cmp     ebx, 7
0x84731A: fldz
0x84731C: fst     [esp+3Ch+var_28]
0x847320: fld1
0x847322: jnz     short loc_847337
0x847324: fst     [esp+3Ch+var_24]
0x847328: fxch    st(1)
0x84732A: cmp     ebx, 5
0x84732D: fst     [esp+3Ch+var_20]
0x847331: jnz     short loc_84734A
0x847333: fstp    st
0x847335: jmp     short loc_84734C
0x847337: fxch    st(1)
0x847339: cmp     ebx, 6
0x84733C: fst     [esp+3Ch+var_24]
0x847340: jnz     short loc_84732A
0x847342: fxch    st(1)
0x847344: fstp    [esp+3Ch+var_20]
0x847348: jmp     short loc_84734C
0x84734A: fstp    st(1)
0x84734C: fstp    [esp+3Ch+arg_C]
0x847350: sub     esp, 10h
0x847353: fld     [esp+4Ch+arg_C]
0x847357: mov     eax, esp
0x847359: fstp    [esp+4Ch+var_1C]
0x84735D: mov     ecx, [esp+4Ch+var_1C]
0x847361: fld     [esp+4Ch+var_20]
0x847365: mov     [eax], ecx
0x847367: fstp    [esp+4Ch+var_18]
0x84736B: mov     edx, [esp+4Ch+var_18]
0x84736F: fld     [esp+4Ch+var_24]
0x847373: mov     [eax+4], edx
0x847376: fstp    [esp+4Ch+var_14]
0x84737A: mov     ecx, [esp+4Ch+var_14]
0x84737E: fld     [esp+4Ch+var_28]
0x847382: mov     [eax+8], ecx
0x847385: fstp    [esp+4Ch+var_10]
0x847389: mov     edx, [esp+4Ch+var_10]
0x84738D: push    19h
0x84738F: mov     [eax+0Ch], edx
0x847392: call    sub_7ECAE0
0x847397: add     esp, 14h
0x84739A: cmp     byte ptr [esp+3Ch+arg_10], 0
0x84739F: jz      short loc_8473DC
0x8473A1: mov     ebx, 1
0x8473A6: add     [esi+60h], ebx
0x8473A9: mov     [esp+3Ch+arg_10], esi
0x8473AD: mov     ecx, [edi+38h]
0x8473B0: lea     eax, [esp+3Ch+arg_10]
0x8473B4: push    eax
0x8473B5: push    ecx
0x8473B6: lea     ecx, [edi+40h]
0x8473B9: mov     [esp+44h+var_4], 0
0x8473C1: call    sub_76CE40
0x8473C6: or      eax, 0FFFFFFFFh
0x8473C9: add     [esi+60h], eax
0x8473CC: mov     [esp+3Ch+var_4], eax
0x8473D0: jnz     short loc_8473D9
0x8473D2: mov     ecx, esi
0x8473D4: call    sub_7604D0
0x8473D9: add     [edi+38h], ebx
0x8473DC: mov     ecx, dword ptr [esp+3Ch+var_C]
0x8473E0: mov     large fs:0, ecx
0x8473E7: pop     ecx
0x8473E8: pop     edi
0x8473E9: pop     esi
0x8473EA: pop     ebp
0x8473EB: pop     ebx
0x8473EC: add     esp, 28h
0x8473EF: retn    14h

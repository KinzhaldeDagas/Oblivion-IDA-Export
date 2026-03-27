0x851250: push    0FFFFFFFFh
0x851252: push    offset SEH_851250
0x851257: mov     eax, large fs:0
0x85125D: push    eax
0x85125E: sub     esp, 1Ch
0x851261: push    ebx
0x851262: push    ebp
0x851263: push    esi
0x851264: push    edi
0x851265: mov     eax, ds:0B30AACh
0x85126A: xor     eax, esp
0x85126C: push    eax
0x85126D: lea     eax, [esp+3Ch+var_C]
0x851271: mov     large fs:0, eax
0x851277: mov     [esp+3Ch+var_20], ecx
0x85127B: mov     eax, [esp+3Ch+arg_8]
0x85127F: mov     eax, [eax+10h]
0x851282: mov     edi, ds:0B45B54h
0x851288: push    eax
0x851289: call    sub_848DA0
0x85128E: mov     ecx, ds:0B42EB8h
0x851294: movzx   eax, byte ptr [ecx+9]
0x851298: mov     edx, [edi+24h]
0x85129B: mov     esi, [edx]
0x85129D: mov     ebx, [esp+3Ch+arg_C]
0x8512A1: mov     edx, [ebx]
0x8512A3: mov     [esp+3Ch+var_28], eax
0x8512A7: push    eax
0x8512A8: mov     eax, [edx+88h]
0x8512AE: mov     ecx, ebx
0x8512B0: mov     [esp+40h+arg_8], esi
0x8512B4: call    eax
0x8512B6: mov     esi, [esi+4]
0x8512B9: mov     ebp, eax
0x8512BB: cmp     esi, ebp
0x8512BD: jz      short loc_8512F6
0x8512BF: test    esi, esi
0x8512C1: jz      short loc_8512DF
0x8512C3: lea     ecx, [esi+4]
0x8512C6: push    ecx; lpAddend
0x8512C7: call    dword ptr ds:0A2807Ch
0x8512CD: test    eax, eax
0x8512CF: jnz     short loc_8512DF
0x8512D1: test    esi, esi
0x8512D3: jz      short loc_8512DF
0x8512D5: mov     edx, [esi]
0x8512D7: mov     eax, [edx]
0x8512D9: push    1
0x8512DB: mov     ecx, esi
0x8512DD: call    eax
0x8512DF: test    ebp, ebp
0x8512E1: mov     esi, [esp+3Ch+arg_8]
0x8512E5: mov     [esi+4], ebp
0x8512E8: jz      short loc_8512FA
0x8512EA: add     ebp, 4
0x8512ED: push    ebp; lpAddend
0x8512EE: call    dword ptr ds:0A28078h
0x8512F4: jmp     short loc_8512FA
0x8512F6: mov     esi, [esp+3Ch+arg_8]
0x8512FA: test    esi, esi
0x8512FC: jz      short loc_851318
0x8512FE: cmp     byte ptr ds:0B42CDDh, 0
0x851305: jz      short loc_851318
0x851307: mov     edx, [ebx]
0x851309: mov     eax, [edx+78h]
0x85130C: mov     ecx, ebx
0x85130E: call    eax
0x851310: push    eax
0x851311: mov     ecx, esi
0x851313: call    sub_7715E0
0x851318: mov     ecx, [edi+24h]
0x85131B: mov     esi, [ecx+4]
0x85131E: mov     edx, [ebx]
0x851320: mov     eax, [esp+3Ch+var_28]
0x851324: mov     edx, [edx+90h]
0x85132A: push    eax
0x85132B: mov     ecx, ebx
0x85132D: mov     [esp+40h+arg_8], esi
0x851331: call    edx
0x851333: mov     esi, [esi+4]
0x851336: mov     ebp, eax
0x851338: cmp     esi, ebp
0x85133A: jz      short loc_851373
0x85133C: test    esi, esi
0x85133E: jz      short loc_85135C
0x851340: lea     eax, [esi+4]
0x851343: push    eax; lpAddend
0x851344: call    dword ptr ds:0A2807Ch
0x85134A: test    eax, eax
0x85134C: jnz     short loc_85135C
0x85134E: test    esi, esi
0x851350: jz      short loc_85135C
0x851352: mov     edx, [esi]
0x851354: mov     eax, [edx]
0x851356: push    1
0x851358: mov     ecx, esi
0x85135A: call    eax
0x85135C: test    ebp, ebp
0x85135E: mov     esi, [esp+3Ch+arg_8]
0x851362: mov     [esi+4], ebp
0x851365: jz      short loc_851377
0x851367: add     ebp, 4
0x85136A: push    ebp; lpAddend
0x85136B: call    dword ptr ds:0A28078h
0x851371: jmp     short loc_851377
0x851373: mov     esi, [esp+3Ch+arg_8]
0x851377: test    esi, esi
0x851379: jz      short loc_851395
0x85137B: cmp     byte ptr ds:0B42CDDh, 0
0x851382: jz      short loc_851395
0x851384: mov     edx, [ebx]
0x851386: mov     eax, [edx+78h]
0x851389: mov     ecx, ebx
0x85138B: call    eax
0x85138D: push    eax
0x85138E: mov     ecx, esi
0x851390: call    sub_7715E0
0x851395: mov     esi, [esp+3Ch+var_28]
0x851399: fld1
0x85139B: cmp     esi, 4
0x85139E: fldz
0x8513A0: jnz     short loc_8513AA
0x8513A2: fxch    st(1)
0x8513A4: fst     [esp+3Ch+var_24]
0x8513A8: jmp     short loc_8513CC
0x8513AA: cmp     esi, 3
0x8513AD: fst     [esp+3Ch+var_24]
0x8513B1: jnz     short loc_8513CA
0x8513B3: fstp    st(1)
0x8513B5: fld1
0x8513B7: fst     [esp+3Ch+var_28]
0x8513BB: fxch    st(1)
0x8513BD: cmp     esi, 1
0x8513C0: fst     [esp+3Ch+arg_C]
0x8513C4: jnz     short loc_8513DF
0x8513C6: fstp    st
0x8513C8: jmp     short loc_8513E1
0x8513CA: fxch    st(1)
0x8513CC: cmp     esi, 2
0x8513CF: fxch    st(1)
0x8513D1: fst     [esp+3Ch+var_28]
0x8513D5: jnz     short loc_8513BD
0x8513D7: fxch    st(1)
0x8513D9: fstp    [esp+3Ch+arg_C]
0x8513DD: jmp     short loc_8513E1
0x8513DF: fstp    st(1)
0x8513E1: fstp    [esp+3Ch+arg_8]
0x8513E5: sub     esp, 10h
0x8513E8: fld     [esp+4Ch+arg_8]
0x8513EC: mov     eax, esp
0x8513EE: fstp    [esp+4Ch+var_1C]
0x8513F2: mov     ecx, [esp+4Ch+var_1C]
0x8513F6: fld     [esp+4Ch+arg_C]
0x8513FA: mov     [eax], ecx
0x8513FC: fstp    [esp+4Ch+var_18]
0x851400: mov     edx, [esp+4Ch+var_18]
0x851404: fld     [esp+4Ch+var_28]
0x851408: mov     [eax+4], edx
0x85140B: fstp    [esp+4Ch+var_14]
0x85140F: mov     ecx, [esp+4Ch+var_14]
0x851413: fld     [esp+4Ch+var_24]
0x851417: mov     [eax+8], ecx
0x85141A: fstp    [esp+4Ch+var_10]
0x85141E: mov     edx, [esp+4Ch+var_10]
0x851422: push    2
0x851424: mov     [eax+0Ch], edx
0x851427: call    sub_7ECAE0
0x85142C: add     esp, 14h
0x85142F: cmp     esi, 8
0x851432: jnz     short loc_85143E
0x851434: fld1
0x851436: fst     [esp+3Ch+var_28]
0x85143A: fldz
0x85143C: jmp     short loc_851460
0x85143E: cmp     esi, 7
0x851441: fldz
0x851443: fst     [esp+3Ch+var_28]
0x851447: fld1
0x851449: jnz     short loc_85145E
0x85144B: fst     [esp+3Ch+var_24]
0x85144F: fxch    st(1)
0x851451: cmp     esi, 5
0x851454: fst     [esp+3Ch+arg_C]
0x851458: jnz     short loc_851471
0x85145A: fstp    st
0x85145C: jmp     short loc_851473
0x85145E: fxch    st(1)
0x851460: cmp     esi, 6
0x851463: fst     [esp+3Ch+var_24]
0x851467: jnz     short loc_851451
0x851469: fxch    st(1)
0x85146B: fstp    [esp+3Ch+arg_C]
0x85146F: jmp     short loc_851473
0x851471: fstp    st(1)
0x851473: fstp    [esp+3Ch+arg_8]
0x851477: sub     esp, 10h
0x85147A: fld     [esp+4Ch+arg_8]
0x85147E: mov     eax, esp
0x851480: fstp    [esp+4Ch+var_1C]
0x851484: mov     ecx, [esp+4Ch+var_1C]
0x851488: fld     [esp+4Ch+arg_C]
0x85148C: mov     [eax], ecx
0x85148E: fstp    [esp+4Ch+var_18]
0x851492: mov     edx, [esp+4Ch+var_18]
0x851496: fld     [esp+4Ch+var_24]
0x85149A: mov     [eax+4], edx
0x85149D: fstp    [esp+4Ch+var_14]
0x8514A1: mov     ecx, [esp+4Ch+var_14]
0x8514A5: fld     [esp+4Ch+var_28]
0x8514A9: mov     [eax+8], ecx
0x8514AC: fstp    [esp+4Ch+var_10]
0x8514B0: mov     edx, [esp+4Ch+var_10]
0x8514B4: push    3
0x8514B6: mov     [eax+0Ch], edx
0x8514B9: call    sub_7ECAE0
0x8514BE: add     esp, 14h
0x8514C1: cmp     byte ptr [esp+3Ch+arg_10], 0
0x8514C6: jz      short loc_851507
0x8514C8: mov     ebx, 1
0x8514CD: add     [edi+60h], ebx
0x8514D0: mov     [esp+3Ch+arg_10], edi
0x8514D4: mov     esi, [esp+3Ch+var_20]
0x8514D8: mov     ecx, [esi+38h]
0x8514DB: lea     eax, [esp+3Ch+arg_10]
0x8514DF: push    eax
0x8514E0: push    ecx
0x8514E1: lea     ecx, [esi+40h]
0x8514E4: mov     [esp+44h+var_4], 0
0x8514EC: call    sub_76CE40
0x8514F1: or      eax, 0FFFFFFFFh
0x8514F4: add     [edi+60h], eax
0x8514F7: mov     [esp+3Ch+var_4], eax
0x8514FB: jnz     short loc_851504
0x8514FD: mov     ecx, edi
0x8514FF: call    sub_7604D0
0x851504: add     [esi+38h], ebx
0x851507: mov     ecx, [esp+3Ch+var_C]
0x85150B: mov     large fs:0, ecx
0x851512: pop     ecx
0x851513: pop     edi
0x851514: pop     esi
0x851515: pop     ebp
0x851516: pop     ebx
0x851517: add     esp, 28h
0x85151A: retn    14h

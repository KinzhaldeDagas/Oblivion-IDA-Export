0x7F4790: push    ebx
0x7F4791: push    esi
0x7F4792: mov     esi, ecx
0x7F4794: mov     eax, [esi]
0x7F4796: mov     edx, [eax+80h]
0x7F479C: push    edi
0x7F479D: call    edx
0x7F479F: mov     eax, [esp+0Ch+arg_C]
0x7F47A3: mov     ebx, [eax+18h]
0x7F47A6: test    ebx, ebx
0x7F47A8: jnz     short loc_7F47AE
0x7F47AA: xor     edi, edi
0x7F47AC: jmp     short loc_7F47C1
0x7F47AE: mov     edx, [ebx]
0x7F47B0: mov     eax, [edx+54h]
0x7F47B3: mov     ecx, ebx
0x7F47B5: call    eax
0x7F47B7: xor     ecx, ecx
0x7F47B9: cmp     eax, 0Dh
0x7F47BC: setz    cl
0x7F47BF: mov     edi, ecx
0x7F47C1: neg     edi
0x7F47C3: sbb     edi, edi
0x7F47C5: and     edi, ebx
0x7F47C7: jz      loc_7F4966
0x7F47CD: mov     edx, [esi+178h]
0x7F47D3: mov     eax, [edx+24h]
0x7F47D6: push    ebp
0x7F47D7: mov     ebp, [eax]
0x7F47D9: mov     ebx, [ebp+4]
0x7F47DC: test    ebx, ebx
0x7F47DE: jz      short loc_7F4803
0x7F47E0: lea     ecx, [ebx+4]
0x7F47E3: push    ecx; lpAddend
0x7F47E4: call    dword ptr ds:0A2807Ch
0x7F47EA: test    eax, eax
0x7F47EC: jnz     short loc_7F47FC
0x7F47EE: test    ebx, ebx
0x7F47F0: jz      short loc_7F47FC
0x7F47F2: mov     edx, [ebx]
0x7F47F4: mov     eax, [edx]
0x7F47F6: push    1
0x7F47F8: mov     ecx, ebx
0x7F47FA: call    eax
0x7F47FC: mov     dword ptr [ebp+4], 0
0x7F4803: push    3
0x7F4805: mov     ecx, ebp
0x7F4807: call    sub_7715E0
0x7F480C: fld     dword ptr [edi+7Ch]
0x7F480F: fstp    dword ptr [esi+138h]
0x7F4815: pop     ebp
0x7F4816: fild    dword ptr [edi+134h]
0x7F481C: fimul   dword ptr [edi+14Ch]
0x7F4822: fstp    dword ptr [esi+13Ch]
0x7F4828: fild    dword ptr [edi+14Ch]
0x7F482E: fstp    dword ptr [esi+140h]
0x7F4834: fld     dword ptr [edi+154h]
0x7F483A: fstp    dword ptr [esi+144h]
0x7F4840: fild    dword ptr [edi+84h]
0x7F4846: fstp    dword ptr [esi+148h]
0x7F484C: fild    dword ptr [edi+88h]
0x7F4852: fstp    dword ptr [esi+14Ch]
0x7F4858: fld     dword ptr [edi+144h]
0x7F485E: fstp    dword ptr [esi+150h]
0x7F4864: fld     dword ptr [edi+148h]
0x7F486A: fstp    dword ptr [esi+154h]
0x7F4870: cmp     byte ptr [edi+180h], 0
0x7F4877: jz      short loc_7F4881
0x7F4879: fld     dword ptr ds:0A30634h
0x7F487F: jmp     short loc_7F4883
0x7F4881: fld1
0x7F4883: fstp    [esp+0Ch+arg_C]
0x7F4887: fld     [esp+0Ch+arg_C]
0x7F488B: fstp    dword ptr [esi+158h]
0x7F4891: fld     dword ptr [edi+198h]
0x7F4897: fstp    dword ptr [esi+15Ch]
0x7F489D: fld     dword ptr [edi+18Ch]
0x7F48A3: fstp    dword ptr [esi+160h]
0x7F48A9: fld     dword ptr [edi+90h]
0x7F48AF: fstp    dword ptr [esi+164h]
0x7F48B5: mov     ecx, [edi+160h]
0x7F48BB: mov     [esi+17Ch], ecx
0x7F48C1: mov     edx, [edi+164h]
0x7F48C7: mov     [esi+180h], edx
0x7F48CD: mov     eax, [edi+168h]
0x7F48D3: mov     [esi+184h], eax
0x7F48D9: mov     ecx, [edi+16Ch]
0x7F48DF: mov     [esi+188h], ecx
0x7F48E5: mov     edx, [edi+170h]
0x7F48EB: mov     [esi+18Ch], edx
0x7F48F1: mov     eax, [edi+174h]
0x7F48F7: mov     [esi+190h], eax
0x7F48FD: mov     ecx, [edi+178h]
0x7F4903: mov     [esi+194h], ecx
0x7F4909: mov     edx, [edi+17Ch]
0x7F490F: mov     [esi+198h], edx
0x7F4915: mov     eax, ds:0B468FCh
0x7F491A: test    eax, eax
0x7F491C: jnz     short loc_7F4938
0x7F491E: cmp     dword ptr ds:0B42F48h, 2
0x7F4925: setl    al
0x7F4928: sub     eax, 1
0x7F492B: and     eax, 0A0h
0x7F4930: add     eax, 4Bh ; 'K'
0x7F4933: mov     ds:0B468FCh, eax
0x7F4938: mov     ecx, [esi+80h]
0x7F493E: shl     eax, 4
0x7F4941: push    eax; Size
0x7F4942: mov     eax, [edi+6Ch]
0x7F4945: push    eax; Src
0x7F4946: push    ecx; Dst
0x7F4947: call    _memcpy
0x7F494C: mov     edx, [esi+38h]
0x7F494F: add     esp, 0Ch
0x7F4952: lea     eax, [esi+178h]
0x7F4958: push    eax; a3
0x7F4959: push    edx; a2
0x7F495A: lea     ecx, [esi+40h]; this
0x7F495D: call    sub_76CE40
0x7F4962: add     dword ptr [esi+38h], 1
0x7F4966: pop     edi
0x7F4967: pop     esi
0x7F4968: xor     eax, eax
0x7F496A: pop     ebx
0x7F496B: retn    1Ch

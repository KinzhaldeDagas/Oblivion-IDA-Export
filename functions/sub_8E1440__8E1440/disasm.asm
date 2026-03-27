0x8E1440: push    esi
0x8E1441: push    edi
0x8E1442: mov     edi, ecx
0x8E1444: mov     esi, [edi+4]
0x8E1447: mov     eax, [edi+8]
0x8E144A: add     esi, 2
0x8E144D: and     eax, 3FFFFFFFh
0x8E1452: cmp     eax, esi
0x8E1454: jge     short loc_8E146A
0x8E1456: add     eax, eax
0x8E1458: cmp     esi, eax
0x8E145A: jl      short loc_8E145E
0x8E145C: mov     eax, esi
0x8E145E: push    4
0x8E1460: push    eax
0x8E1461: push    edi
0x8E1462: call    sub_8A6E40
0x8E1467: add     esp, 0Ch
0x8E146A: mov     eax, [edi]
0x8E146C: mov     cx, [esp+8+arg_C]
0x8E1471: lea     eax, [eax+esi*4-0Ch]
0x8E1475: mov     [edi+4], esi
0x8E1478: cmp     cx, [eax]
0x8E147B: ja      short loc_8E148D
0x8E147D: lea     ecx, [ecx+0]
0x8E1480: mov     edx, [eax]
0x8E1482: mov     [eax+8], edx
0x8E1485: sub     eax, 4
0x8E1488: cmp     cx, [eax]
0x8E148B: jbe     short loc_8E1480
0x8E148D: mov     edx, [esp+8+arg_4]
0x8E1491: mov     [eax+8], cx
0x8E1495: mov     [eax+0Ah], dx
0x8E1499: mov     esi, [edi]
0x8E149B: mov     ecx, eax
0x8E149D: sub     ecx, esi
0x8E149F: mov     esi, [esp+8+arg_14]
0x8E14A3: sar     ecx, 2
0x8E14A6: add     ecx, 2
0x8E14A9: mov     [esi], cx
0x8E14AC: mov     cx, [esp+8+arg_8]
0x8E14B1: cmp     cx, [eax]
0x8E14B4: jnb     short loc_8E14C3
0x8E14B6: mov     esi, [eax]
0x8E14B8: mov     [eax+4], esi
0x8E14BB: sub     eax, 4
0x8E14BE: cmp     cx, [eax]
0x8E14C1: jb      short loc_8E14B6
0x8E14C3: mov     [eax+6], dx
0x8E14C7: mov     edx, [esp+8+arg_10]
0x8E14CB: mov     [eax+4], cx
0x8E14CF: sub     eax, [edi]
0x8E14D1: sar     eax, 2
0x8E14D4: inc     eax
0x8E14D5: pop     edi
0x8E14D6: mov     [edx], ax
0x8E14D9: pop     esi
0x8E14DA: retn    18h

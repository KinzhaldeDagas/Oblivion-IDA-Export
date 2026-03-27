0x6B66A0: push    esi
0x6B66A1: mov     esi, ecx
0x6B66A3: call    sub_6B4820
0x6B66A8: mov     eax, [esp+4+arg_0]
0x6B66AC: push    eax
0x6B66AD: mov     ecx, esi
0x6B66AF: call    sub_6B5840
0x6B66B4: mov     ecx, [esi+1004h]
0x6B66BA: add     ecx, 1
0x6B66BD: and     ecx, 0Fh
0x6B66C0: cmp     [esi+1000h], esi
0x6B66C6: mov     [esi+1004h], ecx
0x6B66CC: lea     eax, [esi+800h]
0x6B66D2: jz      short loc_6B66D6
0x6B66D4: mov     eax, esi
0x6B66D6: mov     [esi+1000h], eax
0x6B66DC: lea     eax, [esi+1088h]
0x6B66E2: lea     ecx, [esi+1008h]
0x6B66E8: cmp     eax, ecx
0x6B66EA: pop     esi
0x6B66EB: jbe     short locret_6B66FA
0x6B66ED: fldz
0x6B66EF: sub     eax, 4
0x6B66F2: cmp     eax, ecx
0x6B66F4: fst     dword ptr [eax]
0x6B66F6: ja      short loc_6B66EF
0x6B66F8: fstp    st
0x6B66FA: retn    4

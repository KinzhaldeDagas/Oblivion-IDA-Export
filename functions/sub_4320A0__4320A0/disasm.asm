0x4320A0: push    ebx
0x4320A1: push    ebp
0x4320A2: push    esi
0x4320A3: mov     esi, [esp+0Ch+arg_0]
0x4320A7: mov     ebx, ecx
0x4320A9: cmp     dword ptr [ebx+38h], 6
0x4320AD: push    edi
0x4320AE: jz      short loc_4320D5
0x4320B0: mov     edi, [esi+10h]
0x4320B3: mov     ebp, [esi+14h]
0x4320B6: mov     eax, edi
0x4320B8: mov     edx, ebp
0x4320BA: mov     cl, 10h
0x4320BC: call    __allshr
0x4320C1: movzx   eax, al
0x4320C4: cmp     eax, [ebx+38h]
0x4320C7: jg      short loc_4320D5
0x4320C9: and     edi, 0FF00FFFFh
0x4320CF: mov     [esi+10h], edi
0x4320D2: mov     [esi+14h], ebp
0x4320D5: mov     edx, [esi]
0x4320D7: mov     eax, [edx+18h]
0x4320DA: mov     ecx, esi
0x4320DC: call    eax
0x4320DE: push    esi
0x4320DF: mov     ecx, ebx
0x4320E1: call    sub_431FF0
0x4320E6: test    al, al
0x4320E8: jnz     short loc_432120
0x4320EA: mov     edi, ds:InterlockedIncrement
0x4320F0: push    offset dword_B33A14; lpAddend
0x4320F5: call    edi ; InterlockedIncrement
0x4320F7: mov     ecx, [esi+10h]
0x4320FA: mov     ebp, [esi+14h]
0x4320FD: movzx   eax, ax
0x432100: movzx   eax, ax
0x432103: cdq
0x432104: and     ecx, 0FFFF0000h
0x43210A: add     ecx, eax
0x43210C: adc     ebp, edx
0x43210E: mov     [esi+10h], ecx
0x432111: push    esi
0x432112: mov     ecx, ebx
0x432114: mov     [esi+14h], ebp
0x432117: call    sub_431FF0
0x43211C: test    al, al
0x43211E: jz      short loc_4320F0
0x432120: pop     edi
0x432121: pop     esi
0x432122: pop     ebp
0x432123: mov     al, 1
0x432125: pop     ebx
0x432126: retn    4

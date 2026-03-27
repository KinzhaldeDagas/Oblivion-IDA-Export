0x9A26F0: push    esi
0x9A26F1: mov     esi, [esp+4+arg_0]
0x9A26F5: mov     eax, [esi+0Ch]
0x9A26F8: push    eax; Str1
0x9A26F9: call    sub_9A2640
0x9A26FE: xor     edx, edx
0x9A2700: add     esp, 4
0x9A2703: cmp     eax, edx
0x9A2705: jz      short loc_9A2780
0x9A2707: lea     ecx, [eax-1]
0x9A270A: cmp     ecx, 0Bh
0x9A270D: mov     [esi+10h], eax
0x9A2710: ja      short loc_9A2727
0x9A2712: movzx   ecx, ds:byte_9A2790[ecx]
0x9A2719: jmp     ds:jpt_9A2719[ecx*4]; switch 1 cases
0x9A2720: mov     ecx, 7; jumptable 009A2719 case 0
0x9A2725: jmp     short loc_9A2729
0x9A2727: xor     ecx, ecx
0x9A2729: movzx   ecx, byte_B4294C[ecx]
0x9A2730: push    edi
0x9A2731: mov     edi, [esi+14h]
0x9A2734: and     edi, 0FFFFFF00h
0x9A273A: or      ecx, edi
0x9A273C: sub     eax, 1
0x9A273F: mov     [esi+14h], ecx
0x9A2742: pop     edi
0x9A2743: jz      short loc_9A2765
0x9A2745: sub     eax, 1
0x9A2748: jnz     short loc_9A275F
0x9A274A: mov     eax, 10h
0x9A274F: mov     [esi+28h], eax
0x9A2752: mov     [esi+2Ch], eax
0x9A2755: mov     [esi+34h], dl
0x9A2758: mov     dword ptr [esi+30h], offset unk_B329D4
0x9A275F: xor     eax, eax
0x9A2761: pop     esi
0x9A2762: retn    4
0x9A2765: mov     eax, 10h
0x9A276A: mov     [esi+28h], eax
0x9A276D: mov     [esi+2Ch], eax
0x9A2770: mov     [esi+34h], dl
0x9A2773: mov     dword ptr [esi+30h], offset unk_B329C4
0x9A277A: xor     eax, eax
0x9A277C: pop     esi
0x9A277D: retn    4
0x9A2780: mov     eax, 80000040h
0x9A2785: pop     esi
0x9A2786: retn    4

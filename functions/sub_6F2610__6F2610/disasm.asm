0x6F2610: push    ebx
0x6F2611: mov     ebx, [esp+4+arg_0]
0x6F2615: push    esi
0x6F2616: mov     esi, ecx
0x6F2618: cmp     esi, ebx
0x6F261A: jz      loc_6F275A
0x6F2620: push    ebp
0x6F2621: mov     ebp, [ebx+4]
0x6F2624: test    ebp, ebp
0x6F2626: jz      short loc_6F263F
0x6F2628: mov     ecx, [ebx+8]
0x6F262B: sub     ecx, ebp
0x6F262D: mov     eax, 2AAAAAABh
0x6F2632: imul    ecx
0x6F2634: sar     edx, 1
0x6F2636: mov     ecx, edx
0x6F2638: shr     ecx, 1Fh
0x6F263B: add     ecx, edx
0x6F263D: jnz     short loc_6F264E
0x6F263F: mov     ecx, esi
0x6F2641: call    sub_6F1630
0x6F2646: pop     ebp
0x6F2647: mov     eax, esi
0x6F2649: pop     esi
0x6F264A: pop     ebx
0x6F264B: retn    4
0x6F264E: push    edi
0x6F264F: mov     edi, [esi+4]
0x6F2652: test    edi, edi
0x6F2654: jnz     short loc_6F265A
0x6F2656: xor     eax, eax
0x6F2658: jmp     short loc_6F266F
0x6F265A: mov     edx, [esi+8]
0x6F265D: sub     edx, edi
0x6F265F: mov     eax, 2AAAAAABh
0x6F2664: imul    edx
0x6F2666: sar     edx, 1
0x6F2668: mov     eax, edx
0x6F266A: shr     eax, 1Fh
0x6F266D: add     eax, edx
0x6F266F: cmp     ecx, eax
0x6F2671: ja      short loc_6F26DB
0x6F2673: mov     byte ptr [esp+10h+arg_0], 0
0x6F2678: mov     eax, [esp+10h+arg_0]
0x6F267C: mov     ecx, [esp+10h+arg_0]
0x6F2680: mov     edx, [esp+10h+arg_0]
0x6F2684: push    eax
0x6F2685: mov     eax, [ebx+8]
0x6F2688: push    ecx
0x6F2689: push    edx
0x6F268A: push    edi
0x6F268B: push    eax
0x6F268C: push    ebp
0x6F268D: call    sub_6F1240
0x6F2692: mov     eax, [ebx+4]
0x6F2695: add     esp, 18h
0x6F2698: test    eax, eax
0x6F269A: jnz     short loc_6F26B1
0x6F269C: mov     ecx, [esi+4]
0x6F269F: lea     eax, [eax+eax*2]
0x6F26A2: pop     edi
0x6F26A3: lea     edx, [ecx+eax*4]
0x6F26A6: pop     ebp
0x6F26A7: mov     [esi+8], edx
0x6F26AA: mov     eax, esi
0x6F26AC: pop     esi
0x6F26AD: pop     ebx
0x6F26AE: retn    4
0x6F26B1: mov     ecx, [ebx+8]
0x6F26B4: sub     ecx, eax
0x6F26B6: mov     eax, 2AAAAAABh
0x6F26BB: imul    ecx
0x6F26BD: mov     ecx, [esi+4]
0x6F26C0: sar     edx, 1
0x6F26C2: mov     eax, edx
0x6F26C4: shr     eax, 1Fh
0x6F26C7: add     eax, edx
0x6F26C9: lea     eax, [eax+eax*2]
0x6F26CC: pop     edi
0x6F26CD: lea     edx, [ecx+eax*4]
0x6F26D0: pop     ebp
0x6F26D1: mov     [esi+8], edx
0x6F26D4: mov     eax, esi
0x6F26D6: pop     esi
0x6F26D7: pop     ebx
0x6F26D8: retn    4
0x6F26DB: test    edi, edi
0x6F26DD: jnz     short loc_6F26E3
0x6F26DF: xor     eax, eax
0x6F26E1: jmp     short loc_6F26F8
0x6F26E3: mov     edx, [esi+0Ch]
0x6F26E6: sub     edx, edi
0x6F26E8: mov     eax, 2AAAAAABh
0x6F26ED: imul    edx
0x6F26EF: sar     edx, 1
0x6F26F1: mov     eax, edx
0x6F26F3: shr     eax, 1Fh
0x6F26F6: add     eax, edx
0x6F26F8: cmp     ecx, eax
0x6F26FA: ja      short loc_6F2722
0x6F26FC: mov     ecx, esi
0x6F26FE: call    sub_6F1080
0x6F2703: lea     eax, [eax+eax*2]
0x6F2706: lea     eax, [ebp+eax*4+0]
0x6F270A: push    edi
0x6F270B: push    eax
0x6F270C: push    ebp
0x6F270D: mov     [esp+1Ch+arg_0], eax
0x6F2711: call    sub_6F1350
0x6F2716: mov     ecx, [esi+8]
0x6F2719: mov     eax, [esp+1Ch+arg_0]
0x6F271D: add     esp, 0Ch
0x6F2720: jmp     short loc_6F2748
0x6F2722: test    edi, edi
0x6F2724: jz      short loc_6F272F
0x6F2726: push    edi
0x6F2727: call    FormHeapFree
0x6F272C: add     esp, 4
0x6F272F: mov     ecx, ebx
0x6F2731: call    sub_6F1080
0x6F2736: push    eax
0x6F2737: mov     ecx, esi
0x6F2739: call    sub_556FE0
0x6F273E: test    al, al
0x6F2740: jz      short loc_6F2758
0x6F2742: mov     ecx, [esi+4]
0x6F2745: mov     eax, [ebx+4]
0x6F2748: mov     edx, [ebx+8]
0x6F274B: push    ecx
0x6F274C: push    edx
0x6F274D: push    eax
0x6F274E: mov     ecx, esi
0x6F2750: call    sub_6F15A0
0x6F2755: mov     [esi+8], eax
0x6F2758: pop     edi
0x6F2759: pop     ebp
0x6F275A: mov     eax, esi
0x6F275C: pop     esi
0x6F275D: pop     ebx
0x6F275E: retn    4

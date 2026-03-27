0x4FC850: push    esi
0x4FC851: mov     esi, ecx
0x4FC853: mov     eax, [esi]
0x4FC855: mov     edx, [eax+6Ch]
0x4FC858: push    edi
0x4FC859: call    edx
0x4FC85B: mov     edi, [esp+8+arg_0]
0x4FC85F: movzx   eax, word ptr [edi+10h]
0x4FC863: cmp     ax, 0FFFFh
0x4FC867: jnz     short loc_4FC87D
0x4FC869: mov     eax, [edi+0Ch]
0x4FC86C: lea     edx, [eax+1]
0x4FC86F: nop
0x4FC870: mov     cl, [eax]
0x4FC872: add     eax, 1
0x4FC875: test    cl, cl
0x4FC877: jnz     short loc_4FC870
0x4FC879: sub     eax, edx
0x4FC87B: jmp     short loc_4FC880
0x4FC87D: movzx   eax, ax
0x4FC880: test    eax, eax
0x4FC882: mov     ecx, esi
0x4FC884: jnz     short loc_4FC897
0x4FC886: mov     eax, [esi]
0x4FC888: mov     edx, [eax+8Ch]
0x4FC88E: push    1
0x4FC890: call    edx
0x4FC892: pop     edi
0x4FC893: pop     esi
0x4FC894: retn    4
0x4FC897: push    edi
0x4FC898: call    sub_4FA5E0
0x4FC89D: test    al, al
0x4FC89F: jz      loc_4FC931
0x4FC8A5: mov     ecx, [edi+0Ch]
0x4FC8A8: mov     eax, [esi]
0x4FC8AA: mov     edx, [eax+0D8h]
0x4FC8B0: push    ecx
0x4FC8B1: mov     ecx, esi
0x4FC8B3: call    edx
0x4FC8B5: mov     eax, [edi+28h]
0x4FC8B8: mov     [esi+18h], eax
0x4FC8BB: mov     ecx, [edi+2Ch]
0x4FC8BE: mov     [esi+1Ch], ecx
0x4FC8C1: mov     edx, [edi+30h]
0x4FC8C4: mov     [esi+20h], edx
0x4FC8C7: mov     eax, [edi+34h]
0x4FC8CA: mov     [esi+24h], eax
0x4FC8CD: mov     ecx, [edi+38h]
0x4FC8D0: mov     [esi+28h], ecx
0x4FC8D3: mov     edx, [edi+20h]
0x4FC8D6: mov     eax, [esi+20h]
0x4FC8D9: push    edx; Src
0x4FC8DA: push    eax; int
0x4FC8DB: mov     ecx, esi
0x4FC8DD: call    sub_4F9DF0
0x4FC8E2: mov     ecx, esi
0x4FC8E4: call    sub_4FC730
0x4FC8E9: mov     ecx, esi
0x4FC8EB: call    sub_4FC6C0
0x4FC8F0: cmp     dword ptr [esi+20h], 0
0x4FC8F4: jz      short loc_4FC915
0x4FC8F6: push    esi
0x4FC8F7: lea     ecx, [esi+40h]
0x4FC8FA: push    ecx
0x4FC8FB: lea     edx, [edi+44h]
0x4FC8FE: push    edx
0x4FC8FF: call    sub_4FC040
0x4FC904: push    esi
0x4FC905: lea     eax, [esi+48h]
0x4FC908: push    eax
0x4FC909: add     edi, 3Ch ; '<'
0x4FC90C: push    edi
0x4FC90D: call    sub_4FA780
0x4FC912: add     esp, 18h
0x4FC915: mov     edx, [esi]
0x4FC917: mov     eax, [edx+8Ch]
0x4FC91D: push    0
0x4FC91F: mov     ecx, esi
0x4FC921: call    eax
0x4FC923: mov     edx, [esi]
0x4FC925: mov     eax, [edx+90h]
0x4FC92B: push    1
0x4FC92D: mov     ecx, esi
0x4FC92F: call    eax
0x4FC931: pop     edi
0x4FC932: pop     esi
0x4FC933: retn    4

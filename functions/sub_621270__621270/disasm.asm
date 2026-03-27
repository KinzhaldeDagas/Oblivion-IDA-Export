0x621270: push    esi
0x621271: mov     esi, ecx
0x621273: call    sub_6135F0
0x621278: test    eax, eax
0x62127A: jz      loc_62138A
0x621280: mov     ecx, [esi+3Ch]
0x621283: call    Actor_IsSwimming
0x621288: test    al, al
0x62128A: jz      short loc_6212E5
0x62128C: mov     ecx, [esi+3Ch]
0x62128F: call    Actor_CanFightInWater
0x621294: test    al, al
0x621296: jnz     short loc_6212E5
0x621298: mov     ecx, esi
0x62129A: call    sub_6135F0
0x62129F: cmp     dword ptr [esi+6Ch], 7
0x6212A3: jnz     short loc_6212CB
0x6212A5: mov     eax, [esi+3Ch]
0x6212A8: mov     ecx, [eax+58h]
0x6212AB: mov     edx, [ecx]
0x6212AD: mov     eax, [edx+174h]
0x6212B3: call    eax
0x6212B5: cmp     eax, esi
0x6212B7: jz      short loc_6212CB
0x6212B9: mov     ecx, [esi+3Ch]
0x6212BC: mov     ecx, [ecx+58h]
0x6212BF: mov     edx, [ecx]
0x6212C1: mov     eax, [edx+178h]
0x6212C7: push    0
0x6212C9: call    eax
0x6212CB: push    0Ch
0x6212CD: mov     ecx, esi
0x6212CF: call    sub_612DE0
0x6212D4: push    0
0x6212D6: mov     ecx, esi
0x6212D8: call    sub_619920
0x6212DD: mov     ecx, esi
0x6212DF: pop     esi
0x6212E0: jmp     sub_620E80
0x6212E5: mov     eax, [esi+6Ch]
0x6212E8: cmp     eax, 0Bh
0x6212EB: jz      loc_62138A
0x6212F1: cmp     eax, 0Ah
0x6212F4: jz      loc_62138A
0x6212FA: push    ebx
0x6212FB: mov     ecx, esi
0x6212FD: call    sub_6135F0
0x621302: mov     ecx, eax
0x621304: call    Actor_IsSwimming
0x621309: mov     bl, al
0x62130B: test    bl, bl
0x62130D: jz      short loc_621379
0x62130F: mov     ecx, [esi+3Ch]
0x621312: call    Actor_IsSwimming
0x621317: test    al, al
0x621319: jnz     short loc_621379
0x62131B: mov     ecx, [esi+3Ch]; this
0x62131E: call    sub_5E3400
0x621323: test    al, al
0x621325: jz      short loc_621379
0x621327: mov     ecx, [esi+70h]
0x62132A: push    ecx
0x62132B: call    sub_612690
0x621330: add     esp, 4
0x621333: test    al, al
0x621335: jz      short loc_62135F
0x621337: cmp     byte ptr [esi+130h], 0
0x62133E: jz      short loc_621379
0x621340: cmp     dword ptr [esi+7Ch], 0
0x621344: jnz     short loc_621379
0x621346: cmp     byte ptr [esi+115h], 0
0x62134D: jnz     short loc_6213B1
0x62134F: mov     ecx, esi
0x621351: call    sub_6160B0
0x621356: pop     ebx
0x621357: mov     ecx, esi
0x621359: pop     esi
0x62135A: jmp     sub_61FE90
0x62135F: mov     ecx, [esi+3Ch]
0x621362: call    Actor_CanFightInWater
0x621367: test    al, al
0x621369: jnz     short loc_621379
0x62136B: mov     ecx, esi
0x62136D: call    sub_6160B0
0x621372: mov     ecx, esi
0x621374: call    sub_61FEF0
0x621379: mov     ecx, [esi+3Ch]
0x62137C: call    sub_5E1E90
0x621381: test    al, al
0x621383: jz      short loc_62138C
0x621385: test    bl, bl
0x621387: jz      short loc_6213A8
0x621389: pop     ebx
0x62138A: pop     esi
0x62138B: retn
0x62138C: mov     ecx, [esi+3Ch]; this
0x62138F: call    sub_5E3400
0x621394: test    al, al
0x621396: jz      short loc_6213A4
0x621398: mov     ecx, [esi+3Ch]
0x62139B: call    Actor_CanFightInWater
0x6213A0: test    al, al
0x6213A2: jnz     short loc_621389
0x6213A4: test    bl, bl
0x6213A6: jz      short loc_621389
0x6213A8: cmp     byte ptr [esi+115h], 0
0x6213AF: jz      short loc_6213BA
0x6213B1: pop     ebx
0x6213B2: mov     ecx, esi
0x6213B4: pop     esi
0x6213B5: jmp     sub_61C6E0
0x6213BA: pop     ebx
0x6213BB: mov     ecx, esi
0x6213BD: pop     esi
0x6213BE: jmp     sub_620E50

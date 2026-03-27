0x451920: sub     esp, 8
0x451923: push    esi
0x451924: push    edi
0x451925: mov     edi, [esp+10h+arg_0]
0x451929: test    edi, edi
0x45192B: mov     esi, ecx
0x45192D: mov     [esp+10h+var_5], 0
0x451932: jz      loc_451A27
0x451938: cmp     byte ptr [esi+28Ch], 0
0x45193F: jz      loc_451A27
0x451945: mov     eax, [esi+10h]
0x451948: test    eax, eax
0x45194A: jz      loc_451A27
0x451950: cmp     byte ptr [eax+24h], 0
0x451954: jz      loc_451A27
0x45195A: mov     eax, [edi]
0x45195C: mov     edx, [eax+68h]
0x45195F: push    esi
0x451960: mov     ecx, edi
0x451962: call    edx
0x451964: test    al, al
0x451966: jz      short loc_451972
0x451968: pop     edi
0x451969: mov     al, 1
0x45196B: pop     esi
0x45196C: add     esp, 8
0x45196F: retn    4
0x451972: push    ebp
0x451973: push    1
0x451975: mov     ecx, esi
0x451977: call    TESFile_JumpToBOF
0x45197C: mov     eax, [esi+23Ch]
0x451982: cmp     eax, ds:0B05E14h
0x451988: lea     ebp, [esi+23Ch]
0x45198E: jnz     short loc_4519A4
0x451990: push    1
0x451992: mov     ecx, esi
0x451994: call    TESFile_NextRecordEx; NextForm?
0x451999: mov     ecx, [ebp+0]
0x45199C: cmp     ecx, ds:0B05E14h
0x4519A2: jz      short loc_451990
0x4519A4: mov     edx, [edi]
0x4519A6: mov     eax, [edx+70h]
0x4519A9: push    ebx
0x4519AA: mov     ecx, edi
0x4519AC: call    eax
0x4519AE: lea     ecx, [eax+eax*2]
0x4519B1: mov     eax, [edi+0Ch]
0x4519B4: mov     edx, ds:0B05E08h[ecx*4]
0x4519BB: mov     [esp+18h+var_4], eax
0x4519BF: mov     eax, [ebp+0]
0x4519C2: test    eax, eax
0x4519C4: mov     [esp+18h+arg_0], edx
0x4519C8: mov     bl, 1
0x4519CA: jz      short loc_451A25
0x4519CC: lea     esp, [esp+0]
0x4519D0: test    bl, bl
0x4519D2: jz      short loc_451A25
0x4519D4: cmp     eax, ds:0B05E20h
0x4519DA: jnz     short loc_4519FA
0x4519DC: mov     edx, [edi]
0x4519DE: mov     eax, [edx+0BCh]
0x4519E4: push    0
0x4519E6: push    1
0x4519E8: push    ebp
0x4519E9: mov     ecx, edi
0x4519EB: call    eax
0x4519ED: test    al, al
0x4519EF: mov     ecx, esi
0x4519F1: jnz     short loc_451A17
0x4519F3: call    TESFile__NextGroup
0x4519F8: jmp     short loc_451A1E
0x4519FA: cmp     eax, [esp+18h+arg_0]
0x4519FE: jnz     short loc_451A15
0x451A00: mov     ecx, [esp+18h+var_4]
0x451A04: cmp     [esi+248h], ecx
0x451A0A: jnz     short loc_451A15
0x451A0C: xor     bl, bl
0x451A0E: mov     [esp+18h+var_5], 1
0x451A13: jmp     short loc_451A1E
0x451A15: mov     ecx, esi
0x451A17: push    1
0x451A19: call    TESFile_NextRecordEx; NextForm?
0x451A1E: mov     eax, [ebp+0]
0x451A21: test    eax, eax
0x451A23: jnz     short loc_4519D0
0x451A25: pop     ebx
0x451A26: pop     ebp
0x451A27: mov     al, [esp+10h+var_5]
0x451A2B: pop     edi
0x451A2C: pop     esi
0x451A2D: add     esp, 8
0x451A30: retn    4

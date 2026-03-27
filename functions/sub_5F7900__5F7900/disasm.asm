0x5F7900: push    esi
0x5F7901: mov     esi, ecx
0x5F7903: cmp     esi, ds:0B333C4h
0x5F7909: jnz     short loc_5F7911
0x5F790B: xor     al, al
0x5F790D: pop     esi
0x5F790E: retn    4
0x5F7911: push    edi
0x5F7912: mov     edi, [esp+8+arg_0]
0x5F7916: test    edi, edi
0x5F7918: jnz     short loc_5F7929
0x5F791A: mov     ecx, [esi+58h]
0x5F791D: mov     eax, [ecx]
0x5F791F: mov     edx, [eax+4CCh]
0x5F7925: call    edx
0x5F7927: mov     edi, eax
0x5F7929: mov     eax, [esi]
0x5F792B: mov     edx, [eax+18Ch]
0x5F7931: mov     ecx, esi
0x5F7933: call    edx
0x5F7935: test    eax, eax
0x5F7937: jnz     loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F793D: mov     ecx, [esi+58h]
0x5F7940: mov     eax, [ecx]
0x5F7942: mov     edx, [eax+4CCh]
0x5F7948: call    edx
0x5F794A: test    eax, eax
0x5F794C: jz      loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F7952: mov     ecx, [esi+58h]
0x5F7955: mov     eax, [ecx]
0x5F7957: mov     edx, [eax+4CCh]
0x5F795D: call    edx
0x5F795F: cmp     eax, esi
0x5F7961: jz      loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F7967: mov     eax, [esi]
0x5F7969: mov     edx, [eax+164h]
0x5F796F: mov     ecx, esi
0x5F7971: call    edx
0x5F7973: mov     ecx, eax
0x5F7975: call    sub_472EA0
0x5F797A: test    al, al
0x5F797C: jnz     loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F7982: mov     ecx, [esi+58h]
0x5F7985: mov     eax, [ecx]
0x5F7987: mov     edx, [eax+0C8h]
0x5F798D: call    edx
0x5F798F: test    al, al
0x5F7991: jz      loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F7997: mov     eax, [esi]
0x5F7999: mov     edx, [eax+334h]
0x5F799F: push    1
0x5F79A1: mov     ecx, esi
0x5F79A3: call    edx
0x5F79A5: test    al, al
0x5F79A7: jnz     loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F79AD: mov     eax, [esi]
0x5F79AF: mov     edx, [eax+164h]
0x5F79B5: push    3
0x5F79B7: mov     ecx, esi
0x5F79B9: call    edx
0x5F79BB: mov     ecx, eax
0x5F79BD: call    ActorAnimData_GetAnimGroupFromField8Value
0x5F79C2: push    eax
0x5F79C3: call    sub_51AC80
0x5F79C8: add     esp, 4
0x5F79CB: test    al, al
0x5F79CD: jnz     short loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F79CF: mov     ecx, ds:0B333C4h
0x5F79D5: call    Actor_IsSneaking
0x5F79DA: test    al, al
0x5F79DC: jz      short loc_5F7A12
0x5F79DE: mov     ecx, ds:0B333C4h
0x5F79E4: cmp     edi, ecx
0x5F79E6: jnz     short loc_5F7A12
0x5F79E8: push    0; int
0x5F79EA: push    0; int
0x5F79EC: push    0
0x5F79EE: mov     byte ptr [esp+14h+arg_0], 1
0x5F79F3: call    PlayerCharacter_IsPlayerInCombat
0x5F79F8: mov     ecx, ds:0B333C4h
0x5F79FE: push    eax; int
0x5F79FF: lea     eax, [esp+14h+arg_0]
0x5F7A03: push    eax; int
0x5F7A04: push    ecx; int
0x5F7A05: push    0; int
0x5F7A07: mov     ecx, esi; int
0x5F7A09: call    Actor_GetDetectionLevel
0x5F7A0E: test    eax, eax
0x5F7A10: jle     short loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F7A12: mov     ecx, [esi+58h]
0x5F7A15: mov     eax, [ecx+8]
0x5F7A18: test    eax, eax
0x5F7A1A: jz      short def_5F7A2F; jumptable 005F7A2F default case, cases 3-5,7,9-17
0x5F7A1C: movsx   eax, byte ptr [eax+20h]
0x5F7A20: add     eax, 0FFFFFFFEh; switch 17 cases
0x5F7A23: cmp     eax, 10h
0x5F7A26: ja      short def_5F7A2F; jumptable 005F7A2F default case, cases 3-5,7,9-17
0x5F7A28: movzx   edx, ds:byte_5F7A64[eax]
0x5F7A2F: jmp     ds:jpt_5F7A2F[edx*4]; switch jump
0x5F7A36: pop     edi; jumptable 005F7A2F cases 8,18
0x5F7A37: xor     al, al
0x5F7A39: pop     esi
0x5F7A3A: retn    4
0x5F7A3D: test    ecx, ecx; jumptable 005F7A2F cases 2,6
0x5F7A3F: jz      short def_5F7A2F; jumptable 005F7A2F default case, cases 3-5,7,9-17
0x5F7A41: mov     eax, [ecx]
0x5F7A43: mov     edx, [eax+2C0h]
0x5F7A49: call    edx
0x5F7A4B: test    al, 0Fh
0x5F7A4D: jnz     short loc_5F7A36; jumptable 005F7A2F cases 8,18
0x5F7A4F: pop     edi; jumptable 005F7A2F default case, cases 3-5,7,9-17
0x5F7A50: mov     al, 1
0x5F7A52: pop     esi
0x5F7A53: retn    4

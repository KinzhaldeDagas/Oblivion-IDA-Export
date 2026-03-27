0x440270: push    ebx
0x440271: push    ebp
0x440272: push    esi
0x440273: push    edi
0x440274: xor     bl, bl
0x440276: mov     ebp, ecx
0x440278: xor     edi, edi
0x44027A: lea     ebx, [ebx+0]
0x440280: cmp     edi, ds:0B06A2Ch
0x440286: jnb     short loc_4402BE
0x440288: xor     esi, esi
0x44028A: lea     ebx, [ebx+0]
0x440290: cmp     esi, ds:0B06A2Ch
0x440296: jnb     short loc_4402B9
0x440298: mov     ecx, [ebp+8]
0x44029B: push    esi
0x44029C: push    edi
0x44029D: call    GetGridEntry
0x4402A2: mov     eax, [eax]
0x4402A4: test    eax, eax
0x4402A6: jz      short loc_4402B2
0x4402A8: movzx   eax, byte ptr [eax+24h]
0x4402AC: shr     eax, 1
0x4402AE: test    al, 1
0x4402B0: jnz     short loc_4402B7
0x4402B2: add     esi, 1
0x4402B5: jmp     short loc_440290
0x4402B7: mov     bl, 1
0x4402B9: add     edi, 1
0x4402BC: jmp     short loc_440280
0x4402BE: test    bl, bl
0x4402C0: jz      short loc_4402D7
0x4402C2: cmp     byte ptr ds:0B0703Ch, 0
0x4402C9: jnz     short loc_4402EA
0x4402CB: mov     ecx, [ebp+54h]
0x4402CE: pop     edi
0x4402CF: pop     esi
0x4402D0: pop     ebp
0x4402D1: pop     ebx
0x4402D2: jmp     sub_498F30
0x4402D7: cmp     byte ptr ds:0B0703Ch, 0
0x4402DE: jz      short loc_4402EA
0x4402E0: mov     ecx, [ebp+54h]
0x4402E3: push    1
0x4402E5: call    WaterManager__Destroy?
0x4402EA: pop     edi
0x4402EB: pop     esi
0x4402EC: pop     ebp
0x4402ED: pop     ebx
0x4402EE: retn

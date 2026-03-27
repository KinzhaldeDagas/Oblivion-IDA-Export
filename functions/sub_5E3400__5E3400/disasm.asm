0x5E3400: push    esi
0x5E3401: mov     esi, ecx
0x5E3403: cmp     byte ptr [esi+0D8h], 0
0x5E340A: jz      short loc_5E3410
0x5E340C: mov     al, 1
0x5E340E: pop     esi
0x5E340F: retn
0x5E3410: mov     eax, [esi+58h]
0x5E3413: test    eax, eax
0x5E3415: jz      short loc_5E346E
0x5E3417: mov     eax, [eax+8]
0x5E341A: test    eax, eax
0x5E341C: jz      short loc_5E346E
0x5E341E: mov     al, [eax+20h]
0x5E3421: cmp     al, 0Ch
0x5E3423: jz      short loc_5E3429
0x5E3425: cmp     al, 0Fh
0x5E3427: jnz     short loc_5E346E
0x5E3429: mov     eax, [esi]
0x5E342B: mov     edx, [eax+330h]
0x5E3431: push    edi
0x5E3432: call    edx
0x5E3434: mov     edi, eax
0x5E3436: test    edi, edi
0x5E3438: jz      short loc_5E3465
0x5E343A: mov     ecx, esi
0x5E343C: call    Actor_CanFightInWater
0x5E3441: test    al, al
0x5E3443: jnz     short loc_5E344B
0x5E3445: cmp     dword ptr [edi+70h], 7
0x5E3449: jnz     short loc_5E3460
0x5E344B: mov     edi, [edi+70h]
0x5E344E: cmp     edi, 0Dh
0x5E3451: jz      short loc_5E3460
0x5E3453: push    edi
0x5E3454: call    sub_612690
0x5E3459: add     esp, 4
0x5E345C: test    al, al
0x5E345E: jz      short loc_5E3465
0x5E3460: pop     edi
0x5E3461: xor     al, al
0x5E3463: pop     esi
0x5E3464: retn
0x5E3465: pop     edi
0x5E3466: mov     ecx, esi; this
0x5E3468: pop     esi
0x5E3469: jmp     Actor_CanSwim
0x5E346E: push    ebx
0x5E346F: xor     bl, bl
0x5E3471: call    Actor_IsNPC
0x5E3476: test    al, al
0x5E3478: jz      short loc_5E3499
0x5E347A: mov     esi, [esi+58h]
0x5E347D: test    esi, esi
0x5E347F: jz      short loc_5E34A2
0x5E3481: mov     esi, [esi+8]
0x5E3484: test    esi, esi
0x5E3486: jz      short loc_5E34A2
0x5E3488: mov     eax, [esi+1Ch]
0x5E348B: shr     eax, 12h
0x5E348E: test    al, 1
0x5E3490: jz      short loc_5E34A2
0x5E3492: mov     bl, 1
0x5E3494: mov     al, bl
0x5E3496: pop     ebx
0x5E3497: pop     esi
0x5E3498: retn
0x5E3499: mov     ecx, esi; this
0x5E349B: call    Actor_CanSwim
0x5E34A0: mov     bl, al
0x5E34A2: mov     al, bl
0x5E34A4: pop     ebx
0x5E34A5: pop     esi
0x5E34A6: retn

0x551990: mov     eax, [esp+arg_0]
0x551994: test    eax, eax
0x551996: jnz     short loc_5519A1
0x551998: cmp     [esp+arg_4], eax
0x55199C: jnz     short loc_5519F6
0x55199E: mov     al, 1
0x5519A0: retn
0x5519A1: mov     ecx, [esp+arg_4]
0x5519A5: test    ecx, ecx
0x5519A7: jz      short loc_5519F6
0x5519A9: push    ebx
0x5519AA: push    ebp
0x5519AB: xor     ebp, ebp
0x5519AD: sub     ecx, eax
0x5519AF: push    esi
0x5519B0: mov     [esp+0Ch+arg_0], ecx
0x5519B4: mov     ebx, eax
0x5519B6: push    edi
0x5519B7: xor     esi, esi
0x5519B9: mov     edi, ebx
0x5519BB: jmp     short loc_5519C0
0x5519BD: align 10h
0x5519C0: mov     eax, [esp+10h+arg_0]
0x5519C4: add     eax, edi
0x5519C6: push    eax
0x5519C7: mov     ecx, edi
0x5519C9: call    sub_550330
0x5519CE: test    al, al
0x5519D0: jz      short loc_5519EF
0x5519D2: add     esi, 1
0x5519D5: add     edi, 18h
0x5519D8: cmp     esi, 2
0x5519DB: jl      short loc_5519C0
0x5519DD: add     ebp, 1
0x5519E0: add     ebx, 30h ; '0'
0x5519E3: cmp     ebp, 2
0x5519E6: jl      short loc_5519B7
0x5519E8: pop     edi
0x5519E9: pop     esi
0x5519EA: pop     ebp
0x5519EB: xor     al, al
0x5519ED: pop     ebx
0x5519EE: retn
0x5519EF: pop     edi
0x5519F0: pop     esi
0x5519F1: pop     ebp
0x5519F2: mov     al, 1
0x5519F4: pop     ebx
0x5519F5: retn
0x5519F6: xor     al, al
0x5519F8: retn

0x700670: push    esi
0x700671: mov     esi, ecx
0x700673: mov     ecx, [esp+4+arg_0]
0x700677: test    ecx, ecx
0x700679: jnz     short loc_700681
0x70067B: xor     al, al
0x70067D: pop     esi
0x70067E: retn    4
0x700681: mov     eax, [ecx]
0x700683: mov     edx, [eax+4]
0x700686: push    edi
0x700687: call    edx
0x700689: mov     edi, [eax]
0x70068B: mov     eax, [esi]
0x70068D: mov     edx, [eax+4]
0x700690: mov     ecx, esi
0x700692: call    edx
0x700694: mov     eax, [eax]
0x700696: mov     ecx, edi
0x700698: pop     edi
0x700699: lea     esp, [esp+0]
0x7006A0: mov     dl, [eax]
0x7006A2: cmp     dl, [ecx]
0x7006A4: jnz     short loc_7006C7
0x7006A6: test    dl, dl
0x7006A8: jz      short loc_7006BC
0x7006AA: mov     dl, [eax+1]
0x7006AD: cmp     dl, [ecx+1]
0x7006B0: jnz     short loc_7006C7
0x7006B2: add     eax, 2
0x7006B5: add     ecx, 2
0x7006B8: test    dl, dl
0x7006BA: jnz     short loc_7006A0
0x7006BC: xor     eax, eax
0x7006BE: test    eax, eax
0x7006C0: setz    al
0x7006C3: pop     esi
0x7006C4: retn    4
0x7006C7: sbb     eax, eax
0x7006C9: sbb     eax, 0FFFFFFFFh
0x7006CC: test    eax, eax
0x7006CE: setz    al
0x7006D1: pop     esi
0x7006D2: retn    4

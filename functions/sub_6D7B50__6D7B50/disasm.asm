0x6D7B50: push    esi
0x6D7B51: push    edi
0x6D7B52: mov     edi, [esp+8+a2]
0x6D7B56: push    edi; a2
0x6D7B57: mov     esi, ecx
0x6D7B59: call    sub_700670
0x6D7B5E: test    al, al
0x6D7B60: jz      loc_6D7C13
0x6D7B66: mov     eax, [esi+0Ch]
0x6D7B69: cmp     [edi+0Ch], eax
0x6D7B6C: jnz     loc_6D7C13
0x6D7B72: mov     ecx, [edi+10h]
0x6D7B75: cmp     ecx, [esi+10h]
0x6D7B78: jnz     loc_6D7C13
0x6D7B7E: test    eax, eax
0x6D7B80: jbe     loc_6D7C0C
0x6D7B86: cmp     eax, 4
0x6D7B89: mov     ecx, [esi+8]
0x6D7B8C: mov     edx, [edi+8]
0x6D7B8F: jb      short loc_6D7BA5
0x6D7B91: mov     esi, [edx]
0x6D7B93: cmp     esi, [ecx]
0x6D7B95: jnz     short loc_6D7BA9
0x6D7B97: sub     eax, 4
0x6D7B9A: add     ecx, 4
0x6D7B9D: add     edx, 4
0x6D7BA0: cmp     eax, 4
0x6D7BA3: jnb     short loc_6D7B91
0x6D7BA5: test    eax, eax
0x6D7BA7: jz      short loc_6D7C06
0x6D7BA9: movzx   edi, byte ptr [ecx]
0x6D7BAC: movzx   esi, byte ptr [edx]
0x6D7BAF: sub     esi, edi
0x6D7BB1: jnz     short loc_6D7BF8
0x6D7BB3: sub     eax, 1
0x6D7BB6: add     ecx, 1
0x6D7BB9: add     edx, 1
0x6D7BBC: test    eax, eax
0x6D7BBE: jz      short loc_6D7C06
0x6D7BC0: movzx   edi, byte ptr [ecx]
0x6D7BC3: movzx   esi, byte ptr [edx]
0x6D7BC6: sub     esi, edi
0x6D7BC8: jnz     short loc_6D7BF8
0x6D7BCA: sub     eax, 1
0x6D7BCD: add     ecx, 1
0x6D7BD0: add     edx, 1
0x6D7BD3: test    eax, eax
0x6D7BD5: jz      short loc_6D7C06
0x6D7BD7: movzx   edi, byte ptr [ecx]
0x6D7BDA: movzx   esi, byte ptr [edx]
0x6D7BDD: sub     esi, edi
0x6D7BDF: jnz     short loc_6D7BF8
0x6D7BE1: sub     eax, 1
0x6D7BE4: add     ecx, 1
0x6D7BE7: add     edx, 1
0x6D7BEA: test    eax, eax
0x6D7BEC: jz      short loc_6D7C06
0x6D7BEE: movzx   eax, byte ptr [ecx]
0x6D7BF1: movzx   esi, byte ptr [edx]
0x6D7BF4: sub     esi, eax
0x6D7BF6: jz      short loc_6D7C06
0x6D7BF8: test    esi, esi
0x6D7BFA: mov     eax, 1
0x6D7BFF: jg      short loc_6D7C08
0x6D7C01: or      eax, 0FFFFFFFFh
0x6D7C04: jmp     short loc_6D7C08
0x6D7C06: xor     eax, eax
0x6D7C08: test    eax, eax
0x6D7C0A: jnz     short loc_6D7C13
0x6D7C0C: pop     edi
0x6D7C0D: mov     al, 1
0x6D7C0F: pop     esi
0x6D7C10: retn    4
0x6D7C13: pop     edi
0x6D7C14: xor     al, al
0x6D7C16: pop     esi
0x6D7C17: retn    4

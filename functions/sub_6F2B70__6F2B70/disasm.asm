0x6F2B70: push    ebx
0x6F2B71: push    ebp
0x6F2B72: push    esi
0x6F2B73: mov     esi, ecx
0x6F2B75: mov     ecx, [esi+4]
0x6F2B78: test    ecx, ecx
0x6F2B7A: push    edi
0x6F2B7B: jnz     short loc_6F2B81
0x6F2B7D: xor     eax, eax
0x6F2B7F: jmp     short loc_6F2B89
0x6F2B81: mov     eax, [esi+8]
0x6F2B84: sub     eax, ecx
0x6F2B86: sar     eax, 4
0x6F2B89: mov     edi, [esp+10h+arg_0]
0x6F2B8D: cmp     eax, edi
0x6F2B8F: jnb     short loc_6F2BC5
0x6F2B91: test    ecx, ecx
0x6F2B93: jnz     short loc_6F2B99
0x6F2B95: xor     ebx, ebx
0x6F2B97: jmp     short loc_6F2BA1
0x6F2B99: mov     ebx, [esi+8]
0x6F2B9C: sub     ebx, ecx
0x6F2B9E: sar     ebx, 4
0x6F2BA1: mov     ebp, [esi+8]
0x6F2BA4: cmp     ecx, ebp
0x6F2BA6: jbe     short loc_6F2BAD
0x6F2BA8: call    __invalid_parameter_noinfo
0x6F2BAD: lea     eax, [esp+10h+arg_4]
0x6F2BB1: push    eax
0x6F2BB2: sub     edi, ebx
0x6F2BB4: push    edi
0x6F2BB5: push    ebp
0x6F2BB6: push    esi
0x6F2BB7: mov     ecx, esi
0x6F2BB9: call    sub_6F1E00
0x6F2BBE: pop     edi
0x6F2BBF: pop     esi
0x6F2BC0: pop     ebp
0x6F2BC1: pop     ebx
0x6F2BC2: retn    14h
0x6F2BC5: test    ecx, ecx
0x6F2BC7: jz      short loc_6F2C15
0x6F2BC9: mov     ebp, [esi+8]
0x6F2BCC: mov     eax, ebp
0x6F2BCE: sub     eax, ecx
0x6F2BD0: sar     eax, 4
0x6F2BD3: cmp     edi, eax
0x6F2BD5: jnb     short loc_6F2C15
0x6F2BD7: cmp     ecx, ebp
0x6F2BD9: jbe     short loc_6F2BE0
0x6F2BDB: call    __invalid_parameter_noinfo
0x6F2BE0: mov     ebx, [esi+4]
0x6F2BE3: cmp     ebx, [esi+8]
0x6F2BE6: jbe     short loc_6F2BED
0x6F2BE8: call    __invalid_parameter_noinfo
0x6F2BED: shl     edi, 4
0x6F2BF0: add     edi, ebx
0x6F2BF2: cmp     edi, [esi+8]
0x6F2BF5: mov     [esp+10h+arg_8], ebx
0x6F2BF9: ja      short loc_6F2C00
0x6F2BFB: cmp     edi, [esi+4]
0x6F2BFE: jnb     short loc_6F2C05
0x6F2C00: call    __invalid_parameter_noinfo
0x6F2C05: push    ebp
0x6F2C06: push    esi
0x6F2C07: push    edi
0x6F2C08: push    esi
0x6F2C09: lea     ecx, [esp+20h+arg_4]
0x6F2C0D: push    ecx
0x6F2C0E: mov     ecx, esi
0x6F2C10: call    sub_6F14D0
0x6F2C15: pop     edi
0x6F2C16: pop     esi
0x6F2C17: pop     ebp
0x6F2C18: pop     ebx
0x6F2C19: retn    14h

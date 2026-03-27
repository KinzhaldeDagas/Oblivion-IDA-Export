0x7A5B70: push    ecx
0x7A5B71: push    ebx
0x7A5B72: push    esi
0x7A5B73: mov     esi, ecx
0x7A5B75: mov     eax, [esi+4Ch]
0x7A5B78: push    eax
0x7A5B79: call    FormHeapFree
0x7A5B7E: xor     ebx, ebx
0x7A5B80: add     esp, 4
0x7A5B83: cmp     [esi+44h], ebx
0x7A5B86: mov     [esi+4Ch], ebx
0x7A5B89: jz      short loc_7A5BBA
0x7A5B8B: push    edi
0x7A5B8C: xor     edi, edi
0x7A5B8E: cmp     [esi+3Ch], ebx
0x7A5B91: jle     short loc_7A5BAA
0x7A5B93: mov     ecx, [esi+44h]
0x7A5B96: mov     edx, [ecx+edi*4]
0x7A5B99: push    edx
0x7A5B9A: call    FormHeapFree
0x7A5B9F: add     edi, 1
0x7A5BA2: add     esp, 4
0x7A5BA5: cmp     edi, [esi+3Ch]
0x7A5BA8: jl      short loc_7A5B93
0x7A5BAA: mov     eax, [esi+44h]
0x7A5BAD: push    eax
0x7A5BAE: call    FormHeapFree
0x7A5BB3: add     esp, 4
0x7A5BB6: mov     [esi+44h], ebx
0x7A5BB9: pop     edi
0x7A5BBA: mov     ecx, [esi+48h]
0x7A5BBD: push    ecx
0x7A5BBE: call    FormHeapFree
0x7A5BC3: mov     [esi+48h], ebx
0x7A5BC6: mov     eax, [esi+14h]
0x7A5BC9: add     esi, 10h
0x7A5BCC: add     esp, 4
0x7A5BCF: cmp     eax, ebx
0x7A5BD1: jz      short loc_7A5BEF
0x7A5BD3: mov     edx, [esp+0Ch+var_4]
0x7A5BD7: mov     ecx, [esi+8]
0x7A5BDA: push    edx
0x7A5BDB: push    esi
0x7A5BDC: push    ecx
0x7A5BDD: push    eax
0x7A5BDE: call    sub_7A36B0
0x7A5BE3: mov     edx, [esi+4]
0x7A5BE6: push    edx
0x7A5BE7: call    FormHeapFree
0x7A5BEC: add     esp, 14h
0x7A5BEF: mov     [esi+4], ebx
0x7A5BF2: mov     [esi+8], ebx
0x7A5BF5: mov     [esi+0Ch], ebx
0x7A5BF8: pop     esi
0x7A5BF9: pop     ebx
0x7A5BFA: pop     ecx
0x7A5BFB: retn

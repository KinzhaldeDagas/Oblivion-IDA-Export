0x75C7A0: push    esi
0x75C7A1: push    edi
0x75C7A2: push    68h ; 'h'; Size
0x75C7A4: mov     edi, ecx
0x75C7A6: call    FormHeapAlloc
0x75C7AB: add     esp, 4
0x75C7AE: test    eax, eax
0x75C7B0: jz      short loc_75C7BD
0x75C7B2: mov     ecx, eax
0x75C7B4: call    sub_75C250
0x75C7B9: mov     esi, eax
0x75C7BB: jmp     short loc_75C7BF
0x75C7BD: xor     esi, esi
0x75C7BF: mov     eax, [esp+8+arg_0]
0x75C7C3: push    eax
0x75C7C4: push    esi
0x75C7C5: mov     ecx, edi
0x75C7C7: call    sub_75E830
0x75C7CC: add     edi, 40h ; '@'
0x75C7CF: push    edi
0x75C7D0: mov     ecx, esi
0x75C7D2: call    sub_75C1C0
0x75C7D7: pop     edi
0x75C7D8: mov     eax, esi
0x75C7DA: pop     esi
0x75C7DB: retn    4

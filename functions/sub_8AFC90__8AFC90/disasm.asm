0x8AFC90: push    esi
0x8AFC91: push    edi
0x8AFC92: mov     edi, [esp+8+arg_0]
0x8AFC96: push    edi
0x8AFC97: call    sub_8AFBE0
0x8AFC9C: mov     esi, eax
0x8AFC9E: add     esp, 4
0x8AFCA1: xor     eax, eax
0x8AFCA3: test    esi, esi
0x8AFCA5: jz      short loc_8AFCD1
0x8AFCA7: mov     edi, [edi+4]
0x8AFCAA: mov     eax, [esi]
0x8AFCAC: mov     edx, [eax+9Ch]
0x8AFCB2: push    edi
0x8AFCB3: mov     ecx, esi
0x8AFCB5: call    edx
0x8AFCB7: cmp     eax, 1Eh
0x8AFCBA: jge     short loc_8AFCCC
0x8AFCBC: mov     eax, [esi]
0x8AFCBE: mov     edx, [eax+9Ch]
0x8AFCC4: push    edi
0x8AFCC5: mov     ecx, esi
0x8AFCC7: call    edx
0x8AFCC9: pop     edi
0x8AFCCA: pop     esi
0x8AFCCB: retn
0x8AFCCC: mov     eax, 1Eh
0x8AFCD1: pop     edi
0x8AFCD2: pop     esi
0x8AFCD3: retn

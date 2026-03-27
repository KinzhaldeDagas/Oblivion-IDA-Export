0x585A70: push    esi
0x585A71: mov     esi, ecx
0x585A73: mov     eax, [esi]
0x585A75: mov     edx, [eax+4]
0x585A78: push    edi
0x585A79: call    edx
0x585A7B: mov     edi, eax
0x585A7D: mov     eax, [esp+8+arg_0]
0x585A81: mov     ecx, [eax]
0x585A83: push    0; a3
0x585A85: push    ecx; a2
0x585A86: lea     ecx, [edi+8]; this
0x585A89: call    BSStringT_Set
0x585A8E: mov     dword ptr [edi+4], 0
0x585A95: mov     edx, [esi+4]
0x585A98: mov     [edi], edx
0x585A9A: mov     eax, [esi+4]
0x585A9D: test    eax, eax
0x585A9F: jz      short loc_585AB0
0x585AA1: mov     [eax+4], edi
0x585AA4: add     dword ptr [esi+0Ch], 1
0x585AA8: mov     [esi+4], edi
0x585AAB: pop     edi
0x585AAC: pop     esi
0x585AAD: retn    4
0x585AB0: add     dword ptr [esi+0Ch], 1
0x585AB4: mov     [esi+8], edi
0x585AB7: mov     [esi+4], edi
0x585ABA: pop     edi
0x585ABB: pop     esi
0x585ABC: retn    4

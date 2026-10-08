0x5F1970: push    ecx
0x5F1971: push    ebp
0x5F1972: push    esi
0x5F1973: mov     esi, ecx
0x5F1975: mov     ebp, [esi+58h]
0x5F1978: test    ebp, ebp
0x5F197A: jz      loc_5F1A42
0x5F1980: cmp     [esp+0Ch+arg_0], 9
0x5F1985: mov     eax, [esi]
0x5F1987: push    ebx
0x5F1988: push    edi
0x5F1989: jnz     short loc_5F1A04
0x5F1A04: mov     edx, [eax+170h]
0x5F1A0A: xor     edi, edi
0x5F1A0C: call    edx
0x5F1A0E: mov     ebx, eax
0x5F1A10: test    ebx, ebx
0x5F1A12: jz      short loc_5F1A26
0x5F1A14: mov     eax, [esi]
0x5F1A16: mov     edx, [eax+190h]
0x5F1A1C: mov     ecx, esi
0x5F1A1E: call    edx
0x5F1A20: test    al, al
0x5F1A22: jz      short loc_5F1A26
0x5F1A24: mov     edi, ebx
0x5F1A26: mov     ecx, [esp+0Ch+arg_8]
0x5F1A2A: mov     eax, [ebp+0]
0x5F1A2D: mov     edx, [eax+268h]
0x5F1A33: push    esi
0x5F1A34: push    ecx
0x5F1A35: push    edi
0x5F1A36: mov     ecx, ebp
0x5F1A38: call    edx
0x5F1A3A: pop     edi
0x5F1A3B: pop     ebx
0x5F1A3C: pop     esi
0x5F1A3D: pop     ebp
0x5F1A3E: pop     ecx
0x5F1A3F: retn    4
0x5F1A42: mov     eax, [esp+0Ch+arg_0]
0x5F1A46: push    eax
0x5F1A47: call    Actor_GetBaseCalcAVi
0x5F1A4C: pop     esi
0x5F1A4D: pop     ebp
0x5F1A4E: pop     ecx
0x5F1A4F: retn    4

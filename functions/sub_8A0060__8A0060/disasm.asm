0x8A0060: push    esi
0x8A0061: push    edi
0x8A0062: mov     edi, ecx
0x8A0064: test    edi, edi
0x8A0066: jz      short loc_8A0074
0x8A0068: mov     eax, [edi+8]
0x8A006B: test    eax, eax
0x8A006D: jz      short loc_8A0074
0x8A006F: mov     eax, [eax+1Ch]
0x8A0072: jmp     short loc_8A0076
0x8A0074: xor     eax, eax
0x8A0076: test    eax, eax
0x8A0078: jz      short loc_8A007F
0x8A007A: mov     ecx, [eax+0Ch]
0x8A007D: jmp     short loc_8A0081
0x8A007F: xor     ecx, ecx
0x8A0081: test    ecx, ecx
0x8A0083: mov     esi, [esp+8+arg_0]
0x8A0087: jz      short loc_8A0091
0x8A0089: mov     eax, [ecx]
0x8A008B: mov     edx, [eax+24h]
0x8A008E: push    esi
0x8A008F: call    edx
0x8A0091: push    esi
0x8A0092: mov     ecx, edi
0x8A0094: call    sub_6E7270
0x8A0099: pop     edi
0x8A009A: pop     esi
0x8A009B: retn    4

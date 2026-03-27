0x6606A0: push    ebx
0x6606A1: push    esi
0x6606A2: mov     esi, [ecx+5ACh]
0x6606A8: xor     bl, bl
0x6606AA: test    esi, esi
0x6606AC: jz      short loc_6606E0
0x6606AE: mov     edi, edi
0x6606B0: mov     ecx, [esi]
0x6606B2: test    ecx, ecx
0x6606B4: jz      short loc_6606E0
0x6606B6: test    bl, bl
0x6606B8: jnz     short loc_6606E0
0x6606BA: mov     eax, [ecx]
0x6606BC: mov     edx, [eax+190h]
0x6606C2: call    edx
0x6606C4: test    al, al
0x6606C6: jz      short loc_6606D9
0x6606C8: mov     ecx, [esi]; this
0x6606CA: test    ecx, ecx
0x6606CC: jz      short loc_6606D9
0x6606CE: call    sub_5E6C60
0x6606D3: test    al, al
0x6606D5: jz      short loc_6606D9
0x6606D7: mov     bl, 1
0x6606D9: mov     esi, [esi+4]
0x6606DC: test    esi, esi
0x6606DE: jnz     short loc_6606B0
0x6606E0: pop     esi
0x6606E1: mov     al, bl
0x6606E3: pop     ebx
0x6606E4: retn

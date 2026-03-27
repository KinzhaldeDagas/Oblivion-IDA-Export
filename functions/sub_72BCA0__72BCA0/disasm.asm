0x72BCA0: push    ebx
0x72BCA1: push    ebp
0x72BCA2: mov     ebp, [esp+8+arg_0]
0x72BCA6: mov     ebx, ecx
0x72BCA8: mov     ecx, [ebx+10h]
0x72BCAB: lea     eax, [esp+8+arg_0]
0x72BCAF: push    eax
0x72BCB0: push    ecx
0x72BCB1: mov     ecx, [ebp+0]
0x72BCB4: call    NiTMap_GetAt
0x72BCB9: test    al, al
0x72BCBB: jz      short loc_72BCC4
0x72BCBD: pop     ebp
0x72BCBE: mov     al, 1
0x72BCC0: pop     ebx
0x72BCC1: retn    4
0x72BCC4: mov     edx, [ebx+8]
0x72BCC7: push    esi
0x72BCC8: push    edi
0x72BCC9: mov     edi, [edx+40h]
0x72BCCC: xor     esi, esi
0x72BCCE: test    edi, edi
0x72BCD0: jbe     short loc_72BCF1
0x72BCD2: mov     ecx, [ebx+14h]
0x72BCD5: mov     edx, [ecx+esi*4]
0x72BCD8: mov     ecx, [ebp+0]
0x72BCDB: lea     eax, [esp+10h+arg_0]
0x72BCDF: push    eax
0x72BCE0: push    edx
0x72BCE1: call    NiTMap_GetAt
0x72BCE6: test    al, al
0x72BCE8: jnz     short loc_72BCFA
0x72BCEA: add     esi, 1
0x72BCED: cmp     esi, edi
0x72BCEF: jb      short loc_72BCD2
0x72BCF1: pop     edi
0x72BCF2: pop     esi
0x72BCF3: pop     ebp
0x72BCF4: xor     al, al
0x72BCF6: pop     ebx
0x72BCF7: retn    4
0x72BCFA: pop     edi
0x72BCFB: pop     esi
0x72BCFC: pop     ebp
0x72BCFD: mov     al, 1
0x72BCFF: pop     ebx
0x72BD00: retn    4

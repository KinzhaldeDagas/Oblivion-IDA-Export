0x42BC50: push    esi
0x42BC51: mov     esi, ecx
0x42BC53: mov     al, [esi+3]
0x42BC56: mov     cl, al
0x42BC58: and     cl, 7Fh
0x42BC5B: cmp     cl, 2Ah ; '*'
0x42BC5E: push    edi
0x42BC5F: mov     edi, [esp+8+arg_0]
0x42BC63: jnz     short loc_42BCA9
0x42BC65: movzx   ecx, byte ptr [edi]
0x42BC68: mov     dl, [edi+3]
0x42BC6B: shr     cl, 6
0x42BC6E: and     cl, 2
0x42BC71: shr     dl, 5
0x42BC74: and     dl, 4
0x42BC77: add     dl, cl
0x42BC79: movzx   ecx, byte ptr [edi+1]
0x42BC7D: shr     cl, 7
0x42BC80: add     dl, cl
0x42BC82: movzx   ecx, byte ptr [esi]
0x42BC85: shr     cl, 6
0x42BC88: shr     al, 5
0x42BC8B: and     cl, 2
0x42BC8E: and     al, 4
0x42BC90: add     al, cl
0x42BC92: movzx   ecx, byte ptr [esi+1]
0x42BC96: shr     cl, 7
0x42BC99: add     al, cl
0x42BC9B: xor     ecx, ecx
0x42BC9D: cmp     al, dl
0x42BC9F: setnz   cl
0x42BCA2: pop     edi
0x42BCA3: pop     esi
0x42BCA4: mov     eax, ecx
0x42BCA6: retn    4
0x42BCA9: mov     ecx, [edi+4]
0x42BCAC: mov     edx, [esi+4]
0x42BCAF: cmp     edx, ecx
0x42BCB1: jnb     short loc_42BCBB
0x42BCB3: pop     edi
0x42BCB4: or      eax, 0FFFFFFFFh
0x42BCB7: pop     esi
0x42BCB8: retn    4
0x42BCBB: jbe     short loc_42BCC7
0x42BCBD: pop     edi
0x42BCBE: mov     eax, 1
0x42BCC3: pop     esi
0x42BCC4: retn    4
0x42BCC7: mov     dl, [esi+2]
0x42BCCA: cmp     dl, [edi+2]
0x42BCCD: jnz     short loc_42BCBD
0x42BCCF: movzx   edx, byte ptr [edi]
0x42BCD2: mov     cl, [edi+3]
0x42BCD5: shr     dl, 6
0x42BCD8: and     dl, 2
0x42BCDB: shr     cl, 5
0x42BCDE: and     cl, 4
0x42BCE1: add     cl, dl
0x42BCE3: movzx   edx, byte ptr [edi+1]
0x42BCE7: shr     dl, 7
0x42BCEA: add     cl, dl
0x42BCEC: movzx   edx, byte ptr [esi]
0x42BCEF: shr     dl, 6
0x42BCF2: shr     al, 5
0x42BCF5: and     dl, 2
0x42BCF8: and     al, 4
0x42BCFA: add     al, dl
0x42BCFC: movzx   edx, byte ptr [esi+1]
0x42BD00: shr     dl, 7
0x42BD03: add     al, dl
0x42BD05: xor     edx, edx
0x42BD07: cmp     al, cl
0x42BD09: setnz   dl
0x42BD0C: pop     edi
0x42BD0D: pop     esi
0x42BD0E: mov     eax, edx
0x42BD10: retn    4

0x569940: push    esi
0x569941: push    edi
0x569942: mov     edi, [esp+8+arg_0]
0x569946: test    edi, edi
0x569948: mov     esi, ecx
0x56994A: jnz     short loc_569953
0x56994C: pop     edi
0x56994D: mov     al, 1
0x56994F: pop     esi
0x569950: retn    4
0x569953: mov     cl, [esi]
0x569955: push    ebx
0x569956: mov     bl, [edi]
0x569958: cmp     cl, bl
0x56995A: jnz     short loc_5699D4
0x56995C: cmp     cl, 0FFh
0x56995F: jz      short loc_56996B
0x569961: cmp     cl, 1
0x569964: jz      short loc_56996B
0x569966: mov     edx, [esi+4]
0x569969: jmp     short loc_56996D
0x56996B: xor     edx, edx
0x56996D: cmp     bl, 0FFh
0x569970: jz      short loc_56997C
0x569972: cmp     bl, 1
0x569975: jz      short loc_56997C
0x569977: mov     eax, [edi+4]
0x56997A: jmp     short loc_56997E
0x56997C: xor     eax, eax
0x56997E: cmp     edx, eax
0x569980: jnz     short loc_5699D4
0x569982: test    cl, cl
0x569984: jnz     short loc_56998B
0x569986: mov     edx, [esi+8]
0x569989: jmp     short loc_56998D
0x56998B: xor     edx, edx
0x56998D: test    bl, bl
0x56998F: jnz     short loc_569996
0x569991: mov     eax, [edi+8]
0x569994: jmp     short loc_569998
0x569996: xor     eax, eax
0x569998: cmp     edx, eax
0x56999A: jnz     short loc_5699D4
0x56999C: cmp     cl, 1
0x56999F: jnz     short loc_5699A6
0x5699A1: mov     edx, [esi+8]
0x5699A4: jmp     short loc_5699A8
0x5699A6: xor     edx, edx
0x5699A8: cmp     bl, 1
0x5699AB: jnz     short loc_5699B2
0x5699AD: mov     eax, [edi+8]
0x5699B0: jmp     short loc_5699B4
0x5699B2: xor     eax, eax
0x5699B4: cmp     edx, eax
0x5699B6: jnz     short loc_5699D4
0x5699B8: cmp     cl, 4
0x5699BB: jnz     short loc_5699C2
0x5699BD: mov     edx, [esi+8]
0x5699C0: jmp     short loc_5699C4
0x5699C2: xor     edx, edx
0x5699C4: cmp     bl, 4
0x5699C7: jnz     short loc_5699CE
0x5699C9: mov     eax, [edi+8]
0x5699CC: jmp     short loc_5699D0
0x5699CE: xor     eax, eax
0x5699D0: cmp     edx, eax
0x5699D2: jz      short loc_5699DC
0x5699D4: pop     ebx
0x5699D5: pop     edi
0x5699D6: mov     al, 1
0x5699D8: pop     esi
0x5699D9: retn    4
0x5699DC: cmp     cl, 5
0x5699DF: jnz     short loc_5699E6
0x5699E1: mov     ecx, [esi+8]
0x5699E4: jmp     short loc_5699E8
0x5699E6: xor     ecx, ecx
0x5699E8: cmp     bl, 5
0x5699EB: jnz     short loc_5699FB
0x5699ED: mov     eax, [edi+8]
0x5699F0: pop     ebx
0x5699F1: cmp     ecx, eax
0x5699F3: pop     edi
0x5699F4: setnz   al
0x5699F7: pop     esi
0x5699F8: retn    4
0x5699FB: xor     eax, eax
0x5699FD: pop     ebx
0x5699FE: cmp     ecx, eax
0x569A00: pop     edi
0x569A01: setnz   al
0x569A04: pop     esi
0x569A05: retn    4

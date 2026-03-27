0x976980: mov     edx, [esp+arg_0]
0x976984: cmp     ecx, edx
0x976986: jnz     short loc_97698D
0x976988: xor     al, al
0x97698A: retn    14h
0x97698D: mov     eax, [ecx+8]
0x976990: mov     ecx, [ecx+50h]
0x976993: push    esi
0x976994: mov     esi, [edx+50h]
0x976997: mov     edx, [edx+8]
0x97699A: push    edi
0x97699B: mov     edi, [eax]
0x97699D: push    esi
0x97699E: push    ecx
0x97699F: mov     ecx, [esp+10h+arg_10]
0x9769A3: push    ecx
0x9769A4: mov     ecx, [esp+14h+arg_C]
0x9769A8: push    ecx
0x9769A9: mov     ecx, [esp+18h+arg_8]
0x9769AD: push    ecx
0x9769AE: mov     ecx, [esp+1Ch+arg_4]
0x9769B2: push    ecx
0x9769B3: mov     ecx, eax
0x9769B5: mov     eax, [edi+8]
0x9769B8: push    edx
0x9769B9: call    eax
0x9769BB: pop     edi
0x9769BC: pop     esi
0x9769BD: retn    14h

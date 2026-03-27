0x749470: push    esi
0x749471: push    edi
0x749472: mov     edi, ecx
0x749474: mov     esi, [edi+0B4h]
0x74947A: mov     eax, [esi]
0x74947C: mov     edx, [eax+4Ch]
0x74947F: push    0
0x749481: mov     ecx, esi
0x749483: call    edx
0x749485: mov     word ptr [esi+64h], 0
0x74948B: mov     word ptr [esi+66h], 0
0x749491: fld     dword ptr ds:0A7DEB4h
0x749497: mov     esi, [edi+0C8h]
0x74949D: fchs
0x74949F: test    esi, esi
0x7494A1: fstp    dword ptr [edi+0E8h]
0x7494A7: jz      short loc_7494C3
0x7494A9: lea     esp, [esp+0]
0x7494B0: mov     ecx, [esi+8]
0x7494B3: lea     eax, [esi+8]
0x7494B6: mov     eax, [ecx]
0x7494B8: mov     edx, [eax+54h]
0x7494BB: mov     esi, [esi]
0x7494BD: call    edx
0x7494BF: test    esi, esi
0x7494C1: jnz     short loc_7494B0
0x7494C3: mov     esi, [edi+0Ch]
0x7494C6: test    esi, esi
0x7494C8: jz      short loc_749502
0x7494CA: mov     eax, [esi]
0x7494CC: mov     edx, [eax+4]
0x7494CF: mov     ecx, esi
0x7494D1: call    edx
0x7494D3: test    eax, eax
0x7494D5: jz      short loc_7494E5
0x7494D7: cmp     eax, offset dword_B41E14
0x7494DC: jz      short loc_749505
0x7494DE: mov     eax, [eax+4]
0x7494E1: test    eax, eax
0x7494E3: jnz     short loc_7494D7
0x7494E5: xor     al, al
0x7494E7: neg     al
0x7494E9: sbb     eax, eax
0x7494EB: and     eax, esi
0x7494ED: jz      short loc_7494FB
0x7494EF: mov     edx, [eax]
0x7494F1: mov     ecx, eax
0x7494F3: mov     eax, [edx+0A8h]
0x7494F9: call    eax
0x7494FB: mov     esi, [esi+34h]
0x7494FE: test    esi, esi
0x749500: jnz     short loc_7494CA
0x749502: pop     edi
0x749503: pop     esi
0x749504: retn
0x749505: mov     al, 1
0x749507: jmp     short loc_7494E7

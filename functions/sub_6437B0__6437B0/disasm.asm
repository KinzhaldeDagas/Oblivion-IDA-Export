0x6437B0: push    esi
0x6437B1: push    edi
0x6437B2: mov     edi, [esp+8+arg_0]
0x6437B6: mov     eax, [edi]
0x6437B8: mov     edx, [eax+380h]
0x6437BE: mov     esi, ecx
0x6437C0: mov     ecx, edi
0x6437C2: call    edx
0x6437C4: test    eax, eax
0x6437C6: jnz     short loc_6437CF
0x6437C8: pop     edi
0x6437C9: xor     al, al
0x6437CB: pop     esi
0x6437CC: retn    4
0x6437CF: mov     eax, [esi]
0x6437D1: mov     edx, [eax+188h]
0x6437D7: push    1
0x6437D9: push    edi
0x6437DA: mov     ecx, esi
0x6437DC: call    edx
0x6437DE: pop     edi
0x6437DF: mov     al, 1
0x6437E1: pop     esi
0x6437E2: retn    4

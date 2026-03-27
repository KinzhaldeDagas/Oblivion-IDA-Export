0x6CE3A0: push    esi
0x6CE3A1: push    edi
0x6CE3A2: mov     edi, [esp+8+arg_0]
0x6CE3A6: push    edi
0x6CE3A7: mov     esi, ecx
0x6CE3A9: call    sub_6D0540
0x6CE3AE: test    al, al
0x6CE3B0: jnz     short loc_6CE3B9
0x6CE3B2: pop     edi
0x6CE3B3: xor     al, al
0x6CE3B5: pop     esi
0x6CE3B6: retn    4
0x6CE3B9: mov     ecx, [esi+3Ch]
0x6CE3BC: test    ecx, ecx
0x6CE3BE: jz      short loc_6CE3CA
0x6CE3C0: cmp     dword ptr [edi+3Ch], 0
0x6CE3C4: jz      short loc_6CE3B2
0x6CE3C6: test    ecx, ecx
0x6CE3C8: jnz     short loc_6CE3D4
0x6CE3CA: cmp     dword ptr [edi+3Ch], 0
0x6CE3CE: jnz     short loc_6CE3B2
0x6CE3D0: test    ecx, ecx
0x6CE3D2: jz      short loc_6CE3E3
0x6CE3D4: mov     eax, [edi+3Ch]
0x6CE3D7: mov     edx, [ecx]
0x6CE3D9: push    eax
0x6CE3DA: mov     eax, [edx+2Ch]
0x6CE3DD: call    eax
0x6CE3DF: test    al, al
0x6CE3E1: jz      short loc_6CE3B2
0x6CE3E3: pop     edi
0x6CE3E4: mov     al, 1
0x6CE3E6: pop     esi
0x6CE3E7: retn    4

0x6DA8A0: push    esi
0x6DA8A1: push    edi
0x6DA8A2: mov     edi, [esp+8+arg_0]
0x6DA8A6: push    edi
0x6DA8A7: mov     esi, ecx
0x6DA8A9: call    sub_6EC2E0
0x6DA8AE: test    al, al
0x6DA8B0: jnz     short loc_6DA8B9
0x6DA8B2: pop     edi
0x6DA8B3: xor     al, al
0x6DA8B5: pop     esi
0x6DA8B6: retn    4
0x6DA8B9: lea     eax, [edi+0Ch]
0x6DA8BC: push    eax
0x6DA8BD: lea     ecx, [esi+0Ch]
0x6DA8C0: call    sub_8AA390
0x6DA8C5: test    al, al
0x6DA8C7: jnz     short loc_6DA8B2
0x6DA8C9: mov     ecx, [esi+18h]
0x6DA8CC: test    ecx, ecx
0x6DA8CE: jz      short loc_6DA8DA
0x6DA8D0: cmp     dword ptr [edi+18h], 0
0x6DA8D4: jz      short loc_6DA8B2
0x6DA8D6: test    ecx, ecx
0x6DA8D8: jnz     short loc_6DA8E4
0x6DA8DA: cmp     dword ptr [edi+18h], 0
0x6DA8DE: jnz     short loc_6DA8B2
0x6DA8E0: test    ecx, ecx
0x6DA8E2: jz      short loc_6DA8F3
0x6DA8E4: mov     edi, [edi+18h]
0x6DA8E7: mov     edx, [ecx]
0x6DA8E9: mov     eax, [edx+2Ch]
0x6DA8EC: push    edi
0x6DA8ED: call    eax
0x6DA8EF: test    al, al
0x6DA8F1: jz      short loc_6DA8B2
0x6DA8F3: pop     edi
0x6DA8F4: mov     al, 1
0x6DA8F6: pop     esi
0x6DA8F7: retn    4

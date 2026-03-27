0x6DD980: push    ebx
0x6DD981: mov     ebx, [esp+4+arg_0]
0x6DD985: push    ebp
0x6DD986: push    esi
0x6DD987: push    edi
0x6DD988: push    ebx
0x6DD989: mov     esi, ecx
0x6DD98B: call    sub_715E70
0x6DD990: mov     ecx, ebx
0x6DD992: call    sub_7124A0
0x6DD997: mov     edi, [esi+48h]
0x6DD99A: mov     ebp, eax
0x6DD99C: cmp     edi, ebp
0x6DD99E: jz      short loc_6DD9D1
0x6DD9A0: test    edi, edi
0x6DD9A2: jz      short loc_6DD9C0
0x6DD9A4: lea     eax, [edi+4]
0x6DD9A7: push    eax; lpAddend
0x6DD9A8: call    dword ptr ds:0A2807Ch
0x6DD9AE: test    eax, eax
0x6DD9B0: jnz     short loc_6DD9C0
0x6DD9B2: test    edi, edi
0x6DD9B4: jz      short loc_6DD9C0
0x6DD9B6: mov     edx, [edi]
0x6DD9B8: mov     eax, [edx]
0x6DD9BA: push    1
0x6DD9BC: mov     ecx, edi
0x6DD9BE: call    eax
0x6DD9C0: test    ebp, ebp
0x6DD9C2: mov     [esi+48h], ebp
0x6DD9C5: jz      short loc_6DD9D1
0x6DD9C7: add     ebp, 4
0x6DD9CA: push    ebp; lpAddend
0x6DD9CB: call    dword ptr ds:0A28078h
0x6DD9D1: mov     ecx, ebx
0x6DD9D3: call    sub_7124A0
0x6DD9D8: mov     edi, [esi+4Ch]
0x6DD9DB: mov     ebx, eax
0x6DD9DD: cmp     edi, ebx
0x6DD9DF: jz      short loc_6DDA12
0x6DD9E1: test    edi, edi
0x6DD9E3: jz      short loc_6DDA01
0x6DD9E5: lea     ecx, [edi+4]
0x6DD9E8: push    ecx; lpAddend
0x6DD9E9: call    dword ptr ds:0A2807Ch
0x6DD9EF: test    eax, eax
0x6DD9F1: jnz     short loc_6DDA01
0x6DD9F3: test    edi, edi
0x6DD9F5: jz      short loc_6DDA01
0x6DD9F7: mov     edx, [edi]
0x6DD9F9: mov     eax, [edx]
0x6DD9FB: push    1
0x6DD9FD: mov     ecx, edi
0x6DD9FF: call    eax
0x6DDA01: test    ebx, ebx
0x6DDA03: mov     [esi+4Ch], ebx
0x6DDA06: jz      short loc_6DDA12
0x6DDA08: add     ebx, 4
0x6DDA0B: push    ebx; lpAddend
0x6DDA0C: call    dword ptr ds:0A28078h
0x6DDA12: or      word ptr [esi+3Ch], 1
0x6DDA17: movzx   eax, word ptr [esi+3Ch]
0x6DDA1B: shr     al, 4
0x6DDA1E: test    al, 1
0x6DDA20: jz      short loc_6DDA38
0x6DDA22: test    byte ptr [esi+3Ch], 1
0x6DDA26: jz      short loc_6DDA38
0x6DDA28: mov     ecx, esi
0x6DDA2A: call    sub_6DD490
0x6DDA2F: fstp    dword ptr [esi+54h]
0x6DDA32: and     word ptr [esi+3Ch], 0FFFEh
0x6DDA38: mov     eax, [esi+48h]
0x6DDA3B: test    eax, eax
0x6DDA3D: jz      short loc_6DDA63
0x6DDA3F: mov     ecx, [eax+8]
0x6DDA42: test    ecx, ecx
0x6DDA44: mov     edx, [eax+10h]
0x6DDA47: mov     eax, [eax+0Ch]
0x6DDA4A: jbe     short loc_6DDA63
0x6DDA4C: mov     edx, ds:0B3D130h[edx*4]
0x6DDA53: push    ecx
0x6DDA54: mov     [esp+14h+arg_0], edx
0x6DDA58: push    eax
0x6DDA59: call    [esp+18h+arg_0]
0x6DDA5D: fstp    dword ptr [esi+64h]
0x6DDA60: add     esp, 8
0x6DDA63: pop     edi
0x6DDA64: pop     esi
0x6DDA65: pop     ebp
0x6DDA66: pop     ebx
0x6DDA67: retn    4

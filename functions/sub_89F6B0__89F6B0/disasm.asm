0x89F6B0: sub     esp, 8
0x89F6B3: push    ebx
0x89F6B4: push    esi
0x89F6B5: push    edi
0x89F6B6: mov     edi, [esp+14h+arg_0]
0x89F6BA: xor     ebx, ebx
0x89F6BC: test    edi, edi
0x89F6BE: mov     esi, ecx
0x89F6C0: jnz     short loc_89F6C7
0x89F6C2: mov     edi, offset dword_B3FA80
0x89F6C7: push    edi
0x89F6C8: call    sub_890A10
0x89F6CD: test    al, al
0x89F6CF: jz      short loc_89F719
0x89F6D1: test    esi, esi
0x89F6D3: jz      short loc_89F700
0x89F6D5: mov     ecx, [esi+8]
0x89F6D8: test    ecx, ecx
0x89F6DA: jz      short loc_89F700
0x89F6DC: push    edi
0x89F6DD: lea     eax, [esp+18h+var_8]
0x89F6E1: push    eax
0x89F6E2: call    sub_47F990
0x89F6E7: mov     eax, [eax]
0x89F6E9: push    eax
0x89F6EA: push    offset dword_B3FA80
0x89F6EF: call    NiRTTI_Cast
0x89F6F4: add     esp, 8
0x89F6F7: pop     edi
0x89F6F8: pop     esi
0x89F6F9: pop     ebx
0x89F6FA: add     esp, 8
0x89F6FD: retn    4
0x89F700: xor     eax, eax
0x89F702: push    eax
0x89F703: push    offset dword_B3FA80
0x89F708: call    NiRTTI_Cast
0x89F70D: add     esp, 8
0x89F710: pop     edi
0x89F711: pop     esi
0x89F712: pop     ebx
0x89F713: add     esp, 8
0x89F716: retn    4
0x89F719: pop     edi
0x89F71A: pop     esi
0x89F71B: mov     eax, ebx
0x89F71D: pop     ebx
0x89F71E: add     esp, 8
0x89F721: retn    4

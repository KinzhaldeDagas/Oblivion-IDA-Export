0x8A50E0: push    esi
0x8A50E1: mov     esi, [esp+4+arg_0]
0x8A50E5: push    edi
0x8A50E6: push    esi
0x8A50E7: mov     edi, ecx
0x8A50E9: call    sub_89F350
0x8A50EE: mov     ecx, esi
0x8A50F0: call    sub_7124D0
0x8A50F5: test    eax, eax
0x8A50F7: jbe     short loc_8A5119
0x8A50F9: push    ebx
0x8A50FA: mov     ebx, eax
0x8A50FC: lea     esp, [esp+0]
0x8A5100: mov     ecx, esi
0x8A5102: call    sub_7124A0
0x8A5107: test    eax, eax
0x8A5109: jz      short loc_8A5113
0x8A510B: push    eax
0x8A510C: mov     ecx, edi
0x8A510E: call    sub_8A46C0
0x8A5113: sub     ebx, 1
0x8A5116: jnz     short loc_8A5100
0x8A5118: pop     ebx
0x8A5119: pop     edi
0x8A511A: pop     esi
0x8A511B: retn    4

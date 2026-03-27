0x8DA150: push    edi
0x8DA151: mov     edi, [esp+4+arg_0]
0x8DA155: test    edi, edi
0x8DA157: jz      short loc_8DA18E
0x8DA159: cmp     word ptr [edi+4], 0
0x8DA15E: jz      short loc_8DA164
0x8DA160: inc     word ptr [edi+6]
0x8DA164: mov     eax, [ecx+28h]
0x8DA167: push    esi
0x8DA168: lea     esi, [ecx+20h]
0x8DA16B: mov     ecx, [esi+4]
0x8DA16E: and     eax, 3FFFFFFFh
0x8DA173: cmp     ecx, eax
0x8DA175: jnz     short loc_8DA182
0x8DA177: push    4
0x8DA179: push    esi
0x8DA17A: call    sub_8A6EE0
0x8DA17F: add     esp, 8
0x8DA182: mov     ecx, [esi+4]
0x8DA185: mov     edx, [esi]
0x8DA187: mov     [edx+ecx*4], edi
0x8DA18A: inc     dword ptr [esi+4]
0x8DA18D: pop     esi
0x8DA18E: pop     edi
0x8DA18F: retn    4

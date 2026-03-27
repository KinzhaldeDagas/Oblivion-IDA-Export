0x8DA0C0: push    esi
0x8DA0C1: push    edi
0x8DA0C2: mov     edi, [esp+8+arg_0]
0x8DA0C6: test    edi, edi
0x8DA0C8: mov     esi, ecx
0x8DA0CA: jz      short loc_8DA0FB
0x8DA0CC: mov     ecx, edi
0x8DA0CE: call    sub_8BC720
0x8DA0D3: mov     eax, [esi+34h]
0x8DA0D6: mov     ecx, [esi+30h]
0x8DA0D9: add     esi, 2Ch ; ','
0x8DA0DC: and     eax, 3FFFFFFFh
0x8DA0E1: cmp     ecx, eax
0x8DA0E3: jnz     short loc_8DA0F0
0x8DA0E5: push    4
0x8DA0E7: push    esi
0x8DA0E8: call    sub_8A6EE0
0x8DA0ED: add     esp, 8
0x8DA0F0: mov     ecx, [esi+4]
0x8DA0F3: mov     edx, [esi]
0x8DA0F5: mov     [edx+ecx*4], edi
0x8DA0F8: inc     dword ptr [esi+4]
0x8DA0FB: pop     edi
0x8DA0FC: pop     esi
0x8DA0FD: retn    4

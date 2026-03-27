0x8DA100: push    edi
0x8DA101: mov     edi, [esp+4+arg_0]
0x8DA105: test    edi, edi
0x8DA107: jz      short loc_8DA13E
0x8DA109: cmp     word ptr [edi+4], 0
0x8DA10E: jz      short loc_8DA114
0x8DA110: inc     word ptr [edi+6]
0x8DA114: mov     eax, [ecx+1Ch]
0x8DA117: push    esi
0x8DA118: lea     esi, [ecx+14h]
0x8DA11B: mov     ecx, [esi+4]
0x8DA11E: and     eax, 3FFFFFFFh
0x8DA123: cmp     ecx, eax
0x8DA125: jnz     short loc_8DA132
0x8DA127: push    4
0x8DA129: push    esi
0x8DA12A: call    sub_8A6EE0
0x8DA12F: add     esp, 8
0x8DA132: mov     ecx, [esi+4]
0x8DA135: mov     edx, [esi]
0x8DA137: mov     [edx+ecx*4], edi
0x8DA13A: inc     dword ptr [esi+4]
0x8DA13D: pop     esi
0x8DA13E: pop     edi
0x8DA13F: retn    4

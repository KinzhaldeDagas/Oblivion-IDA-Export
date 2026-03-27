0x8C57A0: test    ecx, ecx
0x8C57A2: jz      short loc_8C57A9
0x8C57A4: mov     edx, [ecx+8]
0x8C57A7: jmp     short loc_8C57AB
0x8C57A9: xor     edx, edx
0x8C57AB: push    esi
0x8C57AC: mov     esi, [esp+4+arg_0]
0x8C57B0: mov     eax, esi
0x8C57B2: shr     eax, 18h
0x8C57B5: cmp     esi, 0FFFFFFFFh
0x8C57B8: jz      short loc_8C57D3
0x8C57BA: mov     edx, [edx+10h]
0x8C57BD: movzx   esi, word ptr [edx+10h]
0x8C57C1: cmp     eax, esi
0x8C57C3: jge     short loc_8C57D3
0x8C57C5: mov     ecx, [edx+1Ch]
0x8C57C8: lea     eax, [eax+eax*2]
0x8C57CB: mov     eax, [ecx+eax*4+8]
0x8C57CF: pop     esi
0x8C57D0: retn    4
0x8C57D3: mov     eax, [ecx+10h]
0x8C57D6: pop     esi
0x8C57D7: retn    4

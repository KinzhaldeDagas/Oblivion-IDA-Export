0x56A0A0: mov     edx, [esp+arg_0]
0x56A0A4: mov     eax, ecx
0x56A0A6: movzx   ecx, byte ptr [edx]
0x56A0A9: push    esi
0x56A0AA: movzx   esi, byte ptr [eax]
0x56A0AD: cmp     esi, ecx
0x56A0AF: jz      short loc_56A0C9
0x56A0B1: mov     [eax], cl
0x56A0B3: movzx   ecx, cl
0x56A0B6: xor     esi, esi
0x56A0B8: sub     ecx, esi
0x56A0BA: jz      short loc_56A0C6
0x56A0BC: sub     ecx, 1
0x56A0BF: jz      short loc_56A0C6
0x56A0C1: sub     ecx, 1
0x56A0C4: jnz     short loc_56A0C9
0x56A0C6: mov     [eax+4], esi
0x56A0C9: mov     ecx, [edx+8]
0x56A0CC: mov     [eax+8], ecx
0x56A0CF: mov     cl, [eax]
0x56A0D1: cmp     cl, 1
0x56A0D4: pop     esi
0x56A0D5: jbe     short loc_56A0E5
0x56A0D7: cmp     cl, 2
0x56A0DA: jnz     short locret_56A0EB
0x56A0DC: mov     edx, [edx+4]
0x56A0DF: mov     [eax+4], edx
0x56A0E2: retn    4
0x56A0E5: mov     ecx, [edx+4]
0x56A0E8: mov     [eax+4], ecx
0x56A0EB: retn    4

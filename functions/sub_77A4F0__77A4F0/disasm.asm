0x77A4F0: movzx   edx, word ptr [ecx+4Ah]
0x77A4F4: xor     eax, eax
0x77A4F6: test    edx, edx
0x77A4F8: push    esi
0x77A4F9: jbe     short loc_77A512
0x77A4FB: mov     ecx, [ecx+44h]
0x77A4FE: mov     edi, edi
0x77A500: mov     esi, [ecx]
0x77A502: cmp     dword ptr [esi+58h], 0
0x77A506: jz      short loc_77A516
0x77A508: add     eax, 1
0x77A50B: add     ecx, 4
0x77A50E: cmp     eax, edx
0x77A510: jb      short loc_77A500
0x77A512: mov     al, 1
0x77A514: pop     esi
0x77A515: retn
0x77A516: xor     al, al
0x77A518: pop     esi
0x77A519: retn

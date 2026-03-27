0x77A580: movzx   edx, word ptr [ecx+4Ah]
0x77A584: xor     eax, eax
0x77A586: test    edx, edx
0x77A588: push    esi
0x77A589: jbe     short loc_77A5A2
0x77A58B: mov     ecx, [ecx+44h]
0x77A58E: mov     edi, edi
0x77A590: mov     esi, [ecx]
0x77A592: cmp     dword ptr [esi+44h], 0
0x77A596: jnz     short loc_77A5A6
0x77A598: add     eax, 1
0x77A59B: add     ecx, 4
0x77A59E: cmp     eax, edx
0x77A5A0: jb      short loc_77A590
0x77A5A2: xor     al, al
0x77A5A4: pop     esi
0x77A5A5: retn
0x77A5A6: mov     al, 1
0x77A5A8: pop     esi
0x77A5A9: retn

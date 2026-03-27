0x799EE0: mov     eax, [ecx+4]
0x799EE3: test    eax, eax
0x799EE5: jnz     short loc_799EE8
0x799EE7: retn
0x799EE8: mov     ecx, [ecx+8]
0x799EEB: sub     ecx, eax
0x799EED: mov     eax, 92492493h
0x799EF2: imul    ecx
0x799EF4: add     edx, ecx
0x799EF6: sar     edx, 5
0x799EF9: mov     eax, edx
0x799EFB: shr     eax, 1Fh
0x799EFE: add     eax, edx
0x799F00: retn

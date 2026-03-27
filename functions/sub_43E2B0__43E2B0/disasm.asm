0x43E2B0: mov     edx, [esp+arg_4]
0x43E2B4: mov     ecx, [esp+arg_0]
0x43E2B8: mov     al, [ecx]
0x43E2BA: cmp     al, [edx]
0x43E2BC: jnz     short loc_43E2E2
0x43E2BE: test    al, al
0x43E2C0: jz      short loc_43E2D4
0x43E2C2: mov     al, [ecx+1]
0x43E2C5: cmp     al, [edx+1]
0x43E2C8: jnz     short loc_43E2E2
0x43E2CA: add     ecx, 2
0x43E2CD: add     edx, 2
0x43E2D0: test    al, al
0x43E2D2: jnz     short loc_43E2B8
0x43E2D4: xor     eax, eax
0x43E2D6: xor     ecx, ecx
0x43E2D8: test    eax, eax
0x43E2DA: setnl   cl
0x43E2DD: mov     al, cl
0x43E2DF: retn    8
0x43E2E2: sbb     eax, eax
0x43E2E4: sbb     eax, 0FFFFFFFFh
0x43E2E7: xor     ecx, ecx
0x43E2E9: test    eax, eax
0x43E2EB: setnl   cl
0x43E2EE: mov     al, cl
0x43E2F0: retn    8

0x43E390: mov     edx, [esp+arg_4]
0x43E394: mov     ecx, [esp+arg_0]
0x43E398: mov     al, [ecx]
0x43E39A: cmp     al, [edx]
0x43E39C: jnz     short loc_43E3C2
0x43E39E: test    al, al
0x43E3A0: jz      short loc_43E3B4
0x43E3A2: mov     al, [ecx+1]
0x43E3A5: cmp     al, [edx+1]
0x43E3A8: jnz     short loc_43E3C2
0x43E3AA: add     ecx, 2
0x43E3AD: add     edx, 2
0x43E3B0: test    al, al
0x43E3B2: jnz     short loc_43E398
0x43E3B4: xor     eax, eax
0x43E3B6: xor     ecx, ecx
0x43E3B8: test    eax, eax
0x43E3BA: setz    cl
0x43E3BD: mov     al, cl
0x43E3BF: retn    8
0x43E3C2: sbb     eax, eax
0x43E3C4: sbb     eax, 0FFFFFFFFh
0x43E3C7: xor     ecx, ecx
0x43E3C9: test    eax, eax
0x43E3CB: setz    cl
0x43E3CE: mov     al, cl
0x43E3D0: retn    8

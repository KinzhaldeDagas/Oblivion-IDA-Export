0x4FCB90: mov     eax, [esp+arg_4]
0x4FCB94: mov     ecx, [esp+arg_0]
0x4FCB98: add     ecx, eax
0x4FCB9A: mov     al, [ecx]
0x4FCB9C: xor     edx, edx
0x4FCB9E: test    al, al
0x4FCBA0: jz      short loc_4FCBC6
0x4FCBA2: movsx   eax, al
0x4FCBA5: sub     eax, 28h ; '('
0x4FCBA8: jz      short loc_4FCBB4
0x4FCBAA: sub     eax, 1
0x4FCBAD: jnz     short loc_4FCBB7
0x4FCBAF: sub     edx, 1
0x4FCBB2: jmp     short loc_4FCBB7
0x4FCBB4: add     edx, 1
0x4FCBB7: mov     al, [ecx+1]
0x4FCBBA: add     ecx, 1
0x4FCBBD: test    al, al
0x4FCBBF: jnz     short loc_4FCBA2
0x4FCBC1: test    edx, edx
0x4FCBC3: jz      short loc_4FCBC6
0x4FCBC5: retn
0x4FCBC6: mov     al, 1
0x4FCBC8: retn

0x4027D0: mov     ecx, [ecx]
0x4027D2: test    ecx, ecx
0x4027D4: jz      short locret_4027E1
0x4027D6: add     dword ptr [ecx+60h], 0FFFFFFFFh
0x4027DA: jnz     short locret_4027E1
0x4027DC: jmp     sub_7604D0
0x4027E1: retn

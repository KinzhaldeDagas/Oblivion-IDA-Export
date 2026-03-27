0x434C00: push    ebx
0x434C01: push    esi
0x434C02: mov     esi, [esp+8+arg_0]
0x434C06: test    si, si
0x434C09: push    edi
0x434C0A: jle     short loc_434C26
0x434C0C: mov     ebx, ds:InterlockedIncrement
0x434C12: lea     edi, [ecx+4]
0x434C15: push    edi; lpAddend
0x434C16: sub     esi, 1
0x434C19: call    ebx ; InterlockedIncrement
0x434C1B: test    si, si
0x434C1E: jnz     short loc_434C15
0x434C20: pop     edi
0x434C21: pop     esi
0x434C22: pop     ebx
0x434C23: retn    4
0x434C26: jge     short loc_434C4B
0x434C28: neg     esi
0x434C2A: movzx   esi, si
0x434C2D: test    si, si
0x434C30: jz      short loc_434C4B
0x434C32: mov     ebx, ds:InterlockedDecrement
0x434C38: lea     edi, [ecx+4]
0x434C3B: jmp     short loc_434C40
0x434C3D: align 10h
0x434C40: push    edi; lpAddend
0x434C41: sub     esi, 1
0x434C44: call    ebx ; InterlockedDecrement
0x434C46: test    si, si
0x434C49: jnz     short loc_434C40
0x434C4B: pop     edi
0x434C4C: pop     esi
0x434C4D: pop     ebx
0x434C4E: retn    4

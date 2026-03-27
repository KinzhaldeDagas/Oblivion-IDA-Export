0x410E20: mov     eax, [esp+lpThreadParameter]
0x410E24: push    eax
0x410E25: call    sub_410D10
0x410E2A: xor     eax, eax
0x410E2C: add     esp, 4
0x410E2F: cmp     byte_B33425, al
0x410E35: jnz     short locret_410E3C
0x410E37: mov     hHandle, eax
0x410E3C: retn    4

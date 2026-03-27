0x507C60: mov     ecx, ds:0B333A0h
0x507C66: xor     byte ptr ds:0B361FCh, 1
0x507C6D: cmp     dword ptr [ecx+34h], 0
0x507C71: jnz     short loc_507C80
0x507C73: movzx   eax, byte ptr ds:0B361FCh
0x507C7A: push    eax
0x507C7B: call    sub_440530
0x507C80: cmp     byte ptr ds:0B361ACh, 0
0x507C87: jz      short loc_507CAA
0x507C89: cmp     byte ptr ds:0B361FCh, 0
0x507C90: mov     eax, offset aOn_0
0x507C95: jnz     short loc_507C9C
0x507C97: mov     eax, offset aOff
0x507C9C: push    eax
0x507C9D: push    offset aBordersS; "Borders -> %s"
0x507CA2: call    Interface_ConsolePrint
0x507CA7: add     esp, 8
0x507CAA: mov     al, 1
0x507CAC: retn

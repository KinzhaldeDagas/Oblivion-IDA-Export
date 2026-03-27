0x6DEB00: movzx   eax, byte ptr [ecx+40h]
0x6DEB04: and     eax, 7
0x6DEB07: cmp     eax, 3; switch 4 cases
0x6DEB0A: ja      short def_6DEB0C
0x6DEB0C: jmp     ds:jpt_6DEB0C[eax*4]; switch jump
0x6DEB13: mov     eax, offset off_A7B018; jumptable 006DEB0C case 0
0x6DEB18: retn
0x6DEB19: mov     eax, offset aDiff; jumptable 006DEB0C case 1
0x6DEB1E: retn
0x6DEB1F: mov     eax, offset aSpec; jumptable 006DEB0C case 2
0x6DEB24: retn
0x6DEB25: mov     eax, offset aSelf_illum; jumptable 006DEB0C case 3
0x6DEB2A: retn

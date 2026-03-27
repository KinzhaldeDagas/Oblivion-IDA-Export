0x500F10: movzx   eax, byte ptr ds:0B09F58h
0x500F17: xor     al, 1
0x500F19: mov     ds:0B09F58h, al
0x500F1E: push    eax
0x500F1F: call    sub_5797E0
0x500F24: add     esp, 4
0x500F27: cmp     byte ptr ds:0B361ACh, 0
0x500F2E: jz      short loc_500F51
0x500F30: cmp     byte ptr ds:0B09F58h, 0
0x500F37: mov     eax, offset aOn_0
0x500F3C: jnz     short loc_500F43
0x500F3E: mov     eax, offset aOff
0x500F43: push    eax
0x500F44: push    offset aMenusS; "Menus -> %s"
0x500F49: call    Interface_ConsolePrint
0x500F4E: add     esp, 8
0x500F51: mov     al, 1
0x500F53: retn

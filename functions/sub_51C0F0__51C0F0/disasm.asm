0x51C0F0: mov     eax, [esp+actorValue]; Oblivion major-slot setter. Writes only actor values 0x0C..0x20, silently ignores other values, and does not bounds-check index; callers must constrain index to 0..6.
0x51C0F4: lea     edx, [eax-0Ch]
0x51C0F7: cmp     edx, 14h
0x51C0FA: ja      short locret_51C104; Unsigned range test accepts exactly the 21 native skill actor values Armorer..Speechcraft (0x0C..0x20).
0x51C0FC: mov     edx, [esp+index]
0x51C100: mov     [ecx+edx*4+44h], eax
0x51C104: retn    8

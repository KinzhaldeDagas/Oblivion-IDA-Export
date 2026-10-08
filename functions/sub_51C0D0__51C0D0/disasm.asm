0x51C0D0: mov     eax, [esp+actorValue]; Stores the first favored/primary attribute in the fixed CLAS DATA payload.
0x51C0D4: cmp     eax, 7
0x51C0D7: ja      short locret_51C0DC
0x51C0D9: mov     [ecx+38h], eax
0x51C0DC: retn    4

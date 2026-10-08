0x51C0E0: mov     eax, [esp+actorValue]; Stores the second favored/primary attribute in the fixed CLAS DATA payload.
0x51C0E4: cmp     eax, 7
0x51C0E7: ja      short locret_51C0EC
0x51C0E9: mov     [ecx+3Ch], eax
0x51C0EC: retn    4

0x477EC0: mov     eax, [esp+nodeIndex]; Returns ActorSkinInfo cached node at +8+nodeIndex*8. Index 6 is QuiverNode at +0x38, the native Arrow:0 clone source.
0x477EC4: mov     eax, [ecx+eax*8+8]
0x477EC8: retn    4

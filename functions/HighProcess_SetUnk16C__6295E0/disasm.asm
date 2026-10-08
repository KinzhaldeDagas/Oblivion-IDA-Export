0x6295E0: mov     al, [esp+a2]; HighProcess vtable+0x31C: sets byte +0x16C. SexChange sets 1 before invoking +0x318; 0x63CDC0 gates appearance refresh on this byte and clears it after successful path with existing actor NiNode.
0x6295E4: mov     [ecx+16Ch], al
0x6295EA: retn    4

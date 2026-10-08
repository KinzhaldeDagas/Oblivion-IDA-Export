0x4B26D0: mov     ecx, offset stru_B082F0; this
0x4B26D5: jmp     NiTObjectArray_ClearAndRelease; Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.

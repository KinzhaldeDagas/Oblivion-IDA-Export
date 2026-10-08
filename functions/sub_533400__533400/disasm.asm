0x533400: push    esi
0x533401: mov     esi, ecx
0x533403: call    sub_532EF0
0x533408: lea     ecx, [esi+8]; this
0x53340B: pop     esi
0x53340C: jmp     NiTObjectArray_ClearAndRelease; Clears a ref-counted NiT object-pointer array: releases every non-null element, nulls entries, and resets end/count words to zero. At bow release it is invoked on ArrowBone+0xAC, thereby releasing all ArrowBone children including the held Arrow:0 clone.

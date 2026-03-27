0x519500: push    esi
0x519501: mov     esi, ecx
0x519503: mov     eax, [esi+8]
0x519506: shr     eax, 3
0x519509: test    al, 1
0x51950B: jnz     short loc_51951F
0x51950D: push    esi
0x51950E: lea     ecx, [esi+38h]
0x519511: call    TESSpellList_LinkComponent
0x519516: push    1; a2
0x519518: mov     ecx, esi; this
0x51951A: call    TESForm_SetIsLinked
0x51951F: pop     esi
0x519520: retn

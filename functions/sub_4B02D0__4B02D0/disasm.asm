0x4B02D0: push    esi
0x4B02D1: mov     esi, ecx
0x4B02D3: mov     eax, [esi+8]
0x4B02D6: shr     eax, 3
0x4B02D9: test    al, 1
0x4B02DB: jnz     short loc_4B02EF
0x4B02DD: push    esi
0x4B02DE: lea     ecx, [esi+24h]
0x4B02E1: call    TESLeveledList_LinkComponent
0x4B02E6: push    1; a2
0x4B02E8: mov     ecx, esi; this
0x4B02EA: call    TESForm_SetIsLinked
0x4B02EF: pop     esi
0x4B02F0: retn

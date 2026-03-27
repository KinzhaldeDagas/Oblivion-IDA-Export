0x520490: push    esi
0x520491: mov     esi, ecx
0x520493: mov     eax, [esi+8]
0x520496: shr     eax, 3
0x520499: test    al, 1
0x52049B: jnz     short loc_5204AF
0x52049D: push    esi
0x52049E: lea     ecx, [esi+30h]
0x5204A1: call    sub_56A480
0x5204A6: push    1; a2
0x5204A8: mov     ecx, esi; this
0x5204AA: call    TESForm_SetIsLinked
0x5204AF: pop     esi
0x5204B0: retn

0x6646D0: push    ebx
0x6646D1: push    esi
0x6646D2: push    edi
0x6646D3: mov     edi, [esp+0Ch+arg_0]
0x6646D7: push    edi
0x6646D8: mov     esi, ecx
0x6646DA: call    Actor_AddMagicItemForm
0x6646DF: mov     bl, al
0x6646E1: test    bl, bl
0x6646E3: jz      short loc_6646ED
0x6646E5: push    edi
0x6646E6: mov     ecx, esi
0x6646E8: call    PlayerCharacter_SetKnownEffect
0x6646ED: pop     edi
0x6646EE: pop     esi
0x6646EF: mov     al, bl
0x6646F1: pop     ebx
0x6646F2: retn    4

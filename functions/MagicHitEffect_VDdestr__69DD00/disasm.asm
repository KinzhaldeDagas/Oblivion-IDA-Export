0x69DD00: push    esi
0x69DD01: mov     esi, ecx
0x69DD03: mov     eax, [esi+18h]
0x69DD06: test    eax, eax
0x69DD08: mov     dword ptr [esi], offset ??_7MagicHitEffect@@6B@; const MagicHitEffect::`vftable'
0x69DD0E: mov     dword ptr [esi+1Ch], 0
0x69DD15: jz      short loc_69DD26
0x69DD17: mov     eax, [eax+34h]
0x69DD1A: test    eax, eax
0x69DD1C: jz      short loc_69DD26
0x69DD1E: push    esi
0x69DD1F: mov     ecx, eax
0x69DD21: call    BSSimpleList_Remove
0x69DD26: mov     ecx, esi
0x69DD28: mov     dword ptr [esi+18h], 0
0x69DD2F: call    BSTempEffect_destr
0x69DD34: test    [esp+4+arg_0], 1
0x69DD39: jz      short loc_69DD44
0x69DD3B: push    esi
0x69DD3C: call    FormHeapFree
0x69DD41: add     esp, 4
0x69DD44: mov     eax, esi
0x69DD46: pop     esi
0x69DD47: retn    4

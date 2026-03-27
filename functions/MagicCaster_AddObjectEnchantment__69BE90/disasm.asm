0x69BE90: mov     eax, [esp+arg_0]
0x69BE94: test    eax, eax
0x69BE96: push    esi
0x69BE97: mov     esi, ecx
0x69BE99: jz      short loc_69BEBA
0x69BE9B: mov     edx, [esi]
0x69BE9D: push    eax
0x69BE9E: mov     eax, [edx+34h]
0x69BEA1: call    eax
0x69BEA3: fldz
0x69BEA5: mov     ecx, [esp+4+arg_8]
0x69BEA9: mov     edx, [esp+4+arg_4]
0x69BEAD: push    ecx
0x69BEAE: push    edx
0x69BEAF: push    ecx
0x69BEB0: mov     ecx, esi
0x69BEB2: fstp    [esp+10h+var_10]
0x69BEB5: call    MagicCaster_ApplyActiveMagicItem
0x69BEBA: pop     esi
0x69BEBB: retn    0Ch

0x69BE00: push    esi
0x69BE01: mov     esi, [esp+4+arg_0]
0x69BE05: mov     eax, [esi+18h]
0x69BE08: mov     edx, [eax+18h]
0x69BE0B: add     esi, 18h
0x69BE0E: push    edi
0x69BE0F: mov     edi, ecx
0x69BE11: mov     ecx, esi
0x69BE13: call    edx
0x69BE15: cmp     eax, 4
0x69BE18: jnz     short MagicCaster_AddAbility___Done
0x69BE1A: mov     eax, [edi]
0x69BE1C: mov     edx, [eax+34h]
0x69BE1F: push    esi
0x69BE20: mov     ecx, edi
0x69BE22: call    edx
0x69BE24: fldz
0x69BE26: mov     eax, [esp+0Ch+arg_0]
0x69BE2A: push    eax
0x69BE2B: push    0
0x69BE2D: push    ecx
0x69BE2E: mov     ecx, edi
0x69BE30: fstp    [esp+18h+var_18]
0x69BE33: call    MagicCaster_ApplyActiveMagicItem

0x69BE40: push    esi
0x69BE41: push    edi
0x69BE42: mov     edi, [esp+8+arg_0]
0x69BE46: mov     eax, [edi+18h]
0x69BE49: mov     edx, [eax+18h]
0x69BE4C: add     edi, 18h
0x69BE4F: mov     esi, ecx
0x69BE51: mov     ecx, edi
0x69BE53: call    edx
0x69BE55: cmp     eax, 1
0x69BE58: jnz     short MagicCaster_AddDisease___Done
0x69BE5A: cmp     [esp+8+arg_4], 0
0x69BE5F: jz      short MagicCaster_AddDisease___Done
0x69BE61: mov     eax, [esi]
0x69BE63: mov     edx, [eax+34h]
0x69BE66: push    edi
0x69BE67: mov     ecx, esi
0x69BE69: call    edx
0x69BE6B: fldz
0x69BE6D: mov     eax, [esp+0Ch+arg_4]
0x69BE71: push    eax
0x69BE72: push    0
0x69BE74: push    ecx
0x69BE75: mov     ecx, esi
0x69BE77: fstp    [esp+18h+var_18]
0x69BE7A: call    MagicCaster_ApplyActiveMagicItem

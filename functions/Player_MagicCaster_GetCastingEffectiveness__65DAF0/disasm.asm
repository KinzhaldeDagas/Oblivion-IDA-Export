0x65DAF0: fldz
0x65DAF2: sub     esp, 8
0x65DAF5: cmp     byte ptr ds:0B3BB06h, 0
0x65DAFC: push    esi
0x65DAFD: mov     esi, ecx
0x65DAFF: jz      short Player_MagicCaster_GetCastingEffectiveness___GetFatigue
0x65DB01: mov     eax, [esp+0Ch+arg_0]
0x65DB05: push    ecx
0x65DB06: fstp    [esp+10h+var_10]
0x65DB09: push    eax
0x65DB0A: call    MagicCaster_GeCastingtEffectiveness
0x65DB0F: pop     esi
0x65DB10: add     esp, 8
0x65DB13: retn    8

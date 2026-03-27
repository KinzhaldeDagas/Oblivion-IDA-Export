0x65DB89: mov     edx, [esi]
0x65DB8B: mov     eax, [edx+284h]
0x65DB91: push    7
0x65DB93: mov     ecx, esi
0x65DB95: call    eax
0x65DB97: push    eax
0x65DB98: push    1
0x65DB9A: mov     ecx, esi
0x65DB9C: call    Actor_GetArmorCoverage
0x65DBA1: mov     edx, [esi]
0x65DBA3: push    eax
0x65DBA4: mov     eax, [edx+284h]
0x65DBAA: push    12h
0x65DBAC: mov     ecx, esi
0x65DBAE: call    eax
0x65DBB0: push    eax
0x65DBB1: push    0
0x65DBB3: mov     ecx, esi
0x65DBB5: call    Actor_GetArmorCoverage
0x65DBBA: mov     edx, [esi]
0x65DBBC: push    eax
0x65DBBD: mov     eax, [edx+284h]
0x65DBC3: push    1Bh
0x65DBC5: mov     ecx, esi
0x65DBC7: call    eax
0x65DBC9: push    eax
0x65DBCA: call    Calc_ArmorSpellEffectiveness
0x65DBCF: fstp    [esp+20h+arg_8]
0x65DBD3: add     esp, 14h
0x65DBD6: cmp     [esp+0Ch+arg_4], 0
0x65DBDB: pop     edi
0x65DBDC: jz      short Player_MagicCaster_GetCastingEffectiveness___MultiplyFactors
0x65DBDE: fld     [esp+8+arg_8]
0x65DBE2: pop     esi
0x65DBE3: add     esp, 8
0x65DBE6: retn    8

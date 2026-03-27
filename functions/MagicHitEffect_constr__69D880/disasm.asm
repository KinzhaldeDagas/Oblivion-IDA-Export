0x69D880: fldz
0x69D882: push    esi
0x69D883: push    ecx
0x69D884: fstp    [esp+8+var_8]; float
0x69D887: push    0; int
0x69D889: mov     esi, ecx
0x69D88B: call    BSTempEff_constr
0x69D890: fldz
0x69D892: fstp    dword ptr [esi+20h]
0x69D895: mov     dword ptr [esi], offset ??_7MagicHitEffect@@6B@; const MagicHitEffect::`vftable'
0x69D89B: fld     dword ptr ds:0A32048h
0x69D8A1: mov     dword ptr [esi+1Ch], 0
0x69D8A8: fstp    dword ptr [esi+8]
0x69D8AB: mov     dword ptr [esi+18h], 0
0x69D8B2: mov     byte ptr [esi+24h], 0
0x69D8B6: mov     eax, esi
0x69D8B8: pop     esi
0x69D8B9: retn

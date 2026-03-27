0x6A4870: mov     eax, [esp+arg_4]
0x6A4874: push    esi
0x6A4875: push    edi
0x6A4876: mov     edi, [esp+8+arg_8]
0x6A487A: push    edi; int
0x6A487B: mov     esi, ecx
0x6A487D: mov     ecx, [esp+0Ch+arg_0]
0x6A4881: push    eax; int
0x6A4882: push    ecx; int
0x6A4883: mov     ecx, esi; this
0x6A4885: call    ValueModifierEffect_constr
0x6A488A: mov     dword ptr [esi], offset ??_7ShieldEffect@@6B@; const ShieldEffect::`vftable'
0x6A4890: cmp     dword ptr [edi], 444C4853h
0x6A4896: mov     eax, esi
0x6A4898: jz      short loc_6A48AC
0x6A489A: mov     edx, [edi+14h]
0x6A489D: pop     edi
0x6A489E: mov     [esi+38h], edx
0x6A48A1: mov     dword ptr [esi+3Ch], 2Bh ; '+'
0x6A48A8: pop     esi
0x6A48A9: retn    0Ch
0x6A48AC: pop     edi
0x6A48AD: mov     dword ptr [esi+3Ch], 48h ; 'H'
0x6A48B4: pop     esi
0x6A48B5: retn    0Ch

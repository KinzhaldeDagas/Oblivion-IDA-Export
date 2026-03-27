0x68FC60: mov     eax, [esp+arg_8]
0x68FC64: mov     edx, [esp+arg_0]
0x68FC68: push    esi
0x68FC69: mov     esi, ecx
0x68FC6B: mov     ecx, [esp+4+arg_4]
0x68FC6F: push    eax; int
0x68FC70: push    ecx; int
0x68FC71: push    edx; int
0x68FC72: mov     ecx, esi; this
0x68FC74: call    AssociatedItemEffect_constr
0x68FC79: fldz
0x68FC7B: xor     eax, eax
0x68FC7D: mov     [esi+3Ch], eax
0x68FC80: mov     dword ptr [esi], offset ??_7BoundItemEffect@@6B@; const BoundItemEffect::`vftable'
0x68FC86: mov     [esi+40h], eax
0x68FC89: mov     [esi+44h], eax
0x68FC8C: mov     [esi+48h], eax
0x68FC8F: mov     [esi+4Ch], eax
0x68FC92: mov     [esi+50h], eax
0x68FC95: mov     [esi+54h], eax
0x68FC98: mov     [esi+58h], eax
0x68FC9B: mov     [esi+5Ch], eax
0x68FC9E: mov     [esi+60h], eax
0x68FCA1: mov     [esi+64h], eax
0x68FCA4: mov     [esi+68h], eax
0x68FCA7: mov     [esi+6Ch], eax
0x68FCAA: mov     [esi+70h], eax
0x68FCAD: mov     [esi+74h], eax
0x68FCB0: mov     [esi+78h], eax
0x68FCB3: mov     [esi+7Ch], eax
0x68FCB6: fstp    dword ptr [esi+80h]
0x68FCBC: mov     [esi+84h], al
0x68FCC2: mov     [esi+85h], al
0x68FCC8: mov     [esi+86h], al
0x68FCCE: mov     [esi+87h], al
0x68FCD4: mov     [esi+88h], al
0x68FCDA: mov     eax, esi
0x68FCDC: pop     esi
0x68FCDD: retn    0Ch

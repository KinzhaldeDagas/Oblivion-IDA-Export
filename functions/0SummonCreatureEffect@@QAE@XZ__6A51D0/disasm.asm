0x6A51D0: mov     eax, [esp+arg_8]
0x6A51D4: mov     edx, [esp+arg_0]
0x6A51D8: push    esi
0x6A51D9: mov     esi, ecx
0x6A51DB: mov     ecx, [esp+4+arg_4]
0x6A51DF: push    eax; int
0x6A51E0: push    ecx; int
0x6A51E1: push    edx; int
0x6A51E2: mov     ecx, esi; this
0x6A51E4: call    AssociatedItemEffect_constr
0x6A51E9: fldz
0x6A51EB: fstp    dword ptr [esi+44h]
0x6A51EE: mov     dword ptr [esi], offset ??_7SummonCreatureEffect@@6B@; const SummonCreatureEffect::`vftable'
0x6A51F4: xor     eax, eax
0x6A51F6: mov     [esi+3Ch], eax
0x6A51F9: mov     [esi+40h], al
0x6A51FC: mov     ecx, ds:0B3F9A8h
0x6A5202: mov     [esi+48h], ecx
0x6A5205: mov     edx, ds:0B3F9ACh
0x6A520B: mov     [esi+4Ch], edx
0x6A520E: mov     ecx, ds:0B3F9B0h
0x6A5214: mov     [esi+50h], ecx
0x6A5217: mov     edx, ds:0B3F9A8h
0x6A521D: mov     [esi+54h], edx
0x6A5220: mov     ecx, ds:0B3F9ACh
0x6A5226: mov     [esi+58h], ecx
0x6A5229: mov     edx, ds:0B3F9B0h
0x6A522F: mov     [esi+60h], al
0x6A5232: mov     [esi+61h], al
0x6A5235: mov     [esi+5Ch], edx
0x6A5238: mov     eax, esi
0x6A523A: pop     esi
0x6A523B: retn    0Ch

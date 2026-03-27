0x9604C0: mov     eax, [esp+arg_8]
0x9604C4: fld     [esp+arg_4]
0x9604C8: mov     edx, [esp+arg_10]
0x9604CC: push    esi
0x9604CD: mov     esi, ecx
0x9604CF: mov     ecx, [esp+4+arg_C]
0x9604D3: fstp    dword ptr [esi+1Ch]
0x9604D6: fld     [esp+4+arg_0]
0x9604DA: mov     [esi+4], eax
0x9604DD: mov     eax, [esp+4+arg_14]
0x9604E1: fstp    dword ptr [esi+38h]
0x9604E4: mov     [esi+8], ecx
0x9604E7: mov     ecx, [esp+4+arg_18]
0x9604EB: mov     [esi+10h], eax
0x9604EE: mov     [esi+0Ch], edx
0x9604F1: mov     edx, [esp+4+arg_1C]
0x9604F5: mov     [esi+14h], ecx
0x9604F8: mov     ecx, esi
0x9604FA: mov     dword ptr [esi], offset ??_7NiCapsuleBV@@6B@; const NiCapsuleBV::`vftable'
0x960500: mov     [esi+18h], edx
0x960503: call    sub_9600B0
0x960508: mov     eax, esi
0x96050A: pop     esi
0x96050B: retn    20h ; ' '

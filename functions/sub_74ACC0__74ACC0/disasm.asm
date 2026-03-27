0x74ACC0: push    esi
0x74ACC1: mov     esi, ecx
0x74ACC3: call    sub_74EDA0
0x74ACC8: push    2
0x74ACCA: push    1
0x74ACCC: lea     ecx, [esi+50h]
0x74ACCF: mov     dword ptr [esi], offset ??_7NiPSysMeshEmitter@@6B@; const NiPSysMeshEmitter::`vftable'
0x74ACD5: call    sub_74A820
0x74ACDA: xor     eax, eax
0x74ACDC: mov     [esi+68h], ax
0x74ACE0: mov     [esi+6Ah], ax
0x74ACE4: mov     [esi+6Ch], ax
0x74ACE8: mov     [esi+64h], eax
0x74ACEB: mov     dword ptr [esi+60h], offset ??_7?$NiTArray@V?$NiPointer@VNiSkinnedEmitterData@NiPSysMeshEmitter@@@@@@6B@; const NiTArray<NiPointer<NiPSysMeshEmitter::NiSkinnedEmitterData>>::`vftable'
0x74ACF2: mov     word ptr [esi+6Eh], 1
0x74ACF8: mov     [esi+70h], eax
0x74ACFB: mov     [esi+74h], eax
0x74ACFE: mov     eax, ds:0B258D0h
0x74AD03: mov     [esi+78h], eax
0x74AD06: mov     ecx, ds:0B258D4h
0x74AD0C: mov     [esi+7Ch], ecx
0x74AD0F: mov     edx, ds:0B258D8h
0x74AD15: mov     [esi+80h], edx
0x74AD1B: mov     eax, esi
0x74AD1D: pop     esi
0x74AD1E: retn

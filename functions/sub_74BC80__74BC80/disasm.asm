0x74BC80: push    esi
0x74BC81: mov     esi, ecx
0x74BC83: mov     ecx, [esi+64h]
0x74BC86: test    ecx, ecx
0x74BC88: mov     dword ptr [esi+60h], offset ??_7?$NiTArray@V?$NiPointer@VNiSkinnedEmitterData@NiPSysMeshEmitter@@@@@@6B@; const NiTArray<NiPointer<NiPSysMeshEmitter::NiSkinnedEmitterData>>::`vftable'
0x74BC8F: jz      short loc_74BC98
0x74BC91: push    3
0x74BC93: call    sub_74A000
0x74BC98: mov     ecx, [esi+54h]
0x74BC9B: test    ecx, ecx
0x74BC9D: mov     dword ptr [esi+50h], offset ??_7?$NiTArray@V?$NiPointer@VNiGeometry@@@@@@6B@; const NiTArray<NiPointer<NiGeometry>>::`vftable'
0x74BCA4: jz      short loc_74BCAD
0x74BCA6: push    3
0x74BCA8: call    sub_74A000
0x74BCAD: mov     ecx, esi; this
0x74BCAF: call    ??1NiPSysFieldModifier@@UAE@XZ; NiPSysFieldModifier::~NiPSysFieldModifier(void)
0x74BCB4: test    [esp+4+arg_0], 1
0x74BCB9: jz      short loc_74BCC4
0x74BCBB: push    esi
0x74BCBC: call    FormHeapFree
0x74BCC1: add     esp, 4
0x74BCC4: mov     eax, esi
0x74BCC6: pop     esi
0x74BCC7: retn    4

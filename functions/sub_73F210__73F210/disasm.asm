0x73F210: push    esi
0x73F211: mov     esi, ecx
0x73F213: mov     eax, [esi+44h]
0x73F216: push    eax
0x73F217: mov     dword ptr [esi], offset ??_7NiParticlesData@@6B@; const NiParticlesData::`vftable'
0x73F21D: call    FormHeapFree
0x73F222: mov     ecx, [esi+4Ch]
0x73F225: push    ecx
0x73F226: call    FormHeapFree
0x73F22B: mov     edx, [esi+50h]
0x73F22E: push    edx
0x73F22F: call    FormHeapFree
0x73F234: mov     eax, [esi+54h]
0x73F237: push    eax
0x73F238: call    FormHeapFree
0x73F23D: mov     ecx, [esi+58h]
0x73F240: push    ecx
0x73F241: call    FormHeapFree
0x73F246: add     esp, 14h
0x73F249: mov     ecx, esi; this
0x73F24B: call    ??1NiGeometryData@@UAE@XZ; NiGeometryData::~NiGeometryData(void)
0x73F250: test    [esp+4+arg_0], 1
0x73F255: jz      short loc_73F260
0x73F257: push    esi
0x73F258: call    FormHeapFree
0x73F25D: add     esp, 4
0x73F260: mov     eax, esi
0x73F262: pop     esi
0x73F263: retn    4

0x73EEC0: push    esi
0x73EEC1: mov     esi, ecx
0x73EEC3: mov     eax, [esi+44h]
0x73EEC6: push    eax
0x73EEC7: mov     dword ptr [esi], offset ??_7NiParticlesData@@6B@; const NiParticlesData::`vftable'
0x73EECD: call    FormHeapFree
0x73EED2: mov     ecx, [esi+4Ch]
0x73EED5: push    ecx
0x73EED6: call    FormHeapFree
0x73EEDB: mov     edx, [esi+50h]
0x73EEDE: push    edx
0x73EEDF: call    FormHeapFree
0x73EEE4: mov     eax, [esi+54h]
0x73EEE7: push    eax
0x73EEE8: call    FormHeapFree
0x73EEED: mov     ecx, [esi+58h]
0x73EEF0: push    ecx
0x73EEF1: call    FormHeapFree
0x73EEF6: add     esp, 14h
0x73EEF9: mov     ecx, esi; this
0x73EEFB: pop     esi
0x73EEFC: jmp     ??1NiGeometryData@@UAE@XZ; NiGeometryData::~NiGeometryData(void)

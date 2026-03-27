0x699160: push    esi
0x699161: mov     esi, ecx
0x699163: push    edi
0x699164: mov     edi, [esi+4]
0x699167: test    edi, edi
0x699169: mov     dword ptr [esi], offset ??_7MagicCaster@@6B@; const MagicCaster::`vftable'
0x69916F: jz      short loc_699181
0x699171: mov     ecx, edi; this
0x699173: call    MagicCaster_CastingVFX_destr
0x699178: push    edi
0x699179: call    FormHeapFree
0x69917E: add     esp, 4
0x699181: pop     edi
0x699182: mov     dword ptr [esi+4], 0
0x699189: pop     esi
0x69918A: retn

0x60E0A0: push    esi
0x60E0A1: mov     esi, ecx
0x60E0A3: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x60E0A8: fldz
0x60E0AA: fstp    dword ptr [esi+3Ch]
0x60E0AD: mov     dword ptr [esi], offset ??_7BSPlayerDistanceCheckController@@6B@; const BSPlayerDistanceCheckController::`vftable'
0x60E0B3: mov     dword ptr [esi+40h], 0
0x60E0BA: mov     eax, esi
0x60E0BC: pop     esi
0x60E0BD: retn

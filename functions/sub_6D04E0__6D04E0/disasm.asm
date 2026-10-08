0x6D04E0: push    esi; Constructs NiInterpController over NiTimeController, installs its vtable, and clears interpolator capability/manager flag 0x20.
0x6D04E1: mov     esi, ecx
0x6D04E3: call    ??0NiTimeController@@QAE@XZ; Constructs a 0x3C-byte NiTimeController. Persistent authored state: flags +0x08, frequency +0x0C, phase +0x10, low/high key times +0x14/+0x18, target +0x30, next controller +0x34. Initializes runtime start/last/cache values +0x1C..+0x28 to sentinels, update byte +0x2C to 1, and force byte +0x38 to 0.
0x6D04E8: and     word ptr [esi+8], 0FFDFh
0x6D04EE: mov     dword ptr [esi], offset ??_7NiInterpController@@6B@; const NiInterpController::`vftable'
0x6D04F4: mov     eax, esi
0x6D04F6: pop     esi
0x6D04F7: retn

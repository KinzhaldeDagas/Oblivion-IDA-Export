0x6CE1D0: push    esi; Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
0x6CE1D1: mov     esi, ecx
0x6CE1D3: call    NiInterpController_Construct; Constructs NiInterpController over NiTimeController, installs its vtable, and clears interpolator capability/manager flag 0x20.
0x6CE1D8: mov     dword ptr [esi], offset ??_7NiSingleInterpController@@6B@; const NiSingleInterpController::`vftable'
0x6CE1DE: mov     dword ptr [esi+3Ch], 0
0x6CE1E5: mov     eax, esi
0x6CE1E7: pop     esi
0x6CE1E8: retn

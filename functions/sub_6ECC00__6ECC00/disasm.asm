0x6ECC00: push    esi
0x6ECC01: mov     esi, ecx
0x6ECC03: call    NiSingleInterpController_Construct; Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
0x6ECC08: mov     dword ptr [esi], offset ??_7NiPoint3InterpController@@6B@; const NiPoint3InterpController::`vftable'
0x6ECC0E: mov     eax, esi
0x6ECC10: pop     esi
0x6ECC11: retn

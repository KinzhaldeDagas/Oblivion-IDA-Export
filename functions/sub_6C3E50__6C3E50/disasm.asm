0x6C3E50: push    esi
0x6C3E51: mov     esi, ecx
0x6C3E53: call    NiSingleInterpController_Construct; Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
0x6C3E58: mov     dword ptr [esi], offset ??_7NiTransformController@@6B@; const NiTransformController::`vftable'
0x6C3E5E: mov     eax, esi
0x6C3E60: pop     esi
0x6C3E61: retn

0x6EC180: push    esi
0x6EC181: mov     esi, ecx
0x6EC183: call    NiSingleInterpController_Construct; Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
0x6EC188: mov     dword ptr [esi], offset ??_7NiFloatInterpController@@6B@; const NiFloatInterpController::`vftable'
0x6EC18E: mov     eax, esi
0x6EC190: pop     esi
0x6EC191: retn

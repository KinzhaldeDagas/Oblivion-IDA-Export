0x6EC630: push    esi
0x6EC631: mov     esi, ecx
0x6EC633: call    NiSingleInterpController_Construct; Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
0x6EC638: mov     dword ptr [esi], offset ??_7NiBoolInterpController@@6B@; const NiBoolInterpController::`vftable'
0x6EC63E: mov     eax, esi
0x6EC640: pop     esi
0x6EC641: retn

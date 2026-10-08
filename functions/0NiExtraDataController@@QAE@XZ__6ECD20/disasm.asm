0x6ECD20: push    esi
0x6ECD21: mov     esi, ecx
0x6ECD23: call    NiSingleInterpController_Construct; Constructs the 0x40-byte NiSingleInterpController base state: initializes NiTimeController, installs this vtable, and clears the sole refcounted interpolator smart pointer at +0x3C.
0x6ECD28: xor     eax, eax
0x6ECD2A: mov     [esi+40h], eax
0x6ECD2D: mov     dword ptr [esi], offset ??_7NiExtraDataController@@6B@; const NiExtraDataController::`vftable'
0x6ECD33: mov     [esi+44h], eax
0x6ECD36: mov     eax, esi
0x6ECD38: pop     esi
0x6ECD39: retn

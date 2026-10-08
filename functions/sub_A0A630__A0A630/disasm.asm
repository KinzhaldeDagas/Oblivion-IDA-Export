0xA0A630: push    offset parent; parent
0xA0A635: push    offset aNisortadjustno; "NiSortAdjustNode"
0xA0A63A: mov     ecx, offset stru_B401A4; this
0xA0A63F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A644: retn

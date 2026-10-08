0xA0A1C0: push    offset stru_B3F684; parent
0xA0A1C5: push    offset aNiskininstance; "NiSkinInstance"
0xA0A1CA: mov     ecx, offset stru_B3FF1C; this
0xA0A1CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A1D4: retn

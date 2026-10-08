0xA0A3C0: push    offset stru_B3F684; parent
0xA0A3C5: push    offset aNipalette; "NiPalette"
0xA0A3CA: mov     ecx, offset stru_B40008; this
0xA0A3CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A3D4: retn

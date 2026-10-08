0xA05CA0: push    offset stru_B3EEFC; parent
0xA05CA5: push    offset aNilightcolorco; "NiLightColorController"
0xA05CAA: mov     ecx, offset stru_B3E00C; this
0xA05CAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA05CB4: retn

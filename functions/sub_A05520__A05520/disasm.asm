0xA05520: push    offset stru_B3F684; parent
0xA05525: push    offset aNimorphdata; "NiMorphData"
0xA0552A: mov     ecx, offset stru_B3DE14; this
0xA0552F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA05534: retn

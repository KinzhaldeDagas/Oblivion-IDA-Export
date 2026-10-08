0xA07920: push    offset stru_B3F684; parent
0xA07925: push    offset aNibsplinebasis; "NiBSplineBasisData"
0xA0792A: mov     ecx, offset stru_B3E728; this
0xA0792F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA07934: retn

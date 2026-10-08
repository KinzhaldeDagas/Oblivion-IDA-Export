0xA065A0: push    offset stru_B3F684; parent
0xA065A5: push    offset aNifloatdata; "NiFloatData"
0xA065AA: mov     ecx, offset stru_B3E238; this
0xA065AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA065B4: retn

0xA0A3A0: push    offset stru_B3F684; parent
0xA0A3A5: push    offset aNi2dbuffer; "Ni2DBuffer"
0xA0A3AA: mov     ecx, offset stru_B3FFC0; this
0xA0A3AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A3B4: retn

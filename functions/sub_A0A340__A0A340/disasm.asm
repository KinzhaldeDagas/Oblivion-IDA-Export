0xA0A340: push    offset stru_B3FD44; parent
0xA0A345: push    offset aNiintegerextra; "NiIntegerExtraData"
0xA0A34A: mov     ecx, offset stru_B3FFA0; this
0xA0A34F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A354: retn

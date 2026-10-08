0xA0A540: push    offset stru_B3FD44; parent
0xA0A545: push    offset aNivectorextrad; "NiVectorExtraData"
0xA0A54A: mov     ecx, offset stru_B40168; this
0xA0A54F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A554: retn

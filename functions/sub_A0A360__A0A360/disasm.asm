0xA0A360: push    offset stru_B3FD44; parent
0xA0A365: push    offset aNivertweightse; "NiVertWeightsExtraData"
0xA0A36A: mov     ecx, offset stru_B3FFA8; this
0xA0A36F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A374: retn

0xA0A750: push    offset stru_B3FD44; parent
0xA0A755: push    offset aNiintegersextr; "NiIntegersExtraData"
0xA0A75A: mov     ecx, offset stru_B401EC; this
0xA0A75F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A764: retn

0xA0A7F0: push    offset stru_B3FD44; parent
0xA0A7F5: push    offset aNibooleanextra; "NiBooleanExtraData"
0xA0A7FA: mov     ecx, offset stru_B40214; this
0xA0A7FF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A804: retn

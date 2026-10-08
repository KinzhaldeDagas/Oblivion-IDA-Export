0xA0A080: push    offset stru_B4012C; parent
0xA0A085: push    offset aNirangeloddata; "NiRangeLODData"
0xA0A08A: mov     ecx, offset stru_B3FD78; this
0xA0A08F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A094: retn

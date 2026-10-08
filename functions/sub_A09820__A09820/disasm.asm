0xA09820: push    offset stru_B3FD44; parent
0xA09825: push    offset aBsfurnituremar; "BSFurnitureMarker"
0xA0982A: mov     ecx, offset stru_B3F4B4; this
0xA0982F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09834: retn

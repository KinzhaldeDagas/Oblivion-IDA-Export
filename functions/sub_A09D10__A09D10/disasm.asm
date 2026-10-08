0xA09D10: push    offset stru_B3F684; parent
0xA09D15: push    offset aNicollisionobj; "NiCollisionObject"
0xA09D1A: mov     ecx, offset stru_B3FB00; this
0xA09D1F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09D24: retn

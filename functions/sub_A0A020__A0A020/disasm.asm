0xA0A020: push    offset stru_B3FA80; parent
0xA0A025: push    offset aNigeometry; "NiGeometry"
0xA0A02A: mov     ecx, offset stru_B3FD5C; this
0xA0A02F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A034: retn

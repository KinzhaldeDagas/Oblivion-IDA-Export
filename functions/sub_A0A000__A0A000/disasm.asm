0xA0A000: push    offset stru_B3FD5C; parent
0xA0A005: push    offset aNitribasedgeom; "NiTriBasedGeom"
0xA0A00A: mov     ecx, offset stru_B3FD54; this
0xA0A00F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A014: retn

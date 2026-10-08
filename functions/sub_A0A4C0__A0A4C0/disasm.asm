0xA0A4C0: push    offset stru_B3FD2C; parent
0xA0A4C5: push    offset aNiscreengeom_0; "NiScreenGeometryData"
0xA0A4CA: mov     ecx, offset stru_B40150; this
0xA0A4CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A4D4: retn

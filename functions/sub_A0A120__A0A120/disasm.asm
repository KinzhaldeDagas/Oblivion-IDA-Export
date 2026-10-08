0xA0A120: push    offset stru_B3F684; parent
0xA0A125: push    offset aNigeometrydata; "NiGeometryData"
0xA0A12A: mov     ecx, offset stru_B3FE04; this
0xA0A12F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A134: retn

0xA0A400: push    offset stru_B3FE04; parent
0xA0A405: push    offset aNilinesdata; "NiLinesData"
0xA0A40A: mov     ecx, offset stru_B40100; this
0xA0A40F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A414: retn

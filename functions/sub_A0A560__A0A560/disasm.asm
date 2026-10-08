0xA0A560: push    offset stru_B3FD0C; parent
0xA0A565: push    offset aNitristripsdyn; "NiTriStripsDynamicData"
0xA0A56A: mov     ecx, offset stru_B40170; this
0xA0A56F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A574: retn

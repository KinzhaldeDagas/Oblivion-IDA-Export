0xA09ED0: push    offset stru_B3FD54; parent
0xA09ED5: push    offset aNitristrips; "NiTriStrips"
0xA09EDA: mov     ecx, offset stru_B3FD04; this
0xA09EDF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09EE4: retn

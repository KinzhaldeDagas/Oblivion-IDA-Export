0xA0CAE0: push    offset stru_B40D08; parent
0xA0CAE5: push    offset aNipsysposition; "NiPSysPositionModifier"
0xA0CAEA: mov     ecx, offset stru_B40FD0; this
0xA0CAEF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0CAF4: retn

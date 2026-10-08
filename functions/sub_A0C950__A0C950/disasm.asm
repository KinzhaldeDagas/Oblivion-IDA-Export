0xA0C950: push    offset stru_B41E68; parent
0xA0C955: push    offset aNipsysradialfi; "NiPSysRadialFieldModifier"
0xA0C95A: mov     ecx, offset stru_B40F84; this
0xA0C95F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0C964: retn

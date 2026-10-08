0xA0C180: push    offset stru_B41E68; parent
0xA0C185: push    offset aNipsysvortexfi; "NiPSysVortexFieldModifier"
0xA0C18A: mov     ecx, offset stru_B40D88; this
0xA0C18F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0C194: retn

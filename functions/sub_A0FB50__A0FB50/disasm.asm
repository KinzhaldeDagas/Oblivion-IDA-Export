0xA0FB50: push    offset stru_B41F8C; parent
0xA0FB55: push    offset aNipsysairfie_0; "NiPSysAirFieldInheritVelocityCtlr"
0xA0FB5A: mov     ecx, offset stru_B41B78; this
0xA0FB5F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0FB64: retn

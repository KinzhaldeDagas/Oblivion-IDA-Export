0xA0FCE0: push    offset stru_B41F8C; parent
0xA0FCE5: push    offset aNipsysairfield; "NiPSysAirFieldAirFrictionCtlr"
0xA0FCEA: mov     ecx, offset stru_B41BF8; this
0xA0FCEF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0FCF4: retn

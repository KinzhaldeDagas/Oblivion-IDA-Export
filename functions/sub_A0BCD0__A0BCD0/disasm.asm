0xA0BCD0: push    offset stru_B40D08; parent
0xA0BCD5: push    offset aNipsysspawnmod; "NiPSysSpawnModifier"
0xA0BCDA: mov     ecx, offset stru_B40C84; this
0xA0BCDF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0BCE4: retn

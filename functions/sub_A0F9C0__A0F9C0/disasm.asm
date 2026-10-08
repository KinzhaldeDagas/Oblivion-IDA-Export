0xA0F9C0: push    offset stru_B41E68; parent
0xA0F9C5: push    offset aNipsysairfie_1; "NiPSysAirFieldModifier"
0xA0F9CA: mov     ecx, offset stru_B41B38; this
0xA0F9CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0F9D4: retn

0xA12740: push    offset stru_BA7D44; parent
0xA12745: push    offset aBhkspringactio; "bhkSpringAction"
0xA1274A: mov     ecx, offset stru_BA805C; this
0xA1274F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12754: retn

0xA16360: push    offset stru_B3FD44; parent
0xA16365: push    offset aNiscmextradata; "NiSCMExtraData"
0xA1636A: mov     ecx, offset stru_BAA890; this
0xA1636F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA16374: retn

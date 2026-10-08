0x9F8E50: push    offset stru_B3FD44; parent
0x9F8E55: push    offset aBsfacegenbasem; "BSFaceGenBaseMorphExtraData"
0x9F8E5A: mov     ecx, offset stru_B39D90; this
0x9F8E5F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9F8E64: retn

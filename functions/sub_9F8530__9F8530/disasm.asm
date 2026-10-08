0x9F8530: push    offset stru_B3FD44; parent
0x9F8535: push    offset aBsfacegenanima; "BSFaceGenAnimationData"
0x9F853A: mov     ecx, offset stru_B39AB0; this
0x9F853F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9F8544: retn

0xA12300: push    offset stru_BA7F90; parent
0xA12305: push    offset aBhkrigidbody; "bhkRigidBody"
0xA1230A: mov     ecx, offset stru_BA7D84; this
0xA1230F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12314: retn

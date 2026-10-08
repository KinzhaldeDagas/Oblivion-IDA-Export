0xA12680: push    offset stru_BA7D84; parent
0xA12685: push    offset aBhkrigidbodyt; "bhkRigidBodyT"
0xA1268A: mov     ecx, offset stru_BA8018; this
0xA1268F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12694: retn

0xA12840: push    0BA7D50h; parent
0xA12845: push    offset aBhkragdollcons; "bhkRagdollConstraint"
0xA1284A: mov     ecx, offset stru_BA80BC; this
0xA1284F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12854: retn

0xA13E40: push    0BA7D50h; parent
0xA13E45: push    offset aBhkpoweredhing; "bhkPoweredHingeConstraint"
0xA13E4A: mov     ecx, offset stru_BA851C; this
0xA13E4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA13E54: retn

0xA13E20: push    0BA7D50h; parent
0xA13E25: push    offset aBhkpointtopath; "bhkPointToPathConstraint"
0xA13E2A: mov     ecx, offset stru_BA8510; this
0xA13E2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA13E34: retn

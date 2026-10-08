0xA12760: push    offset stru_BA7D44; parent
0xA12765: push    offset aBhkangulardash; "bhkAngularDashpotAction"
0xA1276A: mov     ecx, offset stru_BA8068; this
0xA1276F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12774: retn

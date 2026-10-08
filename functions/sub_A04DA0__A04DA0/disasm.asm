0xA04DA0: push    offset stru_B3ED80; parent
0xA04DA5: push    offset aNiquaternionin; "NiQuaternionInterpolator"
0xA04DAA: mov     ecx, offset stru_B3DC68; this
0xA04DAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA04DB4: retn

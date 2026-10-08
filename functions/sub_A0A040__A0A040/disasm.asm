0xA0A040: push    offset stru_B3FD70; parent
0xA0A045: push    offset aNilodnode; "NiLODNode"
0xA0A04A: mov     ecx, offset stru_B3FD68; this
0xA0A04F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A054: retn

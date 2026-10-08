0xA07C20: push    offset stru_B3ED80; parent
0xA07C25: push    offset aNiboolinterpol; "NiBoolInterpolator"
0xA07C2A: mov     ecx, offset stru_B3E7E8; this
0xA07C2F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA07C34: retn

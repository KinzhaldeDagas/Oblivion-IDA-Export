0xA08E80: push    offset stru_B3CCB0; parent
0xA08E85: push    offset aNiboolinterpco; "NiBoolInterpController"
0xA08E8A: mov     ecx, offset stru_B3EDD4; this
0xA08E8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA08E94: retn

0xA0A100: push    offset stru_B3FD44; parent
0xA0A105: push    offset aNibinaryextrad; "NiBinaryExtraData"
0xA0A10A: mov     ecx, offset stru_B3FDA0; this
0xA0A10F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A114: retn

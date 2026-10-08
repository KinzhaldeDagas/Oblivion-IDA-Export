0xA0A060: push    offset parent; parent
0xA0A065: push    offset aNiswitchnode; "NiSwitchNode"
0xA0A06A: mov     ecx, offset stru_B3FD70; this
0xA0A06F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A074: retn

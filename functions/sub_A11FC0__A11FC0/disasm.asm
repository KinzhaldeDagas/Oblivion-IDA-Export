0xA11FC0: push    offset stru_B3FCD4; parent
0xA11FC5: push    offset aTallgrasstrish; "TallGrassTriShape"
0xA11FCA: mov     ecx, offset stru_B47878; this
0xA11FCF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11FD4: retn

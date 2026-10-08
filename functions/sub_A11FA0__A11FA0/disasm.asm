0xA11FA0: push    offset stru_B3FD04; parent
0xA11FA5: push    offset aTallgrasstrist; "TallGrassTriStrips"
0xA11FAA: mov     ecx, offset stru_B4786C; this
0xA11FAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11FB4: retn

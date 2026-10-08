0xA13A40: push    offset stru_BA7D78; parent
0xA13A45: push    offset aBhkheightfield; "bhkHeightFieldShape"
0xA13A4A: mov     ecx, offset stru_BA8404; this
0xA13A4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA13A54: retn

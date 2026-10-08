0xA121E0: push    offset stru_BA7D10; parent
0xA121E5: push    offset aBhkmousespring; "bhkMouseSpringAction"
0xA121EA: mov     ecx, offset stru_BA7D1C; this
0xA121EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA121F4: retn

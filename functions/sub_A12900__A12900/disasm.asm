0xA12900: push    offset stru_BA7F54; parent
0xA12905: push    offset aBhktrianglesha; "bhkTriangleShape"
0xA1290A: mov     ecx, offset stru_BA8104; this
0xA1290F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12914: retn

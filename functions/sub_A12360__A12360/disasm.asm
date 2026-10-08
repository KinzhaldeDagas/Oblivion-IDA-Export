0xA12360: push    offset stru_BA7938; parent
0xA12365: push    offset aBhkworldm; "bhkWorldM"
0xA1236A: mov     ecx, offset stru_BA7DA4; this
0xA1236F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12374: retn

0xA12620: push    offset stru_BA7F54; parent
0xA12625: push    offset aBhkboxshape; "bhkBoxShape"
0xA1262A: mov     ecx, offset stru_BA7FF8; this
0xA1262F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12634: retn

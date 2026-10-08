0xA12260: push    offset stru_BA7D04; parent
0xA12265: push    offset aBhkbinaryactio; "bhkBinaryAction"
0xA1226A: mov     ecx, offset stru_BA7D44; this
0xA1226F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12274: retn

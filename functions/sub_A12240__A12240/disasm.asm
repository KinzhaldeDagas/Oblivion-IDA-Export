0xA12240: push    offset stru_BA7C00; parent
0xA12245: push    offset aBhkworldobject; "bhkWorldObject"
0xA1224A: mov     ecx, offset stru_BA7D38; this
0xA1224F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12254: retn

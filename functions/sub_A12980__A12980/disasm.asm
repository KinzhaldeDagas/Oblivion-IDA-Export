0xA12980: push    offset stru_BA8170; parent
0xA12985: push    offset aBhknitristrips; "bhkNiTriStripsShape"
0xA1298A: mov     ecx, offset stru_BA8130; this
0xA1298F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12994: retn

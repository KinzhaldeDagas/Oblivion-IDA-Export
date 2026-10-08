0x9F8E70: push    0; parent
0x9F8E72: push    offset aBsfacegenmorph; "BSFaceGenMorphData"
0x9F8E77: mov     ecx, offset stru_B39D98; this
0x9F8E7C: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9F8E81: retn

0x9F8E90: push    offset stru_B39D98; parent
0x9F8E95: push    offset aBsfacegenmor_0; "BSFaceGenMorphDataHead"
0x9F8E9A: mov     ecx, offset stru_B39DA0; this
0x9F8E9F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9F8EA4: retn

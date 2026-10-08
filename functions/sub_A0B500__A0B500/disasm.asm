0xA0B500: push    offset stru_B40D08; parent
0xA0B505: push    offset aNipsysrotation; "NiPSysRotationModifier"
0xA0B50A: mov     ecx, offset stru_B40AA4; this
0xA0B50F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0B514: retn

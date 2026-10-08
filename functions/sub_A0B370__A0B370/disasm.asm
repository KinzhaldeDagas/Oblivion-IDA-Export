0xA0B370: push    offset stru_B40D08; parent
0xA0B375: push    offset aNipsysmeshupda; "NiPSysMeshUpdateModifier"
0xA0B37A: mov     ecx, offset stru_B40A28; this
0xA0B37F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0B384: retn

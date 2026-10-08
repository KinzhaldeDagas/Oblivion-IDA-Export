0xA09900: push    offset stru_B40D08; parent
0xA09905: push    offset aBsparentveloci; "BSParentVelocityModifier"
0xA0990A: mov     ecx, offset stru_B3F554; this
0xA0990F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09914: retn

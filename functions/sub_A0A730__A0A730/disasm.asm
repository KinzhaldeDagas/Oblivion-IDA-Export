0xA0A730: push    offset stru_B4021C; parent
0xA0A735: push    offset aNiparticlemesh; "NiParticleMeshes"
0xA0A73A: mov     ecx, offset stru_B401E4; this
0xA0A73F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A744: retn

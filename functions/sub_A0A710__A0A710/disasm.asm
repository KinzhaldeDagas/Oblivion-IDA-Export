0xA0A710: push    offset stru_B401C8; parent
0xA0A715: push    offset aNiparticleme_0; "NiParticleMeshesData"
0xA0A71A: mov     ecx, offset stru_B401DC; this
0xA0A71F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A724: retn

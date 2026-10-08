0xA0B690: push    offset stru_B40864; parent
0xA0B695: push    offset aNimeshparticle; "NiMeshParticleSystem"
0xA0B69A: mov     ecx, offset stru_B40B1C; this
0xA0B69F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0B6A4: retn

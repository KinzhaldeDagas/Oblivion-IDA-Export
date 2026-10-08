0xA11640: push    offset NiRTTI_BSShaderProperty; parent
0xA11645: push    offset aParticleshad_1; "ParticleShaderProperty"
0xA1164A: mov     ecx, offset unk_B46058; this
0xA1164F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11654: retn

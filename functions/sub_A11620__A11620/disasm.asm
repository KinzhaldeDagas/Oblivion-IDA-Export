0xA11620: push    0B4257Ch; parent
0xA11625: push    offset aParticleshad_0; "ParticleShader"
0xA1162A: mov     ecx, offset unk_B46018; this
0xA1162F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11634: retn

0xA0ABA0: push    offset stru_B4021C; parent
0xA0ABA5: push    offset aNiparticlesyst; "NiParticleSystem"
0xA0ABAA: mov     ecx, offset stru_B40864; this
0xA0ABAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0ABB4: retn

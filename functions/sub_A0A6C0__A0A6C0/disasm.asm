0xA0A6C0: push    offset stru_B3FE04; parent
0xA0A6C5: push    offset aNiparticlesdat; "NiParticlesData"
0xA0A6CA: mov     ecx, offset stru_B401C8; this
0xA0A6CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A6D4: retn

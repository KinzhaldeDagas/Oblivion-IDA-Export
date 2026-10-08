0xA0A810: push    offset stru_B3FD5C; parent
0xA0A815: push    offset aNiparticles; "NiParticles"
0xA0A81A: mov     ecx, offset stru_B4021C; this
0xA0A81F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A824: retn

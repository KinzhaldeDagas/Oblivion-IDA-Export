0xA0A270: push    offset stru_B3F684; parent
0xA0A275: push    offset aNiavobjectpale; "NiAVObjectPalette"
0xA0A27A: mov     ecx, offset stru_B3FF3C; this
0xA0A27F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A284: retn

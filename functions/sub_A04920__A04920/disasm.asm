0xA04920: push    offset stru_B3F684; parent
0xA04925: push    offset aNisequence; "NiSequence"
0xA0492A: mov     ecx, offset stru_B3DB20; this
0xA0492F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA04934: retn

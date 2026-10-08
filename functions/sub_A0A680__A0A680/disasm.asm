0xA0A680: push    offset stru_B3F684; parent
0xA0A685: push    offset aNiscreentextur; Pass228: Adjacent NiScreenTexture RTTI/name helper string reference; object identity support, not render submission.
0xA0A68A: mov     ecx, offset stru_B401B8; this
0xA0A68F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A694: retn

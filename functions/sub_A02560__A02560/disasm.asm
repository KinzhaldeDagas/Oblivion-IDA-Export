0xA02560: push    offset stru_B3F684; parent
0xA02565: push    offset aNicontroller_3; "NiControllerSequence"
0xA0256A: mov     ecx, offset stru_B3CB24; this
0xA0256F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA02574: retn

0xA0A5E0: push    offset stru_B3FD80; parent
0xA0A5E5: push    offset aNispotlight; "NiSpotLight"
0xA0A5EA: mov     ecx, offset stru_B40190; this
0xA0A5EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A5F4: retn

0xA11EB0: push    0B4257Ch; parent
0xA11EB5: push    offset aSpeedtreefrond; "SpeedTreeFrondShader"
0xA11EBA: mov     ecx, offset stru_B47780; this
0xA11EBF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11EC4: retn

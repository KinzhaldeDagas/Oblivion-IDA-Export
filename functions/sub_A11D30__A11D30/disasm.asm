0xA11D30: push    0B4257Ch; parent
0xA11D35: push    offset aLighting30shad; "Lighting30Shader"
0xA11D3A: mov     ecx, offset stru_B46CBC; this
0xA11D3F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11D44: retn

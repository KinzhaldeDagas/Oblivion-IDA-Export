0xA115F0: push    offset NiRTTI_NiShadeProperty; Initialize BSShaderProperty NiRTTI using parent NiRTTI_NiShadeProperty.
0xA115F5: push    offset aBsshaderproper; "BSShaderProperty"
0xA115FA: mov     ecx, offset NiRTTI_BSShaderProperty; this
0xA115FF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11604: retn

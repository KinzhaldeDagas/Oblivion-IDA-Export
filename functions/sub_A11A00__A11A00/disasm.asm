0xA11A00: push    offset NiRTTI_BSShaderProperty; parent
0xA11A05: push    offset aPrecipitatio_1; "PrecipitationShaderProperty"
0xA11A0A: mov     ecx, (offset flt_B46638+0E8h); this
0xA11A0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11A14: retn

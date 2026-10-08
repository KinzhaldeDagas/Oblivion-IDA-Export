0xA11570: push    0B4257Ch; parent
0xA11575: push    offset aWatershader; "WaterShader"
0xA1157A: mov     ecx, (offset OB_ShaderConstantStorage_010201A0+124h); this
0xA1157F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11584: retn

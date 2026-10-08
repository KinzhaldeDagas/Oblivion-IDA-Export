0xA11590: push    0B4257Ch; parent
0xA11595: push    offset aWatershaderdis; "WaterShaderDisplacement"
0xA1159A: mov     ecx, (offset OB_ShaderConstantStorage_010201A0+18Ch); this
0xA1159F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA115A4: retn

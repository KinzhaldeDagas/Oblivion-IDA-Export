0xA115D0: push    0B4257Ch; parent
0xA115D5: push    offset aWatershaderhei; "WaterShaderHeightMap"
0xA115DA: mov     ecx, (offset OB_ShaderConstantStorage_010201A0+1E0h); this
0xA115DF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA115E4: retn

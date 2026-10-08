0xA11950: push    0B4257Ch; parent
0xA11955: push    offset aPrecipitations; "PrecipitationShader"
0xA1195A: mov     ecx, (offset flt_B46638+0B8h); this
0xA1195F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11964: retn

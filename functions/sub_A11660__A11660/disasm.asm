0xA11660: push    0B4257Ch; parent
0xA11665: push    offset aTallgrasssha_0; "TallGrassShader"
0xA1166A: mov     ecx, offset unk_B46100; this
0xA1166F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11674: retn

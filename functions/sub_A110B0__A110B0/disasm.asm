0xA110B0: push    0B4257Ch; parent
0xA110B5: push    offset aSkyshader; "SkyShader"
0xA110BA: mov     ecx, (offset qword_B43178+60h); this
0xA110BF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA110C4: retn

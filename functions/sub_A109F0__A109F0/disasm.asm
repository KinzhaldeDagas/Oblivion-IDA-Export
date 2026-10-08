0xA109F0: push    offset stru_B42884; parent
0xA109F5: push    offset aNid3ddefaultsh; "NiD3DDefaultShader"
0xA109FA: mov     ecx, 0B4257Ch; this
0xA109FF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10A04: retn

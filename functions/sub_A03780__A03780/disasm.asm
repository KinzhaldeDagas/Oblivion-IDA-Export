0xA03780: push    offset stru_B3ED80; parent
0xA03785: push    offset aNifloatinterpo; "NiFloatInterpolator"
0xA0378A: mov     ecx, offset stru_B3CFBC; this
0xA0378F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA03794: retn

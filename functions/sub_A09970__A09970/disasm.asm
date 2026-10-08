0xA09970: push    0; parent
0xA09972: push    offset aNiobject; "NiObject"
0xA09977: mov     ecx, offset stru_B3F684; this
0xA0997C: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09981: retn

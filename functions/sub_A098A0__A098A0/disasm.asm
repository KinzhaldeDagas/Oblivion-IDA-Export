0xA098A0: push    offset stru_B3F684; parent
0xA098A5: push    offset aBsnodereferenc; "BSNodeReferences"
0xA098AA: mov     ecx, offset stru_B3F53C; this
0xA098AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA098B4: retn

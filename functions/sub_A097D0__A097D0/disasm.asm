0xA097D0: push    offset stru_B40D08; parent
0xA097D5: push    offset aBswindmodifier; "BSWindModifier"
0xA097DA: mov     ecx, offset stru_B3F48C; this
0xA097DF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA097E4: retn

0xA0A0A0: push    offset stru_B3FD14; parent
0xA0A0A5: push    offset aNipointlight; "NiPointLight"
0xA0A0AA: mov     ecx, offset stru_B3FD80; this
0xA0A0AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A0B4: retn

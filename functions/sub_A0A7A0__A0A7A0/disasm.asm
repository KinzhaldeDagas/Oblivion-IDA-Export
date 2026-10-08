0xA0A7A0: push    offset stru_B3F68C; parent
0xA0A7A5: push    offset aNiditherproper; "NiDitherProperty"
0xA0A7AA: mov     ecx, offset stru_B40200; this
0xA0A7AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A7B4: retn

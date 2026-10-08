0xA044A0: push    offset stru_B3FD44; parent
0xA044A5: push    offset aNitextkeyextra; "NiTextKeyExtraData"
0xA044AA: mov     ecx, offset stru_B3DA08; this
0xA044AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA044B4: retn

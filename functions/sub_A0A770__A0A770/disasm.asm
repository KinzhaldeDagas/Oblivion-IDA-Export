0xA0A770: push    offset stru_B3F68C; parent
0xA0A775: push    offset aNifogproperty; "NiFogProperty"
0xA0A77A: mov     ecx, offset stru_B401F4; this
0xA0A77F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A784: retn

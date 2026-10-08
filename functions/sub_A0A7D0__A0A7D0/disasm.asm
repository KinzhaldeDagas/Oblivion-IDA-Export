0xA0A7D0: push    offset parent; parent
0xA0A7D5: push    offset aNibspnode; "NiBSPNode"
0xA0A7DA: mov     ecx, offset stru_B4020C; this
0xA0A7DF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A7E4: retn

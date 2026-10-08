0xA09AD0: push    offset stru_B3F68C; parent
0xA09AD5: push    offset aNitexturingpro; "NiTexturingProperty"
0xA09ADA: mov     ecx, offset stru_B3F96C; this
0xA09ADF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09AE4: retn

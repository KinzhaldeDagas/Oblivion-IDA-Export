0xA09CD0: push    offset stru_B3FA80; parent
0xA09CD5: push    offset aNicamera; "NiCamera"
0xA09CDA: mov     ecx, offset stru_B3FACC; this
0xA09CDF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09CE4: retn

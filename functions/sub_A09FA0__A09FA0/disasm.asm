0xA09FA0: push    offset stru_B3FD44; parent
0xA09FA5: push    offset aNifloatextra_0; "NiFloatExtraData"
0xA09FAA: mov     ecx, offset stru_B3FD3C; this
0xA09FAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09FB4: retn

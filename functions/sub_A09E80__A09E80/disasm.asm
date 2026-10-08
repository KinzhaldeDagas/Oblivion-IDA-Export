0xA09E80: push    offset stru_B3F68C; parent
0xA09E85: push    offset aNistencilprope; "NiStencilProperty"
0xA09E8A: mov     ecx, offset stru_B3FCF0; this
0xA09E8F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09E94: retn

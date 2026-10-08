0xA09EB0: push    offset stru_B3FD14; parent
0xA09EB5: push    offset aNidirectionall; "NiDirectionalLight"
0xA09EBA: mov     ecx, offset stru_B3FCFC; this
0xA09EBF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09EC4: retn

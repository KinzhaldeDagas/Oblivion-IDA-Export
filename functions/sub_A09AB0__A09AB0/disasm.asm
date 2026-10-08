0xA09AB0: push    offset stru_B3FD2C; parent
0xA09AB5: push    offset aNiscreenelem_0; "NiScreenElementsData"
0xA09ABA: mov     ecx, offset stru_B3F964; this
0xA09ABF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09AC4: retn

0xA07DA0: push    offset stru_B3F684; parent
0xA07DA5: push    offset aNibooldata; "NiBoolData"
0xA07DAA: mov     ecx, offset stru_B3E838; this
0xA07DAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA07DB4: retn

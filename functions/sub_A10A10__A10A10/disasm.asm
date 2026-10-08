0xA10A10: push    0; parent
0xA10A12: push    offset aNidx92dbufferd; "NiDX92DBufferData"
0xA10A17: mov     ecx, offset stru_B42654; this
0xA10A1C: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10A21: retn

0xA09D90: push    offset stru_B3F684; parent
0xA09D95: push    offset aNitimecontroll; "NiTimeController"
0xA09D9A: mov     ecx, offset stru_B3FC98; this
0xA09D9F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09DA4: retn

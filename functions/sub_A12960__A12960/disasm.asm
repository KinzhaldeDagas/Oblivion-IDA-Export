0xA12960: push    offset stru_BA8170; parent
0xA12965: push    offset aBhkpackednitri; "bhkPackedNiTriStripsShape"
0xA1296A: mov     ecx, offset stru_BA8124; this
0xA1296F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12974: retn

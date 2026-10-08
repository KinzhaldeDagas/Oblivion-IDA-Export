0xA12940: push    offset stru_B3F684; parent
0xA12945: push    offset aHkpackednitris; "hkPackedNiTriStripsData"
0xA1294A: mov     ecx, offset stru_BA8118; this
0xA1294F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12954: retn

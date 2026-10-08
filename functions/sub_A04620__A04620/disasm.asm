0xA04620: push    offset stru_B3F684; parent
0xA04625: push    offset aNistringpalett; "NiStringPalette"
0xA0462A: mov     ecx, offset stru_B3DA40; this
0xA0462F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA04634: retn

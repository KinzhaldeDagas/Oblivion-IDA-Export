0xA04AA0: push    offset stru_B3F684; parent
0xA04AA5: push    offset aNirotdata; "NiRotData"
0xA04AAA: mov     ecx, offset stru_B3DB70; this
0xA04AAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA04AB4: retn

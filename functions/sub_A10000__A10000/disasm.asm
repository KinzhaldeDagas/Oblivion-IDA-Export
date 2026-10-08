0xA10000: push    offset stru_B3FF14; parent
0xA10005: push    offset aNipsysupdateta; "NiPSysUpdateTask"
0xA1000A: mov     ecx, offset stru_B41D28; this
0xA1000F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10014: retn

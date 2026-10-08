0xA0C310: push    offset stru_B3FC98; parent
0xA0C315: push    offset aNipsysupdatect; "NiPSysUpdateCtlr"
0xA0C31A: mov     ecx, offset stru_B40DFC; this
0xA0C31F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0C324: retn

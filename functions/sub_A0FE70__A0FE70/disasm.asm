0xA0FE70: push    offset stru_B41864; parent
0xA0FE75: push    offset aNimeshpsysdata; "NiMeshPSysData"
0xA0FE7A: mov     ecx, offset stru_B41C4C; this
0xA0FE7F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0FE84: retn

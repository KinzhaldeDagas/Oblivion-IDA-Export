0xA03300: push    offset stru_B3ED14; parent
0xA03305: push    offset aNiflipcontroll; "NiFlipController"
0xA0330A: mov     ecx, offset stru_B3CE84; this
0xA0330F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA03314: retn

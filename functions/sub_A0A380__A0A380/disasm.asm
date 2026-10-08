0xA0A380: push    offset stru_B3F684; parent
0xA0A385: push    offset aNitaskmanager; "NiTaskManager"
0xA0A38A: mov     ecx, offset stru_B3FFB8; this
0xA0A38F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A394: retn

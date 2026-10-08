0xA09A50: push    offset stru_B3FFB8; 3DTheft decode 2026-05-16: initializes NiRTTI entry at 0x00B3F950 with string NiParallelUpdateTaskManager and parent NiTaskManager.
0xA09A55: push    offset aNiparallelupda; "NiParallelUpdateTaskManager"
0xA09A5A: mov     ecx, offset stru_B3F950; this
0xA09A5F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09A64: retn

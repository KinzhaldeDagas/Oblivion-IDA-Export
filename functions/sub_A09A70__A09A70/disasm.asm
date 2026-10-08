0xA09A70: push    offset stru_B3FF14; 3DTheft decode 2026-05-16: initializes NiRTTI entry at 0x00B3F948 with string NiParallelUpdateTaskManager::SignalTask and parent NiTask.
0xA09A75: push    offset aNiparallelup_0; "NiParallelUpdateTaskManager::SignalTask"
0xA09A7A: mov     ecx, offset stru_B3F948; this
0xA09A7F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09A84: retn

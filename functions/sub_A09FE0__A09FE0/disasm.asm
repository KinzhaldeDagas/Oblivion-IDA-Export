0xA09FE0: push    offset parent; parent
0xA09FE5: push    offset aNibillboardnod; "NiBillboardNode"
0xA09FEA: mov     ecx, offset stru_B3FD4C; this
0xA09FEF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09FF4: retn

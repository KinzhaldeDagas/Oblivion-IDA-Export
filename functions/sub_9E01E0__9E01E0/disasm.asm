0x9E01E0: push    offset stru_B3FD68; parent
0x9E01E5: push    offset aNibslodnode; "NiBSLODNode"
0x9E01EA: mov     ecx, offset stru_B35408; this
0x9E01EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E01F4: retn

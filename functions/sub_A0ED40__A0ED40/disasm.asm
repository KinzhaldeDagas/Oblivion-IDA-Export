0xA0ED40: push    offset stru_B41E68; parent
0xA0ED45: push    offset aNipsysdragfiel; "NiPSysDragFieldModifier"
0xA0ED4A: mov     ecx, offset stru_B4182C; this
0xA0ED4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0ED54: retn

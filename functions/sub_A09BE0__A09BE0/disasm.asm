0xA09BE0: push    offset stru_B3F584; parent
0xA09BE5: push    offset aNiavobject; "NiAVObject"
0xA09BEA: mov     ecx, offset stru_B3FA80; this
0xA09BEF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09BF4: retn

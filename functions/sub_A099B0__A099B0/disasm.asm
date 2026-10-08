0xA099B0: push    offset stru_B3F584; parent
0xA099B5: push    offset aNitexture; "NiTexture"
0xA099BA: mov     ecx, offset stru_B3F70C; this
0xA099BF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA099C4: retn

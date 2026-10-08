0xA10BE0: push    0B42858h; parent
0xA10BE5: push    offset aNid3dshader; "NiD3DShader"
0xA10BEA: mov     ecx, offset stru_B42884; this
0xA10BEF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10BF4: retn

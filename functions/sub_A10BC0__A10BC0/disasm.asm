0xA10BC0: push    offset stru_B3F70C; parent
0xA10BC5: push    offset aNidx9direct3dt; "NiDX9Direct3DTexture"
0xA10BCA: mov     ecx, offset stru_B42868; this
0xA10BCF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10BD4: retn

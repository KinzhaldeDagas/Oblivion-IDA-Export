0xA10A30: push    offset stru_B42654; parent
0xA10A35: push    offset aNidx9texture_0; "NiDX9TextureBufferData"
0xA10A3A: mov     ecx, offset stru_B4264C; this
0xA10A3F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10A44: retn

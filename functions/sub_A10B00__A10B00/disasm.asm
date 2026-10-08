0xA10B00: push    offset stru_B4265C; parent
0xA10B05: push    offset aNidx9implicitb; "NiDX9ImplicitBufferData"
0xA10B0A: mov     ecx, offset stru_B42634; this
0xA10B0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10B14: retn

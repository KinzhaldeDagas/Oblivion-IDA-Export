0xA10AE0: push    offset stru_B42654; parent
0xA10AE5: push    offset aNidx9onscreenb; "NiDX9OnscreenBufferData"
0xA10AEA: mov     ecx, offset stru_B4265C; this
0xA10AEF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA10AF4: retn

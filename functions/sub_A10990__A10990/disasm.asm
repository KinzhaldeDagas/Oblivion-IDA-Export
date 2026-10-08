0xA10990: push    offset stru_B3F938; parent
0xA10995: push    offset aNidx9renderer; "NiDX9Renderer"
0xA1099A: mov     ecx, offset stru_B42168; this
0xA1099F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA109A4: retn

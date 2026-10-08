0xA09CF0: push    offset stru_B3F684; parent
0xA09CF5: push    offset aNipixeldata; "NiPixelData"
0xA09CFA: mov     ecx, offset stru_B3FAD4; this
0xA09CFF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA09D04: retn

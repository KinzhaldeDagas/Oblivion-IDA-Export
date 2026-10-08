0xA11F40: push    offset parent; parent
0xA11F45: push    offset aBscubemapcamer; "BSCubeMapCamera"
0xA11F4A: mov     ecx, offset stru_B47820; this
0xA11F4F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA11F54: retn

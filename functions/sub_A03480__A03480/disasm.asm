0xA03480: push    offset stru_B3ED14; parent
0xA03485: push    offset aNialphacontrol; "NiAlphaController"
0xA0348A: mov     ecx, offset stru_B3CF1C; this
0xA0348F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA03494: retn

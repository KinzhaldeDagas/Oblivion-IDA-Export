0x9E0130: push    offset stru_B3FD3C; parent
0x9E0135: push    offset aFadenodemaxalp; "FadeNodeMaxAlphaExtraData"
0x9E013A: mov     ecx, 0B35294h; this
0x9E013F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E0144: retn

0xA0A320: push    offset stru_B3FD44; parent
0xA0A325: push    offset aNicolorextra_0; "NiColorExtraData"
0xA0A32A: mov     ecx, offset stru_B3FF98; this
0xA0A32F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A334: retn

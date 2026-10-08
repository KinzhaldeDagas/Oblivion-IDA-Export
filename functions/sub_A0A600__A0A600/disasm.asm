0xA0A600: push    offset stru_B3F68C; parent
0xA0A605: push    offset aNispecularprop; "NiSpecularProperty"
0xA0A60A: mov     ecx, offset stru_B40198; this
0xA0A60F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A614: retn

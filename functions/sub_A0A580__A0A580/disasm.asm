0xA0A580: push    offset stru_B3FA88; parent
0xA0A585: push    offset aNitextureeffec; "NiTextureEffect"
0xA0A58A: mov     ecx, offset stru_B40178; this
0xA0A58F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A594: retn

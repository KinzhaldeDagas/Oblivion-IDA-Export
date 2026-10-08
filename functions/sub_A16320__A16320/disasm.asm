0xA16320: push    offset stru_B3FF04; parent
0xA16325: push    offset aNirenderedcube; "NiRenderedCubeMap"
0xA1632A: mov     ecx, offset stru_BAA880; this
0xA1632F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA16334: retn

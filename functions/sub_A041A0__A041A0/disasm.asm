0xA041A0: push    offset stru_B3ED80; parent
0xA041A5: push    offset aNitransformint; "NiTransformInterpolator"
0xA041AA: mov     ecx, offset stru_B3D91C; this
0xA041AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA041B4: retn

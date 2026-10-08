0xA07AA0: push    offset stru_B3E7E8; parent
0xA07AA5: push    offset aNibooltimeline; "NiBoolTimelineInterpolator"
0xA07AAA: mov     ecx, offset stru_B3E7A0; this
0xA07AAF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA07AB4: retn

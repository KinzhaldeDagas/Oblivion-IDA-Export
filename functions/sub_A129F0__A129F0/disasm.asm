0xA129F0: push    offset stru_BA7F54; parent
0xA129F5: push    offset aBhkconvextrans; "bhkConvexTransformShape"
0xA129FA: mov     ecx, offset stru_BA815C; this
0xA129FF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12A04: retn

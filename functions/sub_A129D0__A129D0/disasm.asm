0xA129D0: push    offset stru_BA7F54; parent
0xA129D5: push    offset aBhkconvexverti; "bhkConvexVerticesShape"
0xA129DA: mov     ecx, offset stru_BA8150; this
0xA129DF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA129E4: retn

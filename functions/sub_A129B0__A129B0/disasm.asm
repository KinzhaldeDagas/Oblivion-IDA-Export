0xA129B0: push    offset stru_BA7F54; parent
0xA129B5: push    offset aBhkcylindersha; "bhkCylinderShape"
0xA129BA: mov     ecx, offset stru_BA8144; this
0xA129BF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA129C4: retn

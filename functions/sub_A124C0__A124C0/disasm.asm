0xA124C0: push    offset stru_BA7F54; parent
0xA124C5: push    offset aBhksphereshape; "bhkSphereShape"
0xA124CA: mov     ecx, offset stru_BA7F84; this
0xA124CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA124D4: retn

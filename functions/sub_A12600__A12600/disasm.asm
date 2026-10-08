0xA12600: push    offset stru_BA7F48; parent
0xA12605: push    offset aBhkmultisphere; "bhkMultiSphereShape"
0xA1260A: mov     ecx, offset stru_BA7FEC; this
0xA1260F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12614: retn

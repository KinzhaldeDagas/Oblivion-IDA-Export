0xA12140: push    offset stru_B3F684; parent
0xA12145: push    offset aBhkrefobject; "bhkRefObject"
0xA1214A: mov     ecx, offset stru_BA7BA4; this
0xA1214F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12154: retn

0xA12160: push    offset stru_BA7BA4; parent
0xA12165: push    offset aBhkserializabl; "bhkSerializable"
0xA1216A: mov     ecx, offset stru_BA7C00; this
0xA1216F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12174: retn

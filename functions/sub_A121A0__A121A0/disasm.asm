0xA121A0: push    offset stru_BA7C00; parent
0xA121A5: push    offset aBhkaction; "bhkAction"
0xA121AA: mov     ecx, offset stru_BA7D04; this
0xA121AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA121B4: retn

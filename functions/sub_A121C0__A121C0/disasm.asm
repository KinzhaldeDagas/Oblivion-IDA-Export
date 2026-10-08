0xA121C0: push    offset stru_BA7D04; parent
0xA121C5: push    offset aBhkunaryaction; "bhkUnaryAction"
0xA121CA: mov     ecx, offset stru_BA7D10; this
0xA121CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA121D4: retn

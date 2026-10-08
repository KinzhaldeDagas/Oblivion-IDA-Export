0xA122C0: push    offset stru_BA7D78; parent
0xA122C5: push    offset aBhktransformsh; "bhkTransformShape"
0xA122CA: mov     ecx, offset stru_BA7D68; this
0xA122CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA122D4: retn

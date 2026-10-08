0xA128A0: push    0BA7D50h; parent
0xA128A5: push    offset aBhkhingeconstr; "bhkHingeConstraint"
0xA128AA: mov     ecx, offset stru_BA80E0; this
0xA128AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA128B4: retn

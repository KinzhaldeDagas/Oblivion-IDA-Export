0xA128C0: push    0BA7D50h; parent
0xA128C5: push    offset aBhkballandsock; "bhkBallAndSocketConstraint"
0xA128CA: mov     ecx, offset stru_BA80EC; this
0xA128CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA128D4: retn

0xA12800: push    0BA7D50h; parent
0xA12805: push    offset aBhkwheelconstr; "bhkWheelConstraint"
0xA1280A: mov     ecx, offset stru_BA80A4; this
0xA1280F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12814: retn

0xA127C0: push    0BA7D50h; parent
0xA127C5: push    offset aBhkmalleableco; "bhkMalleableConstraint"
0xA127CA: mov     ecx, offset stru_BA808C; this
0xA127CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA127D4: retn

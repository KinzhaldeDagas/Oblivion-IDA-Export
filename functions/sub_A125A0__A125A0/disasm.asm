0xA125A0: push    0BA7D50h; parent
0xA125A5: push    offset aBhklimitedhing; "bhkLimitedHingeConstraint"
0xA125AA: mov     ecx, offset stru_BA7FCC; this
0xA125AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA125B4: retn

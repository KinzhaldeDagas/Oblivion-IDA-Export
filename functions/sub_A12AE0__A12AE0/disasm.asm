0xA12AE0: push    offset stru_BA7D78; parent
0xA12AE5: push    offset aBhkshapecollec; "bhkShapeCollection"
0xA12AEA: mov     ecx, offset stru_BA8170; this
0xA12AEF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12AF4: retn

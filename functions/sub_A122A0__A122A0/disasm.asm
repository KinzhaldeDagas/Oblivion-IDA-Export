0xA122A0: push    offset stru_BA8170; parent
0xA122A5: push    offset aBhklistshape; "bhkListShape"
0xA122AA: mov     ecx, offset stru_BA7D5C; this
0xA122AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA122B4: retn

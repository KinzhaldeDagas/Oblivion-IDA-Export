0xA126A0: push    offset stru_BA7C00; parent
0xA126A5: push    offset aBhkcharacterpr; "bhkCharacterProxy"
0xA126AA: mov     ecx, offset stru_BA8024; this
0xA126AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA126B4: retn

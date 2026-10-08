0xA0A5A0: push    offset stru_B3FD44; parent
0xA0A5A5: push    offset aNiswitchstring; "NiSwitchStringExtraData"
0xA0A5AA: mov     ecx, offset stru_B40180; this
0xA0A5AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A5B4: retn

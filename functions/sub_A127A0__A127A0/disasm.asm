0xA127A0: push    offset stru_BA7D10; parent
0xA127A5: push    offset aBhkmotoraction; "bhkMotorAction"
0xA127AA: mov     ecx, offset stru_BA8080; this
0xA127AF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA127B4: retn

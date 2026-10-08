0xA12B00: push    offset stru_BA8150; parent
0xA12B05: push    offset aBhkcharcontrol; "bhkCharControllerShape"
0xA12B0A: mov     ecx, offset stru_BA8178; this
0xA12B0F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12B14: retn

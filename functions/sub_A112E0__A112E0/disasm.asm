0xA112E0: push    offset stru_B401F4; parent
0xA112E5: push    offset aBsfogproperty; "BSFogProperty"
0xA112EA: mov     ecx, offset stru_B43484; this
0xA112EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA112F4: retn

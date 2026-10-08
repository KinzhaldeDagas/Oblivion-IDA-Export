0xA12080: push    offset stru_BA8030; parent
0xA12085: push    offset aBhkavoidbox; "bhkAvoidBox"
0xA1208A: mov     ecx, offset stru_BA7A0C; this
0xA1208F: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA12094: retn

0xA098E0: push    offset stru_B3FD44; parent
0xA098E5: push    offset aParraypoint; "PArrayPoint"
0xA098EA: mov     ecx, offset stru_B3F544; this
0xA098EF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA098F4: retn

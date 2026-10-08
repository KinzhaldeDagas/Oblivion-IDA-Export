0x9E01C0: push    offset parent; parent
0x9E01C5: push    offset aBstimingnode; "BSTimingNode"
0x9E01CA: mov     ecx, offset stru_B35400; this
0x9E01CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E01D4: retn

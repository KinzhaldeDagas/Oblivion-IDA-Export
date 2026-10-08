0xA0A5C0: push    offset stru_B3FD44; parent
0xA0A5C5: push    offset aNistringsextra; "NiStringsExtraData"
0xA0A5CA: mov     ecx, offset stru_B40188; this
0xA0A5CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0xA0A5D4: retn

0x9E26C0: push    offset stru_B3FD44; parent
0x9E26C5: push    offset aTesobjectextra; "TESObjectExtraData"
0x9E26CA: mov     ecx, offset stru_B35ACC; this
0x9E26CF: call    NiRTTI_Constructor; Constructs one Oblivion NiRTTI descriptor: writes the class-name pointer at +0 and parent NiRTTI pointer at +4, then returns this. This is the native NiRTTI constructor used by the SpeedTree shader-property RTTI initializers decoded in Pass 368.
0x9E26D4: retn
